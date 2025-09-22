class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def create_node(data):
    return Node(data)

def create_list(n):
    if n <= 0:
        return None

    head = create_node(1)
    current = head

    for i in range(2, n + 1):
        current.next = create_node(i)
        current = current.next

    return head

def print_list(head):
    current = head
    while current:
        print(current.data)
        current = current.next

def free_list(head):
    current = head
    while current:
        temp = current
        current = current.next
        del temp

# Ejecución principal
if __name__ == "__main__":
    head = create_list(1_000_000)  # Crea 1 millón de nodos
    print_list(head)                # Imprime todos los valores
    free_list(head)                 # Libera memoria (opcional en Python)

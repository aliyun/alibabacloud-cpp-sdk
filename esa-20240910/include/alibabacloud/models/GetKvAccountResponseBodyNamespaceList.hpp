// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKVACCOUNTRESPONSEBODYNAMESPACELIST_HPP_
#define ALIBABACLOUD_MODELS_GETKVACCOUNTRESPONSEBODYNAMESPACELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetKvAccountResponseBodyNamespaceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKvAccountResponseBodyNamespaceList& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(CapacityString, capacityString_);
      DARABONBA_PTR_TO_JSON(CapacityUsed, capacityUsed_);
      DARABONBA_PTR_TO_JSON(CapacityUsedString, capacityUsedString_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetKvAccountResponseBodyNamespaceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(CapacityString, capacityString_);
      DARABONBA_PTR_FROM_JSON(CapacityUsed, capacityUsed_);
      DARABONBA_PTR_FROM_JSON(CapacityUsedString, capacityUsedString_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetKvAccountResponseBodyNamespaceList() = default ;
    GetKvAccountResponseBodyNamespaceList(const GetKvAccountResponseBodyNamespaceList &) = default ;
    GetKvAccountResponseBodyNamespaceList(GetKvAccountResponseBodyNamespaceList &&) = default ;
    GetKvAccountResponseBodyNamespaceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKvAccountResponseBodyNamespaceList() = default ;
    GetKvAccountResponseBodyNamespaceList& operator=(const GetKvAccountResponseBodyNamespaceList &) = default ;
    GetKvAccountResponseBodyNamespaceList& operator=(GetKvAccountResponseBodyNamespaceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacity_ == nullptr
        && return this->capacityString_ == nullptr && return this->capacityUsed_ == nullptr && return this->capacityUsedString_ == nullptr && return this->description_ == nullptr && return this->namespace_ == nullptr
        && return this->namespaceId_ == nullptr && return this->status_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline GetKvAccountResponseBodyNamespaceList& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // capacityString Field Functions 
    bool hasCapacityString() const { return this->capacityString_ != nullptr;};
    void deleteCapacityString() { this->capacityString_ = nullptr;};
    inline string capacityString() const { DARABONBA_PTR_GET_DEFAULT(capacityString_, "") };
    inline GetKvAccountResponseBodyNamespaceList& setCapacityString(string capacityString) { DARABONBA_PTR_SET_VALUE(capacityString_, capacityString) };


    // capacityUsed Field Functions 
    bool hasCapacityUsed() const { return this->capacityUsed_ != nullptr;};
    void deleteCapacityUsed() { this->capacityUsed_ = nullptr;};
    inline int64_t capacityUsed() const { DARABONBA_PTR_GET_DEFAULT(capacityUsed_, 0L) };
    inline GetKvAccountResponseBodyNamespaceList& setCapacityUsed(int64_t capacityUsed) { DARABONBA_PTR_SET_VALUE(capacityUsed_, capacityUsed) };


    // capacityUsedString Field Functions 
    bool hasCapacityUsedString() const { return this->capacityUsedString_ != nullptr;};
    void deleteCapacityUsedString() { this->capacityUsedString_ = nullptr;};
    inline string capacityUsedString() const { DARABONBA_PTR_GET_DEFAULT(capacityUsedString_, "") };
    inline GetKvAccountResponseBodyNamespaceList& setCapacityUsedString(string capacityUsedString) { DARABONBA_PTR_SET_VALUE(capacityUsedString_, capacityUsedString) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetKvAccountResponseBodyNamespaceList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetKvAccountResponseBodyNamespaceList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetKvAccountResponseBodyNamespaceList& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetKvAccountResponseBodyNamespaceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The available capacity of the namespace. Unit: bytes.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The available capacity of the namespace.
    std::shared_ptr<string> capacityString_ = nullptr;
    // The used capacity of the namespace. Unit: bytes.
    std::shared_ptr<int64_t> capacityUsed_ = nullptr;
    // The used capacity of the namespace.
    std::shared_ptr<string> capacityUsedString_ = nullptr;
    // The description of the namespace.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The status of the namespace. Valid values:
    // 
    // *   **online**: normal.
    // *   **delete**: pending deletion.
    // *   **deleting**: being deleted.
    // *   **deleted**: deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

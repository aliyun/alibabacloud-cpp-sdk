// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKVACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKVACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetKvAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKvAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(CapacityString, capacityString_);
      DARABONBA_PTR_TO_JSON(CapacityUsed, capacityUsed_);
      DARABONBA_PTR_TO_JSON(CapacityUsedString, capacityUsedString_);
      DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
      DARABONBA_PTR_TO_JSON(NamespaceQuota, namespaceQuota_);
      DARABONBA_PTR_TO_JSON(NamespaceUsed, namespaceUsed_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetKvAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(CapacityString, capacityString_);
      DARABONBA_PTR_FROM_JSON(CapacityUsed, capacityUsed_);
      DARABONBA_PTR_FROM_JSON(CapacityUsedString, capacityUsedString_);
      DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
      DARABONBA_PTR_FROM_JSON(NamespaceQuota, namespaceQuota_);
      DARABONBA_PTR_FROM_JSON(NamespaceUsed, namespaceUsed_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetKvAccountResponseBody() = default ;
    GetKvAccountResponseBody(const GetKvAccountResponseBody &) = default ;
    GetKvAccountResponseBody(GetKvAccountResponseBody &&) = default ;
    GetKvAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKvAccountResponseBody() = default ;
    GetKvAccountResponseBody& operator=(const GetKvAccountResponseBody &) = default ;
    GetKvAccountResponseBody& operator=(GetKvAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NamespaceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NamespaceList& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(CapacityString, capacityString_);
        DARABONBA_PTR_TO_JSON(CapacityUsed, capacityUsed_);
        DARABONBA_PTR_TO_JSON(CapacityUsedString, capacityUsedString_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, NamespaceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(CapacityString, capacityString_);
        DARABONBA_PTR_FROM_JSON(CapacityUsed, capacityUsed_);
        DARABONBA_PTR_FROM_JSON(CapacityUsedString, capacityUsedString_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      NamespaceList() = default ;
      NamespaceList(const NamespaceList &) = default ;
      NamespaceList(NamespaceList &&) = default ;
      NamespaceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NamespaceList() = default ;
      NamespaceList& operator=(const NamespaceList &) = default ;
      NamespaceList& operator=(NamespaceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->capacityString_ == nullptr && this->capacityUsed_ == nullptr && this->capacityUsedString_ == nullptr && this->description_ == nullptr && this->namespace_ == nullptr
        && this->namespaceId_ == nullptr && this->status_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline NamespaceList& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // capacityString Field Functions 
      bool hasCapacityString() const { return this->capacityString_ != nullptr;};
      void deleteCapacityString() { this->capacityString_ = nullptr;};
      inline string getCapacityString() const { DARABONBA_PTR_GET_DEFAULT(capacityString_, "") };
      inline NamespaceList& setCapacityString(string capacityString) { DARABONBA_PTR_SET_VALUE(capacityString_, capacityString) };


      // capacityUsed Field Functions 
      bool hasCapacityUsed() const { return this->capacityUsed_ != nullptr;};
      void deleteCapacityUsed() { this->capacityUsed_ = nullptr;};
      inline int64_t getCapacityUsed() const { DARABONBA_PTR_GET_DEFAULT(capacityUsed_, 0L) };
      inline NamespaceList& setCapacityUsed(int64_t capacityUsed) { DARABONBA_PTR_SET_VALUE(capacityUsed_, capacityUsed) };


      // capacityUsedString Field Functions 
      bool hasCapacityUsedString() const { return this->capacityUsedString_ != nullptr;};
      void deleteCapacityUsedString() { this->capacityUsedString_ = nullptr;};
      inline string getCapacityUsedString() const { DARABONBA_PTR_GET_DEFAULT(capacityUsedString_, "") };
      inline NamespaceList& setCapacityUsedString(string capacityUsedString) { DARABONBA_PTR_SET_VALUE(capacityUsedString_, capacityUsedString) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline NamespaceList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline NamespaceList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline NamespaceList& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NamespaceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The available capacity of the namespace. Unit: bytes.
      shared_ptr<int64_t> capacity_ {};
      // The available capacity of the namespace.
      shared_ptr<string> capacityString_ {};
      // The used capacity of the namespace. Unit: bytes.
      shared_ptr<int64_t> capacityUsed_ {};
      // The used capacity of the namespace.
      shared_ptr<string> capacityUsedString_ {};
      // The description of the namespace.
      shared_ptr<string> description_ {};
      // The name of the namespace.
      shared_ptr<string> namespace_ {};
      // The ID of the namespace.
      shared_ptr<string> namespaceId_ {};
      // The status of the namespace. Valid values:
      // 
      // *   **online**: normal.
      // *   **delete**: pending deletion.
      // *   **deleting**: being deleted.
      // *   **deleted**: deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->capacity_ == nullptr
        && this->capacityString_ == nullptr && this->capacityUsed_ == nullptr && this->capacityUsedString_ == nullptr && this->namespaceList_ == nullptr && this->namespaceQuota_ == nullptr
        && this->namespaceUsed_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline GetKvAccountResponseBody& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // capacityString Field Functions 
    bool hasCapacityString() const { return this->capacityString_ != nullptr;};
    void deleteCapacityString() { this->capacityString_ = nullptr;};
    inline string getCapacityString() const { DARABONBA_PTR_GET_DEFAULT(capacityString_, "") };
    inline GetKvAccountResponseBody& setCapacityString(string capacityString) { DARABONBA_PTR_SET_VALUE(capacityString_, capacityString) };


    // capacityUsed Field Functions 
    bool hasCapacityUsed() const { return this->capacityUsed_ != nullptr;};
    void deleteCapacityUsed() { this->capacityUsed_ = nullptr;};
    inline int64_t getCapacityUsed() const { DARABONBA_PTR_GET_DEFAULT(capacityUsed_, 0L) };
    inline GetKvAccountResponseBody& setCapacityUsed(int64_t capacityUsed) { DARABONBA_PTR_SET_VALUE(capacityUsed_, capacityUsed) };


    // capacityUsedString Field Functions 
    bool hasCapacityUsedString() const { return this->capacityUsedString_ != nullptr;};
    void deleteCapacityUsedString() { this->capacityUsedString_ = nullptr;};
    inline string getCapacityUsedString() const { DARABONBA_PTR_GET_DEFAULT(capacityUsedString_, "") };
    inline GetKvAccountResponseBody& setCapacityUsedString(string capacityUsedString) { DARABONBA_PTR_SET_VALUE(capacityUsedString_, capacityUsedString) };


    // namespaceList Field Functions 
    bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
    void deleteNamespaceList() { this->namespaceList_ = nullptr;};
    inline const vector<GetKvAccountResponseBody::NamespaceList> & getNamespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<GetKvAccountResponseBody::NamespaceList>) };
    inline vector<GetKvAccountResponseBody::NamespaceList> getNamespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<GetKvAccountResponseBody::NamespaceList>) };
    inline GetKvAccountResponseBody& setNamespaceList(const vector<GetKvAccountResponseBody::NamespaceList> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
    inline GetKvAccountResponseBody& setNamespaceList(vector<GetKvAccountResponseBody::NamespaceList> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


    // namespaceQuota Field Functions 
    bool hasNamespaceQuota() const { return this->namespaceQuota_ != nullptr;};
    void deleteNamespaceQuota() { this->namespaceQuota_ = nullptr;};
    inline int32_t getNamespaceQuota() const { DARABONBA_PTR_GET_DEFAULT(namespaceQuota_, 0) };
    inline GetKvAccountResponseBody& setNamespaceQuota(int32_t namespaceQuota) { DARABONBA_PTR_SET_VALUE(namespaceQuota_, namespaceQuota) };


    // namespaceUsed Field Functions 
    bool hasNamespaceUsed() const { return this->namespaceUsed_ != nullptr;};
    void deleteNamespaceUsed() { this->namespaceUsed_ = nullptr;};
    inline int32_t getNamespaceUsed() const { DARABONBA_PTR_GET_DEFAULT(namespaceUsed_, 0) };
    inline GetKvAccountResponseBody& setNamespaceUsed(int32_t namespaceUsed) { DARABONBA_PTR_SET_VALUE(namespaceUsed_, namespaceUsed) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKvAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetKvAccountResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The available capacity of all namespaces in the account. Unit: bytes.
    shared_ptr<int64_t> capacity_ {};
    // The available capacity of all namespaces in the account.
    shared_ptr<string> capacityString_ {};
    // The used capacity of all namespaces in the account. Unit: bytes.
    shared_ptr<int64_t> capacityUsed_ {};
    // The used capacity of all namespaces in the account.
    shared_ptr<string> capacityUsedString_ {};
    // The namespaces in the account.
    shared_ptr<vector<GetKvAccountResponseBody::NamespaceList>> namespaceList_ {};
    // The maximum number of namespaces that can be created in the account.
    shared_ptr<int32_t> namespaceQuota_ {};
    // The number of created namespaces that store key-value data in the account.
    shared_ptr<int32_t> namespaceUsed_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether Edge KV is activated for the Alibaba Cloud account.
    // 
    // *   **online**
    // *   **offline**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

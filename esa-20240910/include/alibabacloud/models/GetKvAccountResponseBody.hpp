// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKVACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKVACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetKvAccountResponseBodyNamespaceList.hpp>
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
    virtual bool empty() const override { this->capacity_ != nullptr
        && this->capacityString_ != nullptr && this->capacityUsed_ != nullptr && this->capacityUsedString_ != nullptr && this->namespaceList_ != nullptr && this->namespaceQuota_ != nullptr
        && this->namespaceUsed_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline GetKvAccountResponseBody& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // capacityString Field Functions 
    bool hasCapacityString() const { return this->capacityString_ != nullptr;};
    void deleteCapacityString() { this->capacityString_ = nullptr;};
    inline string capacityString() const { DARABONBA_PTR_GET_DEFAULT(capacityString_, "") };
    inline GetKvAccountResponseBody& setCapacityString(string capacityString) { DARABONBA_PTR_SET_VALUE(capacityString_, capacityString) };


    // capacityUsed Field Functions 
    bool hasCapacityUsed() const { return this->capacityUsed_ != nullptr;};
    void deleteCapacityUsed() { this->capacityUsed_ = nullptr;};
    inline int64_t capacityUsed() const { DARABONBA_PTR_GET_DEFAULT(capacityUsed_, 0L) };
    inline GetKvAccountResponseBody& setCapacityUsed(int64_t capacityUsed) { DARABONBA_PTR_SET_VALUE(capacityUsed_, capacityUsed) };


    // capacityUsedString Field Functions 
    bool hasCapacityUsedString() const { return this->capacityUsedString_ != nullptr;};
    void deleteCapacityUsedString() { this->capacityUsedString_ = nullptr;};
    inline string capacityUsedString() const { DARABONBA_PTR_GET_DEFAULT(capacityUsedString_, "") };
    inline GetKvAccountResponseBody& setCapacityUsedString(string capacityUsedString) { DARABONBA_PTR_SET_VALUE(capacityUsedString_, capacityUsedString) };


    // namespaceList Field Functions 
    bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
    void deleteNamespaceList() { this->namespaceList_ = nullptr;};
    inline const vector<GetKvAccountResponseBodyNamespaceList> & namespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<GetKvAccountResponseBodyNamespaceList>) };
    inline vector<GetKvAccountResponseBodyNamespaceList> namespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<GetKvAccountResponseBodyNamespaceList>) };
    inline GetKvAccountResponseBody& setNamespaceList(const vector<GetKvAccountResponseBodyNamespaceList> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
    inline GetKvAccountResponseBody& setNamespaceList(vector<GetKvAccountResponseBodyNamespaceList> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


    // namespaceQuota Field Functions 
    bool hasNamespaceQuota() const { return this->namespaceQuota_ != nullptr;};
    void deleteNamespaceQuota() { this->namespaceQuota_ = nullptr;};
    inline int32_t namespaceQuota() const { DARABONBA_PTR_GET_DEFAULT(namespaceQuota_, 0) };
    inline GetKvAccountResponseBody& setNamespaceQuota(int32_t namespaceQuota) { DARABONBA_PTR_SET_VALUE(namespaceQuota_, namespaceQuota) };


    // namespaceUsed Field Functions 
    bool hasNamespaceUsed() const { return this->namespaceUsed_ != nullptr;};
    void deleteNamespaceUsed() { this->namespaceUsed_ = nullptr;};
    inline int32_t namespaceUsed() const { DARABONBA_PTR_GET_DEFAULT(namespaceUsed_, 0) };
    inline GetKvAccountResponseBody& setNamespaceUsed(int32_t namespaceUsed) { DARABONBA_PTR_SET_VALUE(namespaceUsed_, namespaceUsed) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKvAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetKvAccountResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The available capacity of all namespaces in the account. Unit: bytes.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The available capacity of all namespaces in the account.
    std::shared_ptr<string> capacityString_ = nullptr;
    // The used capacity of all namespaces in the account. Unit: bytes.
    std::shared_ptr<int64_t> capacityUsed_ = nullptr;
    // The used capacity of all namespaces in the account.
    std::shared_ptr<string> capacityUsedString_ = nullptr;
    // The namespaces in the account.
    std::shared_ptr<vector<GetKvAccountResponseBodyNamespaceList>> namespaceList_ = nullptr;
    // The maximum number of namespaces that can be created in the account.
    std::shared_ptr<int32_t> namespaceQuota_ = nullptr;
    // The number of created namespaces that store key-value data in the account.
    std::shared_ptr<int32_t> namespaceUsed_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether Edge KV is activated for the Alibaba Cloud account.
    // 
    // *   **online**
    // *   **offline**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

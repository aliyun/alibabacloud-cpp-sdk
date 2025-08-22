// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNKVACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNKVACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnKvAccountResponseBodyNamespaceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnKvAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnKvAccountResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDcdnKvAccountResponseBody& obj) { 
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
    DescribeDcdnKvAccountResponseBody() = default ;
    DescribeDcdnKvAccountResponseBody(const DescribeDcdnKvAccountResponseBody &) = default ;
    DescribeDcdnKvAccountResponseBody(DescribeDcdnKvAccountResponseBody &&) = default ;
    DescribeDcdnKvAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnKvAccountResponseBody() = default ;
    DescribeDcdnKvAccountResponseBody& operator=(const DescribeDcdnKvAccountResponseBody &) = default ;
    DescribeDcdnKvAccountResponseBody& operator=(DescribeDcdnKvAccountResponseBody &&) = default ;
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
    inline DescribeDcdnKvAccountResponseBody& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // capacityString Field Functions 
    bool hasCapacityString() const { return this->capacityString_ != nullptr;};
    void deleteCapacityString() { this->capacityString_ = nullptr;};
    inline string capacityString() const { DARABONBA_PTR_GET_DEFAULT(capacityString_, "") };
    inline DescribeDcdnKvAccountResponseBody& setCapacityString(string capacityString) { DARABONBA_PTR_SET_VALUE(capacityString_, capacityString) };


    // capacityUsed Field Functions 
    bool hasCapacityUsed() const { return this->capacityUsed_ != nullptr;};
    void deleteCapacityUsed() { this->capacityUsed_ = nullptr;};
    inline int64_t capacityUsed() const { DARABONBA_PTR_GET_DEFAULT(capacityUsed_, 0L) };
    inline DescribeDcdnKvAccountResponseBody& setCapacityUsed(int64_t capacityUsed) { DARABONBA_PTR_SET_VALUE(capacityUsed_, capacityUsed) };


    // capacityUsedString Field Functions 
    bool hasCapacityUsedString() const { return this->capacityUsedString_ != nullptr;};
    void deleteCapacityUsedString() { this->capacityUsedString_ = nullptr;};
    inline string capacityUsedString() const { DARABONBA_PTR_GET_DEFAULT(capacityUsedString_, "") };
    inline DescribeDcdnKvAccountResponseBody& setCapacityUsedString(string capacityUsedString) { DARABONBA_PTR_SET_VALUE(capacityUsedString_, capacityUsedString) };


    // namespaceList Field Functions 
    bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
    void deleteNamespaceList() { this->namespaceList_ = nullptr;};
    inline const vector<DescribeDcdnKvAccountResponseBodyNamespaceList> & namespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<DescribeDcdnKvAccountResponseBodyNamespaceList>) };
    inline vector<DescribeDcdnKvAccountResponseBodyNamespaceList> namespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<DescribeDcdnKvAccountResponseBodyNamespaceList>) };
    inline DescribeDcdnKvAccountResponseBody& setNamespaceList(const vector<DescribeDcdnKvAccountResponseBodyNamespaceList> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
    inline DescribeDcdnKvAccountResponseBody& setNamespaceList(vector<DescribeDcdnKvAccountResponseBodyNamespaceList> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


    // namespaceQuota Field Functions 
    bool hasNamespaceQuota() const { return this->namespaceQuota_ != nullptr;};
    void deleteNamespaceQuota() { this->namespaceQuota_ = nullptr;};
    inline int32_t namespaceQuota() const { DARABONBA_PTR_GET_DEFAULT(namespaceQuota_, 0) };
    inline DescribeDcdnKvAccountResponseBody& setNamespaceQuota(int32_t namespaceQuota) { DARABONBA_PTR_SET_VALUE(namespaceQuota_, namespaceQuota) };


    // namespaceUsed Field Functions 
    bool hasNamespaceUsed() const { return this->namespaceUsed_ != nullptr;};
    void deleteNamespaceUsed() { this->namespaceUsed_ = nullptr;};
    inline int32_t namespaceUsed() const { DARABONBA_PTR_GET_DEFAULT(namespaceUsed_, 0) };
    inline DescribeDcdnKvAccountResponseBody& setNamespaceUsed(int32_t namespaceUsed) { DARABONBA_PTR_SET_VALUE(namespaceUsed_, namespaceUsed) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnKvAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnKvAccountResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The available capacity of all namespaces.
    std::shared_ptr<string> capacityString_ = nullptr;
    std::shared_ptr<int64_t> capacityUsed_ = nullptr;
    // All namespaces have used capacity.
    std::shared_ptr<string> capacityUsedString_ = nullptr;
    // Details about the namespaces.
    std::shared_ptr<vector<DescribeDcdnKvAccountResponseBodyNamespaceList>> namespaceList_ = nullptr;
    // The maximum number of namespaces that you can apply for by using your account.
    std::shared_ptr<int32_t> namespaceQuota_ = nullptr;
    // The number of namespaces that you applied for by using your account.
    std::shared_ptr<int32_t> namespaceUsed_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the account.
    // 
    // *   **online**: enabled
    // *   **offline**: disabled
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

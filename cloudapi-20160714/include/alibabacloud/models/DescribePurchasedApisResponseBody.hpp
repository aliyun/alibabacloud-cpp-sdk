// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePurchasedApisResponseBodyPurchasedApis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PurchasedApis, purchasedApis_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PurchasedApis, purchasedApis_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePurchasedApisResponseBody() = default ;
    DescribePurchasedApisResponseBody(const DescribePurchasedApisResponseBody &) = default ;
    DescribePurchasedApisResponseBody(DescribePurchasedApisResponseBody &&) = default ;
    DescribePurchasedApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApisResponseBody() = default ;
    DescribePurchasedApisResponseBody& operator=(const DescribePurchasedApisResponseBody &) = default ;
    DescribePurchasedApisResponseBody& operator=(DescribePurchasedApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->purchasedApis_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePurchasedApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePurchasedApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // purchasedApis Field Functions 
    bool hasPurchasedApis() const { return this->purchasedApis_ != nullptr;};
    void deletePurchasedApis() { this->purchasedApis_ = nullptr;};
    inline const DescribePurchasedApisResponseBodyPurchasedApis & purchasedApis() const { DARABONBA_PTR_GET_CONST(purchasedApis_, DescribePurchasedApisResponseBodyPurchasedApis) };
    inline DescribePurchasedApisResponseBodyPurchasedApis purchasedApis() { DARABONBA_PTR_GET(purchasedApis_, DescribePurchasedApisResponseBodyPurchasedApis) };
    inline DescribePurchasedApisResponseBody& setPurchasedApis(const DescribePurchasedApisResponseBodyPurchasedApis & purchasedApis) { DARABONBA_PTR_SET_VALUE(purchasedApis_, purchasedApis) };
    inline DescribePurchasedApisResponseBody& setPurchasedApis(DescribePurchasedApisResponseBodyPurchasedApis && purchasedApis) { DARABONBA_PTR_SET_RVALUE(purchasedApis_, purchasedApis) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePurchasedApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePurchasedApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The monitoring information about API call delays. The returned information is an array consisting of purchased APIs.
    std::shared_ptr<DescribePurchasedApisResponseBodyPurchasedApis> purchasedApis_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

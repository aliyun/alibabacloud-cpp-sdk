// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApiGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PurchasedApiGroupAttributes, purchasedApiGroupAttributes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PurchasedApiGroupAttributes, purchasedApiGroupAttributes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePurchasedApiGroupsResponseBody() = default ;
    DescribePurchasedApiGroupsResponseBody(const DescribePurchasedApiGroupsResponseBody &) = default ;
    DescribePurchasedApiGroupsResponseBody(DescribePurchasedApiGroupsResponseBody &&) = default ;
    DescribePurchasedApiGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApiGroupsResponseBody() = default ;
    DescribePurchasedApiGroupsResponseBody& operator=(const DescribePurchasedApiGroupsResponseBody &) = default ;
    DescribePurchasedApiGroupsResponseBody& operator=(DescribePurchasedApiGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->purchasedApiGroupAttributes_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePurchasedApiGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePurchasedApiGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // purchasedApiGroupAttributes Field Functions 
    bool hasPurchasedApiGroupAttributes() const { return this->purchasedApiGroupAttributes_ != nullptr;};
    void deletePurchasedApiGroupAttributes() { this->purchasedApiGroupAttributes_ = nullptr;};
    inline const DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes & purchasedApiGroupAttributes() const { DARABONBA_PTR_GET_CONST(purchasedApiGroupAttributes_, DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes) };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes purchasedApiGroupAttributes() { DARABONBA_PTR_GET(purchasedApiGroupAttributes_, DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes) };
    inline DescribePurchasedApiGroupsResponseBody& setPurchasedApiGroupAttributes(const DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes & purchasedApiGroupAttributes) { DARABONBA_PTR_SET_VALUE(purchasedApiGroupAttributes_, purchasedApiGroupAttributes) };
    inline DescribePurchasedApiGroupsResponseBody& setPurchasedApiGroupAttributes(DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes && purchasedApiGroupAttributes) { DARABONBA_PTR_SET_RVALUE(purchasedApiGroupAttributes_, purchasedApiGroupAttributes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePurchasedApiGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePurchasedApiGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The attributes of the API group.
    std::shared_ptr<DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes> purchasedApiGroupAttributes_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

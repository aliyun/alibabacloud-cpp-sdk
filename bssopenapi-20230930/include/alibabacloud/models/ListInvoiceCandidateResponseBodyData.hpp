// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVOICECANDIDATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINVOICECANDIDATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListInvoiceCandidateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInvoiceCandidateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptedOffsetAmount, acceptedOffsetAmount_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(BusinessTime, businessTime_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InvoiceIssuer, invoiceIssuer_);
      DARABONBA_PTR_TO_JSON(InvoiceableAmount, invoiceableAmount_);
      DARABONBA_PTR_TO_JSON(InvoicedAmount, invoicedAmount_);
      DARABONBA_PTR_TO_JSON(OffsetAmount, offsetAmount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccountId, resourceOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccountName, resourceOwnerAccountName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListInvoiceCandidateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptedOffsetAmount, acceptedOffsetAmount_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(BusinessTime, businessTime_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InvoiceIssuer, invoiceIssuer_);
      DARABONBA_PTR_FROM_JSON(InvoiceableAmount, invoiceableAmount_);
      DARABONBA_PTR_FROM_JSON(InvoicedAmount, invoicedAmount_);
      DARABONBA_PTR_FROM_JSON(OffsetAmount, offsetAmount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccountId, resourceOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccountName, resourceOwnerAccountName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListInvoiceCandidateResponseBodyData() = default ;
    ListInvoiceCandidateResponseBodyData(const ListInvoiceCandidateResponseBodyData &) = default ;
    ListInvoiceCandidateResponseBodyData(ListInvoiceCandidateResponseBodyData &&) = default ;
    ListInvoiceCandidateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInvoiceCandidateResponseBodyData() = default ;
    ListInvoiceCandidateResponseBodyData& operator=(const ListInvoiceCandidateResponseBodyData &) = default ;
    ListInvoiceCandidateResponseBodyData& operator=(ListInvoiceCandidateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptedOffsetAmount_ != nullptr
        && this->accountId_ != nullptr && this->accountName_ != nullptr && this->billingCycle_ != nullptr && this->businessId_ != nullptr && this->businessTime_ != nullptr
        && this->commodityCode_ != nullptr && this->commodityName_ != nullptr && this->createTime_ != nullptr && this->id_ != nullptr && this->invoiceIssuer_ != nullptr
        && this->invoiceableAmount_ != nullptr && this->invoicedAmount_ != nullptr && this->offsetAmount_ != nullptr && this->productCode_ != nullptr && this->productName_ != nullptr
        && this->resourceOwnerAccountId_ != nullptr && this->resourceOwnerAccountName_ != nullptr && this->status_ != nullptr && this->totalAmount_ != nullptr && this->type_ != nullptr; };
    // acceptedOffsetAmount Field Functions 
    bool hasAcceptedOffsetAmount() const { return this->acceptedOffsetAmount_ != nullptr;};
    void deleteAcceptedOffsetAmount() { this->acceptedOffsetAmount_ = nullptr;};
    inline string acceptedOffsetAmount() const { DARABONBA_PTR_GET_DEFAULT(acceptedOffsetAmount_, "") };
    inline ListInvoiceCandidateResponseBodyData& setAcceptedOffsetAmount(string acceptedOffsetAmount) { DARABONBA_PTR_SET_VALUE(acceptedOffsetAmount_, acceptedOffsetAmount) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListInvoiceCandidateResponseBodyData& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ListInvoiceCandidateResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline int32_t billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, 0) };
    inline ListInvoiceCandidateResponseBodyData& setBillingCycle(int32_t billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline string businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
    inline ListInvoiceCandidateResponseBodyData& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // businessTime Field Functions 
    bool hasBusinessTime() const { return this->businessTime_ != nullptr;};
    void deleteBusinessTime() { this->businessTime_ = nullptr;};
    inline string businessTime() const { DARABONBA_PTR_GET_DEFAULT(businessTime_, "") };
    inline ListInvoiceCandidateResponseBodyData& setBusinessTime(string businessTime) { DARABONBA_PTR_SET_VALUE(businessTime_, businessTime) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListInvoiceCandidateResponseBodyData& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline ListInvoiceCandidateResponseBodyData& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListInvoiceCandidateResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListInvoiceCandidateResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoiceIssuer Field Functions 
    bool hasInvoiceIssuer() const { return this->invoiceIssuer_ != nullptr;};
    void deleteInvoiceIssuer() { this->invoiceIssuer_ = nullptr;};
    inline string invoiceIssuer() const { DARABONBA_PTR_GET_DEFAULT(invoiceIssuer_, "") };
    inline ListInvoiceCandidateResponseBodyData& setInvoiceIssuer(string invoiceIssuer) { DARABONBA_PTR_SET_VALUE(invoiceIssuer_, invoiceIssuer) };


    // invoiceableAmount Field Functions 
    bool hasInvoiceableAmount() const { return this->invoiceableAmount_ != nullptr;};
    void deleteInvoiceableAmount() { this->invoiceableAmount_ = nullptr;};
    inline string invoiceableAmount() const { DARABONBA_PTR_GET_DEFAULT(invoiceableAmount_, "") };
    inline ListInvoiceCandidateResponseBodyData& setInvoiceableAmount(string invoiceableAmount) { DARABONBA_PTR_SET_VALUE(invoiceableAmount_, invoiceableAmount) };


    // invoicedAmount Field Functions 
    bool hasInvoicedAmount() const { return this->invoicedAmount_ != nullptr;};
    void deleteInvoicedAmount() { this->invoicedAmount_ = nullptr;};
    inline string invoicedAmount() const { DARABONBA_PTR_GET_DEFAULT(invoicedAmount_, "") };
    inline ListInvoiceCandidateResponseBodyData& setInvoicedAmount(string invoicedAmount) { DARABONBA_PTR_SET_VALUE(invoicedAmount_, invoicedAmount) };


    // offsetAmount Field Functions 
    bool hasOffsetAmount() const { return this->offsetAmount_ != nullptr;};
    void deleteOffsetAmount() { this->offsetAmount_ = nullptr;};
    inline string offsetAmount() const { DARABONBA_PTR_GET_DEFAULT(offsetAmount_, "") };
    inline ListInvoiceCandidateResponseBodyData& setOffsetAmount(string offsetAmount) { DARABONBA_PTR_SET_VALUE(offsetAmount_, offsetAmount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListInvoiceCandidateResponseBodyData& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListInvoiceCandidateResponseBodyData& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // resourceOwnerAccountId Field Functions 
    bool hasResourceOwnerAccountId() const { return this->resourceOwnerAccountId_ != nullptr;};
    void deleteResourceOwnerAccountId() { this->resourceOwnerAccountId_ = nullptr;};
    inline int64_t resourceOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccountId_, 0L) };
    inline ListInvoiceCandidateResponseBodyData& setResourceOwnerAccountId(int64_t resourceOwnerAccountId) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccountId_, resourceOwnerAccountId) };


    // resourceOwnerAccountName Field Functions 
    bool hasResourceOwnerAccountName() const { return this->resourceOwnerAccountName_ != nullptr;};
    void deleteResourceOwnerAccountName() { this->resourceOwnerAccountName_ = nullptr;};
    inline string resourceOwnerAccountName() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccountName_, "") };
    inline ListInvoiceCandidateResponseBodyData& setResourceOwnerAccountName(string resourceOwnerAccountName) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccountName_, resourceOwnerAccountName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListInvoiceCandidateResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline string totalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
    inline ListInvoiceCandidateResponseBodyData& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListInvoiceCandidateResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> acceptedOffsetAmount_ = nullptr;
    std::shared_ptr<int64_t> accountId_ = nullptr;
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<int32_t> billingCycle_ = nullptr;
    std::shared_ptr<string> businessId_ = nullptr;
    std::shared_ptr<string> businessTime_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> commodityName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> invoiceIssuer_ = nullptr;
    std::shared_ptr<string> invoiceableAmount_ = nullptr;
    std::shared_ptr<string> invoicedAmount_ = nullptr;
    std::shared_ptr<string> offsetAmount_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerAccountId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccountName_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> totalAmount_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif

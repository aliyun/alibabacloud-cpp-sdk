// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVOICECANDIDATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINVOICECANDIDATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListInvoiceCandidateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInvoiceCandidateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInvoiceCandidateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInvoiceCandidateResponseBody() = default ;
    ListInvoiceCandidateResponseBody(const ListInvoiceCandidateResponseBody &) = default ;
    ListInvoiceCandidateResponseBody(ListInvoiceCandidateResponseBody &&) = default ;
    ListInvoiceCandidateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInvoiceCandidateResponseBody() = default ;
    ListInvoiceCandidateResponseBody& operator=(const ListInvoiceCandidateResponseBody &) = default ;
    ListInvoiceCandidateResponseBody& operator=(ListInvoiceCandidateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acceptedOffsetAmount_ == nullptr
        && this->accountId_ == nullptr && this->accountName_ == nullptr && this->billingCycle_ == nullptr && this->businessId_ == nullptr && this->businessTime_ == nullptr
        && this->commodityCode_ == nullptr && this->commodityName_ == nullptr && this->createTime_ == nullptr && this->id_ == nullptr && this->invoiceIssuer_ == nullptr
        && this->invoiceableAmount_ == nullptr && this->invoicedAmount_ == nullptr && this->offsetAmount_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr
        && this->resourceOwnerAccountId_ == nullptr && this->resourceOwnerAccountName_ == nullptr && this->status_ == nullptr && this->totalAmount_ == nullptr && this->type_ == nullptr; };
      // acceptedOffsetAmount Field Functions 
      bool hasAcceptedOffsetAmount() const { return this->acceptedOffsetAmount_ != nullptr;};
      void deleteAcceptedOffsetAmount() { this->acceptedOffsetAmount_ = nullptr;};
      inline string getAcceptedOffsetAmount() const { DARABONBA_PTR_GET_DEFAULT(acceptedOffsetAmount_, "") };
      inline Data& setAcceptedOffsetAmount(string acceptedOffsetAmount) { DARABONBA_PTR_SET_VALUE(acceptedOffsetAmount_, acceptedOffsetAmount) };


      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline Data& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // billingCycle Field Functions 
      bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
      void deleteBillingCycle() { this->billingCycle_ = nullptr;};
      inline int32_t getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, 0) };
      inline Data& setBillingCycle(int32_t billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


      // businessId Field Functions 
      bool hasBusinessId() const { return this->businessId_ != nullptr;};
      void deleteBusinessId() { this->businessId_ = nullptr;};
      inline string getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
      inline Data& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


      // businessTime Field Functions 
      bool hasBusinessTime() const { return this->businessTime_ != nullptr;};
      void deleteBusinessTime() { this->businessTime_ = nullptr;};
      inline string getBusinessTime() const { DARABONBA_PTR_GET_DEFAULT(businessTime_, "") };
      inline Data& setBusinessTime(string businessTime) { DARABONBA_PTR_SET_VALUE(businessTime_, businessTime) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Data& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline Data& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // invoiceIssuer Field Functions 
      bool hasInvoiceIssuer() const { return this->invoiceIssuer_ != nullptr;};
      void deleteInvoiceIssuer() { this->invoiceIssuer_ = nullptr;};
      inline string getInvoiceIssuer() const { DARABONBA_PTR_GET_DEFAULT(invoiceIssuer_, "") };
      inline Data& setInvoiceIssuer(string invoiceIssuer) { DARABONBA_PTR_SET_VALUE(invoiceIssuer_, invoiceIssuer) };


      // invoiceableAmount Field Functions 
      bool hasInvoiceableAmount() const { return this->invoiceableAmount_ != nullptr;};
      void deleteInvoiceableAmount() { this->invoiceableAmount_ = nullptr;};
      inline string getInvoiceableAmount() const { DARABONBA_PTR_GET_DEFAULT(invoiceableAmount_, "") };
      inline Data& setInvoiceableAmount(string invoiceableAmount) { DARABONBA_PTR_SET_VALUE(invoiceableAmount_, invoiceableAmount) };


      // invoicedAmount Field Functions 
      bool hasInvoicedAmount() const { return this->invoicedAmount_ != nullptr;};
      void deleteInvoicedAmount() { this->invoicedAmount_ = nullptr;};
      inline string getInvoicedAmount() const { DARABONBA_PTR_GET_DEFAULT(invoicedAmount_, "") };
      inline Data& setInvoicedAmount(string invoicedAmount) { DARABONBA_PTR_SET_VALUE(invoicedAmount_, invoicedAmount) };


      // offsetAmount Field Functions 
      bool hasOffsetAmount() const { return this->offsetAmount_ != nullptr;};
      void deleteOffsetAmount() { this->offsetAmount_ = nullptr;};
      inline string getOffsetAmount() const { DARABONBA_PTR_GET_DEFAULT(offsetAmount_, "") };
      inline Data& setOffsetAmount(string offsetAmount) { DARABONBA_PTR_SET_VALUE(offsetAmount_, offsetAmount) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Data& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // resourceOwnerAccountId Field Functions 
      bool hasResourceOwnerAccountId() const { return this->resourceOwnerAccountId_ != nullptr;};
      void deleteResourceOwnerAccountId() { this->resourceOwnerAccountId_ = nullptr;};
      inline int64_t getResourceOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccountId_, 0L) };
      inline Data& setResourceOwnerAccountId(int64_t resourceOwnerAccountId) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccountId_, resourceOwnerAccountId) };


      // resourceOwnerAccountName Field Functions 
      bool hasResourceOwnerAccountName() const { return this->resourceOwnerAccountName_ != nullptr;};
      void deleteResourceOwnerAccountName() { this->resourceOwnerAccountName_ = nullptr;};
      inline string getResourceOwnerAccountName() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccountName_, "") };
      inline Data& setResourceOwnerAccountName(string resourceOwnerAccountName) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccountName_, resourceOwnerAccountName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalAmount Field Functions 
      bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
      void deleteTotalAmount() { this->totalAmount_ = nullptr;};
      inline string getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
      inline Data& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> acceptedOffsetAmount_ {};
      shared_ptr<int64_t> accountId_ {};
      shared_ptr<string> accountName_ {};
      shared_ptr<int32_t> billingCycle_ {};
      shared_ptr<string> businessId_ {};
      shared_ptr<string> businessTime_ {};
      shared_ptr<string> commodityCode_ {};
      shared_ptr<string> commodityName_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> invoiceIssuer_ {};
      shared_ptr<string> invoiceableAmount_ {};
      shared_ptr<string> invoicedAmount_ {};
      shared_ptr<string> offsetAmount_ {};
      shared_ptr<string> productCode_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<int64_t> resourceOwnerAccountId_ {};
      shared_ptr<string> resourceOwnerAccountName_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> totalAmount_ {};
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->metadata_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListInvoiceCandidateResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListInvoiceCandidateResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListInvoiceCandidateResponseBody::Data>) };
    inline vector<ListInvoiceCandidateResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListInvoiceCandidateResponseBody::Data>) };
    inline ListInvoiceCandidateResponseBody& setData(const vector<ListInvoiceCandidateResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInvoiceCandidateResponseBody& setData(vector<ListInvoiceCandidateResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline ListInvoiceCandidateResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ListInvoiceCandidateResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInvoiceCandidateResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInvoiceCandidateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListInvoiceCandidateResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<ListInvoiceCandidateResponseBody::Data>> data_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif

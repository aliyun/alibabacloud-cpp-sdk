// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPURCHASEDDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPURCHASEDDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryPurchasedDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPurchasedDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndOperationTime, endOperationTime_);
      DARABONBA_PTR_TO_JSON(OpTimeOrder, opTimeOrder_);
      DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(StartOperationTime, startOperationTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimeOrder, updateTimeOrder_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPurchasedDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndOperationTime, endOperationTime_);
      DARABONBA_PTR_FROM_JSON(OpTimeOrder, opTimeOrder_);
      DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(StartOperationTime, startOperationTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimeOrder, updateTimeOrder_);
    };
    QueryPurchasedDomainsRequest() = default ;
    QueryPurchasedDomainsRequest(const QueryPurchasedDomainsRequest &) = default ;
    QueryPurchasedDomainsRequest(QueryPurchasedDomainsRequest &&) = default ;
    QueryPurchasedDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPurchasedDomainsRequest() = default ;
    QueryPurchasedDomainsRequest& operator=(const QueryPurchasedDomainsRequest &) = default ;
    QueryPurchasedDomainsRequest& operator=(QueryPurchasedDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->domainName_ == nullptr && return this->endOperationTime_ == nullptr && return this->opTimeOrder_ == nullptr && return this->operationStatus_ == nullptr && return this->pageSize_ == nullptr
        && return this->productType_ == nullptr && return this->startOperationTime_ == nullptr && return this->updateTimeOrder_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryPurchasedDomainsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryPurchasedDomainsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endOperationTime Field Functions 
    bool hasEndOperationTime() const { return this->endOperationTime_ != nullptr;};
    void deleteEndOperationTime() { this->endOperationTime_ = nullptr;};
    inline string endOperationTime() const { DARABONBA_PTR_GET_DEFAULT(endOperationTime_, "") };
    inline QueryPurchasedDomainsRequest& setEndOperationTime(string endOperationTime) { DARABONBA_PTR_SET_VALUE(endOperationTime_, endOperationTime) };


    // opTimeOrder Field Functions 
    bool hasOpTimeOrder() const { return this->opTimeOrder_ != nullptr;};
    void deleteOpTimeOrder() { this->opTimeOrder_ = nullptr;};
    inline bool opTimeOrder() const { DARABONBA_PTR_GET_DEFAULT(opTimeOrder_, false) };
    inline QueryPurchasedDomainsRequest& setOpTimeOrder(bool opTimeOrder) { DARABONBA_PTR_SET_VALUE(opTimeOrder_, opTimeOrder) };


    // operationStatus Field Functions 
    bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
    void deleteOperationStatus() { this->operationStatus_ = nullptr;};
    inline int32_t operationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, 0) };
    inline QueryPurchasedDomainsRequest& setOperationStatus(int32_t operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryPurchasedDomainsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline int32_t productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0) };
    inline QueryPurchasedDomainsRequest& setProductType(int32_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // startOperationTime Field Functions 
    bool hasStartOperationTime() const { return this->startOperationTime_ != nullptr;};
    void deleteStartOperationTime() { this->startOperationTime_ = nullptr;};
    inline string startOperationTime() const { DARABONBA_PTR_GET_DEFAULT(startOperationTime_, "") };
    inline QueryPurchasedDomainsRequest& setStartOperationTime(string startOperationTime) { DARABONBA_PTR_SET_VALUE(startOperationTime_, startOperationTime) };


    // updateTimeOrder Field Functions 
    bool hasUpdateTimeOrder() const { return this->updateTimeOrder_ != nullptr;};
    void deleteUpdateTimeOrder() { this->updateTimeOrder_ = nullptr;};
    inline bool updateTimeOrder() const { DARABONBA_PTR_GET_DEFAULT(updateTimeOrder_, false) };
    inline QueryPurchasedDomainsRequest& setUpdateTimeOrder(bool updateTimeOrder) { DARABONBA_PTR_SET_VALUE(updateTimeOrder_, updateTimeOrder) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> endOperationTime_ = nullptr;
    std::shared_ptr<bool> opTimeOrder_ = nullptr;
    std::shared_ptr<int32_t> operationStatus_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> productType_ = nullptr;
    std::shared_ptr<string> startOperationTime_ = nullptr;
    std::shared_ptr<bool> updateTimeOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif

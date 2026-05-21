// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMONTHLYSLALISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMONTHLYSLALISTREQUEST_HPP_
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
  class QueryMonthlySlaListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMonthlySlaListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Months, months_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PayStatuses, payStatuses_);
      DARABONBA_PTR_TO_JSON(ProductCodes, productCodes_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMonthlySlaListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Months, months_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PayStatuses, payStatuses_);
      DARABONBA_PTR_FROM_JSON(ProductCodes, productCodes_);
    };
    QueryMonthlySlaListRequest() = default ;
    QueryMonthlySlaListRequest(const QueryMonthlySlaListRequest &) = default ;
    QueryMonthlySlaListRequest(QueryMonthlySlaListRequest &&) = default ;
    QueryMonthlySlaListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMonthlySlaListRequest() = default ;
    QueryMonthlySlaListRequest& operator=(const QueryMonthlySlaListRequest &) = default ;
    QueryMonthlySlaListRequest& operator=(QueryMonthlySlaListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcIdAccountIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcIdAccountIds& obj) { 
        DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_TO_JSON(EcId, ecId_);
      };
      friend void from_json(const Darabonba::Json& j, EcIdAccountIds& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_FROM_JSON(EcId, ecId_);
      };
      EcIdAccountIds() = default ;
      EcIdAccountIds(const EcIdAccountIds &) = default ;
      EcIdAccountIds(EcIdAccountIds &&) = default ;
      EcIdAccountIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcIdAccountIds() = default ;
      EcIdAccountIds& operator=(const EcIdAccountIds &) = default ;
      EcIdAccountIds& operator=(EcIdAccountIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->ecId_ == nullptr; };
      // accountIds Field Functions 
      bool hasAccountIds() const { return this->accountIds_ != nullptr;};
      void deleteAccountIds() { this->accountIds_ = nullptr;};
      inline const vector<int64_t> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
      inline vector<int64_t> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
      inline EcIdAccountIds& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
      inline EcIdAccountIds& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


      // ecId Field Functions 
      bool hasEcId() const { return this->ecId_ != nullptr;};
      void deleteEcId() { this->ecId_ = nullptr;};
      inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
      inline EcIdAccountIds& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


    protected:
      shared_ptr<vector<int64_t>> accountIds_ {};
      shared_ptr<string> ecId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->ecIdAccountIds_ == nullptr && this->instanceIds_ == nullptr && this->months_ == nullptr && this->nbid_ == nullptr && this->pageSize_ == nullptr
        && this->payStatuses_ == nullptr && this->productCodes_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryMonthlySlaListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<QueryMonthlySlaListRequest::EcIdAccountIds> & getEcIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<QueryMonthlySlaListRequest::EcIdAccountIds>) };
    inline vector<QueryMonthlySlaListRequest::EcIdAccountIds> getEcIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<QueryMonthlySlaListRequest::EcIdAccountIds>) };
    inline QueryMonthlySlaListRequest& setEcIdAccountIds(const vector<QueryMonthlySlaListRequest::EcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline QueryMonthlySlaListRequest& setEcIdAccountIds(vector<QueryMonthlySlaListRequest::EcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline QueryMonthlySlaListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline QueryMonthlySlaListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // months Field Functions 
    bool hasMonths() const { return this->months_ != nullptr;};
    void deleteMonths() { this->months_ = nullptr;};
    inline const vector<int32_t> & getMonths() const { DARABONBA_PTR_GET_CONST(months_, vector<int32_t>) };
    inline vector<int32_t> getMonths() { DARABONBA_PTR_GET(months_, vector<int32_t>) };
    inline QueryMonthlySlaListRequest& setMonths(const vector<int32_t> & months) { DARABONBA_PTR_SET_VALUE(months_, months) };
    inline QueryMonthlySlaListRequest& setMonths(vector<int32_t> && months) { DARABONBA_PTR_SET_RVALUE(months_, months) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline QueryMonthlySlaListRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMonthlySlaListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // payStatuses Field Functions 
    bool hasPayStatuses() const { return this->payStatuses_ != nullptr;};
    void deletePayStatuses() { this->payStatuses_ = nullptr;};
    inline const vector<int32_t> & getPayStatuses() const { DARABONBA_PTR_GET_CONST(payStatuses_, vector<int32_t>) };
    inline vector<int32_t> getPayStatuses() { DARABONBA_PTR_GET(payStatuses_, vector<int32_t>) };
    inline QueryMonthlySlaListRequest& setPayStatuses(const vector<int32_t> & payStatuses) { DARABONBA_PTR_SET_VALUE(payStatuses_, payStatuses) };
    inline QueryMonthlySlaListRequest& setPayStatuses(vector<int32_t> && payStatuses) { DARABONBA_PTR_SET_RVALUE(payStatuses_, payStatuses) };


    // productCodes Field Functions 
    bool hasProductCodes() const { return this->productCodes_ != nullptr;};
    void deleteProductCodes() { this->productCodes_ = nullptr;};
    inline const vector<string> & getProductCodes() const { DARABONBA_PTR_GET_CONST(productCodes_, vector<string>) };
    inline vector<string> getProductCodes() { DARABONBA_PTR_GET(productCodes_, vector<string>) };
    inline QueryMonthlySlaListRequest& setProductCodes(const vector<string> & productCodes) { DARABONBA_PTR_SET_VALUE(productCodes_, productCodes) };
    inline QueryMonthlySlaListRequest& setProductCodes(vector<string> && productCodes) { DARABONBA_PTR_SET_RVALUE(productCodes_, productCodes) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<QueryMonthlySlaListRequest::EcIdAccountIds>> ecIdAccountIds_ {};
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<vector<int32_t>> months_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<int32_t>> payStatuses_ {};
    shared_ptr<vector<string>> productCodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif

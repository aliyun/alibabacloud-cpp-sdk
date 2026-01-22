// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANUSERDEDUCTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANUSERDEDUCTRULEREQUEST_HPP_
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
  class GetSavingPlanUserDeductRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanUserDeductRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SpnInstanceCode, spnInstanceCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanUserDeductRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SpnInstanceCode, spnInstanceCode_);
    };
    GetSavingPlanUserDeductRuleRequest() = default ;
    GetSavingPlanUserDeductRuleRequest(const GetSavingPlanUserDeductRuleRequest &) = default ;
    GetSavingPlanUserDeductRuleRequest(GetSavingPlanUserDeductRuleRequest &&) = default ;
    GetSavingPlanUserDeductRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanUserDeductRuleRequest() = default ;
    GetSavingPlanUserDeductRuleRequest& operator=(const GetSavingPlanUserDeductRuleRequest &) = default ;
    GetSavingPlanUserDeductRuleRequest& operator=(GetSavingPlanUserDeductRuleRequest &&) = default ;
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
      // This parameter is required.
      shared_ptr<string> ecId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->ecIdAccountIds_ == nullptr && this->nbid_ == nullptr && this->pageSize_ == nullptr && this->spnInstanceCode_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetSavingPlanUserDeductRuleRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<GetSavingPlanUserDeductRuleRequest::EcIdAccountIds> & getEcIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<GetSavingPlanUserDeductRuleRequest::EcIdAccountIds>) };
    inline vector<GetSavingPlanUserDeductRuleRequest::EcIdAccountIds> getEcIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<GetSavingPlanUserDeductRuleRequest::EcIdAccountIds>) };
    inline GetSavingPlanUserDeductRuleRequest& setEcIdAccountIds(const vector<GetSavingPlanUserDeductRuleRequest::EcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline GetSavingPlanUserDeductRuleRequest& setEcIdAccountIds(vector<GetSavingPlanUserDeductRuleRequest::EcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline GetSavingPlanUserDeductRuleRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSavingPlanUserDeductRuleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // spnInstanceCode Field Functions 
    bool hasSpnInstanceCode() const { return this->spnInstanceCode_ != nullptr;};
    void deleteSpnInstanceCode() { this->spnInstanceCode_ = nullptr;};
    inline string getSpnInstanceCode() const { DARABONBA_PTR_GET_DEFAULT(spnInstanceCode_, "") };
    inline GetSavingPlanUserDeductRuleRequest& setSpnInstanceCode(string spnInstanceCode) { DARABONBA_PTR_SET_VALUE(spnInstanceCode_, spnInstanceCode) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<GetSavingPlanUserDeductRuleRequest::EcIdAccountIds>> ecIdAccountIds_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> spnInstanceCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSAVINGPLANUSERDEDUCTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSAVINGPLANUSERDEDUCTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class SetSavingPlanUserDeductRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSavingPlanUserDeductRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(SpnInstanceCode, spnInstanceCode_);
      DARABONBA_PTR_TO_JSON(UserDeductRules, userDeductRules_);
    };
    friend void from_json(const Darabonba::Json& j, SetSavingPlanUserDeductRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(SpnInstanceCode, spnInstanceCode_);
      DARABONBA_PTR_FROM_JSON(UserDeductRules, userDeductRules_);
    };
    SetSavingPlanUserDeductRuleRequest() = default ;
    SetSavingPlanUserDeductRuleRequest(const SetSavingPlanUserDeductRuleRequest &) = default ;
    SetSavingPlanUserDeductRuleRequest(SetSavingPlanUserDeductRuleRequest &&) = default ;
    SetSavingPlanUserDeductRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSavingPlanUserDeductRuleRequest() = default ;
    SetSavingPlanUserDeductRuleRequest& operator=(const SetSavingPlanUserDeductRuleRequest &) = default ;
    SetSavingPlanUserDeductRuleRequest& operator=(SetSavingPlanUserDeductRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserDeductRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserDeductRules& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(SkipDeduct, skipDeduct_);
      };
      friend void from_json(const Darabonba::Json& j, UserDeductRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(SkipDeduct, skipDeduct_);
      };
      UserDeductRules() = default ;
      UserDeductRules(const UserDeductRules &) = default ;
      UserDeductRules(UserDeductRules &&) = default ;
      UserDeductRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserDeductRules() = default ;
      UserDeductRules& operator=(const UserDeductRules &) = default ;
      UserDeductRules& operator=(UserDeductRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->moduleCode_ == nullptr && this->skipDeduct_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline UserDeductRules& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline UserDeductRules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // skipDeduct Field Functions 
      bool hasSkipDeduct() const { return this->skipDeduct_ != nullptr;};
      void deleteSkipDeduct() { this->skipDeduct_ = nullptr;};
      inline bool getSkipDeduct() const { DARABONBA_PTR_GET_DEFAULT(skipDeduct_, false) };
      inline UserDeductRules& setSkipDeduct(bool skipDeduct) { DARABONBA_PTR_SET_VALUE(skipDeduct_, skipDeduct) };


    protected:
      shared_ptr<string> commodityCode_ {};
      shared_ptr<string> moduleCode_ {};
      shared_ptr<bool> skipDeduct_ {};
    };

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

    virtual bool empty() const override { return this->ecIdAccountIds_ == nullptr
        && this->nbid_ == nullptr && this->spnInstanceCode_ == nullptr && this->userDeductRules_ == nullptr; };
    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<SetSavingPlanUserDeductRuleRequest::EcIdAccountIds> & getEcIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<SetSavingPlanUserDeductRuleRequest::EcIdAccountIds>) };
    inline vector<SetSavingPlanUserDeductRuleRequest::EcIdAccountIds> getEcIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<SetSavingPlanUserDeductRuleRequest::EcIdAccountIds>) };
    inline SetSavingPlanUserDeductRuleRequest& setEcIdAccountIds(const vector<SetSavingPlanUserDeductRuleRequest::EcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline SetSavingPlanUserDeductRuleRequest& setEcIdAccountIds(vector<SetSavingPlanUserDeductRuleRequest::EcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline SetSavingPlanUserDeductRuleRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // spnInstanceCode Field Functions 
    bool hasSpnInstanceCode() const { return this->spnInstanceCode_ != nullptr;};
    void deleteSpnInstanceCode() { this->spnInstanceCode_ = nullptr;};
    inline string getSpnInstanceCode() const { DARABONBA_PTR_GET_DEFAULT(spnInstanceCode_, "") };
    inline SetSavingPlanUserDeductRuleRequest& setSpnInstanceCode(string spnInstanceCode) { DARABONBA_PTR_SET_VALUE(spnInstanceCode_, spnInstanceCode) };


    // userDeductRules Field Functions 
    bool hasUserDeductRules() const { return this->userDeductRules_ != nullptr;};
    void deleteUserDeductRules() { this->userDeductRules_ = nullptr;};
    inline const vector<SetSavingPlanUserDeductRuleRequest::UserDeductRules> & getUserDeductRules() const { DARABONBA_PTR_GET_CONST(userDeductRules_, vector<SetSavingPlanUserDeductRuleRequest::UserDeductRules>) };
    inline vector<SetSavingPlanUserDeductRuleRequest::UserDeductRules> getUserDeductRules() { DARABONBA_PTR_GET(userDeductRules_, vector<SetSavingPlanUserDeductRuleRequest::UserDeductRules>) };
    inline SetSavingPlanUserDeductRuleRequest& setUserDeductRules(const vector<SetSavingPlanUserDeductRuleRequest::UserDeductRules> & userDeductRules) { DARABONBA_PTR_SET_VALUE(userDeductRules_, userDeductRules) };
    inline SetSavingPlanUserDeductRuleRequest& setUserDeductRules(vector<SetSavingPlanUserDeductRuleRequest::UserDeductRules> && userDeductRules) { DARABONBA_PTR_SET_RVALUE(userDeductRules_, userDeductRules) };


  protected:
    shared_ptr<vector<SetSavingPlanUserDeductRuleRequest::EcIdAccountIds>> ecIdAccountIds_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<string> spnInstanceCode_ {};
    shared_ptr<vector<SetSavingPlanUserDeductRuleRequest::UserDeductRules>> userDeductRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

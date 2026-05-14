// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBUDGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBUDGETREQUEST_HPP_
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
  class CreateBudgetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBudgetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_TO_JSON(BudgetType, budgetType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CycleEndPeriod, cycleEndPeriod_);
      DARABONBA_PTR_TO_JSON(CycleQuota, cycleQuota_);
      DARABONBA_PTR_TO_JSON(CycleStartPeriod, cycleStartPeriod_);
      DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(QueryFilter, queryFilter_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(WarnConfs, warnConfs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBudgetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BudgetName, budgetName_);
      DARABONBA_PTR_FROM_JSON(BudgetType, budgetType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CycleEndPeriod, cycleEndPeriod_);
      DARABONBA_PTR_FROM_JSON(CycleQuota, cycleQuota_);
      DARABONBA_PTR_FROM_JSON(CycleStartPeriod, cycleStartPeriod_);
      DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(QueryFilter, queryFilter_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_FROM_JSON(WarnConfs, warnConfs_);
    };
    CreateBudgetRequest() = default ;
    CreateBudgetRequest(const CreateBudgetRequest &) = default ;
    CreateBudgetRequest(CreateBudgetRequest &&) = default ;
    CreateBudgetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBudgetRequest() = default ;
    CreateBudgetRequest& operator=(const CreateBudgetRequest &) = default ;
    CreateBudgetRequest& operator=(CreateBudgetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WarnConfs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WarnConfs& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(EventBridge, eventBridge_);
        DARABONBA_PTR_TO_JSON(MscChannels, mscChannels_);
        DARABONBA_PTR_TO_JSON(MscContacts, mscContacts_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ThresholdType, thresholdType_);
        DARABONBA_PTR_TO_JSON(ThresholdValue, thresholdValue_);
        DARABONBA_PTR_TO_JSON(WarnTarget, warnTarget_);
      };
      friend void from_json(const Darabonba::Json& j, WarnConfs& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(EventBridge, eventBridge_);
        DARABONBA_PTR_FROM_JSON(MscChannels, mscChannels_);
        DARABONBA_PTR_FROM_JSON(MscContacts, mscContacts_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ThresholdType, thresholdType_);
        DARABONBA_PTR_FROM_JSON(ThresholdValue, thresholdValue_);
        DARABONBA_PTR_FROM_JSON(WarnTarget, warnTarget_);
      };
      WarnConfs() = default ;
      WarnConfs(const WarnConfs &) = default ;
      WarnConfs(WarnConfs &&) = default ;
      WarnConfs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WarnConfs() = default ;
      WarnConfs& operator=(const WarnConfs &) = default ;
      WarnConfs& operator=(WarnConfs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->eventBridge_ == nullptr && this->mscChannels_ == nullptr && this->mscContacts_ == nullptr && this->name_ == nullptr && this->thresholdType_ == nullptr
        && this->thresholdValue_ == nullptr && this->warnTarget_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline WarnConfs& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // eventBridge Field Functions 
      bool hasEventBridge() const { return this->eventBridge_ != nullptr;};
      void deleteEventBridge() { this->eventBridge_ = nullptr;};
      inline bool getEventBridge() const { DARABONBA_PTR_GET_DEFAULT(eventBridge_, false) };
      inline WarnConfs& setEventBridge(bool eventBridge) { DARABONBA_PTR_SET_VALUE(eventBridge_, eventBridge) };


      // mscChannels Field Functions 
      bool hasMscChannels() const { return this->mscChannels_ != nullptr;};
      void deleteMscChannels() { this->mscChannels_ = nullptr;};
      inline const vector<string> & getMscChannels() const { DARABONBA_PTR_GET_CONST(mscChannels_, vector<string>) };
      inline vector<string> getMscChannels() { DARABONBA_PTR_GET(mscChannels_, vector<string>) };
      inline WarnConfs& setMscChannels(const vector<string> & mscChannels) { DARABONBA_PTR_SET_VALUE(mscChannels_, mscChannels) };
      inline WarnConfs& setMscChannels(vector<string> && mscChannels) { DARABONBA_PTR_SET_RVALUE(mscChannels_, mscChannels) };


      // mscContacts Field Functions 
      bool hasMscContacts() const { return this->mscContacts_ != nullptr;};
      void deleteMscContacts() { this->mscContacts_ = nullptr;};
      inline const vector<string> & getMscContacts() const { DARABONBA_PTR_GET_CONST(mscContacts_, vector<string>) };
      inline vector<string> getMscContacts() { DARABONBA_PTR_GET(mscContacts_, vector<string>) };
      inline WarnConfs& setMscContacts(const vector<string> & mscContacts) { DARABONBA_PTR_SET_VALUE(mscContacts_, mscContacts) };
      inline WarnConfs& setMscContacts(vector<string> && mscContacts) { DARABONBA_PTR_SET_RVALUE(mscContacts_, mscContacts) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WarnConfs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // thresholdType Field Functions 
      bool hasThresholdType() const { return this->thresholdType_ != nullptr;};
      void deleteThresholdType() { this->thresholdType_ = nullptr;};
      inline string getThresholdType() const { DARABONBA_PTR_GET_DEFAULT(thresholdType_, "") };
      inline WarnConfs& setThresholdType(string thresholdType) { DARABONBA_PTR_SET_VALUE(thresholdType_, thresholdType) };


      // thresholdValue Field Functions 
      bool hasThresholdValue() const { return this->thresholdValue_ != nullptr;};
      void deleteThresholdValue() { this->thresholdValue_ = nullptr;};
      inline string getThresholdValue() const { DARABONBA_PTR_GET_DEFAULT(thresholdValue_, "") };
      inline WarnConfs& setThresholdValue(string thresholdValue) { DARABONBA_PTR_SET_VALUE(thresholdValue_, thresholdValue) };


      // warnTarget Field Functions 
      bool hasWarnTarget() const { return this->warnTarget_ != nullptr;};
      void deleteWarnTarget() { this->warnTarget_ = nullptr;};
      inline string getWarnTarget() const { DARABONBA_PTR_GET_DEFAULT(warnTarget_, "") };
      inline WarnConfs& setWarnTarget(string warnTarget) { DARABONBA_PTR_SET_VALUE(warnTarget_, warnTarget) };


    protected:
      shared_ptr<string> comment_ {};
      shared_ptr<bool> eventBridge_ {};
      shared_ptr<vector<string>> mscChannels_ {};
      shared_ptr<vector<string>> mscContacts_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> thresholdType_ {};
      shared_ptr<string> thresholdValue_ {};
      shared_ptr<string> warnTarget_ {};
    };

    class QueryFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryFilter& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(SelectType, selectType_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, QueryFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      QueryFilter() = default ;
      QueryFilter(const QueryFilter &) = default ;
      QueryFilter(QueryFilter &&) = default ;
      QueryFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryFilter() = default ;
      QueryFilter& operator=(const QueryFilter &) = default ;
      QueryFilter& operator=(QueryFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->selectType_ == nullptr && this->values_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline QueryFilter& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // selectType Field Functions 
      bool hasSelectType() const { return this->selectType_ != nullptr;};
      void deleteSelectType() { this->selectType_ = nullptr;};
      inline string getSelectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, "") };
      inline QueryFilter& setSelectType(string selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline QueryFilter& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline QueryFilter& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> selectType_ {};
      shared_ptr<vector<string>> values_ {};
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

    class CycleQuota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CycleQuota& obj) { 
        DARABONBA_PTR_TO_JSON(CyclePeriod, cyclePeriod_);
        DARABONBA_PTR_TO_JSON(Quota, quota_);
      };
      friend void from_json(const Darabonba::Json& j, CycleQuota& obj) { 
        DARABONBA_PTR_FROM_JSON(CyclePeriod, cyclePeriod_);
        DARABONBA_PTR_FROM_JSON(Quota, quota_);
      };
      CycleQuota() = default ;
      CycleQuota(const CycleQuota &) = default ;
      CycleQuota(CycleQuota &&) = default ;
      CycleQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CycleQuota() = default ;
      CycleQuota& operator=(const CycleQuota &) = default ;
      CycleQuota& operator=(CycleQuota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cyclePeriod_ == nullptr
        && this->quota_ == nullptr; };
      // cyclePeriod Field Functions 
      bool hasCyclePeriod() const { return this->cyclePeriod_ != nullptr;};
      void deleteCyclePeriod() { this->cyclePeriod_ = nullptr;};
      inline string getCyclePeriod() const { DARABONBA_PTR_GET_DEFAULT(cyclePeriod_, "") };
      inline CycleQuota& setCyclePeriod(string cyclePeriod) { DARABONBA_PTR_SET_VALUE(cyclePeriod_, cyclePeriod) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline string getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, "") };
      inline CycleQuota& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    protected:
      shared_ptr<string> cyclePeriod_ {};
      shared_ptr<string> quota_ {};
    };

    virtual bool empty() const override { return this->budgetName_ == nullptr
        && this->budgetType_ == nullptr && this->comment_ == nullptr && this->cycleEndPeriod_ == nullptr && this->cycleQuota_ == nullptr && this->cycleStartPeriod_ == nullptr
        && this->cycleType_ == nullptr && this->ecIdAccountIds_ == nullptr && this->metric_ == nullptr && this->nbid_ == nullptr && this->queryFilter_ == nullptr
        && this->quota_ == nullptr && this->quotaType_ == nullptr && this->warnConfs_ == nullptr; };
    // budgetName Field Functions 
    bool hasBudgetName() const { return this->budgetName_ != nullptr;};
    void deleteBudgetName() { this->budgetName_ = nullptr;};
    inline string getBudgetName() const { DARABONBA_PTR_GET_DEFAULT(budgetName_, "") };
    inline CreateBudgetRequest& setBudgetName(string budgetName) { DARABONBA_PTR_SET_VALUE(budgetName_, budgetName) };


    // budgetType Field Functions 
    bool hasBudgetType() const { return this->budgetType_ != nullptr;};
    void deleteBudgetType() { this->budgetType_ = nullptr;};
    inline string getBudgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
    inline CreateBudgetRequest& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateBudgetRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // cycleEndPeriod Field Functions 
    bool hasCycleEndPeriod() const { return this->cycleEndPeriod_ != nullptr;};
    void deleteCycleEndPeriod() { this->cycleEndPeriod_ = nullptr;};
    inline string getCycleEndPeriod() const { DARABONBA_PTR_GET_DEFAULT(cycleEndPeriod_, "") };
    inline CreateBudgetRequest& setCycleEndPeriod(string cycleEndPeriod) { DARABONBA_PTR_SET_VALUE(cycleEndPeriod_, cycleEndPeriod) };


    // cycleQuota Field Functions 
    bool hasCycleQuota() const { return this->cycleQuota_ != nullptr;};
    void deleteCycleQuota() { this->cycleQuota_ = nullptr;};
    inline const vector<CreateBudgetRequest::CycleQuota> & getCycleQuota() const { DARABONBA_PTR_GET_CONST(cycleQuota_, vector<CreateBudgetRequest::CycleQuota>) };
    inline vector<CreateBudgetRequest::CycleQuota> getCycleQuota() { DARABONBA_PTR_GET(cycleQuota_, vector<CreateBudgetRequest::CycleQuota>) };
    inline CreateBudgetRequest& setCycleQuota(const vector<CreateBudgetRequest::CycleQuota> & cycleQuota) { DARABONBA_PTR_SET_VALUE(cycleQuota_, cycleQuota) };
    inline CreateBudgetRequest& setCycleQuota(vector<CreateBudgetRequest::CycleQuota> && cycleQuota) { DARABONBA_PTR_SET_RVALUE(cycleQuota_, cycleQuota) };


    // cycleStartPeriod Field Functions 
    bool hasCycleStartPeriod() const { return this->cycleStartPeriod_ != nullptr;};
    void deleteCycleStartPeriod() { this->cycleStartPeriod_ = nullptr;};
    inline string getCycleStartPeriod() const { DARABONBA_PTR_GET_DEFAULT(cycleStartPeriod_, "") };
    inline CreateBudgetRequest& setCycleStartPeriod(string cycleStartPeriod) { DARABONBA_PTR_SET_VALUE(cycleStartPeriod_, cycleStartPeriod) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline CreateBudgetRequest& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<CreateBudgetRequest::EcIdAccountIds> & getEcIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<CreateBudgetRequest::EcIdAccountIds>) };
    inline vector<CreateBudgetRequest::EcIdAccountIds> getEcIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<CreateBudgetRequest::EcIdAccountIds>) };
    inline CreateBudgetRequest& setEcIdAccountIds(const vector<CreateBudgetRequest::EcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline CreateBudgetRequest& setEcIdAccountIds(vector<CreateBudgetRequest::EcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline CreateBudgetRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CreateBudgetRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // queryFilter Field Functions 
    bool hasQueryFilter() const { return this->queryFilter_ != nullptr;};
    void deleteQueryFilter() { this->queryFilter_ = nullptr;};
    inline const vector<CreateBudgetRequest::QueryFilter> & getQueryFilter() const { DARABONBA_PTR_GET_CONST(queryFilter_, vector<CreateBudgetRequest::QueryFilter>) };
    inline vector<CreateBudgetRequest::QueryFilter> getQueryFilter() { DARABONBA_PTR_GET(queryFilter_, vector<CreateBudgetRequest::QueryFilter>) };
    inline CreateBudgetRequest& setQueryFilter(const vector<CreateBudgetRequest::QueryFilter> & queryFilter) { DARABONBA_PTR_SET_VALUE(queryFilter_, queryFilter) };
    inline CreateBudgetRequest& setQueryFilter(vector<CreateBudgetRequest::QueryFilter> && queryFilter) { DARABONBA_PTR_SET_RVALUE(queryFilter_, queryFilter) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline string getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, "") };
    inline CreateBudgetRequest& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline CreateBudgetRequest& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // warnConfs Field Functions 
    bool hasWarnConfs() const { return this->warnConfs_ != nullptr;};
    void deleteWarnConfs() { this->warnConfs_ = nullptr;};
    inline const vector<CreateBudgetRequest::WarnConfs> & getWarnConfs() const { DARABONBA_PTR_GET_CONST(warnConfs_, vector<CreateBudgetRequest::WarnConfs>) };
    inline vector<CreateBudgetRequest::WarnConfs> getWarnConfs() { DARABONBA_PTR_GET(warnConfs_, vector<CreateBudgetRequest::WarnConfs>) };
    inline CreateBudgetRequest& setWarnConfs(const vector<CreateBudgetRequest::WarnConfs> & warnConfs) { DARABONBA_PTR_SET_VALUE(warnConfs_, warnConfs) };
    inline CreateBudgetRequest& setWarnConfs(vector<CreateBudgetRequest::WarnConfs> && warnConfs) { DARABONBA_PTR_SET_RVALUE(warnConfs_, warnConfs) };


  protected:
    // This parameter is required.
    shared_ptr<string> budgetName_ {};
    // This parameter is required.
    shared_ptr<string> budgetType_ {};
    shared_ptr<string> comment_ {};
    // This parameter is required.
    shared_ptr<string> cycleEndPeriod_ {};
    shared_ptr<vector<CreateBudgetRequest::CycleQuota>> cycleQuota_ {};
    // This parameter is required.
    shared_ptr<string> cycleStartPeriod_ {};
    // This parameter is required.
    shared_ptr<string> cycleType_ {};
    shared_ptr<vector<CreateBudgetRequest::EcIdAccountIds>> ecIdAccountIds_ {};
    // This parameter is required.
    shared_ptr<string> metric_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<vector<CreateBudgetRequest::QueryFilter>> queryFilter_ {};
    shared_ptr<string> quota_ {};
    // This parameter is required.
    shared_ptr<string> quotaType_ {};
    shared_ptr<vector<CreateBudgetRequest::WarnConfs>> warnConfs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif

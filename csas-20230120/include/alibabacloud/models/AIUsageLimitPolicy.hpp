// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIUSAGELIMITPOLICY_HPP_
#define ALIBABACLOUD_MODELS_AIUSAGELIMITPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class AIUsageLimitPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIUsageLimitPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LimitPolicyId, limitPolicyId_);
      DARABONBA_PTR_TO_JSON(LimitValue, limitValue_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResetPeriod, resetPeriod_);
      DARABONBA_PTR_TO_JSON(ServiceIds, serviceIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, AIUsageLimitPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LimitPolicyId, limitPolicyId_);
      DARABONBA_PTR_FROM_JSON(LimitValue, limitValue_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResetPeriod, resetPeriod_);
      DARABONBA_PTR_FROM_JSON(ServiceIds, serviceIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
    };
    AIUsageLimitPolicy() = default ;
    AIUsageLimitPolicy(const AIUsageLimitPolicy &) = default ;
    AIUsageLimitPolicy(AIUsageLimitPolicy &&) = default ;
    AIUsageLimitPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIUsageLimitPolicy() = default ;
    AIUsageLimitPolicy& operator=(const AIUsageLimitPolicy &) = default ;
    AIUsageLimitPolicy& operator=(AIUsageLimitPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->limitPolicyId_ == nullptr && this->limitValue_ == nullptr && this->metricType_ == nullptr
        && this->name_ == nullptr && this->priority_ == nullptr && this->resetPeriod_ == nullptr && this->serviceIds_ == nullptr && this->status_ == nullptr
        && this->userGroupIds_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AIUsageLimitPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline AIUsageLimitPolicy& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline AIUsageLimitPolicy& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // limitPolicyId Field Functions 
    bool hasLimitPolicyId() const { return this->limitPolicyId_ != nullptr;};
    void deleteLimitPolicyId() { this->limitPolicyId_ = nullptr;};
    inline string getLimitPolicyId() const { DARABONBA_PTR_GET_DEFAULT(limitPolicyId_, "") };
    inline AIUsageLimitPolicy& setLimitPolicyId(string limitPolicyId) { DARABONBA_PTR_SET_VALUE(limitPolicyId_, limitPolicyId) };


    // limitValue Field Functions 
    bool hasLimitValue() const { return this->limitValue_ != nullptr;};
    void deleteLimitValue() { this->limitValue_ = nullptr;};
    inline int64_t getLimitValue() const { DARABONBA_PTR_GET_DEFAULT(limitValue_, 0L) };
    inline AIUsageLimitPolicy& setLimitValue(int64_t limitValue) { DARABONBA_PTR_SET_VALUE(limitValue_, limitValue) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline AIUsageLimitPolicy& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AIUsageLimitPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline AIUsageLimitPolicy& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resetPeriod Field Functions 
    bool hasResetPeriod() const { return this->resetPeriod_ != nullptr;};
    void deleteResetPeriod() { this->resetPeriod_ = nullptr;};
    inline string getResetPeriod() const { DARABONBA_PTR_GET_DEFAULT(resetPeriod_, "") };
    inline AIUsageLimitPolicy& setResetPeriod(string resetPeriod) { DARABONBA_PTR_SET_VALUE(resetPeriod_, resetPeriod) };


    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<string> & getServiceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<string>) };
    inline vector<string> getServiceIds() { DARABONBA_PTR_GET(serviceIds_, vector<string>) };
    inline AIUsageLimitPolicy& setServiceIds(const vector<string> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline AIUsageLimitPolicy& setServiceIds(vector<string> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AIUsageLimitPolicy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline AIUsageLimitPolicy& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline AIUsageLimitPolicy& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> limitPolicyId_ {};
    shared_ptr<int64_t> limitValue_ {};
    shared_ptr<string> metricType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<string> resetPeriod_ {};
    shared_ptr<vector<string>> serviceIds_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<string>> userGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

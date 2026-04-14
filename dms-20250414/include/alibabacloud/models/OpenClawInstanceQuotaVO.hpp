// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENCLAWINSTANCEQUOTAVO_HPP_
#define ALIBABACLOUD_MODELS_OPENCLAWINSTANCEQUOTAVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class OpenClawInstanceQuotaVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenClawInstanceQuotaVO& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunAccountUid, aliyunAccountUid_);
      DARABONBA_PTR_TO_JSON(DeepResearchCallQuota, deepResearchCallQuota_);
      DARABONBA_PTR_TO_JSON(DeepResearchCallUsed, deepResearchCallUsed_);
      DARABONBA_PTR_TO_JSON(InstanceGmtCreate, instanceGmtCreate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(LastMeteringTime, lastMeteringTime_);
      DARABONBA_PTR_TO_JSON(ModelCallQuota, modelCallQuota_);
      DARABONBA_PTR_TO_JSON(ModelCallUsed, modelCallUsed_);
      DARABONBA_PTR_TO_JSON(RefreshDay, refreshDay_);
      DARABONBA_PTR_TO_JSON(SkillPlanCallQuota, skillPlanCallQuota_);
      DARABONBA_PTR_TO_JSON(SkillPlanCallUsed, skillPlanCallUsed_);
    };
    friend void from_json(const Darabonba::Json& j, OpenClawInstanceQuotaVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunAccountUid, aliyunAccountUid_);
      DARABONBA_PTR_FROM_JSON(DeepResearchCallQuota, deepResearchCallQuota_);
      DARABONBA_PTR_FROM_JSON(DeepResearchCallUsed, deepResearchCallUsed_);
      DARABONBA_PTR_FROM_JSON(InstanceGmtCreate, instanceGmtCreate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(LastMeteringTime, lastMeteringTime_);
      DARABONBA_PTR_FROM_JSON(ModelCallQuota, modelCallQuota_);
      DARABONBA_PTR_FROM_JSON(ModelCallUsed, modelCallUsed_);
      DARABONBA_PTR_FROM_JSON(RefreshDay, refreshDay_);
      DARABONBA_PTR_FROM_JSON(SkillPlanCallQuota, skillPlanCallQuota_);
      DARABONBA_PTR_FROM_JSON(SkillPlanCallUsed, skillPlanCallUsed_);
    };
    OpenClawInstanceQuotaVO() = default ;
    OpenClawInstanceQuotaVO(const OpenClawInstanceQuotaVO &) = default ;
    OpenClawInstanceQuotaVO(OpenClawInstanceQuotaVO &&) = default ;
    OpenClawInstanceQuotaVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenClawInstanceQuotaVO() = default ;
    OpenClawInstanceQuotaVO& operator=(const OpenClawInstanceQuotaVO &) = default ;
    OpenClawInstanceQuotaVO& operator=(OpenClawInstanceQuotaVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunAccountUid_ == nullptr
        && this->deepResearchCallQuota_ == nullptr && this->deepResearchCallUsed_ == nullptr && this->instanceGmtCreate_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->lastMeteringTime_ == nullptr && this->modelCallQuota_ == nullptr && this->modelCallUsed_ == nullptr && this->refreshDay_ == nullptr && this->skillPlanCallQuota_ == nullptr
        && this->skillPlanCallUsed_ == nullptr; };
    // aliyunAccountUid Field Functions 
    bool hasAliyunAccountUid() const { return this->aliyunAccountUid_ != nullptr;};
    void deleteAliyunAccountUid() { this->aliyunAccountUid_ = nullptr;};
    inline string getAliyunAccountUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunAccountUid_, "") };
    inline OpenClawInstanceQuotaVO& setAliyunAccountUid(string aliyunAccountUid) { DARABONBA_PTR_SET_VALUE(aliyunAccountUid_, aliyunAccountUid) };


    // deepResearchCallQuota Field Functions 
    bool hasDeepResearchCallQuota() const { return this->deepResearchCallQuota_ != nullptr;};
    void deleteDeepResearchCallQuota() { this->deepResearchCallQuota_ = nullptr;};
    inline string getDeepResearchCallQuota() const { DARABONBA_PTR_GET_DEFAULT(deepResearchCallQuota_, "") };
    inline OpenClawInstanceQuotaVO& setDeepResearchCallQuota(string deepResearchCallQuota) { DARABONBA_PTR_SET_VALUE(deepResearchCallQuota_, deepResearchCallQuota) };


    // deepResearchCallUsed Field Functions 
    bool hasDeepResearchCallUsed() const { return this->deepResearchCallUsed_ != nullptr;};
    void deleteDeepResearchCallUsed() { this->deepResearchCallUsed_ = nullptr;};
    inline string getDeepResearchCallUsed() const { DARABONBA_PTR_GET_DEFAULT(deepResearchCallUsed_, "") };
    inline OpenClawInstanceQuotaVO& setDeepResearchCallUsed(string deepResearchCallUsed) { DARABONBA_PTR_SET_VALUE(deepResearchCallUsed_, deepResearchCallUsed) };


    // instanceGmtCreate Field Functions 
    bool hasInstanceGmtCreate() const { return this->instanceGmtCreate_ != nullptr;};
    void deleteInstanceGmtCreate() { this->instanceGmtCreate_ = nullptr;};
    inline string getInstanceGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(instanceGmtCreate_, "") };
    inline OpenClawInstanceQuotaVO& setInstanceGmtCreate(string instanceGmtCreate) { DARABONBA_PTR_SET_VALUE(instanceGmtCreate_, instanceGmtCreate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OpenClawInstanceQuotaVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline OpenClawInstanceQuotaVO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lastMeteringTime Field Functions 
    bool hasLastMeteringTime() const { return this->lastMeteringTime_ != nullptr;};
    void deleteLastMeteringTime() { this->lastMeteringTime_ = nullptr;};
    inline string getLastMeteringTime() const { DARABONBA_PTR_GET_DEFAULT(lastMeteringTime_, "") };
    inline OpenClawInstanceQuotaVO& setLastMeteringTime(string lastMeteringTime) { DARABONBA_PTR_SET_VALUE(lastMeteringTime_, lastMeteringTime) };


    // modelCallQuota Field Functions 
    bool hasModelCallQuota() const { return this->modelCallQuota_ != nullptr;};
    void deleteModelCallQuota() { this->modelCallQuota_ = nullptr;};
    inline string getModelCallQuota() const { DARABONBA_PTR_GET_DEFAULT(modelCallQuota_, "") };
    inline OpenClawInstanceQuotaVO& setModelCallQuota(string modelCallQuota) { DARABONBA_PTR_SET_VALUE(modelCallQuota_, modelCallQuota) };


    // modelCallUsed Field Functions 
    bool hasModelCallUsed() const { return this->modelCallUsed_ != nullptr;};
    void deleteModelCallUsed() { this->modelCallUsed_ = nullptr;};
    inline string getModelCallUsed() const { DARABONBA_PTR_GET_DEFAULT(modelCallUsed_, "") };
    inline OpenClawInstanceQuotaVO& setModelCallUsed(string modelCallUsed) { DARABONBA_PTR_SET_VALUE(modelCallUsed_, modelCallUsed) };


    // refreshDay Field Functions 
    bool hasRefreshDay() const { return this->refreshDay_ != nullptr;};
    void deleteRefreshDay() { this->refreshDay_ = nullptr;};
    inline string getRefreshDay() const { DARABONBA_PTR_GET_DEFAULT(refreshDay_, "") };
    inline OpenClawInstanceQuotaVO& setRefreshDay(string refreshDay) { DARABONBA_PTR_SET_VALUE(refreshDay_, refreshDay) };


    // skillPlanCallQuota Field Functions 
    bool hasSkillPlanCallQuota() const { return this->skillPlanCallQuota_ != nullptr;};
    void deleteSkillPlanCallQuota() { this->skillPlanCallQuota_ = nullptr;};
    inline string getSkillPlanCallQuota() const { DARABONBA_PTR_GET_DEFAULT(skillPlanCallQuota_, "") };
    inline OpenClawInstanceQuotaVO& setSkillPlanCallQuota(string skillPlanCallQuota) { DARABONBA_PTR_SET_VALUE(skillPlanCallQuota_, skillPlanCallQuota) };


    // skillPlanCallUsed Field Functions 
    bool hasSkillPlanCallUsed() const { return this->skillPlanCallUsed_ != nullptr;};
    void deleteSkillPlanCallUsed() { this->skillPlanCallUsed_ = nullptr;};
    inline string getSkillPlanCallUsed() const { DARABONBA_PTR_GET_DEFAULT(skillPlanCallUsed_, "") };
    inline OpenClawInstanceQuotaVO& setSkillPlanCallUsed(string skillPlanCallUsed) { DARABONBA_PTR_SET_VALUE(skillPlanCallUsed_, skillPlanCallUsed) };


  protected:
    shared_ptr<string> aliyunAccountUid_ {};
    shared_ptr<string> deepResearchCallQuota_ {};
    shared_ptr<string> deepResearchCallUsed_ {};
    shared_ptr<string> instanceGmtCreate_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> lastMeteringTime_ {};
    shared_ptr<string> modelCallQuota_ {};
    shared_ptr<string> modelCallUsed_ {};
    shared_ptr<string> refreshDay_ {};
    shared_ptr<string> skillPlanCallQuota_ {};
    shared_ptr<string> skillPlanCallUsed_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

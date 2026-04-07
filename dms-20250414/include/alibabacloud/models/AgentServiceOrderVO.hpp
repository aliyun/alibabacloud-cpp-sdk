// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTSERVICEORDERVO_HPP_
#define ALIBABACLOUD_MODELS_AGENTSERVICEORDERVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgentServiceOrderVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentServiceOrderVO& obj) { 
      DARABONBA_PTR_TO_JSON(AgentService, agentService_);
      DARABONBA_PTR_TO_JSON(DeepResearchQuota, deepResearchQuota_);
      DARABONBA_PTR_TO_JSON(DeepResearchUsed, deepResearchUsed_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ModelCallQuota, modelCallQuota_);
      DARABONBA_PTR_TO_JSON(ModelCallUsed, modelCallUsed_);
      DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceNum, serviceNum_);
      DARABONBA_PTR_TO_JSON(SkillPlanCallQuota, skillPlanCallQuota_);
      DARABONBA_PTR_TO_JSON(SkillPlanCallUsed, skillPlanCallUsed_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AgentServiceOrderVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentService, agentService_);
      DARABONBA_PTR_FROM_JSON(DeepResearchQuota, deepResearchQuota_);
      DARABONBA_PTR_FROM_JSON(DeepResearchUsed, deepResearchUsed_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ModelCallQuota, modelCallQuota_);
      DARABONBA_PTR_FROM_JSON(ModelCallUsed, modelCallUsed_);
      DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceNum, serviceNum_);
      DARABONBA_PTR_FROM_JSON(SkillPlanCallQuota, skillPlanCallQuota_);
      DARABONBA_PTR_FROM_JSON(SkillPlanCallUsed, skillPlanCallUsed_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    AgentServiceOrderVO() = default ;
    AgentServiceOrderVO(const AgentServiceOrderVO &) = default ;
    AgentServiceOrderVO(AgentServiceOrderVO &&) = default ;
    AgentServiceOrderVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentServiceOrderVO() = default ;
    AgentServiceOrderVO& operator=(const AgentServiceOrderVO &) = default ;
    AgentServiceOrderVO& operator=(AgentServiceOrderVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentService_ == nullptr
        && this->deepResearchQuota_ == nullptr && this->deepResearchUsed_ == nullptr && this->expireTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->modelCallQuota_ == nullptr && this->modelCallUsed_ == nullptr && this->orderInstanceId_ == nullptr && this->serviceNum_ == nullptr && this->skillPlanCallQuota_ == nullptr
        && this->skillPlanCallUsed_ == nullptr && this->status_ == nullptr; };
    // agentService Field Functions 
    bool hasAgentService() const { return this->agentService_ != nullptr;};
    void deleteAgentService() { this->agentService_ = nullptr;};
    inline string getAgentService() const { DARABONBA_PTR_GET_DEFAULT(agentService_, "") };
    inline AgentServiceOrderVO& setAgentService(string agentService) { DARABONBA_PTR_SET_VALUE(agentService_, agentService) };


    // deepResearchQuota Field Functions 
    bool hasDeepResearchQuota() const { return this->deepResearchQuota_ != nullptr;};
    void deleteDeepResearchQuota() { this->deepResearchQuota_ = nullptr;};
    inline int32_t getDeepResearchQuota() const { DARABONBA_PTR_GET_DEFAULT(deepResearchQuota_, 0) };
    inline AgentServiceOrderVO& setDeepResearchQuota(int32_t deepResearchQuota) { DARABONBA_PTR_SET_VALUE(deepResearchQuota_, deepResearchQuota) };


    // deepResearchUsed Field Functions 
    bool hasDeepResearchUsed() const { return this->deepResearchUsed_ != nullptr;};
    void deleteDeepResearchUsed() { this->deepResearchUsed_ = nullptr;};
    inline int32_t getDeepResearchUsed() const { DARABONBA_PTR_GET_DEFAULT(deepResearchUsed_, 0) };
    inline AgentServiceOrderVO& setDeepResearchUsed(int32_t deepResearchUsed) { DARABONBA_PTR_SET_VALUE(deepResearchUsed_, deepResearchUsed) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline AgentServiceOrderVO& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline AgentServiceOrderVO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline AgentServiceOrderVO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modelCallQuota Field Functions 
    bool hasModelCallQuota() const { return this->modelCallQuota_ != nullptr;};
    void deleteModelCallQuota() { this->modelCallQuota_ = nullptr;};
    inline int32_t getModelCallQuota() const { DARABONBA_PTR_GET_DEFAULT(modelCallQuota_, 0) };
    inline AgentServiceOrderVO& setModelCallQuota(int32_t modelCallQuota) { DARABONBA_PTR_SET_VALUE(modelCallQuota_, modelCallQuota) };


    // modelCallUsed Field Functions 
    bool hasModelCallUsed() const { return this->modelCallUsed_ != nullptr;};
    void deleteModelCallUsed() { this->modelCallUsed_ = nullptr;};
    inline int32_t getModelCallUsed() const { DARABONBA_PTR_GET_DEFAULT(modelCallUsed_, 0) };
    inline AgentServiceOrderVO& setModelCallUsed(int32_t modelCallUsed) { DARABONBA_PTR_SET_VALUE(modelCallUsed_, modelCallUsed) };


    // orderInstanceId Field Functions 
    bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
    void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
    inline string getOrderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
    inline AgentServiceOrderVO& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


    // serviceNum Field Functions 
    bool hasServiceNum() const { return this->serviceNum_ != nullptr;};
    void deleteServiceNum() { this->serviceNum_ = nullptr;};
    inline int32_t getServiceNum() const { DARABONBA_PTR_GET_DEFAULT(serviceNum_, 0) };
    inline AgentServiceOrderVO& setServiceNum(int32_t serviceNum) { DARABONBA_PTR_SET_VALUE(serviceNum_, serviceNum) };


    // skillPlanCallQuota Field Functions 
    bool hasSkillPlanCallQuota() const { return this->skillPlanCallQuota_ != nullptr;};
    void deleteSkillPlanCallQuota() { this->skillPlanCallQuota_ = nullptr;};
    inline int32_t getSkillPlanCallQuota() const { DARABONBA_PTR_GET_DEFAULT(skillPlanCallQuota_, 0) };
    inline AgentServiceOrderVO& setSkillPlanCallQuota(int32_t skillPlanCallQuota) { DARABONBA_PTR_SET_VALUE(skillPlanCallQuota_, skillPlanCallQuota) };


    // skillPlanCallUsed Field Functions 
    bool hasSkillPlanCallUsed() const { return this->skillPlanCallUsed_ != nullptr;};
    void deleteSkillPlanCallUsed() { this->skillPlanCallUsed_ = nullptr;};
    inline int32_t getSkillPlanCallUsed() const { DARABONBA_PTR_GET_DEFAULT(skillPlanCallUsed_, 0) };
    inline AgentServiceOrderVO& setSkillPlanCallUsed(int32_t skillPlanCallUsed) { DARABONBA_PTR_SET_VALUE(skillPlanCallUsed_, skillPlanCallUsed) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AgentServiceOrderVO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> agentService_ {};
    shared_ptr<int32_t> deepResearchQuota_ {};
    shared_ptr<int32_t> deepResearchUsed_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int32_t> modelCallQuota_ {};
    shared_ptr<int32_t> modelCallUsed_ {};
    shared_ptr<string> orderInstanceId_ {};
    shared_ptr<int32_t> serviceNum_ {};
    shared_ptr<int32_t> skillPlanCallQuota_ {};
    shared_ptr<int32_t> skillPlanCallUsed_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

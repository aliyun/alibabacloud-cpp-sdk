// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTSERVICEORDERSUMMARYVO_HPP_
#define ALIBABACLOUD_MODELS_AGENTSERVICEORDERSUMMARYVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgentServiceOrderSummaryVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentServiceOrderSummaryVO& obj) { 
      DARABONBA_PTR_TO_JSON(AgentService, agentService_);
      DARABONBA_PTR_TO_JSON(DeepResearchQuota, deepResearchQuota_);
      DARABONBA_PTR_TO_JSON(ModelCallQuota, modelCallQuota_);
      DARABONBA_PTR_TO_JSON(OrderCount, orderCount_);
      DARABONBA_PTR_TO_JSON(ServiceNumTotal, serviceNumTotal_);
      DARABONBA_PTR_TO_JSON(SkillPlanCallQuota, skillPlanCallQuota_);
    };
    friend void from_json(const Darabonba::Json& j, AgentServiceOrderSummaryVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentService, agentService_);
      DARABONBA_PTR_FROM_JSON(DeepResearchQuota, deepResearchQuota_);
      DARABONBA_PTR_FROM_JSON(ModelCallQuota, modelCallQuota_);
      DARABONBA_PTR_FROM_JSON(OrderCount, orderCount_);
      DARABONBA_PTR_FROM_JSON(ServiceNumTotal, serviceNumTotal_);
      DARABONBA_PTR_FROM_JSON(SkillPlanCallQuota, skillPlanCallQuota_);
    };
    AgentServiceOrderSummaryVO() = default ;
    AgentServiceOrderSummaryVO(const AgentServiceOrderSummaryVO &) = default ;
    AgentServiceOrderSummaryVO(AgentServiceOrderSummaryVO &&) = default ;
    AgentServiceOrderSummaryVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentServiceOrderSummaryVO() = default ;
    AgentServiceOrderSummaryVO& operator=(const AgentServiceOrderSummaryVO &) = default ;
    AgentServiceOrderSummaryVO& operator=(AgentServiceOrderSummaryVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentService_ == nullptr
        && this->deepResearchQuota_ == nullptr && this->modelCallQuota_ == nullptr && this->orderCount_ == nullptr && this->serviceNumTotal_ == nullptr && this->skillPlanCallQuota_ == nullptr; };
    // agentService Field Functions 
    bool hasAgentService() const { return this->agentService_ != nullptr;};
    void deleteAgentService() { this->agentService_ = nullptr;};
    inline string getAgentService() const { DARABONBA_PTR_GET_DEFAULT(agentService_, "") };
    inline AgentServiceOrderSummaryVO& setAgentService(string agentService) { DARABONBA_PTR_SET_VALUE(agentService_, agentService) };


    // deepResearchQuota Field Functions 
    bool hasDeepResearchQuota() const { return this->deepResearchQuota_ != nullptr;};
    void deleteDeepResearchQuota() { this->deepResearchQuota_ = nullptr;};
    inline int64_t getDeepResearchQuota() const { DARABONBA_PTR_GET_DEFAULT(deepResearchQuota_, 0L) };
    inline AgentServiceOrderSummaryVO& setDeepResearchQuota(int64_t deepResearchQuota) { DARABONBA_PTR_SET_VALUE(deepResearchQuota_, deepResearchQuota) };


    // modelCallQuota Field Functions 
    bool hasModelCallQuota() const { return this->modelCallQuota_ != nullptr;};
    void deleteModelCallQuota() { this->modelCallQuota_ = nullptr;};
    inline int64_t getModelCallQuota() const { DARABONBA_PTR_GET_DEFAULT(modelCallQuota_, 0L) };
    inline AgentServiceOrderSummaryVO& setModelCallQuota(int64_t modelCallQuota) { DARABONBA_PTR_SET_VALUE(modelCallQuota_, modelCallQuota) };


    // orderCount Field Functions 
    bool hasOrderCount() const { return this->orderCount_ != nullptr;};
    void deleteOrderCount() { this->orderCount_ = nullptr;};
    inline int32_t getOrderCount() const { DARABONBA_PTR_GET_DEFAULT(orderCount_, 0) };
    inline AgentServiceOrderSummaryVO& setOrderCount(int32_t orderCount) { DARABONBA_PTR_SET_VALUE(orderCount_, orderCount) };


    // serviceNumTotal Field Functions 
    bool hasServiceNumTotal() const { return this->serviceNumTotal_ != nullptr;};
    void deleteServiceNumTotal() { this->serviceNumTotal_ = nullptr;};
    inline int32_t getServiceNumTotal() const { DARABONBA_PTR_GET_DEFAULT(serviceNumTotal_, 0) };
    inline AgentServiceOrderSummaryVO& setServiceNumTotal(int32_t serviceNumTotal) { DARABONBA_PTR_SET_VALUE(serviceNumTotal_, serviceNumTotal) };


    // skillPlanCallQuota Field Functions 
    bool hasSkillPlanCallQuota() const { return this->skillPlanCallQuota_ != nullptr;};
    void deleteSkillPlanCallQuota() { this->skillPlanCallQuota_ = nullptr;};
    inline int64_t getSkillPlanCallQuota() const { DARABONBA_PTR_GET_DEFAULT(skillPlanCallQuota_, 0L) };
    inline AgentServiceOrderSummaryVO& setSkillPlanCallQuota(int64_t skillPlanCallQuota) { DARABONBA_PTR_SET_VALUE(skillPlanCallQuota_, skillPlanCallQuota) };


  protected:
    shared_ptr<string> agentService_ {};
    shared_ptr<int64_t> deepResearchQuota_ {};
    shared_ptr<int64_t> modelCallQuota_ {};
    shared_ptr<int32_t> orderCount_ {};
    shared_ptr<int32_t> serviceNumTotal_ {};
    shared_ptr<int64_t> skillPlanCallQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMODELSCOPEMODELINPUTPROVISIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMODELSCOPEMODELINPUTPROVISIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeployModelScopeModelInputProvisionConfigScheduledActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployModelScopeModelInputProvisionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployModelScopeModelInputProvisionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(alwaysAllocateGPU, alwaysAllocateGPU_);
      DARABONBA_PTR_TO_JSON(scheduledActions, scheduledActions_);
      DARABONBA_PTR_TO_JSON(target, target_);
    };
    friend void from_json(const Darabonba::Json& j, DeployModelScopeModelInputProvisionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(alwaysAllocateGPU, alwaysAllocateGPU_);
      DARABONBA_PTR_FROM_JSON(scheduledActions, scheduledActions_);
      DARABONBA_PTR_FROM_JSON(target, target_);
    };
    DeployModelScopeModelInputProvisionConfig() = default ;
    DeployModelScopeModelInputProvisionConfig(const DeployModelScopeModelInputProvisionConfig &) = default ;
    DeployModelScopeModelInputProvisionConfig(DeployModelScopeModelInputProvisionConfig &&) = default ;
    DeployModelScopeModelInputProvisionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployModelScopeModelInputProvisionConfig() = default ;
    DeployModelScopeModelInputProvisionConfig& operator=(const DeployModelScopeModelInputProvisionConfig &) = default ;
    DeployModelScopeModelInputProvisionConfig& operator=(DeployModelScopeModelInputProvisionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alwaysAllocateGPU_ != nullptr
        && this->scheduledActions_ != nullptr && this->target_ != nullptr; };
    // alwaysAllocateGPU Field Functions 
    bool hasAlwaysAllocateGPU() const { return this->alwaysAllocateGPU_ != nullptr;};
    void deleteAlwaysAllocateGPU() { this->alwaysAllocateGPU_ = nullptr;};
    inline bool alwaysAllocateGPU() const { DARABONBA_PTR_GET_DEFAULT(alwaysAllocateGPU_, false) };
    inline DeployModelScopeModelInputProvisionConfig& setAlwaysAllocateGPU(bool alwaysAllocateGPU) { DARABONBA_PTR_SET_VALUE(alwaysAllocateGPU_, alwaysAllocateGPU) };


    // scheduledActions Field Functions 
    bool hasScheduledActions() const { return this->scheduledActions_ != nullptr;};
    void deleteScheduledActions() { this->scheduledActions_ = nullptr;};
    inline const vector<Models::DeployModelScopeModelInputProvisionConfigScheduledActions> & scheduledActions() const { DARABONBA_PTR_GET_CONST(scheduledActions_, vector<Models::DeployModelScopeModelInputProvisionConfigScheduledActions>) };
    inline vector<Models::DeployModelScopeModelInputProvisionConfigScheduledActions> scheduledActions() { DARABONBA_PTR_GET(scheduledActions_, vector<Models::DeployModelScopeModelInputProvisionConfigScheduledActions>) };
    inline DeployModelScopeModelInputProvisionConfig& setScheduledActions(const vector<Models::DeployModelScopeModelInputProvisionConfigScheduledActions> & scheduledActions) { DARABONBA_PTR_SET_VALUE(scheduledActions_, scheduledActions) };
    inline DeployModelScopeModelInputProvisionConfig& setScheduledActions(vector<Models::DeployModelScopeModelInputProvisionConfigScheduledActions> && scheduledActions) { DARABONBA_PTR_SET_RVALUE(scheduledActions_, scheduledActions) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int32_t target() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
    inline DeployModelScopeModelInputProvisionConfig& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    std::shared_ptr<bool> alwaysAllocateGPU_ = nullptr;
    std::shared_ptr<vector<Models::DeployModelScopeModelInputProvisionConfigScheduledActions>> scheduledActions_ = nullptr;
    std::shared_ptr<int32_t> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif

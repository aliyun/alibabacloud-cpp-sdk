// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTECSSPECCOMPUTINGINSTANCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTECSSPECCOMPUTINGINSTANCECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeploymentEcsSpecComputingInstanceConfigComputingInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class DeploymentEcsSpecComputingInstanceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentEcsSpecComputingInstanceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ComputingInstances, computingInstances_);
      DARABONBA_PTR_TO_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentEcsSpecComputingInstanceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputingInstances, computingInstances_);
      DARABONBA_PTR_FROM_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
    };
    DeploymentEcsSpecComputingInstanceConfig() = default ;
    DeploymentEcsSpecComputingInstanceConfig(const DeploymentEcsSpecComputingInstanceConfig &) = default ;
    DeploymentEcsSpecComputingInstanceConfig(DeploymentEcsSpecComputingInstanceConfig &&) = default ;
    DeploymentEcsSpecComputingInstanceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentEcsSpecComputingInstanceConfig() = default ;
    DeploymentEcsSpecComputingInstanceConfig& operator=(const DeploymentEcsSpecComputingInstanceConfig &) = default ;
    DeploymentEcsSpecComputingInstanceConfig& operator=(DeploymentEcsSpecComputingInstanceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computingInstances_ == nullptr
        && return this->disableSpotProtectionPeriod_ == nullptr; };
    // computingInstances Field Functions 
    bool hasComputingInstances() const { return this->computingInstances_ != nullptr;};
    void deleteComputingInstances() { this->computingInstances_ = nullptr;};
    inline const vector<Models::DeploymentEcsSpecComputingInstanceConfigComputingInstances> & computingInstances() const { DARABONBA_PTR_GET_CONST(computingInstances_, vector<Models::DeploymentEcsSpecComputingInstanceConfigComputingInstances>) };
    inline vector<Models::DeploymentEcsSpecComputingInstanceConfigComputingInstances> computingInstances() { DARABONBA_PTR_GET(computingInstances_, vector<Models::DeploymentEcsSpecComputingInstanceConfigComputingInstances>) };
    inline DeploymentEcsSpecComputingInstanceConfig& setComputingInstances(const vector<Models::DeploymentEcsSpecComputingInstanceConfigComputingInstances> & computingInstances) { DARABONBA_PTR_SET_VALUE(computingInstances_, computingInstances) };
    inline DeploymentEcsSpecComputingInstanceConfig& setComputingInstances(vector<Models::DeploymentEcsSpecComputingInstanceConfigComputingInstances> && computingInstances) { DARABONBA_PTR_SET_RVALUE(computingInstances_, computingInstances) };


    // disableSpotProtectionPeriod Field Functions 
    bool hasDisableSpotProtectionPeriod() const { return this->disableSpotProtectionPeriod_ != nullptr;};
    void deleteDisableSpotProtectionPeriod() { this->disableSpotProtectionPeriod_ = nullptr;};
    inline bool disableSpotProtectionPeriod() const { DARABONBA_PTR_GET_DEFAULT(disableSpotProtectionPeriod_, false) };
    inline DeploymentEcsSpecComputingInstanceConfig& setDisableSpotProtectionPeriod(bool disableSpotProtectionPeriod) { DARABONBA_PTR_SET_VALUE(disableSpotProtectionPeriod_, disableSpotProtectionPeriod) };


  protected:
    // 机器资源配置
    std::shared_ptr<vector<Models::DeploymentEcsSpecComputingInstanceConfigComputingInstances>> computingInstances_ = nullptr;
    // 是否启用竞价保留时长
    std::shared_ptr<bool> disableSpotProtectionPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif

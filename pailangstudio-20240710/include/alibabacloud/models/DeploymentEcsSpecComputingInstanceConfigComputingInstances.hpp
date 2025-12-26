// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTECSSPECCOMPUTINGINSTANCECONFIGCOMPUTINGINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTECSSPECCOMPUTINGINSTANCECONFIGCOMPUTINGINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class DeploymentEcsSpecComputingInstanceConfigComputingInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentEcsSpecComputingInstanceConfigComputingInstances& obj) { 
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentEcsSpecComputingInstanceConfigComputingInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DeploymentEcsSpecComputingInstanceConfigComputingInstances() = default ;
    DeploymentEcsSpecComputingInstanceConfigComputingInstances(const DeploymentEcsSpecComputingInstanceConfigComputingInstances &) = default ;
    DeploymentEcsSpecComputingInstanceConfigComputingInstances(DeploymentEcsSpecComputingInstanceConfigComputingInstances &&) = default ;
    DeploymentEcsSpecComputingInstanceConfigComputingInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentEcsSpecComputingInstanceConfigComputingInstances() = default ;
    DeploymentEcsSpecComputingInstanceConfigComputingInstances& operator=(const DeploymentEcsSpecComputingInstanceConfigComputingInstances &) = default ;
    DeploymentEcsSpecComputingInstanceConfigComputingInstances& operator=(DeploymentEcsSpecComputingInstanceConfigComputingInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->spotPriceLimit_ == nullptr
        && return this->type_ == nullptr; };
    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline DeploymentEcsSpecComputingInstanceConfigComputingInstances& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeploymentEcsSpecComputingInstanceConfigComputingInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 竞价出价
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
    // 机型
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif

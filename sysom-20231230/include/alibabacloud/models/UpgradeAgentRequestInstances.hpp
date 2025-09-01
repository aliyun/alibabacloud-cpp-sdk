// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEAGENTREQUESTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEAGENTREQUESTINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpgradeAgentRequestInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeAgentRequestInstances& obj) { 
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeAgentRequestInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    UpgradeAgentRequestInstances() = default ;
    UpgradeAgentRequestInstances(const UpgradeAgentRequestInstances &) = default ;
    UpgradeAgentRequestInstances(UpgradeAgentRequestInstances &&) = default ;
    UpgradeAgentRequestInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeAgentRequestInstances() = default ;
    UpgradeAgentRequestInstances& operator=(const UpgradeAgentRequestInstances &) = default ;
    UpgradeAgentRequestInstances& operator=(UpgradeAgentRequestInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instance_ != nullptr
        && this->region_ != nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline UpgradeAgentRequestInstances& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpgradeAgentRequestInstances& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instance_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif

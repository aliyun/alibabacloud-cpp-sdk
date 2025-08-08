// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEDEPLOYMENTSPEC_HPP_
#define ALIBABACLOUD_MODELS_SERVICEDEPLOYMENTSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ServiceDeploymentSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceDeploymentSpec& obj) { 
      DARABONBA_PTR_TO_JSON(baseline, baseline_);
      DARABONBA_PTR_TO_JSON(changes, changes_);
      DARABONBA_PTR_TO_JSON(skipRemoveResources, skipRemoveResources_);
      DARABONBA_PTR_TO_JSON(target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceDeploymentSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(baseline, baseline_);
      DARABONBA_PTR_FROM_JSON(changes, changes_);
      DARABONBA_PTR_FROM_JSON(skipRemoveResources, skipRemoveResources_);
      DARABONBA_PTR_FROM_JSON(target, target_);
    };
    ServiceDeploymentSpec() = default ;
    ServiceDeploymentSpec(const ServiceDeploymentSpec &) = default ;
    ServiceDeploymentSpec(ServiceDeploymentSpec &&) = default ;
    ServiceDeploymentSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceDeploymentSpec() = default ;
    ServiceDeploymentSpec& operator=(const ServiceDeploymentSpec &) = default ;
    ServiceDeploymentSpec& operator=(ServiceDeploymentSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseline_ != nullptr
        && this->changes_ != nullptr && this->skipRemoveResources_ != nullptr && this->target_ != nullptr; };
    // baseline Field Functions 
    bool hasBaseline() const { return this->baseline_ != nullptr;};
    void deleteBaseline() { this->baseline_ = nullptr;};
    inline const ServiceBaseline & baseline() const { DARABONBA_PTR_GET_CONST(baseline_, ServiceBaseline) };
    inline ServiceBaseline baseline() { DARABONBA_PTR_GET(baseline_, ServiceBaseline) };
    inline ServiceDeploymentSpec& setBaseline(const ServiceBaseline & baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };
    inline ServiceDeploymentSpec& setBaseline(ServiceBaseline && baseline) { DARABONBA_PTR_SET_RVALUE(baseline_, baseline) };


    // changes Field Functions 
    bool hasChanges() const { return this->changes_ != nullptr;};
    void deleteChanges() { this->changes_ = nullptr;};
    inline const ServiceChanges & changes() const { DARABONBA_PTR_GET_CONST(changes_, ServiceChanges) };
    inline ServiceChanges changes() { DARABONBA_PTR_GET(changes_, ServiceChanges) };
    inline ServiceDeploymentSpec& setChanges(const ServiceChanges & changes) { DARABONBA_PTR_SET_VALUE(changes_, changes) };
    inline ServiceDeploymentSpec& setChanges(ServiceChanges && changes) { DARABONBA_PTR_SET_RVALUE(changes_, changes) };


    // skipRemoveResources Field Functions 
    bool hasSkipRemoveResources() const { return this->skipRemoveResources_ != nullptr;};
    void deleteSkipRemoveResources() { this->skipRemoveResources_ = nullptr;};
    inline bool skipRemoveResources() const { DARABONBA_PTR_GET_DEFAULT(skipRemoveResources_, false) };
    inline ServiceDeploymentSpec& setSkipRemoveResources(bool skipRemoveResources) { DARABONBA_PTR_SET_VALUE(skipRemoveResources_, skipRemoveResources) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const ServiceBaseline & target() const { DARABONBA_PTR_GET_CONST(target_, ServiceBaseline) };
    inline ServiceBaseline target() { DARABONBA_PTR_GET(target_, ServiceBaseline) };
    inline ServiceDeploymentSpec& setTarget(const ServiceBaseline & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline ServiceDeploymentSpec& setTarget(ServiceBaseline && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    std::shared_ptr<ServiceBaseline> baseline_ = nullptr;
    std::shared_ptr<ServiceChanges> changes_ = nullptr;
    std::shared_ptr<bool> skipRemoveResources_ = nullptr;
    std::shared_ptr<ServiceBaseline> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif

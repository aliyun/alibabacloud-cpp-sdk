// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETARGETCONFIGURATIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATETARGETCONFIGURATIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TargetConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateTargetConfigurationInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTargetConfigurationInput& obj) { 
      DARABONBA_PTR_TO_JSON(domainId, domainId_);
      DARABONBA_PTR_TO_JSON(targetConfiguration, targetConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTargetConfigurationInput& obj) { 
      DARABONBA_PTR_FROM_JSON(domainId, domainId_);
      DARABONBA_PTR_FROM_JSON(targetConfiguration, targetConfiguration_);
    };
    UpdateTargetConfigurationInput() = default ;
    UpdateTargetConfigurationInput(const UpdateTargetConfigurationInput &) = default ;
    UpdateTargetConfigurationInput(UpdateTargetConfigurationInput &&) = default ;
    UpdateTargetConfigurationInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTargetConfigurationInput() = default ;
    UpdateTargetConfigurationInput& operator=(const UpdateTargetConfigurationInput &) = default ;
    UpdateTargetConfigurationInput& operator=(UpdateTargetConfigurationInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainId_ == nullptr
        && this->targetConfiguration_ == nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline UpdateTargetConfigurationInput& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // targetConfiguration Field Functions 
    bool hasTargetConfiguration() const { return this->targetConfiguration_ != nullptr;};
    void deleteTargetConfiguration() { this->targetConfiguration_ = nullptr;};
    inline const TargetConfiguration & getTargetConfiguration() const { DARABONBA_PTR_GET_CONST(targetConfiguration_, TargetConfiguration) };
    inline TargetConfiguration getTargetConfiguration() { DARABONBA_PTR_GET(targetConfiguration_, TargetConfiguration) };
    inline UpdateTargetConfigurationInput& setTargetConfiguration(const TargetConfiguration & targetConfiguration) { DARABONBA_PTR_SET_VALUE(targetConfiguration_, targetConfiguration) };
    inline UpdateTargetConfigurationInput& setTargetConfiguration(TargetConfiguration && targetConfiguration) { DARABONBA_PTR_SET_RVALUE(targetConfiguration_, targetConfiguration) };


  protected:
    shared_ptr<string> domainId_ {};
    shared_ptr<TargetConfiguration> targetConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif

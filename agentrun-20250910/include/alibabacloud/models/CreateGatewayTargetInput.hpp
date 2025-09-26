// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYTARGETINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYTARGETINPUT_HPP_
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
  class CreateGatewayTargetInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayTargetInput& obj) { 
      DARABONBA_PTR_TO_JSON(domainId, domainId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(targetConfiguration, targetConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayTargetInput& obj) { 
      DARABONBA_PTR_FROM_JSON(domainId, domainId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(targetConfiguration, targetConfiguration_);
    };
    CreateGatewayTargetInput() = default ;
    CreateGatewayTargetInput(const CreateGatewayTargetInput &) = default ;
    CreateGatewayTargetInput(CreateGatewayTargetInput &&) = default ;
    CreateGatewayTargetInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayTargetInput() = default ;
    CreateGatewayTargetInput& operator=(const CreateGatewayTargetInput &) = default ;
    CreateGatewayTargetInput& operator=(CreateGatewayTargetInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainId_ != nullptr
        && this->name_ != nullptr && this->targetConfiguration_ != nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline CreateGatewayTargetInput& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateGatewayTargetInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // targetConfiguration Field Functions 
    bool hasTargetConfiguration() const { return this->targetConfiguration_ != nullptr;};
    void deleteTargetConfiguration() { this->targetConfiguration_ = nullptr;};
    inline const TargetConfiguration & targetConfiguration() const { DARABONBA_PTR_GET_CONST(targetConfiguration_, TargetConfiguration) };
    inline TargetConfiguration targetConfiguration() { DARABONBA_PTR_GET(targetConfiguration_, TargetConfiguration) };
    inline CreateGatewayTargetInput& setTargetConfiguration(const TargetConfiguration & targetConfiguration) { DARABONBA_PTR_SET_VALUE(targetConfiguration_, targetConfiguration) };
    inline CreateGatewayTargetInput& setTargetConfiguration(TargetConfiguration && targetConfiguration) { DARABONBA_PTR_SET_RVALUE(targetConfiguration_, targetConfiguration) };


  protected:
    std::shared_ptr<string> domainId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<TargetConfiguration> targetConfiguration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif

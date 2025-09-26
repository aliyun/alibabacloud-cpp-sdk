// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GatewayNetworkConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateGatewayInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayInput& obj) { 
      DARABONBA_PTR_TO_JSON(identityId, identityId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayInput& obj) { 
      DARABONBA_PTR_FROM_JSON(identityId, identityId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateGatewayInput() = default ;
    CreateGatewayInput(const CreateGatewayInput &) = default ;
    CreateGatewayInput(CreateGatewayInput &&) = default ;
    CreateGatewayInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayInput() = default ;
    CreateGatewayInput& operator=(const CreateGatewayInput &) = default ;
    CreateGatewayInput& operator=(CreateGatewayInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->identityId_ != nullptr
        && this->name_ != nullptr && this->networkConfiguration_ != nullptr && this->type_ != nullptr; };
    // identityId Field Functions 
    bool hasIdentityId() const { return this->identityId_ != nullptr;};
    void deleteIdentityId() { this->identityId_ = nullptr;};
    inline string identityId() const { DARABONBA_PTR_GET_DEFAULT(identityId_, "") };
    inline CreateGatewayInput& setIdentityId(string identityId) { DARABONBA_PTR_SET_VALUE(identityId_, identityId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateGatewayInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const GatewayNetworkConfiguration & networkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, GatewayNetworkConfiguration) };
    inline GatewayNetworkConfiguration networkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, GatewayNetworkConfiguration) };
    inline CreateGatewayInput& setNetworkConfiguration(const GatewayNetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline CreateGatewayInput& setNetworkConfiguration(GatewayNetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateGatewayInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> identityId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<GatewayNetworkConfiguration> networkConfiguration_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif

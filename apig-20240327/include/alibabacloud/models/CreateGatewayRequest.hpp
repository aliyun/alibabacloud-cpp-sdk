// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateGatewayRequestLogConfig.hpp>
#include <alibabacloud/models/CreateGatewayRequestNetworkAccessConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateGatewayRequestTag.hpp>
#include <alibabacloud/models/CreateGatewayRequestZoneConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(gatewayEdition, gatewayEdition_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkAccessConfig, networkAccessConfig_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(zoneConfig, zoneConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(gatewayEdition, gatewayEdition_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkAccessConfig, networkAccessConfig_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(zoneConfig, zoneConfig_);
    };
    CreateGatewayRequest() = default ;
    CreateGatewayRequest(const CreateGatewayRequest &) = default ;
    CreateGatewayRequest(CreateGatewayRequest &&) = default ;
    CreateGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayRequest() = default ;
    CreateGatewayRequest& operator=(const CreateGatewayRequest &) = default ;
    CreateGatewayRequest& operator=(CreateGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->gatewayEdition_ != nullptr && this->gatewayType_ != nullptr && this->logConfig_ != nullptr && this->name_ != nullptr && this->networkAccessConfig_ != nullptr
        && this->resourceGroupId_ != nullptr && this->spec_ != nullptr && this->tag_ != nullptr && this->vpcId_ != nullptr && this->zoneConfig_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateGatewayRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // gatewayEdition Field Functions 
    bool hasGatewayEdition() const { return this->gatewayEdition_ != nullptr;};
    void deleteGatewayEdition() { this->gatewayEdition_ = nullptr;};
    inline string gatewayEdition() const { DARABONBA_PTR_GET_DEFAULT(gatewayEdition_, "") };
    inline CreateGatewayRequest& setGatewayEdition(string gatewayEdition) { DARABONBA_PTR_SET_VALUE(gatewayEdition_, gatewayEdition) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateGatewayRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const CreateGatewayRequestLogConfig & logConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, CreateGatewayRequestLogConfig) };
    inline CreateGatewayRequestLogConfig logConfig() { DARABONBA_PTR_GET(logConfig_, CreateGatewayRequestLogConfig) };
    inline CreateGatewayRequest& setLogConfig(const CreateGatewayRequestLogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline CreateGatewayRequest& setLogConfig(CreateGatewayRequestLogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkAccessConfig Field Functions 
    bool hasNetworkAccessConfig() const { return this->networkAccessConfig_ != nullptr;};
    void deleteNetworkAccessConfig() { this->networkAccessConfig_ = nullptr;};
    inline const CreateGatewayRequestNetworkAccessConfig & networkAccessConfig() const { DARABONBA_PTR_GET_CONST(networkAccessConfig_, CreateGatewayRequestNetworkAccessConfig) };
    inline CreateGatewayRequestNetworkAccessConfig networkAccessConfig() { DARABONBA_PTR_GET(networkAccessConfig_, CreateGatewayRequestNetworkAccessConfig) };
    inline CreateGatewayRequest& setNetworkAccessConfig(const CreateGatewayRequestNetworkAccessConfig & networkAccessConfig) { DARABONBA_PTR_SET_VALUE(networkAccessConfig_, networkAccessConfig) };
    inline CreateGatewayRequest& setNetworkAccessConfig(CreateGatewayRequestNetworkAccessConfig && networkAccessConfig) { DARABONBA_PTR_SET_RVALUE(networkAccessConfig_, networkAccessConfig) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateGatewayRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateGatewayRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateGatewayRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateGatewayRequestTag>) };
    inline vector<CreateGatewayRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateGatewayRequestTag>) };
    inline CreateGatewayRequest& setTag(const vector<CreateGatewayRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateGatewayRequest& setTag(vector<CreateGatewayRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateGatewayRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneConfig Field Functions 
    bool hasZoneConfig() const { return this->zoneConfig_ != nullptr;};
    void deleteZoneConfig() { this->zoneConfig_ = nullptr;};
    inline const CreateGatewayRequestZoneConfig & zoneConfig() const { DARABONBA_PTR_GET_CONST(zoneConfig_, CreateGatewayRequestZoneConfig) };
    inline CreateGatewayRequestZoneConfig zoneConfig() { DARABONBA_PTR_GET(zoneConfig_, CreateGatewayRequestZoneConfig) };
    inline CreateGatewayRequest& setZoneConfig(const CreateGatewayRequestZoneConfig & zoneConfig) { DARABONBA_PTR_SET_VALUE(zoneConfig_, zoneConfig) };
    inline CreateGatewayRequest& setZoneConfig(CreateGatewayRequestZoneConfig && zoneConfig) { DARABONBA_PTR_SET_RVALUE(zoneConfig_, zoneConfig) };


  protected:
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> gatewayEdition_ = nullptr;
    std::shared_ptr<string> gatewayType_ = nullptr;
    std::shared_ptr<CreateGatewayRequestLogConfig> logConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<CreateGatewayRequestNetworkAccessConfig> networkAccessConfig_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<vector<CreateGatewayRequestTag>> tag_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<CreateGatewayRequestZoneConfig> zoneConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANDATTACHPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANDATTACHPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateAndAttachPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAndAttachPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceIds, attachResourceIds_);
      DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAndAttachPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceIds, attachResourceIds_);
      DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateAndAttachPolicyRequest() = default ;
    UpdateAndAttachPolicyRequest(const UpdateAndAttachPolicyRequest &) = default ;
    UpdateAndAttachPolicyRequest(UpdateAndAttachPolicyRequest &&) = default ;
    UpdateAndAttachPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAndAttachPolicyRequest() = default ;
    UpdateAndAttachPolicyRequest& operator=(const UpdateAndAttachPolicyRequest &) = default ;
    UpdateAndAttachPolicyRequest& operator=(UpdateAndAttachPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachResourceIds_ == nullptr
        && return this->attachResourceType_ == nullptr && return this->config_ == nullptr && return this->description_ == nullptr && return this->environmentId_ == nullptr && return this->gatewayId_ == nullptr
        && return this->name_ == nullptr; };
    // attachResourceIds Field Functions 
    bool hasAttachResourceIds() const { return this->attachResourceIds_ != nullptr;};
    void deleteAttachResourceIds() { this->attachResourceIds_ = nullptr;};
    inline const vector<string> & attachResourceIds() const { DARABONBA_PTR_GET_CONST(attachResourceIds_, vector<string>) };
    inline vector<string> attachResourceIds() { DARABONBA_PTR_GET(attachResourceIds_, vector<string>) };
    inline UpdateAndAttachPolicyRequest& setAttachResourceIds(const vector<string> & attachResourceIds) { DARABONBA_PTR_SET_VALUE(attachResourceIds_, attachResourceIds) };
    inline UpdateAndAttachPolicyRequest& setAttachResourceIds(vector<string> && attachResourceIds) { DARABONBA_PTR_SET_RVALUE(attachResourceIds_, attachResourceIds) };


    // attachResourceType Field Functions 
    bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
    void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
    inline string attachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
    inline UpdateAndAttachPolicyRequest& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateAndAttachPolicyRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAndAttachPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline UpdateAndAttachPolicyRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline UpdateAndAttachPolicyRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAndAttachPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The association IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> attachResourceIds_ = nullptr;
    // The supported associated resource type. Valid values:
    // 
    // *   HttpApi: an HTTP API
    // *   Operation: an operation in an HTTP API
    // *   GatewayRoute: a route
    // *   GatewayService: a service
    // *   GatewayServicePort: a service port
    // *   Domain: a domain name
    // *   Gateway: an instance
    // 
    // This parameter is required.
    std::shared_ptr<string> attachResourceType_ = nullptr;
    // The policy configurations. The value is a JSON string.
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The policy description.
    std::shared_ptr<string> description_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The policy name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTROUTERCHILDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTROUTERCHILDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class ModifyExpressConnectRouterChildInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyExpressConnectRouterChildInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyExpressConnectRouterChildInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ModifyExpressConnectRouterChildInstanceRequest() = default ;
    ModifyExpressConnectRouterChildInstanceRequest(const ModifyExpressConnectRouterChildInstanceRequest &) = default ;
    ModifyExpressConnectRouterChildInstanceRequest(ModifyExpressConnectRouterChildInstanceRequest &&) = default ;
    ModifyExpressConnectRouterChildInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyExpressConnectRouterChildInstanceRequest() = default ;
    ModifyExpressConnectRouterChildInstanceRequest& operator=(const ModifyExpressConnectRouterChildInstanceRequest &) = default ;
    ModifyExpressConnectRouterChildInstanceRequest& operator=(ModifyExpressConnectRouterChildInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childInstanceId_ == nullptr
        && this->childInstanceType_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->ecrId_ == nullptr
        && this->version_ == nullptr; };
    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string getChildInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline ModifyExpressConnectRouterChildInstanceRequest& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string getChildInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline ModifyExpressConnectRouterChildInstanceRequest& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyExpressConnectRouterChildInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyExpressConnectRouterChildInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyExpressConnectRouterChildInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline ModifyExpressConnectRouterChildInstanceRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ModifyExpressConnectRouterChildInstanceRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The instance ID of the VBR.
    // 
    // This parameter is required.
    shared_ptr<string> childInstanceId_ {};
    // The type of the network instance. Valid values:
    // - **VBR**: VBR instance.
    // 
    // This parameter is required.
    shared_ptr<string> childInstanceType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a parameter value from your client to ensure that the parameter value is unique among different requests. The client token only supports ASCII characters.
    // 
    // > 
    // > - If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request is different.
    shared_ptr<string> clientToken_ {};
    // The description of the child instance. The description must be 0 to 128 characters in length.
    shared_ptr<string> description_ {};
    // Specifies whether the request is a dry run only. Valid values:
    // 
    // - **true**: performs a dry run and does not modify service resources.
    // - **false** (default): sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect Router (ECR).
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif

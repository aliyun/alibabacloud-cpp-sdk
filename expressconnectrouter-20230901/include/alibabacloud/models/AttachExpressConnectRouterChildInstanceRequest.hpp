// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHEXPRESSCONNECTROUTERCHILDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHEXPRESSCONNECTROUTERCHILDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class AttachExpressConnectRouterChildInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachExpressConnectRouterChildInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, AttachExpressConnectRouterChildInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    AttachExpressConnectRouterChildInstanceRequest() = default ;
    AttachExpressConnectRouterChildInstanceRequest(const AttachExpressConnectRouterChildInstanceRequest &) = default ;
    AttachExpressConnectRouterChildInstanceRequest(AttachExpressConnectRouterChildInstanceRequest &&) = default ;
    AttachExpressConnectRouterChildInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachExpressConnectRouterChildInstanceRequest() = default ;
    AttachExpressConnectRouterChildInstanceRequest& operator=(const AttachExpressConnectRouterChildInstanceRequest &) = default ;
    AttachExpressConnectRouterChildInstanceRequest& operator=(AttachExpressConnectRouterChildInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childInstanceId_ == nullptr
        && this->childInstanceOwnerId_ == nullptr && this->childInstanceRegionId_ == nullptr && this->childInstanceType_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr
        && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->version_ == nullptr; };
    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string getChildInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline AttachExpressConnectRouterChildInstanceRequest& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceOwnerId Field Functions 
    bool hasChildInstanceOwnerId() const { return this->childInstanceOwnerId_ != nullptr;};
    void deleteChildInstanceOwnerId() { this->childInstanceOwnerId_ = nullptr;};
    inline int64_t getChildInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceOwnerId_, 0L) };
    inline AttachExpressConnectRouterChildInstanceRequest& setChildInstanceOwnerId(int64_t childInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(childInstanceOwnerId_, childInstanceOwnerId) };


    // childInstanceRegionId Field Functions 
    bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
    void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
    inline string getChildInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
    inline AttachExpressConnectRouterChildInstanceRequest& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string getChildInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline AttachExpressConnectRouterChildInstanceRequest& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachExpressConnectRouterChildInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AttachExpressConnectRouterChildInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AttachExpressConnectRouterChildInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline AttachExpressConnectRouterChildInstanceRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline AttachExpressConnectRouterChildInstanceRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the VBR instance.
    // 
    // This parameter is required.
    shared_ptr<string> childInstanceId_ {};
    // The Alibaba Cloud account ID of the account to which the VBR instance belongs.
    // 
    // > If you want to load a network instance that belongs to a different Alibaba Cloud account, this parameter is required.
    shared_ptr<int64_t> childInstanceOwnerId_ {};
    // The region ID of the VBR instance.
    // 
    // This parameter is required.
    shared_ptr<string> childInstanceRegionId_ {};
    // The type of the network instance. Valid value: **VBR** (Virtual Border Router).
    // 
    // This parameter is required.
    shared_ptr<string> childInstanceType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // The description of the child instance. The description must be 0 to 128 characters in length.
    shared_ptr<string> description_ {};
    // Specifies whether it is only a dry run for this request. Valid values:
    // - **true**: performs a dry run for the request without modifying EPS resources.
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

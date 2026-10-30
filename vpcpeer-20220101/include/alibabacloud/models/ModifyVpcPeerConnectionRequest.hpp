// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCPEERCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCPEERCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class ModifyVpcPeerConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcPeerConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LinkType, linkType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcPeerConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LinkType, linkType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ModifyVpcPeerConnectionRequest() = default ;
    ModifyVpcPeerConnectionRequest(const ModifyVpcPeerConnectionRequest &) = default ;
    ModifyVpcPeerConnectionRequest(ModifyVpcPeerConnectionRequest &&) = default ;
    ModifyVpcPeerConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcPeerConnectionRequest() = default ;
    ModifyVpcPeerConnectionRequest& operator=(const ModifyVpcPeerConnectionRequest &) = default ;
    ModifyVpcPeerConnectionRequest& operator=(ModifyVpcPeerConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->enableJumboFrame_ == nullptr && this->instanceId_ == nullptr
        && this->linkType_ == nullptr && this->name_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ModifyVpcPeerConnectionRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVpcPeerConnectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVpcPeerConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyVpcPeerConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline ModifyVpcPeerConnectionRequest& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyVpcPeerConnectionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // linkType Field Functions 
    bool hasLinkType() const { return this->linkType_ != nullptr;};
    void deleteLinkType() { this->linkType_ = nullptr;};
    inline string getLinkType() const { DARABONBA_PTR_GET_DEFAULT(linkType_, "") };
    inline ModifyVpcPeerConnectionRequest& setLinkType(string linkType) { DARABONBA_PTR_SET_VALUE(linkType_, linkType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVpcPeerConnectionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The new bandwidth of the VPC peering connection. Unit: Mbit/s. The value must be an integer greater than 0.
    shared_ptr<int32_t> bandwidth_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that the value is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The new description of the VPC peering connection.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run. Valid values:
    // - **true**: performs a dry run without modifying the information. The system checks whether required parameters are specified, the request format is valid, and service limits are met. If the request fails the check, an error is returned. If the request passes the check, the `DryRunOperation` error code is returned.
    // - **false** (default): sends a normal request. If the request passes the check, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether the jumbo frame feature is enabled for the VPC peering connection. Valid values:
    // - true: enabled.
    // - false: disabled.
    // > Note: To specify this parameter, make sure that you create a cross-region peering connection.
    shared_ptr<bool> enableJumboFrame_ {};
    // The instance ID of the VPC peering connection whose name or description you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The link type.
    // 
    // Valid values: Platinum and Gold. Default value: Gold.
    // 
    // > To specify this parameter, make sure that you create a cross-region peering connection.
    shared_ptr<string> linkType_ {};
    // The new name of the VPC peering connection.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif

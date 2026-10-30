// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTVPCPEERCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTVPCPEERCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class AcceptVpcPeerConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptVpcPeerConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, AcceptVpcPeerConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    AcceptVpcPeerConnectionRequest() = default ;
    AcceptVpcPeerConnectionRequest(const AcceptVpcPeerConnectionRequest &) = default ;
    AcceptVpcPeerConnectionRequest(AcceptVpcPeerConnectionRequest &&) = default ;
    AcceptVpcPeerConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptVpcPeerConnectionRequest() = default ;
    AcceptVpcPeerConnectionRequest& operator=(const AcceptVpcPeerConnectionRequest &) = default ;
    AcceptVpcPeerConnectionRequest& operator=(AcceptVpcPeerConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the resource. You must specify at least one tag key and can specify up to 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the resource. You must specify at least one tag value and can specify up to 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->instanceId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AcceptVpcPeerConnectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AcceptVpcPeerConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AcceptVpcPeerConnectionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AcceptVpcPeerConnectionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AcceptVpcPeerConnectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AcceptVpcPeerConnectionRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AcceptVpcPeerConnectionRequest::Tag>) };
    inline vector<AcceptVpcPeerConnectionRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<AcceptVpcPeerConnectionRequest::Tag>) };
    inline AcceptVpcPeerConnectionRequest& setTag(const vector<AcceptVpcPeerConnectionRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AcceptVpcPeerConnectionRequest& setTag(vector<AcceptVpcPeerConnectionRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the value from your client. Make sure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run on the request. Valid values:
    // - **true**: performs only a dry run. The system does not accept the VPC peering connection request. The system checks whether the required parameters are specified, the request format is valid, and the service limits are met. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): performs a dry run and sends the actual request. If the request passes the dry run, the system returns an HTTP 2xx status code and performs the operation.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the VPC peering connection to be accepted.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the resource group.
    // 
    // For more information about resource groups, see [What is a resource group?](https://help.aliyun.com/document_detail/94475.html).
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The tag information.
    shared_ptr<vector<AcceptVpcPeerConnectionRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif

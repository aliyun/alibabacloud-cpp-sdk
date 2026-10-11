// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEGRESSPROXYCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEGRESSPROXYCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class CreateEgressProxyConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEgressProxyConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DefaultRulePhaseActions, defaultRulePhaseActions_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationName, egressProxyConfigurationName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEgressProxyConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DefaultRulePhaseActions, defaultRulePhaseActions_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationName, egressProxyConfigurationName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateEgressProxyConfigurationRequest() = default ;
    CreateEgressProxyConfigurationRequest(const CreateEgressProxyConfigurationRequest &) = default ;
    CreateEgressProxyConfigurationRequest(CreateEgressProxyConfigurationRequest &&) = default ;
    CreateEgressProxyConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEgressProxyConfigurationRequest() = default ;
    CreateEgressProxyConfigurationRequest& operator=(const CreateEgressProxyConfigurationRequest &) = default ;
    CreateEgressProxyConfigurationRequest& operator=(CreateEgressProxyConfigurationRequest &&) = default ;
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
      // The tag key. The key can be up to 128 characters in length, and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The value can be up to 256 characters in length, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class DefaultRulePhaseActions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultRulePhaseActions& obj) { 
        DARABONBA_PTR_TO_JSON(PostResponse, postResponse_);
        DARABONBA_PTR_TO_JSON(PreDns, preDns_);
        DARABONBA_PTR_TO_JSON(PreRequest, preRequest_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultRulePhaseActions& obj) { 
        DARABONBA_PTR_FROM_JSON(PostResponse, postResponse_);
        DARABONBA_PTR_FROM_JSON(PreDns, preDns_);
        DARABONBA_PTR_FROM_JSON(PreRequest, preRequest_);
      };
      DefaultRulePhaseActions() = default ;
      DefaultRulePhaseActions(const DefaultRulePhaseActions &) = default ;
      DefaultRulePhaseActions(DefaultRulePhaseActions &&) = default ;
      DefaultRulePhaseActions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultRulePhaseActions() = default ;
      DefaultRulePhaseActions& operator=(const DefaultRulePhaseActions &) = default ;
      DefaultRulePhaseActions& operator=(DefaultRulePhaseActions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->postResponse_ == nullptr
        && this->preDns_ == nullptr && this->preRequest_ == nullptr; };
      // postResponse Field Functions 
      bool hasPostResponse() const { return this->postResponse_ != nullptr;};
      void deletePostResponse() { this->postResponse_ = nullptr;};
      inline string getPostResponse() const { DARABONBA_PTR_GET_DEFAULT(postResponse_, "") };
      inline DefaultRulePhaseActions& setPostResponse(string postResponse) { DARABONBA_PTR_SET_VALUE(postResponse_, postResponse) };


      // preDns Field Functions 
      bool hasPreDns() const { return this->preDns_ != nullptr;};
      void deletePreDns() { this->preDns_ = nullptr;};
      inline string getPreDns() const { DARABONBA_PTR_GET_DEFAULT(preDns_, "") };
      inline DefaultRulePhaseActions& setPreDns(string preDns) { DARABONBA_PTR_SET_VALUE(preDns_, preDns) };


      // preRequest Field Functions 
      bool hasPreRequest() const { return this->preRequest_ != nullptr;};
      void deletePreRequest() { this->preRequest_ = nullptr;};
      inline string getPreRequest() const { DARABONBA_PTR_GET_DEFAULT(preRequest_, "") };
      inline DefaultRulePhaseActions& setPreRequest(string preRequest) { DARABONBA_PTR_SET_VALUE(preRequest_, preRequest) };


    protected:
      // The default action to be performed in the PostResponse phase (after the response is returned) when traffic does not match any rules. This phase supports only the **Allow** value (default), which allows the traffic to pass through.
      shared_ptr<string> postResponse_ {};
      // The default action to be performed in the PreDns phase (before DNS resolution) when traffic does not match any rules. Valid values:
      // 
      // - **Allow** (default): allows the traffic to pass through.
      // 
      // - **Deny**: denies the traffic.
      shared_ptr<string> preDns_ {};
      // The default action to be performed in the PreRequest phase (before the request is forwarded) when traffic does not match any rules. Valid values:
      // 
      // - **Allow** (default): allows the traffic to pass through.
      // 
      // - **Deny**: denies the traffic.
      shared_ptr<string> preRequest_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->defaultRulePhaseActions_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->egressProxyConfigurationName_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEgressProxyConfigurationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // defaultRulePhaseActions Field Functions 
    bool hasDefaultRulePhaseActions() const { return this->defaultRulePhaseActions_ != nullptr;};
    void deleteDefaultRulePhaseActions() { this->defaultRulePhaseActions_ = nullptr;};
    inline const CreateEgressProxyConfigurationRequest::DefaultRulePhaseActions & getDefaultRulePhaseActions() const { DARABONBA_PTR_GET_CONST(defaultRulePhaseActions_, CreateEgressProxyConfigurationRequest::DefaultRulePhaseActions) };
    inline CreateEgressProxyConfigurationRequest::DefaultRulePhaseActions getDefaultRulePhaseActions() { DARABONBA_PTR_GET(defaultRulePhaseActions_, CreateEgressProxyConfigurationRequest::DefaultRulePhaseActions) };
    inline CreateEgressProxyConfigurationRequest& setDefaultRulePhaseActions(const CreateEgressProxyConfigurationRequest::DefaultRulePhaseActions & defaultRulePhaseActions) { DARABONBA_PTR_SET_VALUE(defaultRulePhaseActions_, defaultRulePhaseActions) };
    inline CreateEgressProxyConfigurationRequest& setDefaultRulePhaseActions(CreateEgressProxyConfigurationRequest::DefaultRulePhaseActions && defaultRulePhaseActions) { DARABONBA_PTR_SET_RVALUE(defaultRulePhaseActions_, defaultRulePhaseActions) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEgressProxyConfigurationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateEgressProxyConfigurationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyConfigurationName Field Functions 
    bool hasEgressProxyConfigurationName() const { return this->egressProxyConfigurationName_ != nullptr;};
    void deleteEgressProxyConfigurationName() { this->egressProxyConfigurationName_ = nullptr;};
    inline string getEgressProxyConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationName_, "") };
    inline CreateEgressProxyConfigurationRequest& setEgressProxyConfigurationName(string egressProxyConfigurationName) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationName_, egressProxyConfigurationName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateEgressProxyConfigurationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateEgressProxyConfigurationRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateEgressProxyConfigurationRequest::Tag>) };
    inline vector<CreateEgressProxyConfigurationRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateEgressProxyConfigurationRequest::Tag>) };
    inline CreateEgressProxyConfigurationRequest& setTag(const vector<CreateEgressProxyConfigurationRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateEgressProxyConfigurationRequest& setTag(vector<CreateEgressProxyConfigurationRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > Note If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request is different.
    shared_ptr<string> clientToken_ {};
    // The default actions to be performed in each effective phase (PreDns, PreRequest, and PostResponse) when traffic does not match any rules.
    shared_ptr<CreateEgressProxyConfigurationRequest::DefaultRulePhaseActions> defaultRulePhaseActions_ {};
    // The description of the egress proxy configuration. The description must be 2 to 256 characters in length, and can contain Chinese characters, letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run of the request. Valid values:
    // 
    // - **true**: performs a dry run and does not create the egress proxy configuration. The system checks whether the required parameters are specified, the request format is valid, and the service limits are met. If the request fails the dry run, the corresponding error code is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // 
    // - **false** (default): sends a normal request. If the request passes the check, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The name of the egress proxy configuration. The name must be 2 to 128 characters in length, and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyConfigurationName_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The list of tags.
    shared_ptr<vector<CreateEgressProxyConfigurationRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif

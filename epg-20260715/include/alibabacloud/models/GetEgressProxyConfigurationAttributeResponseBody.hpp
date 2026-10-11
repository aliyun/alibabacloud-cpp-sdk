// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEGRESSPROXYCONFIGURATIONATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEGRESSPROXYCONFIGURATIONATTRIBUTERESPONSEBODY_HPP_
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
  class GetEgressProxyConfigurationAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEgressProxyConfigurationAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultRulePhaseActions, defaultRulePhaseActions_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationName, egressProxyConfigurationName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleGroups, ruleGroups_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetEgressProxyConfigurationAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultRulePhaseActions, defaultRulePhaseActions_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationName, egressProxyConfigurationName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleGroups, ruleGroups_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetEgressProxyConfigurationAttributeResponseBody() = default ;
    GetEgressProxyConfigurationAttributeResponseBody(const GetEgressProxyConfigurationAttributeResponseBody &) = default ;
    GetEgressProxyConfigurationAttributeResponseBody(GetEgressProxyConfigurationAttributeResponseBody &&) = default ;
    GetEgressProxyConfigurationAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEgressProxyConfigurationAttributeResponseBody() = default ;
    GetEgressProxyConfigurationAttributeResponseBody& operator=(const GetEgressProxyConfigurationAttributeResponseBody &) = default ;
    GetEgressProxyConfigurationAttributeResponseBody& operator=(GetEgressProxyConfigurationAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. The key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The value can be up to 256 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class RuleGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleGroups& obj) { 
        DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
      };
      friend void from_json(const Darabonba::Json& j, RuleGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
      };
      RuleGroups() = default ;
      RuleGroups(const RuleGroups &) = default ;
      RuleGroups(RuleGroups &&) = default ;
      RuleGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleGroups() = default ;
      RuleGroups& operator=(const RuleGroups &) = default ;
      RuleGroups& operator=(RuleGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->egressProxyRuleGroupId_ == nullptr
        && this->priority_ == nullptr; };
      // egressProxyRuleGroupId Field Functions 
      bool hasEgressProxyRuleGroupId() const { return this->egressProxyRuleGroupId_ != nullptr;};
      void deleteEgressProxyRuleGroupId() { this->egressProxyRuleGroupId_ = nullptr;};
      inline string getEgressProxyRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupId_, "") };
      inline RuleGroups& setEgressProxyRuleGroupId(string egressProxyRuleGroupId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupId_, egressProxyRuleGroupId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline RuleGroups& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    protected:
      // The ID of the egress rule group.
      shared_ptr<string> egressProxyRuleGroupId_ {};
      // The priority of the egress rule group in the egress proxy configuration. Valid values: 1 to 1000. A smaller value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
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
      // The default action executed in the PostResponse phase (after a response is returned) when traffic does not match any rules. This phase only supports the value **Allow** (default), which indicates that the traffic is allowed.
      shared_ptr<string> postResponse_ {};
      // The default action executed in the PreDns phase (before DNS resolution) when traffic does not match any rules. Valid values:
      // 
      // - **Allow** (default): allows the traffic.
      // 
      // - **Deny**: denies the traffic.
      shared_ptr<string> preDns_ {};
      // The default action executed in the PreRequest phase (before a request is forwarded) when traffic does not match any rules. Valid values:
      // 
      // - **Allow** (default): allows the traffic.
      // 
      // - **Deny**: denies the traffic.
      shared_ptr<string> preRequest_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultRulePhaseActions_ == nullptr && this->description_ == nullptr && this->egressProxyConfigurationId_ == nullptr && this->egressProxyConfigurationName_ == nullptr && this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->ruleGroups_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetEgressProxyConfigurationAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultRulePhaseActions Field Functions 
    bool hasDefaultRulePhaseActions() const { return this->defaultRulePhaseActions_ != nullptr;};
    void deleteDefaultRulePhaseActions() { this->defaultRulePhaseActions_ = nullptr;};
    inline const GetEgressProxyConfigurationAttributeResponseBody::DefaultRulePhaseActions & getDefaultRulePhaseActions() const { DARABONBA_PTR_GET_CONST(defaultRulePhaseActions_, GetEgressProxyConfigurationAttributeResponseBody::DefaultRulePhaseActions) };
    inline GetEgressProxyConfigurationAttributeResponseBody::DefaultRulePhaseActions getDefaultRulePhaseActions() { DARABONBA_PTR_GET(defaultRulePhaseActions_, GetEgressProxyConfigurationAttributeResponseBody::DefaultRulePhaseActions) };
    inline GetEgressProxyConfigurationAttributeResponseBody& setDefaultRulePhaseActions(const GetEgressProxyConfigurationAttributeResponseBody::DefaultRulePhaseActions & defaultRulePhaseActions) { DARABONBA_PTR_SET_VALUE(defaultRulePhaseActions_, defaultRulePhaseActions) };
    inline GetEgressProxyConfigurationAttributeResponseBody& setDefaultRulePhaseActions(GetEgressProxyConfigurationAttributeResponseBody::DefaultRulePhaseActions && defaultRulePhaseActions) { DARABONBA_PTR_SET_RVALUE(defaultRulePhaseActions_, defaultRulePhaseActions) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEgressProxyConfigurationAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // egressProxyConfigurationId Field Functions 
    bool hasEgressProxyConfigurationId() const { return this->egressProxyConfigurationId_ != nullptr;};
    void deleteEgressProxyConfigurationId() { this->egressProxyConfigurationId_ = nullptr;};
    inline string getEgressProxyConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationId_, "") };
    inline GetEgressProxyConfigurationAttributeResponseBody& setEgressProxyConfigurationId(string egressProxyConfigurationId) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationId_, egressProxyConfigurationId) };


    // egressProxyConfigurationName Field Functions 
    bool hasEgressProxyConfigurationName() const { return this->egressProxyConfigurationName_ != nullptr;};
    void deleteEgressProxyConfigurationName() { this->egressProxyConfigurationName_ = nullptr;};
    inline string getEgressProxyConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationName_, "") };
    inline GetEgressProxyConfigurationAttributeResponseBody& setEgressProxyConfigurationName(string egressProxyConfigurationName) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationName_, egressProxyConfigurationName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEgressProxyConfigurationAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetEgressProxyConfigurationAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // ruleGroups Field Functions 
    bool hasRuleGroups() const { return this->ruleGroups_ != nullptr;};
    void deleteRuleGroups() { this->ruleGroups_ = nullptr;};
    inline const vector<GetEgressProxyConfigurationAttributeResponseBody::RuleGroups> & getRuleGroups() const { DARABONBA_PTR_GET_CONST(ruleGroups_, vector<GetEgressProxyConfigurationAttributeResponseBody::RuleGroups>) };
    inline vector<GetEgressProxyConfigurationAttributeResponseBody::RuleGroups> getRuleGroups() { DARABONBA_PTR_GET(ruleGroups_, vector<GetEgressProxyConfigurationAttributeResponseBody::RuleGroups>) };
    inline GetEgressProxyConfigurationAttributeResponseBody& setRuleGroups(const vector<GetEgressProxyConfigurationAttributeResponseBody::RuleGroups> & ruleGroups) { DARABONBA_PTR_SET_VALUE(ruleGroups_, ruleGroups) };
    inline GetEgressProxyConfigurationAttributeResponseBody& setRuleGroups(vector<GetEgressProxyConfigurationAttributeResponseBody::RuleGroups> && ruleGroups) { DARABONBA_PTR_SET_RVALUE(ruleGroups_, ruleGroups) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEgressProxyConfigurationAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetEgressProxyConfigurationAttributeResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetEgressProxyConfigurationAttributeResponseBody::Tags>) };
    inline vector<GetEgressProxyConfigurationAttributeResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetEgressProxyConfigurationAttributeResponseBody::Tags>) };
    inline GetEgressProxyConfigurationAttributeResponseBody& setTags(const vector<GetEgressProxyConfigurationAttributeResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetEgressProxyConfigurationAttributeResponseBody& setTags(vector<GetEgressProxyConfigurationAttributeResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The creation time of the egress proxy configuration. The time is displayed in UTC in the yyyy-MM-ddTHH:mm:ssZ format.
    shared_ptr<string> createTime_ {};
    // The default actions executed in each effective phase (PreDns, PreRequest, and PostResponse) when traffic does not match any rules.
    shared_ptr<GetEgressProxyConfigurationAttributeResponseBody::DefaultRulePhaseActions> defaultRulePhaseActions_ {};
    // The description of the egress proxy configuration. The description must be 2 to 256 characters in length and can contain Chinese characters, letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
    shared_ptr<string> description_ {};
    // The ID of the egress proxy configuration.
    shared_ptr<string> egressProxyConfigurationId_ {};
    // The name of the egress proxy configuration. The name must be 2 to 128 characters in length and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> egressProxyConfigurationName_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The list of egress rule group references associated with the egress proxy configuration.
    shared_ptr<vector<GetEgressProxyConfigurationAttributeResponseBody::RuleGroups>> ruleGroups_ {};
    // The status of the egress proxy configuration. Valid values:
    // 
    // - **Provisioning**: The configuration is being created.
    // 
    // - **Available**: The configuration is available.
    // 
    // - **Configuring**: The configuration is being modified.
    shared_ptr<string> status_ {};
    // The list of tags.
    shared_ptr<vector<GetEgressProxyConfigurationAttributeResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif

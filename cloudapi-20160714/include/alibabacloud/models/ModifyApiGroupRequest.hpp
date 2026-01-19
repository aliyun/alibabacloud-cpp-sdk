// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPIGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPIGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyApiGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApiGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BasePath, basePath_);
      DARABONBA_PTR_TO_JSON(CompatibleFlags, compatibleFlags_);
      DARABONBA_PTR_TO_JSON(CustomAppCodeConfig, customAppCodeConfig_);
      DARABONBA_PTR_TO_JSON(CustomTraceConfig, customTraceConfig_);
      DARABONBA_PTR_TO_JSON(CustomerConfigs, customerConfigs_);
      DARABONBA_PTR_TO_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FilterAppCodeForBackend, filterAppCodeForBackend_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(PassthroughHeaders, passthroughHeaders_);
      DARABONBA_PTR_TO_JSON(RpcPattern, rpcPattern_);
      DARABONBA_PTR_TO_JSON(RpsLimitForServerless, rpsLimitForServerless_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SupportSSE, supportSSE_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserLogConfig, userLogConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApiGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BasePath, basePath_);
      DARABONBA_PTR_FROM_JSON(CompatibleFlags, compatibleFlags_);
      DARABONBA_PTR_FROM_JSON(CustomAppCodeConfig, customAppCodeConfig_);
      DARABONBA_PTR_FROM_JSON(CustomTraceConfig, customTraceConfig_);
      DARABONBA_PTR_FROM_JSON(CustomerConfigs, customerConfigs_);
      DARABONBA_PTR_FROM_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FilterAppCodeForBackend, filterAppCodeForBackend_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(PassthroughHeaders, passthroughHeaders_);
      DARABONBA_PTR_FROM_JSON(RpcPattern, rpcPattern_);
      DARABONBA_PTR_FROM_JSON(RpsLimitForServerless, rpsLimitForServerless_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SupportSSE, supportSSE_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserLogConfig, userLogConfig_);
    };
    ModifyApiGroupRequest() = default ;
    ModifyApiGroupRequest(const ModifyApiGroupRequest &) = default ;
    ModifyApiGroupRequest(ModifyApiGroupRequest &&) = default ;
    ModifyApiGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApiGroupRequest() = default ;
    ModifyApiGroupRequest& operator=(const ModifyApiGroupRequest &) = default ;
    ModifyApiGroupRequest& operator=(ModifyApiGroupRequest &&) = default ;
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
      // The key of the tag.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The value of the tag.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->basePath_ == nullptr
        && this->compatibleFlags_ == nullptr && this->customAppCodeConfig_ == nullptr && this->customTraceConfig_ == nullptr && this->customerConfigs_ == nullptr && this->defaultDomain_ == nullptr
        && this->description_ == nullptr && this->filterAppCodeForBackend_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->passthroughHeaders_ == nullptr
        && this->rpcPattern_ == nullptr && this->rpsLimitForServerless_ == nullptr && this->securityToken_ == nullptr && this->supportSSE_ == nullptr && this->tag_ == nullptr
        && this->userLogConfig_ == nullptr; };
    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline ModifyApiGroupRequest& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // compatibleFlags Field Functions 
    bool hasCompatibleFlags() const { return this->compatibleFlags_ != nullptr;};
    void deleteCompatibleFlags() { this->compatibleFlags_ = nullptr;};
    inline string getCompatibleFlags() const { DARABONBA_PTR_GET_DEFAULT(compatibleFlags_, "") };
    inline ModifyApiGroupRequest& setCompatibleFlags(string compatibleFlags) { DARABONBA_PTR_SET_VALUE(compatibleFlags_, compatibleFlags) };


    // customAppCodeConfig Field Functions 
    bool hasCustomAppCodeConfig() const { return this->customAppCodeConfig_ != nullptr;};
    void deleteCustomAppCodeConfig() { this->customAppCodeConfig_ = nullptr;};
    inline string getCustomAppCodeConfig() const { DARABONBA_PTR_GET_DEFAULT(customAppCodeConfig_, "") };
    inline ModifyApiGroupRequest& setCustomAppCodeConfig(string customAppCodeConfig) { DARABONBA_PTR_SET_VALUE(customAppCodeConfig_, customAppCodeConfig) };


    // customTraceConfig Field Functions 
    bool hasCustomTraceConfig() const { return this->customTraceConfig_ != nullptr;};
    void deleteCustomTraceConfig() { this->customTraceConfig_ = nullptr;};
    inline string getCustomTraceConfig() const { DARABONBA_PTR_GET_DEFAULT(customTraceConfig_, "") };
    inline ModifyApiGroupRequest& setCustomTraceConfig(string customTraceConfig) { DARABONBA_PTR_SET_VALUE(customTraceConfig_, customTraceConfig) };


    // customerConfigs Field Functions 
    bool hasCustomerConfigs() const { return this->customerConfigs_ != nullptr;};
    void deleteCustomerConfigs() { this->customerConfigs_ = nullptr;};
    inline string getCustomerConfigs() const { DARABONBA_PTR_GET_DEFAULT(customerConfigs_, "") };
    inline ModifyApiGroupRequest& setCustomerConfigs(string customerConfigs) { DARABONBA_PTR_SET_VALUE(customerConfigs_, customerConfigs) };


    // defaultDomain Field Functions 
    bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
    void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
    inline string getDefaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, "") };
    inline ModifyApiGroupRequest& setDefaultDomain(string defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyApiGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // filterAppCodeForBackend Field Functions 
    bool hasFilterAppCodeForBackend() const { return this->filterAppCodeForBackend_ != nullptr;};
    void deleteFilterAppCodeForBackend() { this->filterAppCodeForBackend_ = nullptr;};
    inline string getFilterAppCodeForBackend() const { DARABONBA_PTR_GET_DEFAULT(filterAppCodeForBackend_, "") };
    inline ModifyApiGroupRequest& setFilterAppCodeForBackend(string filterAppCodeForBackend) { DARABONBA_PTR_SET_VALUE(filterAppCodeForBackend_, filterAppCodeForBackend) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyApiGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyApiGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // passthroughHeaders Field Functions 
    bool hasPassthroughHeaders() const { return this->passthroughHeaders_ != nullptr;};
    void deletePassthroughHeaders() { this->passthroughHeaders_ = nullptr;};
    inline string getPassthroughHeaders() const { DARABONBA_PTR_GET_DEFAULT(passthroughHeaders_, "") };
    inline ModifyApiGroupRequest& setPassthroughHeaders(string passthroughHeaders) { DARABONBA_PTR_SET_VALUE(passthroughHeaders_, passthroughHeaders) };


    // rpcPattern Field Functions 
    bool hasRpcPattern() const { return this->rpcPattern_ != nullptr;};
    void deleteRpcPattern() { this->rpcPattern_ = nullptr;};
    inline string getRpcPattern() const { DARABONBA_PTR_GET_DEFAULT(rpcPattern_, "") };
    inline ModifyApiGroupRequest& setRpcPattern(string rpcPattern) { DARABONBA_PTR_SET_VALUE(rpcPattern_, rpcPattern) };


    // rpsLimitForServerless Field Functions 
    bool hasRpsLimitForServerless() const { return this->rpsLimitForServerless_ != nullptr;};
    void deleteRpsLimitForServerless() { this->rpsLimitForServerless_ = nullptr;};
    inline string getRpsLimitForServerless() const { DARABONBA_PTR_GET_DEFAULT(rpsLimitForServerless_, "") };
    inline ModifyApiGroupRequest& setRpsLimitForServerless(string rpsLimitForServerless) { DARABONBA_PTR_SET_VALUE(rpsLimitForServerless_, rpsLimitForServerless) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyApiGroupRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // supportSSE Field Functions 
    bool hasSupportSSE() const { return this->supportSSE_ != nullptr;};
    void deleteSupportSSE() { this->supportSSE_ = nullptr;};
    inline string getSupportSSE() const { DARABONBA_PTR_GET_DEFAULT(supportSSE_, "") };
    inline ModifyApiGroupRequest& setSupportSSE(string supportSSE) { DARABONBA_PTR_SET_VALUE(supportSSE_, supportSSE) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ModifyApiGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ModifyApiGroupRequest::Tag>) };
    inline vector<ModifyApiGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ModifyApiGroupRequest::Tag>) };
    inline ModifyApiGroupRequest& setTag(const vector<ModifyApiGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ModifyApiGroupRequest& setTag(vector<ModifyApiGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userLogConfig Field Functions 
    bool hasUserLogConfig() const { return this->userLogConfig_ != nullptr;};
    void deleteUserLogConfig() { this->userLogConfig_ = nullptr;};
    inline string getUserLogConfig() const { DARABONBA_PTR_GET_DEFAULT(userLogConfig_, "") };
    inline ModifyApiGroupRequest& setUserLogConfig(string userLogConfig) { DARABONBA_PTR_SET_VALUE(userLogConfig_, userLogConfig) };


  protected:
    // The root path of the API.
    shared_ptr<string> basePath_ {};
    // The list of associated tags. Separate multiple tags with commas (,).
    shared_ptr<string> compatibleFlags_ {};
    // The custom appcode configuration.
    shared_ptr<string> customAppCodeConfig_ {};
    // The custom trace configuration.
    shared_ptr<string> customTraceConfig_ {};
    // The data of custom configuration items.
    shared_ptr<string> customerConfigs_ {};
    // The default domain name.
    shared_ptr<string> defaultDomain_ {};
    // The API group description that you want to specify, which cannot exceed 180 characters. If this parameter is not specified, the group description is not modified.
    shared_ptr<string> description_ {};
    // If filter AppCode for backend.
    shared_ptr<string> filterAppCodeForBackend_ {};
    // The ID of the API group. This ID is generated by the system and globally unique.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The API group name must be globally unique. The name must be 4 to 50 characters in length. It must start with a letter and can contain letters, digits, and underscores (_). If this parameter is not specified, the group name is not modified.
    shared_ptr<string> groupName_ {};
    // Specifies whether to pass headers.
    shared_ptr<string> passthroughHeaders_ {};
    // The RPC mode.
    shared_ptr<string> rpcPattern_ {};
    shared_ptr<string> rpsLimitForServerless_ {};
    shared_ptr<string> securityToken_ {};
    // If support SSE.
    shared_ptr<string> supportSSE_ {};
    // The object tags that match the lifecycle rule. You can specify multiple tags.
    shared_ptr<vector<ModifyApiGroupRequest::Tag>> tag_ {};
    // The user log configuration.
    shared_ptr<string> userLogConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

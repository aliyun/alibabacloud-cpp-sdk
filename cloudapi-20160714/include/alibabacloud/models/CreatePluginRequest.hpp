// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePluginRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreatePluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PluginData, pluginData_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PluginData, pluginData_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreatePluginRequest() = default ;
    CreatePluginRequest(const CreatePluginRequest &) = default ;
    CreatePluginRequest(CreatePluginRequest &&) = default ;
    CreatePluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePluginRequest() = default ;
    CreatePluginRequest& operator=(const CreatePluginRequest &) = default ;
    CreatePluginRequest& operator=(CreatePluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->pluginData_ == nullptr && return this->pluginName_ == nullptr && return this->pluginType_ == nullptr && return this->securityToken_ == nullptr && return this->tag_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePluginRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // pluginData Field Functions 
    bool hasPluginData() const { return this->pluginData_ != nullptr;};
    void deletePluginData() { this->pluginData_ = nullptr;};
    inline string pluginData() const { DARABONBA_PTR_GET_DEFAULT(pluginData_, "") };
    inline CreatePluginRequest& setPluginData(string pluginData) { DARABONBA_PTR_SET_VALUE(pluginData_, pluginData) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string pluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline CreatePluginRequest& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string pluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline CreatePluginRequest& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreatePluginRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePluginRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePluginRequestTag>) };
    inline vector<CreatePluginRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreatePluginRequestTag>) };
    inline CreatePluginRequest& setTag(const vector<CreatePluginRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePluginRequest& setTag(vector<CreatePluginRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The description of the plug-in. The description can contain a maximum of 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The plug-in definition. Supported formats: JSON and YAML.
    // 
    // This parameter is required.
    std::shared_ptr<string> pluginData_ = nullptr;
    // The name of the plug-in. The name must be 4 to 50 characters in length and can contain letters, digits, and underscores (_). However, it cannot start with an underscore.
    // 
    // This parameter is required.
    std::shared_ptr<string> pluginName_ = nullptr;
    // The type of the plug-in. Valid values:
    // 
    // *   **ipControl: IP address-based access control**
    // *   **trafficControl: throttling**
    // *   **backendSignature: backend signature**
    // *   **jwtAuth** :JWT (OpenId Connect) authentication
    // *   **cors** :cross-origin resource sharing (CORS)
    // *   **caching**
    // 
    // This parameter is required.
    std::shared_ptr<string> pluginType_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tag of objects that match the rule. You can specify multiple tags.
    std::shared_ptr<vector<CreatePluginRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

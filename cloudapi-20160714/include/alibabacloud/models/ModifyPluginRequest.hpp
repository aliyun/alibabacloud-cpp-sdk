// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyPluginRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PluginData, pluginData_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PluginData, pluginData_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ModifyPluginRequest() = default ;
    ModifyPluginRequest(const ModifyPluginRequest &) = default ;
    ModifyPluginRequest(ModifyPluginRequest &&) = default ;
    ModifyPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPluginRequest() = default ;
    ModifyPluginRequest& operator=(const ModifyPluginRequest &) = default ;
    ModifyPluginRequest& operator=(ModifyPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->pluginData_ == nullptr && return this->pluginId_ == nullptr && return this->pluginName_ == nullptr && return this->securityToken_ == nullptr && return this->tag_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPluginRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // pluginData Field Functions 
    bool hasPluginData() const { return this->pluginData_ != nullptr;};
    void deletePluginData() { this->pluginData_ = nullptr;};
    inline string pluginData() const { DARABONBA_PTR_GET_DEFAULT(pluginData_, "") };
    inline ModifyPluginRequest& setPluginData(string pluginData) { DARABONBA_PTR_SET_VALUE(pluginData_, pluginData) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline ModifyPluginRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string pluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline ModifyPluginRequest& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyPluginRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ModifyPluginRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ModifyPluginRequestTag>) };
    inline vector<ModifyPluginRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ModifyPluginRequestTag>) };
    inline ModifyPluginRequest& setTag(const vector<ModifyPluginRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ModifyPluginRequest& setTag(vector<ModifyPluginRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The description of the plug-in. The description can contain a maximum of 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The statement that is used to modify the plug-in definition.
    std::shared_ptr<string> pluginData_ = nullptr;
    // The ID of the plug-in whose information you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> pluginId_ = nullptr;
    // The name of the plug-in. The name must be 4 to 50 characters in length and can contain letters, digits, and underscores (_). However, it cannot start with an underscore.
    std::shared_ptr<string> pluginName_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tag of objects that match the rule. You can specify multiple tags.
    std::shared_ptr<vector<ModifyPluginRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

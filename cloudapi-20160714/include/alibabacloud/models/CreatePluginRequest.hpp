// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLUGINREQUEST_HPP_
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
      // N can be an integer from 1 to 20.``
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The value of the tag.
      // 
      // N can be an integer from 1 to 20.``
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->pluginData_ == nullptr && this->pluginName_ == nullptr && this->pluginType_ == nullptr && this->securityToken_ == nullptr && this->tag_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePluginRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // pluginData Field Functions 
    bool hasPluginData() const { return this->pluginData_ != nullptr;};
    void deletePluginData() { this->pluginData_ = nullptr;};
    inline string getPluginData() const { DARABONBA_PTR_GET_DEFAULT(pluginData_, "") };
    inline CreatePluginRequest& setPluginData(string pluginData) { DARABONBA_PTR_SET_VALUE(pluginData_, pluginData) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline CreatePluginRequest& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline CreatePluginRequest& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreatePluginRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePluginRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePluginRequest::Tag>) };
    inline vector<CreatePluginRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreatePluginRequest::Tag>) };
    inline CreatePluginRequest& setTag(const vector<CreatePluginRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePluginRequest& setTag(vector<CreatePluginRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The description of the plug-in. The description can contain a maximum of 200 characters in length.
    shared_ptr<string> description_ {};
    // The plug-in definition. Supported formats: JSON and YAML.
    // 
    // This parameter is required.
    shared_ptr<string> pluginData_ {};
    // The name of the plug-in. The name must be 4 to 50 characters in length and can contain letters, digits, and underscores (_). However, it cannot start with an underscore.
    // 
    // This parameter is required.
    shared_ptr<string> pluginName_ {};
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
    shared_ptr<string> pluginType_ {};
    shared_ptr<string> securityToken_ {};
    // The tag of objects that match the rule. You can specify multiple tags.
    shared_ptr<vector<CreatePluginRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

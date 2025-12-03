// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAppRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ModifyAppRequest() = default ;
    ModifyAppRequest(const ModifyAppRequest &) = default ;
    ModifyAppRequest(ModifyAppRequest &&) = default ;
    ModifyAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppRequest() = default ;
    ModifyAppRequest& operator=(const ModifyAppRequest &) = default ;
    ModifyAppRequest& operator=(ModifyAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->description_ == nullptr && return this->disabled_ == nullptr && return this->extend_ == nullptr && return this->securityToken_ == nullptr
        && return this->tag_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline ModifyAppRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ModifyAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline ModifyAppRequest& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline ModifyAppRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyAppRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ModifyAppRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ModifyAppRequestTag>) };
    inline vector<ModifyAppRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ModifyAppRequestTag>) };
    inline ModifyAppRequest& setTag(const vector<ModifyAppRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ModifyAppRequest& setTag(vector<ModifyAppRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the app.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The value must be 4 to 26 characters in length and can contain letters, digits, and underscores (_). It must start with a letter.
    // 
    // This parameter is required only when you want to modify the value.
    std::shared_ptr<string> appName_ = nullptr;
    // The description of the app. The description can contain a maximum of 180 characters in length.
    // 
    // This parameter is required only when you want to modify the value.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> disabled_ = nullptr;
    // 扩展信息
    std::shared_ptr<string> extend_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tag of objects that match the rule. You can specify multiple tags.
    std::shared_ptr<vector<ModifyAppRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeletePluginRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeletePluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DeletePluginRequest() = default ;
    DeletePluginRequest(const DeletePluginRequest &) = default ;
    DeletePluginRequest(DeletePluginRequest &&) = default ;
    DeletePluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePluginRequest() = default ;
    DeletePluginRequest& operator=(const DeletePluginRequest &) = default ;
    DeletePluginRequest& operator=(DeletePluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pluginId_ == nullptr
        && return this->securityToken_ == nullptr && return this->tag_ == nullptr; };
    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline DeletePluginRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeletePluginRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DeletePluginRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DeletePluginRequestTag>) };
    inline vector<DeletePluginRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DeletePluginRequestTag>) };
    inline DeletePluginRequest& setTag(const vector<DeletePluginRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DeletePluginRequest& setTag(vector<DeletePluginRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the plug-in to be deleted.
    // 
    // This parameter is required.
    std::shared_ptr<string> pluginId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tag of objects that match the rule. You can specify multiple tags.
    std::shared_ptr<vector<DeletePluginRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

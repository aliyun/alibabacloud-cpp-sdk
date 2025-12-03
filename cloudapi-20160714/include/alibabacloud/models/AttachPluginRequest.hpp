// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class AttachPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, AttachPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    AttachPluginRequest() = default ;
    AttachPluginRequest(const AttachPluginRequest &) = default ;
    AttachPluginRequest(AttachPluginRequest &&) = default ;
    AttachPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachPluginRequest() = default ;
    AttachPluginRequest& operator=(const AttachPluginRequest &) = default ;
    AttachPluginRequest& operator=(AttachPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiIds_ == nullptr && return this->groupId_ == nullptr && return this->pluginId_ == nullptr && return this->securityToken_ == nullptr && return this->stageName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline AttachPluginRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiIds Field Functions 
    bool hasApiIds() const { return this->apiIds_ != nullptr;};
    void deleteApiIds() { this->apiIds_ = nullptr;};
    inline string apiIds() const { DARABONBA_PTR_GET_DEFAULT(apiIds_, "") };
    inline AttachPluginRequest& setApiIds(string apiIds) { DARABONBA_PTR_SET_VALUE(apiIds_, apiIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline AttachPluginRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline AttachPluginRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AttachPluginRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline AttachPluginRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The number of the API to be bound.
    std::shared_ptr<string> apiId_ = nullptr;
    // The number of the API to be operated. Separate multiple numbers with commas (,). A maximum of 100 numbers can be entered.
    std::shared_ptr<string> apiIds_ = nullptr;
    // The ID of the API group that contains the API to which the plug-in is to be bound.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the plug-in to be bound.
    // 
    // This parameter is required.
    std::shared_ptr<string> pluginId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **PRE: the pre-release environment**
    // *   **TEST**
    // 
    // This parameter is required.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

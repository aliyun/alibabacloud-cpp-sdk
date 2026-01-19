// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHGROUPPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHGROUPPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DetachGroupPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachGroupPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DetachGroupPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DetachGroupPluginRequest() = default ;
    DetachGroupPluginRequest(const DetachGroupPluginRequest &) = default ;
    DetachGroupPluginRequest(DetachGroupPluginRequest &&) = default ;
    DetachGroupPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachGroupPluginRequest() = default ;
    DetachGroupPluginRequest& operator=(const DetachGroupPluginRequest &) = default ;
    DetachGroupPluginRequest& operator=(DetachGroupPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->pluginId_ == nullptr && this->securityToken_ == nullptr && this->stageName_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DetachGroupPluginRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline DetachGroupPluginRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DetachGroupPluginRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DetachGroupPluginRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // API group ID
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // API Gateway plugin ID
    // 
    // This parameter is required.
    shared_ptr<string> pluginId_ {};
    shared_ptr<string> securityToken_ {};
    // Specify the environment of the API to operate on.
    // 
    // - **RELEASE**: Production
    // - **PRE**: Pre-release
    // - **TEST**: Test
    // 
    // This parameter is required.
    shared_ptr<string> stageName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

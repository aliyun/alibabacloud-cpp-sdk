// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDEPLOYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDEPLOYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ChangeDeployGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDeployGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EccInfo, eccInfo_);
      DARABONBA_PTR_TO_JSON(ForceStatus, forceStatus_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDeployGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EccInfo, eccInfo_);
      DARABONBA_PTR_FROM_JSON(ForceStatus, forceStatus_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    ChangeDeployGroupRequest() = default ;
    ChangeDeployGroupRequest(const ChangeDeployGroupRequest &) = default ;
    ChangeDeployGroupRequest(ChangeDeployGroupRequest &&) = default ;
    ChangeDeployGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDeployGroupRequest() = default ;
    ChangeDeployGroupRequest& operator=(const ChangeDeployGroupRequest &) = default ;
    ChangeDeployGroupRequest& operator=(ChangeDeployGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->eccInfo_ == nullptr && return this->forceStatus_ == nullptr && return this->groupName_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ChangeDeployGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // eccInfo Field Functions 
    bool hasEccInfo() const { return this->eccInfo_ != nullptr;};
    void deleteEccInfo() { this->eccInfo_ = nullptr;};
    inline string eccInfo() const { DARABONBA_PTR_GET_DEFAULT(eccInfo_, "") };
    inline ChangeDeployGroupRequest& setEccInfo(string eccInfo) { DARABONBA_PTR_SET_VALUE(eccInfo_, eccInfo) };


    // forceStatus Field Functions 
    bool hasForceStatus() const { return this->forceStatus_ != nullptr;};
    void deleteForceStatus() { this->forceStatus_ = nullptr;};
    inline bool forceStatus() const { DARABONBA_PTR_GET_DEFAULT(forceStatus_, false) };
    inline ChangeDeployGroupRequest& setForceStatus(bool forceStatus) { DARABONBA_PTR_SET_VALUE(forceStatus_, forceStatus) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ChangeDeployGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the elastic compute component (ECC) that corresponds to the ECS instance for which you want to change the application instance group. You can call the ListApplicationEcc operation to query the ECC ID. For more information, see [ListApplicationEcc](https://help.aliyun.com/document_detail/199277.html).
    // 
    // > You can change the application instance group for only one ECS instance at a time.
    // 
    // This parameter is required.
    std::shared_ptr<string> eccInfo_ = nullptr;
    // Specifies whether to forcibly change the application instance group if the deployment package version of the ECC is different from that of the application instance group.
    std::shared_ptr<bool> forceStatus_ = nullptr;
    // The name of the application instance group. Examples: group_a and group_b. The parameter value for the default application instance group is `_DEFAULT_GROUP`. The name can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

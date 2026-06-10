// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERFROMDESKTOPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERFROMDESKTOPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RemoveUserFromDesktopGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserFromDesktopGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupIds, desktopGroupIds_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SimpleUserGroupId, simpleUserGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
      DARABONBA_PTR_TO_JSON(UserOuPath, userOuPath_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserFromDesktopGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupIds, desktopGroupIds_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SimpleUserGroupId, simpleUserGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
      DARABONBA_PTR_FROM_JSON(UserOuPath, userOuPath_);
    };
    RemoveUserFromDesktopGroupRequest() = default ;
    RemoveUserFromDesktopGroupRequest(const RemoveUserFromDesktopGroupRequest &) = default ;
    RemoveUserFromDesktopGroupRequest(RemoveUserFromDesktopGroupRequest &&) = default ;
    RemoveUserFromDesktopGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserFromDesktopGroupRequest() = default ;
    RemoveUserFromDesktopGroupRequest& operator=(const RemoveUserFromDesktopGroupRequest &) = default ;
    RemoveUserFromDesktopGroupRequest& operator=(RemoveUserFromDesktopGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && this->desktopGroupIds_ == nullptr && this->endUserIds_ == nullptr && this->orgId_ == nullptr && this->regionId_ == nullptr && this->simpleUserGroupId_ == nullptr
        && this->userGroupName_ == nullptr && this->userOuPath_ == nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline RemoveUserFromDesktopGroupRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupIds Field Functions 
    bool hasDesktopGroupIds() const { return this->desktopGroupIds_ != nullptr;};
    void deleteDesktopGroupIds() { this->desktopGroupIds_ = nullptr;};
    inline const vector<string> & getDesktopGroupIds() const { DARABONBA_PTR_GET_CONST(desktopGroupIds_, vector<string>) };
    inline vector<string> getDesktopGroupIds() { DARABONBA_PTR_GET(desktopGroupIds_, vector<string>) };
    inline RemoveUserFromDesktopGroupRequest& setDesktopGroupIds(const vector<string> & desktopGroupIds) { DARABONBA_PTR_SET_VALUE(desktopGroupIds_, desktopGroupIds) };
    inline RemoveUserFromDesktopGroupRequest& setDesktopGroupIds(vector<string> && desktopGroupIds) { DARABONBA_PTR_SET_RVALUE(desktopGroupIds_, desktopGroupIds) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline RemoveUserFromDesktopGroupRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline RemoveUserFromDesktopGroupRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline RemoveUserFromDesktopGroupRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveUserFromDesktopGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // simpleUserGroupId Field Functions 
    bool hasSimpleUserGroupId() const { return this->simpleUserGroupId_ != nullptr;};
    void deleteSimpleUserGroupId() { this->simpleUserGroupId_ = nullptr;};
    inline string getSimpleUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(simpleUserGroupId_, "") };
    inline RemoveUserFromDesktopGroupRequest& setSimpleUserGroupId(string simpleUserGroupId) { DARABONBA_PTR_SET_VALUE(simpleUserGroupId_, simpleUserGroupId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline RemoveUserFromDesktopGroupRequest& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


    // userOuPath Field Functions 
    bool hasUserOuPath() const { return this->userOuPath_ != nullptr;};
    void deleteUserOuPath() { this->userOuPath_ = nullptr;};
    inline string getUserOuPath() const { DARABONBA_PTR_GET_DEFAULT(userOuPath_, "") };
    inline RemoveUserFromDesktopGroupRequest& setUserOuPath(string userOuPath) { DARABONBA_PTR_SET_VALUE(userOuPath_, userOuPath) };


  protected:
    // The ID of the shared cloud desktop from which you revoke the user’s permission.
    shared_ptr<string> desktopGroupId_ {};
    // A list of shared desktop group IDs.
    shared_ptr<vector<string>> desktopGroupIds_ {};
    // The list of authorized users to remove.
    shared_ptr<vector<string>> endUserIds_ {};
    shared_ptr<string> orgId_ {};
    // The region ID. Call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to get a list of regions where WUYING Workspace is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> simpleUserGroupId_ {};
    shared_ptr<string> userGroupName_ {};
    shared_ptr<string> userOuPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

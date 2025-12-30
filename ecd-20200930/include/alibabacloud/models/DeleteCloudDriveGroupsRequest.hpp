// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLOUDDRIVEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLOUDDRIVEGROUPSREQUEST_HPP_
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
  class DeleteCloudDriveGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloudDriveGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloudDriveGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteCloudDriveGroupsRequest() = default ;
    DeleteCloudDriveGroupsRequest(const DeleteCloudDriveGroupsRequest &) = default ;
    DeleteCloudDriveGroupsRequest(DeleteCloudDriveGroupsRequest &&) = default ;
    DeleteCloudDriveGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloudDriveGroupsRequest() = default ;
    DeleteCloudDriveGroupsRequest& operator=(const DeleteCloudDriveGroupsRequest &) = default ;
    DeleteCloudDriveGroupsRequest& operator=(DeleteCloudDriveGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->groupId_ == nullptr && this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline DeleteCloudDriveGroupsRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline const vector<string> & getGroupId() const { DARABONBA_PTR_GET_CONST(groupId_, vector<string>) };
    inline vector<string> getGroupId() { DARABONBA_PTR_GET(groupId_, vector<string>) };
    inline DeleteCloudDriveGroupsRequest& setGroupId(const vector<string> & groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };
    inline DeleteCloudDriveGroupsRequest& setGroupId(vector<string> && groupId) { DARABONBA_PTR_SET_RVALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCloudDriveGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud disk in Cloud Drive Service.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The IDs of the teams that you want to delete. You can delete multiple teams at a time.
    shared_ptr<vector<string>> groupId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

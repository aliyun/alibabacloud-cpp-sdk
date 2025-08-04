// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDDRIVEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDDRIVEGROUPSREQUEST_HPP_
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
  class ModifyCloudDriveGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudDriveGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudDriveGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ModifyCloudDriveGroupsRequest() = default ;
    ModifyCloudDriveGroupsRequest(const ModifyCloudDriveGroupsRequest &) = default ;
    ModifyCloudDriveGroupsRequest(ModifyCloudDriveGroupsRequest &&) = default ;
    ModifyCloudDriveGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudDriveGroupsRequest() = default ;
    ModifyCloudDriveGroupsRequest& operator=(const ModifyCloudDriveGroupsRequest &) = default ;
    ModifyCloudDriveGroupsRequest& operator=(ModifyCloudDriveGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdsId_ != nullptr
        && this->groupId_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->totalSize_ != nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline ModifyCloudDriveGroupsRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline const vector<string> & groupId() const { DARABONBA_PTR_GET_CONST(groupId_, vector<string>) };
    inline vector<string> groupId() { DARABONBA_PTR_GET(groupId_, vector<string>) };
    inline ModifyCloudDriveGroupsRequest& setGroupId(const vector<string> & groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };
    inline ModifyCloudDriveGroupsRequest& setGroupId(vector<string> && groupId) { DARABONBA_PTR_SET_RVALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudDriveGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyCloudDriveGroupsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline ModifyCloudDriveGroupsRequest& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The ID of the cloud disk in Cloud Drive Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The IDs of the teams.
    std::shared_ptr<vector<string>> groupId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the team space. Valid values:
    // 
    // *   enabled
    // *   disabled
    // 
    // Default value: enabled.
    std::shared_ptr<string> status_ = nullptr;
    // The total capacity of the team space.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

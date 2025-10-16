// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDDRIVEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDDRIVEGROUPREQUEST_HPP_
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
  class CreateCloudDriveGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudDriveGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdminUserIds, adminUserIds_);
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudDriveGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminUserIds, adminUserIds_);
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    CreateCloudDriveGroupRequest() = default ;
    CreateCloudDriveGroupRequest(const CreateCloudDriveGroupRequest &) = default ;
    CreateCloudDriveGroupRequest(CreateCloudDriveGroupRequest &&) = default ;
    CreateCloudDriveGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudDriveGroupRequest() = default ;
    CreateCloudDriveGroupRequest& operator=(const CreateCloudDriveGroupRequest &) = default ;
    CreateCloudDriveGroupRequest& operator=(CreateCloudDriveGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminUserIds_ == nullptr
        && return this->cdsId_ == nullptr && return this->groupId_ == nullptr && return this->regionId_ == nullptr && return this->totalSize_ == nullptr; };
    // adminUserIds Field Functions 
    bool hasAdminUserIds() const { return this->adminUserIds_ != nullptr;};
    void deleteAdminUserIds() { this->adminUserIds_ = nullptr;};
    inline const vector<string> & adminUserIds() const { DARABONBA_PTR_GET_CONST(adminUserIds_, vector<string>) };
    inline vector<string> adminUserIds() { DARABONBA_PTR_GET(adminUserIds_, vector<string>) };
    inline CreateCloudDriveGroupRequest& setAdminUserIds(const vector<string> & adminUserIds) { DARABONBA_PTR_SET_VALUE(adminUserIds_, adminUserIds) };
    inline CreateCloudDriveGroupRequest& setAdminUserIds(vector<string> && adminUserIds) { DARABONBA_PTR_SET_RVALUE(adminUserIds_, adminUserIds) };


    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CreateCloudDriveGroupRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateCloudDriveGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCloudDriveGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline CreateCloudDriveGroupRequest& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<vector<string>> adminUserIds_ = nullptr;
    // The ID of the cloud disk in Cloud Drive Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The ID of the team.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The size of the cloud disk in Cloud Drive Service. Unit: bytes. The size is unlimited.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

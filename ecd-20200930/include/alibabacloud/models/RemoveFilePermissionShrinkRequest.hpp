// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEFILEPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEFILEPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RemoveFilePermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveFilePermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MemberList, memberListShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveFilePermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MemberList, memberListShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RemoveFilePermissionShrinkRequest() = default ;
    RemoveFilePermissionShrinkRequest(const RemoveFilePermissionShrinkRequest &) = default ;
    RemoveFilePermissionShrinkRequest(RemoveFilePermissionShrinkRequest &&) = default ;
    RemoveFilePermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveFilePermissionShrinkRequest() = default ;
    RemoveFilePermissionShrinkRequest& operator=(const RemoveFilePermissionShrinkRequest &) = default ;
    RemoveFilePermissionShrinkRequest& operator=(RemoveFilePermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdsId_ != nullptr
        && this->endUserId_ != nullptr && this->fileId_ != nullptr && this->groupId_ != nullptr && this->memberListShrink_ != nullptr && this->regionId_ != nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline RemoveFilePermissionShrinkRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline RemoveFilePermissionShrinkRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline RemoveFilePermissionShrinkRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RemoveFilePermissionShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // memberListShrink Field Functions 
    bool hasMemberListShrink() const { return this->memberListShrink_ != nullptr;};
    void deleteMemberListShrink() { this->memberListShrink_ = nullptr;};
    inline string memberListShrink() const { DARABONBA_PTR_GET_DEFAULT(memberListShrink_, "") };
    inline RemoveFilePermissionShrinkRequest& setMemberListShrink(string memberListShrink) { DARABONBA_PTR_SET_VALUE(memberListShrink_, memberListShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveFilePermissionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud disk in Cloud Drive Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The user ID.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The file ID. The ID is a unique identifier for the file.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileId_ = nullptr;
    // The group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The users that you want to authorize.
    // 
    // This parameter is required.
    std::shared_ptr<string> memberListShrink_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

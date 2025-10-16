// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILEPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILEPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class AddFilePermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilePermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MemberList, memberListShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilePermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MemberList, memberListShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddFilePermissionShrinkRequest() = default ;
    AddFilePermissionShrinkRequest(const AddFilePermissionShrinkRequest &) = default ;
    AddFilePermissionShrinkRequest(AddFilePermissionShrinkRequest &&) = default ;
    AddFilePermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilePermissionShrinkRequest() = default ;
    AddFilePermissionShrinkRequest& operator=(const AddFilePermissionShrinkRequest &) = default ;
    AddFilePermissionShrinkRequest& operator=(AddFilePermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && return this->endUserId_ == nullptr && return this->fileId_ == nullptr && return this->groupId_ == nullptr && return this->memberListShrink_ == nullptr && return this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline AddFilePermissionShrinkRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline AddFilePermissionShrinkRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline AddFilePermissionShrinkRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline AddFilePermissionShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // memberListShrink Field Functions 
    bool hasMemberListShrink() const { return this->memberListShrink_ != nullptr;};
    void deleteMemberListShrink() { this->memberListShrink_ = nullptr;};
    inline string memberListShrink() const { DARABONBA_PTR_GET_DEFAULT(memberListShrink_, "") };
    inline AddFilePermissionShrinkRequest& setMemberListShrink(string memberListShrink) { DARABONBA_PTR_SET_VALUE(memberListShrink_, memberListShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddFilePermissionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud disk whose folder you want to share.
    // 
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The ID of the end user who uses the cloud disk.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The ID of the file.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileId_ = nullptr;
    // The ID of the team that uses cloud disks in Cloud Drive Service.
    std::shared_ptr<string> groupId_ = nullptr;
    // The members who are granted the folder permissions.
    // 
    // This parameter is required.
    std::shared_ptr<string> memberListShrink_ = nullptr;
    // The region ID of the folder. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

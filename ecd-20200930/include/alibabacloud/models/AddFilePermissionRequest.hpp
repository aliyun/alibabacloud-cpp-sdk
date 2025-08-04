// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFILEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFILEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddFilePermissionRequestMemberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class AddFilePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFilePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddFilePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddFilePermissionRequest() = default ;
    AddFilePermissionRequest(const AddFilePermissionRequest &) = default ;
    AddFilePermissionRequest(AddFilePermissionRequest &&) = default ;
    AddFilePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFilePermissionRequest() = default ;
    AddFilePermissionRequest& operator=(const AddFilePermissionRequest &) = default ;
    AddFilePermissionRequest& operator=(AddFilePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdsId_ != nullptr
        && this->endUserId_ != nullptr && this->fileId_ != nullptr && this->groupId_ != nullptr && this->memberList_ != nullptr && this->regionId_ != nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline AddFilePermissionRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline AddFilePermissionRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline AddFilePermissionRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline AddFilePermissionRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<AddFilePermissionRequestMemberList> & memberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<AddFilePermissionRequestMemberList>) };
    inline vector<AddFilePermissionRequestMemberList> memberList() { DARABONBA_PTR_GET(memberList_, vector<AddFilePermissionRequestMemberList>) };
    inline AddFilePermissionRequest& setMemberList(const vector<AddFilePermissionRequestMemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline AddFilePermissionRequest& setMemberList(vector<AddFilePermissionRequestMemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddFilePermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    std::shared_ptr<vector<AddFilePermissionRequestMemberList>> memberList_ = nullptr;
    // The region ID of the folder. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

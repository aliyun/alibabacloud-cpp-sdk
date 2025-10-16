// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEFILEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEFILEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveFilePermissionRequestMemberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RemoveFilePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveFilePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveFilePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RemoveFilePermissionRequest() = default ;
    RemoveFilePermissionRequest(const RemoveFilePermissionRequest &) = default ;
    RemoveFilePermissionRequest(RemoveFilePermissionRequest &&) = default ;
    RemoveFilePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveFilePermissionRequest() = default ;
    RemoveFilePermissionRequest& operator=(const RemoveFilePermissionRequest &) = default ;
    RemoveFilePermissionRequest& operator=(RemoveFilePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && return this->endUserId_ == nullptr && return this->fileId_ == nullptr && return this->groupId_ == nullptr && return this->memberList_ == nullptr && return this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline RemoveFilePermissionRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline RemoveFilePermissionRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline RemoveFilePermissionRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RemoveFilePermissionRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<RemoveFilePermissionRequestMemberList> & memberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<RemoveFilePermissionRequestMemberList>) };
    inline vector<RemoveFilePermissionRequestMemberList> memberList() { DARABONBA_PTR_GET(memberList_, vector<RemoveFilePermissionRequestMemberList>) };
    inline RemoveFilePermissionRequest& setMemberList(const vector<RemoveFilePermissionRequestMemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline RemoveFilePermissionRequest& setMemberList(vector<RemoveFilePermissionRequestMemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveFilePermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    std::shared_ptr<vector<RemoveFilePermissionRequestMemberList>> memberList_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

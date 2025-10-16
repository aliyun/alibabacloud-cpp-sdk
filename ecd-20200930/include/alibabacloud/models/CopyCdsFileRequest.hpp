// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYCDSFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYCDSFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CopyCdsFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyCdsFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRename, autoRename_);
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileReceiverId, fileReceiverId_);
      DARABONBA_PTR_TO_JSON(FileReceiverType, fileReceiverType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyCdsFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRename, autoRename_);
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileReceiverId, fileReceiverId_);
      DARABONBA_PTR_FROM_JSON(FileReceiverType, fileReceiverType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CopyCdsFileRequest() = default ;
    CopyCdsFileRequest(const CopyCdsFileRequest &) = default ;
    CopyCdsFileRequest(CopyCdsFileRequest &&) = default ;
    CopyCdsFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyCdsFileRequest() = default ;
    CopyCdsFileRequest& operator=(const CopyCdsFileRequest &) = default ;
    CopyCdsFileRequest& operator=(CopyCdsFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRename_ == nullptr
        && return this->cdsId_ == nullptr && return this->endUserId_ == nullptr && return this->fileId_ == nullptr && return this->fileReceiverId_ == nullptr && return this->fileReceiverType_ == nullptr
        && return this->groupId_ == nullptr && return this->parentFolderId_ == nullptr && return this->regionId_ == nullptr; };
    // autoRename Field Functions 
    bool hasAutoRename() const { return this->autoRename_ != nullptr;};
    void deleteAutoRename() { this->autoRename_ = nullptr;};
    inline bool autoRename() const { DARABONBA_PTR_GET_DEFAULT(autoRename_, false) };
    inline CopyCdsFileRequest& setAutoRename(bool autoRename) { DARABONBA_PTR_SET_VALUE(autoRename_, autoRename) };


    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CopyCdsFileRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline CopyCdsFileRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CopyCdsFileRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileReceiverId Field Functions 
    bool hasFileReceiverId() const { return this->fileReceiverId_ != nullptr;};
    void deleteFileReceiverId() { this->fileReceiverId_ = nullptr;};
    inline string fileReceiverId() const { DARABONBA_PTR_GET_DEFAULT(fileReceiverId_, "") };
    inline CopyCdsFileRequest& setFileReceiverId(string fileReceiverId) { DARABONBA_PTR_SET_VALUE(fileReceiverId_, fileReceiverId) };


    // fileReceiverType Field Functions 
    bool hasFileReceiverType() const { return this->fileReceiverType_ != nullptr;};
    void deleteFileReceiverType() { this->fileReceiverType_ = nullptr;};
    inline string fileReceiverType() const { DARABONBA_PTR_GET_DEFAULT(fileReceiverType_, "") };
    inline CopyCdsFileRequest& setFileReceiverType(string fileReceiverType) { DARABONBA_PTR_SET_VALUE(fileReceiverType_, fileReceiverType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CopyCdsFileRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string parentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline CopyCdsFileRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CopyCdsFileRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to automatically rename the file if a file that has the same name exists in the folder to which you want to copy the file. Default value: false.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> autoRename_ = nullptr;
    // The ID of the cloud disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The user ID that you want to use to access the cloud disk.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The file ID. You can call the CreateCdsFile operation to query the file ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileId_ = nullptr;
    // 目标复制文件所在的个人空间ID（即UserId，您可以在DescribeCloudDriveUsers接口返回的报文中获取。）或者目标复制文件所在的团队空间ID（即GroupId，您可以在DescribeCloudDriveGroups接口返回的报文中获取。）
    // > FileReceiverId和FileReceiverType都为空时，默认复制到文件所在的个人空间。
    // >
    std::shared_ptr<string> fileReceiverId_ = nullptr;
    // 文件所属的空间类型。
    std::shared_ptr<string> fileReceiverType_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the parent folder of the folder to which you want to copy the file. If you want to copy the file to the root directory, set this parameter to root.
    // 
    // This parameter is required.
    std::shared_ptr<string> parentFolderId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

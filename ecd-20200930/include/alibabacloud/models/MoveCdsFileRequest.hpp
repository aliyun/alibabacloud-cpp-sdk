// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVECDSFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVECDSFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class MoveCdsFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveCdsFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(ConflictPolicy, conflictPolicy_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveCdsFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(ConflictPolicy, conflictPolicy_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    MoveCdsFileRequest() = default ;
    MoveCdsFileRequest(const MoveCdsFileRequest &) = default ;
    MoveCdsFileRequest(MoveCdsFileRequest &&) = default ;
    MoveCdsFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveCdsFileRequest() = default ;
    MoveCdsFileRequest& operator=(const MoveCdsFileRequest &) = default ;
    MoveCdsFileRequest& operator=(MoveCdsFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->conflictPolicy_ == nullptr && this->endUserId_ == nullptr && this->fileId_ == nullptr && this->groupId_ == nullptr && this->parentFolderId_ == nullptr
        && this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline MoveCdsFileRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // conflictPolicy Field Functions 
    bool hasConflictPolicy() const { return this->conflictPolicy_ != nullptr;};
    void deleteConflictPolicy() { this->conflictPolicy_ = nullptr;};
    inline string getConflictPolicy() const { DARABONBA_PTR_GET_DEFAULT(conflictPolicy_, "") };
    inline MoveCdsFileRequest& setConflictPolicy(string conflictPolicy) { DARABONBA_PTR_SET_VALUE(conflictPolicy_, conflictPolicy) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline MoveCdsFileRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline MoveCdsFileRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline MoveCdsFileRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string getParentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline MoveCdsFileRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MoveCdsFileRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The enterprise cloud disk ID.
    shared_ptr<string> cdsId_ {};
    // The policy for handling files with the same name.
    shared_ptr<string> conflictPolicy_ {};
    // The ID of the user who uses the cloud disk.
    shared_ptr<string> endUserId_ {};
    // The file ID. You can call [ListCdsFiles](https://help.aliyun.com/document_detail/2247622.html) to query the ID of the file.
    shared_ptr<string> fileId_ {};
    // The team space ID.
    shared_ptr<string> groupId_ {};
    // The ID of the parent folder at the destination. You can call [ListCdsFiles](https://help.aliyun.com/document_detail/2247622.html) to query the ID of the file. Set this parameter to `root` if you want to move the file to the root directory.
    shared_ptr<string> parentFolderId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECDSFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECDSFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCdsFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCdsFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(ConflictPolicy, conflictPolicy_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
      DARABONBA_PTR_TO_JSON(FileLength, fileLength_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ParentFileId, parentFileId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCdsFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(ConflictPolicy, conflictPolicy_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
      DARABONBA_PTR_FROM_JSON(FileLength, fileLength_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ParentFileId, parentFileId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateCdsFileRequest() = default ;
    CreateCdsFileRequest(const CreateCdsFileRequest &) = default ;
    CreateCdsFileRequest(CreateCdsFileRequest &&) = default ;
    CreateCdsFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCdsFileRequest() = default ;
    CreateCdsFileRequest& operator=(const CreateCdsFileRequest &) = default ;
    CreateCdsFileRequest& operator=(CreateCdsFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->conflictPolicy_ == nullptr && this->endUserId_ == nullptr && this->fileHash_ == nullptr && this->fileLength_ == nullptr && this->fileName_ == nullptr
        && this->fileType_ == nullptr && this->groupId_ == nullptr && this->parentFileId_ == nullptr && this->regionId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CreateCdsFileRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // conflictPolicy Field Functions 
    bool hasConflictPolicy() const { return this->conflictPolicy_ != nullptr;};
    void deleteConflictPolicy() { this->conflictPolicy_ = nullptr;};
    inline string getConflictPolicy() const { DARABONBA_PTR_GET_DEFAULT(conflictPolicy_, "") };
    inline CreateCdsFileRequest& setConflictPolicy(string conflictPolicy) { DARABONBA_PTR_SET_VALUE(conflictPolicy_, conflictPolicy) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline CreateCdsFileRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileHash Field Functions 
    bool hasFileHash() const { return this->fileHash_ != nullptr;};
    void deleteFileHash() { this->fileHash_ = nullptr;};
    inline string getFileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
    inline CreateCdsFileRequest& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


    // fileLength Field Functions 
    bool hasFileLength() const { return this->fileLength_ != nullptr;};
    void deleteFileLength() { this->fileLength_ = nullptr;};
    inline int64_t getFileLength() const { DARABONBA_PTR_GET_DEFAULT(fileLength_, 0L) };
    inline CreateCdsFileRequest& setFileLength(int64_t fileLength) { DARABONBA_PTR_SET_VALUE(fileLength_, fileLength) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateCdsFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateCdsFileRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateCdsFileRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // parentFileId Field Functions 
    bool hasParentFileId() const { return this->parentFileId_ != nullptr;};
    void deleteParentFileId() { this->parentFileId_ = nullptr;};
    inline string getParentFileId() const { DARABONBA_PTR_GET_DEFAULT(parentFileId_, "") };
    inline CreateCdsFileRequest& setParentFileId(string parentFileId) { DARABONBA_PTR_SET_VALUE(parentFileId_, parentFileId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCdsFileRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Enterprise cloud disk ID.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // How to handle files with the same name.
    shared_ptr<string> conflictPolicy_ {};
    // User ID.
    shared_ptr<string> endUserId_ {};
    // SHA-1 hash value of the file.
    shared_ptr<string> fileHash_ {};
    // File size. Unit: Byte.
    // 
    // This parameter is required.
    shared_ptr<int64_t> fileLength_ {};
    // File name.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // File type.
    // 
    // This parameter is required.
    shared_ptr<string> fileType_ {};
    // Team space ID.
    shared_ptr<string> groupId_ {};
    // Parent file ID. Get this from the `FileId` parameter returned by the [ListCdsFiles](https://help.aliyun.com/document_detail/2247622.html) API.
    shared_ptr<string> parentFileId_ {};
    // Region ID. Call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to list regions supported by WUYING Workspace.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILDELETEDFILE_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILRESPONSEBODYEVENTDETAILDELETEDFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailResponseBodyEventDetailDeletedFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailResponseBodyEventDetailDeletedFile& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ParentFileId, parentFileId_);
      DARABONBA_PTR_TO_JSON(UseType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailResponseBodyEventDetailDeletedFile& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ParentFileId, parentFileId_);
      DARABONBA_PTR_FROM_JSON(UseType, useType_);
    };
    GetIDEEventDetailResponseBodyEventDetailDeletedFile() = default ;
    GetIDEEventDetailResponseBodyEventDetailDeletedFile(const GetIDEEventDetailResponseBodyEventDetailDeletedFile &) = default ;
    GetIDEEventDetailResponseBodyEventDetailDeletedFile(GetIDEEventDetailResponseBodyEventDetailDeletedFile &&) = default ;
    GetIDEEventDetailResponseBodyEventDetailDeletedFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailResponseBodyEventDetailDeletedFile() = default ;
    GetIDEEventDetailResponseBodyEventDetailDeletedFile& operator=(const GetIDEEventDetailResponseBodyEventDetailDeletedFile &) = default ;
    GetIDEEventDetailResponseBodyEventDetailDeletedFile& operator=(GetIDEEventDetailResponseBodyEventDetailDeletedFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessId_ != nullptr
        && this->content_ != nullptr && this->currentVersion_ != nullptr && this->dataSourceName_ != nullptr && this->fileId_ != nullptr && this->fileName_ != nullptr
        && this->fileType_ != nullptr && this->folderId_ != nullptr && this->nodeId_ != nullptr && this->owner_ != nullptr && this->parentFileId_ != nullptr
        && this->useType_ != nullptr; };
    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline int64_t businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline int64_t currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setCurrentVersion(int64_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline int64_t fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setFileType(int64_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parentFileId Field Functions 
    bool hasParentFileId() const { return this->parentFileId_ != nullptr;};
    void deleteParentFileId() { this->parentFileId_ = nullptr;};
    inline int64_t parentFileId() const { DARABONBA_PTR_GET_DEFAULT(parentFileId_, 0L) };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setParentFileId(int64_t parentFileId) { DARABONBA_PTR_SET_VALUE(parentFileId_, parentFileId) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string useType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline GetIDEEventDetailResponseBodyEventDetailDeletedFile& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // The ID of the workflow to which the file belongs.
    std::shared_ptr<int64_t> businessId_ = nullptr;
    // The code in the file of the current version.
    std::shared_ptr<string> content_ = nullptr;
    // The latest version number of the file.
    std::shared_ptr<int64_t> currentVersion_ = nullptr;
    // The name of the data source with which the file is associated.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The file ID.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The name of the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The file type. The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
    std::shared_ptr<int64_t> fileType_ = nullptr;
    // The ID of the folder to which the file belongs. You can call the [GetFolder](https://help.aliyun.com/document_detail/173952.html) operation to query the details of the file based on the folder ID.
    std::shared_ptr<string> folderId_ = nullptr;
    // The ID of the node that is scheduled.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The file owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The ID of the do-while node or for-each node that corresponds to the file.
    std::shared_ptr<int64_t> parentFileId_ = nullptr;
    // The module to which the file belongs. Valid values:
    // 
    // *   NORMAL: The file is used for DataStudio.
    // *   MANUAL: The file is used for a manually triggered node.
    // *   MANUAL_BIZ: The file is used for a manually triggered workflow.
    // *   SKIP: The file is used for a dry-run node in DataStudio.
    // *   ADHOCQUERY: The file is used for an ad hoc query.
    // *   COMPONENT: The file is used for a script template.
    std::shared_ptr<string> useType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAFLOWTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAFLOWTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateDataFlowTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataFlowTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConflictPolicy, conflictPolicy_);
      DARABONBA_PTR_TO_JSON(CreateDirIfNotExist, createDirIfNotExist_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(DstDirectory, dstDirectory_);
      DARABONBA_PTR_TO_JSON(EntryList, entryList_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Includes, includes_);
      DARABONBA_PTR_TO_JSON(SrcTaskId, srcTaskId_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataFlowTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConflictPolicy, conflictPolicy_);
      DARABONBA_PTR_FROM_JSON(CreateDirIfNotExist, createDirIfNotExist_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(DstDirectory, dstDirectory_);
      DARABONBA_PTR_FROM_JSON(EntryList, entryList_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Includes, includes_);
      DARABONBA_PTR_FROM_JSON(SrcTaskId, srcTaskId_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
    };
    CreateDataFlowTaskRequest() = default ;
    CreateDataFlowTaskRequest(const CreateDataFlowTaskRequest &) = default ;
    CreateDataFlowTaskRequest(CreateDataFlowTaskRequest &&) = default ;
    CreateDataFlowTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataFlowTaskRequest() = default ;
    CreateDataFlowTaskRequest& operator=(const CreateDataFlowTaskRequest &) = default ;
    CreateDataFlowTaskRequest& operator=(CreateDataFlowTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->conflictPolicy_ != nullptr && this->createDirIfNotExist_ != nullptr && this->dataFlowId_ != nullptr && this->dataType_ != nullptr && this->directory_ != nullptr
        && this->dryRun_ != nullptr && this->dstDirectory_ != nullptr && this->entryList_ != nullptr && this->fileSystemId_ != nullptr && this->includes_ != nullptr
        && this->srcTaskId_ != nullptr && this->taskAction_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDataFlowTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // conflictPolicy Field Functions 
    bool hasConflictPolicy() const { return this->conflictPolicy_ != nullptr;};
    void deleteConflictPolicy() { this->conflictPolicy_ = nullptr;};
    inline string conflictPolicy() const { DARABONBA_PTR_GET_DEFAULT(conflictPolicy_, "") };
    inline CreateDataFlowTaskRequest& setConflictPolicy(string conflictPolicy) { DARABONBA_PTR_SET_VALUE(conflictPolicy_, conflictPolicy) };


    // createDirIfNotExist Field Functions 
    bool hasCreateDirIfNotExist() const { return this->createDirIfNotExist_ != nullptr;};
    void deleteCreateDirIfNotExist() { this->createDirIfNotExist_ = nullptr;};
    inline bool createDirIfNotExist() const { DARABONBA_PTR_GET_DEFAULT(createDirIfNotExist_, false) };
    inline CreateDataFlowTaskRequest& setCreateDirIfNotExist(bool createDirIfNotExist) { DARABONBA_PTR_SET_VALUE(createDirIfNotExist_, createDirIfNotExist) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string dataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline CreateDataFlowTaskRequest& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateDataFlowTaskRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline CreateDataFlowTaskRequest& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDataFlowTaskRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // dstDirectory Field Functions 
    bool hasDstDirectory() const { return this->dstDirectory_ != nullptr;};
    void deleteDstDirectory() { this->dstDirectory_ = nullptr;};
    inline string dstDirectory() const { DARABONBA_PTR_GET_DEFAULT(dstDirectory_, "") };
    inline CreateDataFlowTaskRequest& setDstDirectory(string dstDirectory) { DARABONBA_PTR_SET_VALUE(dstDirectory_, dstDirectory) };


    // entryList Field Functions 
    bool hasEntryList() const { return this->entryList_ != nullptr;};
    void deleteEntryList() { this->entryList_ = nullptr;};
    inline string entryList() const { DARABONBA_PTR_GET_DEFAULT(entryList_, "") };
    inline CreateDataFlowTaskRequest& setEntryList(string entryList) { DARABONBA_PTR_SET_VALUE(entryList_, entryList) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateDataFlowTaskRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // includes Field Functions 
    bool hasIncludes() const { return this->includes_ != nullptr;};
    void deleteIncludes() { this->includes_ = nullptr;};
    inline string includes() const { DARABONBA_PTR_GET_DEFAULT(includes_, "") };
    inline CreateDataFlowTaskRequest& setIncludes(string includes) { DARABONBA_PTR_SET_VALUE(includes_, includes) };


    // srcTaskId Field Functions 
    bool hasSrcTaskId() const { return this->srcTaskId_ != nullptr;};
    void deleteSrcTaskId() { this->srcTaskId_ = nullptr;};
    inline string srcTaskId() const { DARABONBA_PTR_GET_DEFAULT(srcTaskId_, "") };
    inline CreateDataFlowTaskRequest& setSrcTaskId(string srcTaskId) { DARABONBA_PTR_SET_VALUE(srcTaskId_, srcTaskId) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline CreateDataFlowTaskRequest& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How do I ensure the idempotence?](https://help.aliyun.com/document_detail/25693.html)
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The value of RequestId may be different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The conflict policy for files with the same name. Valid values:
    // 
    // *   SKIP_THE_FILE: skips files with the same name.
    // *   KEEP_LATEST: compares the update time and keeps the latest version.
    // *   OVERWRITE_EXISTING: forcibly overwrites the existing file.
    // 
    // >  This parameter is required for CPFS for LINGJUN file systems.
    std::shared_ptr<string> conflictPolicy_ = nullptr;
    // Specifies whether to automatically create a directory if no directory exists. Valid values:
    // 
    // *   true: automatically creates a directory.
    // *   false (default): does not automatically create a directory.
    // 
    // > - This parameter is required if the TaskAction parameter is set to Import.
    // > - Only CPFS for LINGJUN V2.6.0 and later support this parameter.
    std::shared_ptr<bool> createDirIfNotExist_ = nullptr;
    // The ID of the dataflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataFlowId_ = nullptr;
    // The type of data on which operations are performed by the dataflow task.
    // 
    // Valid values:
    // 
    // *   Metadata: the metadata of a file, including the timestamp, ownership, and permission information of the file. If you select Metadata, only the metadata of the file is imported. You can only query the file. When you access the file data, the file is loaded from the source storage as required.
    // *   Data: the data blocks of a file.
    // *   MetaAndData: the metadata and data blocks of the file.
    std::shared_ptr<string> dataType_ = nullptr;
    // The source directory of the data.
    // 
    // Limits:
    // 
    // *   The directory must be 1 to 1,023 characters in length.
    // *   The directory must be encoded in UTF-8.
    // *   The directory must start and end with a forward slash (/).
    // *   Only one directory can be listed at a time.
    // *   If the TaskAction parameter is set to Export, the directory must be a relative path within the FileSystemPath.
    // *   If the TaskAction parameter is set to Import, the directory must be a relative path within the SourceStoragePath.
    // *   If the TaskAction parameter is set to StreamExport, the directory must be a relative path within the FileSystemPath.
    // *   If the TaskAction parameter is set to StreamImport, the directory must be a relative path within the SourceStoragePath.
    // 
    // >  Only CPFS for LINGJUN V2.6.0 and later support StreamImport and StreamExport.
    std::shared_ptr<string> directory_ = nullptr;
    // Specifies whether to perform a dry run.
    // 
    // During the dry run, the system checks whether the request parameters are valid and whether the requested resources are available. During the dry run, no data flow task is created and no fee is incurred.
    // 
    // Valid values:
    // 
    // *   true: performs a dry run. The system checks the required parameters, request syntax, service limits, and available File Storage NAS (NAS) resources. If the request fails the dry run, an error message is returned. If the request passes the dry run, the HTTP status code 200 is returned. No value is returned for the TaskId parameter.
    // *   false (default): performs a dry run and sends the request. If the request passes the dry run, a data flow task is created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The directory mapped to the data flow task. Limits:
    // 
    // *   The directory must start and end with a forward slash (/). The directory cannot be /../.
    // *   The directory must be 1 to 1,023 characters in length.
    // *   The directory must be encoded in UTF-8.
    // *   Only one directory can be listed at a time.
    // *   If the TaskAction parameter is set to Export, the directory must be a relative path within the SourceStoragePath.
    // *   If the TaskAction parameter is set to Import, the directory must be a relative path within the FileSystemPath.
    // *   If the TaskAction parameter is set to StreamExport, the directory must be a relative path within the SourceStoragePath.
    // *   If the TaskAction parameter is set to StreamImport, the directory must be a relative path within the FileSystemPath.
    // 
    // >  Only CPFS for LINGJUN V2.6.0 and later support StreamImport and StreamExport.
    std::shared_ptr<string> dstDirectory_ = nullptr;
    // The list of files that are executed by the data flow task.
    // 
    // Limits:
    // 
    // *   The list must be encoded in UTF-8.
    // *   The total length of the file list cannot exceed 64 KB.
    // *   The file list is in JSON format.
    // *   The path of a single file must be 1 to 1,023 characters in length and must start with a forward slash (/).
    // *   If the TaskAction parameter is set to Import, each element in the list represents an OSS object name.
    // *   If the TaskAction parameter is set to Export, each element in the list represents a CPFS file path.
    std::shared_ptr<string> entryList_ = nullptr;
    // The ID of the file system.
    // 
    // *   The IDs of CPFS file systems must start with `cpfs-`. Example: cpfs-125487\\*\\*\\*\\*.
    // *   The IDs of CPFS for LINGJUN file systems must start with `bmcpfs-`. Example: bmcpfs-0015\\*\\*\\*\\*.
    // 
    // >  CPFS is not supported on the international site.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // Filters subdirectories and transfers their contents.
    // 
    // > *   This parameter takes effect only when the Directory parameter is specified.
    // > *   The path length of a single folder must be 1 to 1023 characters, start and end with a forward slash (/), and the total length must not exceed 3000 characters.
    // >*   Only CPFS for Lingjun supports this parameter.
    std::shared_ptr<string> includes_ = nullptr;
    // If you specify SrcTaskId, you must enter the ID of the dataflow task. The system copies the TaskAction, DataType, and EntryList parameters from the destination dataflow task. You do not need to specify them.
    // 
    // >  Streaming dataflow tasks are not supported.
    std::shared_ptr<string> srcTaskId_ = nullptr;
    // The type of the data flow task.
    // 
    // Valid values:
    // 
    // *   Import: imports data stored in the source storage to a CPFS file system.
    // *   Export: exports specified data from a CPFS file system to the source storage.
    // *   StreamImport: batch imports the specified data from the source storage to a CPFS file system.
    // *   StreamExport: batch exports specified data from a CPFS file system to the source storage.
    // 
    // >  Only CPFS for LINGJUN V2.6.0 and later support StreamImport and StreamExport.
    std::shared_ptr<string> taskAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

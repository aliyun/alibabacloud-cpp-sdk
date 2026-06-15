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
      DARABONBA_PTR_TO_JSON(TransferFileListPath, transferFileListPath_);
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
      DARABONBA_PTR_FROM_JSON(TransferFileListPath, transferFileListPath_);
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
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->conflictPolicy_ == nullptr && this->createDirIfNotExist_ == nullptr && this->dataFlowId_ == nullptr && this->dataType_ == nullptr && this->directory_ == nullptr
        && this->dryRun_ == nullptr && this->dstDirectory_ == nullptr && this->entryList_ == nullptr && this->fileSystemId_ == nullptr && this->includes_ == nullptr
        && this->srcTaskId_ == nullptr && this->taskAction_ == nullptr && this->transferFileListPath_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDataFlowTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // conflictPolicy Field Functions 
    bool hasConflictPolicy() const { return this->conflictPolicy_ != nullptr;};
    void deleteConflictPolicy() { this->conflictPolicy_ = nullptr;};
    inline string getConflictPolicy() const { DARABONBA_PTR_GET_DEFAULT(conflictPolicy_, "") };
    inline CreateDataFlowTaskRequest& setConflictPolicy(string conflictPolicy) { DARABONBA_PTR_SET_VALUE(conflictPolicy_, conflictPolicy) };


    // createDirIfNotExist Field Functions 
    bool hasCreateDirIfNotExist() const { return this->createDirIfNotExist_ != nullptr;};
    void deleteCreateDirIfNotExist() { this->createDirIfNotExist_ = nullptr;};
    inline bool getCreateDirIfNotExist() const { DARABONBA_PTR_GET_DEFAULT(createDirIfNotExist_, false) };
    inline CreateDataFlowTaskRequest& setCreateDirIfNotExist(bool createDirIfNotExist) { DARABONBA_PTR_SET_VALUE(createDirIfNotExist_, createDirIfNotExist) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline string getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
    inline CreateDataFlowTaskRequest& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateDataFlowTaskRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline CreateDataFlowTaskRequest& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDataFlowTaskRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // dstDirectory Field Functions 
    bool hasDstDirectory() const { return this->dstDirectory_ != nullptr;};
    void deleteDstDirectory() { this->dstDirectory_ = nullptr;};
    inline string getDstDirectory() const { DARABONBA_PTR_GET_DEFAULT(dstDirectory_, "") };
    inline CreateDataFlowTaskRequest& setDstDirectory(string dstDirectory) { DARABONBA_PTR_SET_VALUE(dstDirectory_, dstDirectory) };


    // entryList Field Functions 
    bool hasEntryList() const { return this->entryList_ != nullptr;};
    void deleteEntryList() { this->entryList_ = nullptr;};
    inline string getEntryList() const { DARABONBA_PTR_GET_DEFAULT(entryList_, "") };
    inline CreateDataFlowTaskRequest& setEntryList(string entryList) { DARABONBA_PTR_SET_VALUE(entryList_, entryList) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateDataFlowTaskRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // includes Field Functions 
    bool hasIncludes() const { return this->includes_ != nullptr;};
    void deleteIncludes() { this->includes_ = nullptr;};
    inline string getIncludes() const { DARABONBA_PTR_GET_DEFAULT(includes_, "") };
    inline CreateDataFlowTaskRequest& setIncludes(string includes) { DARABONBA_PTR_SET_VALUE(includes_, includes) };


    // srcTaskId Field Functions 
    bool hasSrcTaskId() const { return this->srcTaskId_ != nullptr;};
    void deleteSrcTaskId() { this->srcTaskId_ = nullptr;};
    inline string getSrcTaskId() const { DARABONBA_PTR_GET_DEFAULT(srcTaskId_, "") };
    inline CreateDataFlowTaskRequest& setSrcTaskId(string srcTaskId) { DARABONBA_PTR_SET_VALUE(srcTaskId_, srcTaskId) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline CreateDataFlowTaskRequest& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // transferFileListPath Field Functions 
    bool hasTransferFileListPath() const { return this->transferFileListPath_ != nullptr;};
    void deleteTransferFileListPath() { this->transferFileListPath_ = nullptr;};
    inline string getTransferFileListPath() const { DARABONBA_PTR_GET_DEFAULT(transferFileListPath_, "") };
    inline CreateDataFlowTaskRequest& setTransferFileListPath(string transferFileListPath) { DARABONBA_PTR_SET_VALUE(transferFileListPath_, transferFileListPath) };


  protected:
    // A client-generated token that ensures the idempotence of the request. The token must be unique across different requests.
    // 
    // `ClientToken` can contain only ASCII characters and must not exceed 64 characters. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the `RequestId` of the API request as the `ClientToken`. The `RequestId` may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The conflict policy for files with the same name.
    // Valid values:
    // 
    // - SKIP_THE_FILE: Skips files with the same name.
    // 
    // - KEEP_LATEST: Compares update times and keeps the latest version.
    // 
    // - OVERWRITE_EXISTING: Forcibly overwrites files with the same name.
    // 
    // > This parameter is required if the file system is a CPFS AI-Computing Edition instance.
    shared_ptr<string> conflictPolicy_ {};
    // Specifies whether to automatically create the directory if it does not exist.
    // Valid values:
    // 
    // - true: Automatically creates the directory.
    // 
    // - false (default): Does not automatically create the directory.
    // 
    // > * This parameter takes effect only when `TaskAction` is set to `Import`.
    // >
    // > * This parameter is supported only by CPFS AI-Computing Edition V2.6.0 and later.
    shared_ptr<bool> createDirIfNotExist_ {};
    // The ID of the data flow.
    // 
    // This parameter is required.
    shared_ptr<string> dataFlowId_ {};
    // The data type that the data flow task operates on.
    // 
    // Valid values:
    // 
    // - Metadata: The metadata of the file, including attributes such as timestamp, ownership, and permissions. If you select `Metadata`, only the file metadata is imported. You can see the file, but when you access the file data, it is loaded from the source storage on demand.
    // 
    // - Data: The data blocks of the file.
    // 
    // - MetaAndData: The metadata and data blocks of the file.
    shared_ptr<string> dataType_ {};
    // The source directory of the data.
    // 
    // Limits:
    // 
    // - The length must be 1 to 1,023 characters.
    // 
    // - The directory must be UTF-8 encoded.
    // 
    // - The directory must start and end with a forward slash (`/`).
    // 
    // - Only one directory can be specified at a time.
    // 
    // - If `TaskAction` is `Export`, this directory must be a relative path within `FileSystemPath`.
    // 
    // - If `TaskAction` is `Import`, this directory must be a relative path within `SourceStoragePath`.
    // 
    // - If `TaskAction` is `StreamExport`, this directory must be a relative path within `FileSystemPath`.
    // 
    // - If `TaskAction` is `StreamImport`, this directory must be a relative path within `SourceStoragePath`.
    // 
    // > `StreamImport` and `StreamExport` are supported only by CPFS AI-Computing Edition V2.6.0 and later.
    shared_ptr<string> directory_ {};
    // Specifies whether to perform a dry run for this creation request.
    // 
    // A dry run checks parameter validity and inventory without creating an instance or incurring charges.
    // 
    // Valid values:
    // 
    // - true: Sends a check request without creating the instance. The system checks for required parameters, request format, business limits, and NAS inventory. If the check fails, an error is returned. If the check passes, an HTTP 200 status code is returned, but `TaskId` is empty.
    // 
    // - false (default): Sends a normal request and creates the instance after the check passes.
    shared_ptr<bool> dryRun_ {};
    // The destination directory for the data flow task mapping.
    // Limits:
    // 
    // - The directory must start and end with a forward slash (`/`). The `/../` sequence is not supported.
    // 
    // - The length must be 1 to 1,023 characters.
    // 
    // - The directory must be UTF-8 encoded.
    // 
    // - Only one directory can be specified at a time.
    // 
    // - If `TaskAction` is `Export`, this directory must be a relative path within `SourceStoragePath`.
    // 
    // - If `TaskAction` is `Import`, this directory must be a relative path within `FileSystemPath`.
    // 
    // - If `TaskAction` is `StreamExport`, this directory must be a relative path within `SourceStoragePath`.
    // 
    // - If `TaskAction` is `StreamImport`, this directory must be a relative path within `FileSystemPath`.
    // 
    // > `StreamImport` and `StreamExport` are supported only by CPFS AI-Computing Edition V2.6.0 and later.
    shared_ptr<string> dstDirectory_ {};
    // The list of files for the data flow task to execute.
    // 
    // Limits:
    // 
    // - The list must be UTF-8 encoded.
    // 
    // - The total length of the file list must be less than 64 KB.
    // 
    // - The file list must be in JSON format.
    // 
    // - The path of a single file must be 1 to 1,023 characters in length and must start with a forward slash (`/`).
    // 
    // - If `TaskAction` is `Import`, each element in the list represents an OSS Object name.
    // 
    // - If `TaskAction` is `Export`, each element in the list represents a CPFS file path.
    shared_ptr<string> entryList_ {};
    // The ID of the file system.
    // 
    // - CPFS General Purpose Edition: The ID must start with `cpfs-`, such as `cpfs-125487****`.
    // 
    // - CPFS AI-Computing Edition: The ID must start with `bmcpfs-`, such as `bmcpfs-0015****`.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // Filters the subdirectories under the `Directory` parameter and transfers the content of the filtered subdirectories.
    // 
    // > - This parameter takes effect only when the `Directory` parameter is specified.
    // >
    // > - The path of a single folder must be 1 to 1,023 characters in length and must start and end with a forward slash (`/`). The total length cannot exceed 3,000 characters.
    // >
    // > - This feature is supported only by CPFS AI-Computing Edition.
    shared_ptr<string> includes_ {};
    // If you specify `SrcTaskId`, enter the ID of a data flow task. The system copies the `TaskAction`, `DataType`, and `EntryList` parameter information from the specified task. You do not need to specify these parameters.
    // 
    // > Data flow streaming tasks are not supported.
    shared_ptr<string> srcTaskId_ {};
    // The type of the data flow task.
    // 
    // Valid values:
    // 
    // - Import: Imports specified data from the source storage to the CPFS file system.
    // 
    // - Export: Exports specified data from the CPFS file system to the source storage.
    // 
    // - StreamImport: Imports a large amount of specified data from the source storage to the CPFS file system.
    // 
    // - StreamExport: Exports a large amount of specified data from the CPFS file system to the source storage.
    // 
    // - Evict: Releases the data blocks of a file from the CPFS file system. After the release, only the metadata of the file is retained. You can still query the file, but its data blocks are cleared and no longer occupy storage capacity. When you access the file data, it is loaded from the source storage on demand.
    // 
    // - Inventory: Obtains the inventory of files managed by a data flow for the CPFS file system. This provides the cache status of files in the data flow.
    // 
    // > CPFS AI-Computing Edition supports only `Import`, `Export`, `StreamImport`, and `StreamExport`. `StreamImport` and `StreamExport` are supported only by CPFS AI-Computing Edition V2.6.0 and later.
    shared_ptr<string> taskAction_ {};
    // Specifies an OSS directory. Data is synchronized based on the content of the CSV files in this directory. The following limits apply.
    // 
    // - The path must start and end with a forward slash (`/`).
    // 
    // - The path is case-sensitive.
    // 
    // - The length must be between 1 and 1,023 characters.
    // 
    // - The path must be UTF-8 encoded.
    // 
    // > * `TransferFileListPath`, `Directory`, and `EntryList` are mutually exclusive. You can specify only one of them.
    // >
    // > * This parameter specifies an existing path in OSS. The `*.csv` files are stored in this path.
    // >
    // > * `TransferFileListPath` supports only the `Import` and `Export` features.
    // >
    // > * For an `Import` task, the files or directories specified in the CSV file are imported from OSS to the CPFS file system.
    // >
    // > * For an `Export` task, the files or directories specified in the CSV file are exported from the CPFS file system to OSS.
    // >
    // > * The CSV file must contain `Name` and `Type` columns. `Name` is the relative path. `Type` can be `dir` or `file`. If `Type` is `dir`, the `Name` value must end with a forward slash (`/`).
    // >
    // > * This feature is supported only by CPFS AI-Computing Edition.
    shared_ptr<string> transferFileListPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

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
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The conflict policy for files with the same name.
    // Valid values:
    // 
    // - SKIP_THE_FILE: skips files with the same name.
    // - KEEP_LATEST: compares the update time and keeps the latest version.
    // - OVERWRITE_EXISTING: forcibly overwrites files with the same name.
    // > This parameter is required when the file system type is CPFS for Lingjun.
    shared_ptr<string> conflictPolicy_ {};
    // Specifies whether to enable automatic creation of the folder if it does not exist.
    // Valid values:
    // 
    // - true: enables automatic creation of the folder.
    // - false (default): does not enable automatic creation of the folder.
    // 
    // > - This parameter takes effect when TaskAction is set to Import.
    // > - Only CPFS for Lingjun 2.6.0 and later support this feature.
    shared_ptr<bool> createDirIfNotExist_ {};
    // The data flow ID.
    // 
    // This parameter is required.
    shared_ptr<string> dataFlowId_ {};
    // The type of data on which the data flow task operates.
    // 
    // Valid values:
    // 
    // - Metadata: the metadata of files, including the timestamp, ownership, permission, and other attributes. If you select Metadata, only the metadata of files is imported. You can view the file, but when you access the file data, the data is loaded from the source storage on demand.
    // - Data: the data blocks of files.
    // - MetaAndData: the metadata and data blocks of files.
    // > When TaskAction is set to Evict, the DataType parameter is required.
    shared_ptr<string> dataType_ {};
    // The source directory of data.
    // 
    // Limits:
    // - The value must be 1 to 1,023 characters in length.
    // - The value must be encoded in UTF-8.
    // - The value must start and end with a forward slash (/).
    // - Only one directory can be specified at a time.
    // - When TaskAction is set to Export, this directory must be a relative path within FileSystemPath.
    // - When TaskAction is set to Import, this directory must be a relative path within SourceStoragePath.
    // - When TaskAction is set to StreamExport, this directory must be a relative path within FileSystemPath.
    // - When TaskAction is set to StreamImport, this directory must be a relative path within SourceStoragePath.
    // > StreamImport and StreamExport are supported only in CPFS for Lingjun 2.6.0 and later.
    // Directory, EntryList, and TransferFileListPath are mutually exclusive parameters. You can specify only one of them.
    shared_ptr<string> directory_ {};
    // Specifies whether to perform a dry run.
    // 
    // The dry run checks parameter validity and whether required resources are available. The dry run does not create an instance or incur fees.
    // 
    // Valid values:
    // 
    // - true: performs a dry run without creating the instance. The system checks whether the required parameters are specified, whether the request format is valid, whether service limits are reached, and whether the required NAS resources are available. If the request fails the dry run, an error message is returned. If the request passes the dry run, the HTTP status code 200 is returned, but TaskId is empty.
    // - false (default): performs a dry run and sends the request. If the request passes the dry run, the instance is created.
    shared_ptr<bool> dryRun_ {};
    // The target directory to which the data flow task maps.
    // Limits:
    //  - The value must start and end with a forward slash (/). /../ is not supported.
    //  - The value must be 1 to 1,023 characters in length.
    //  - The value must be encoded in UTF-8.
    //  - Only one directory can be specified at a time.
    //  - When TaskAction is set to Export, this directory must be a relative path within SourceStoragePath.
    //  - When TaskAction is set to Import, this directory must be a relative path within FileSystemPath.
    //  - When TaskAction is set to StreamExport, this directory must be a relative path within SourceStoragePath.
    //  - When TaskAction is set to StreamImport, this directory must be a relative path within FileSystemPath.
    // > StreamImport and StreamExport are supported only in CPFS for Lingjun 2.6.0 and later.
    shared_ptr<string> dstDirectory_ {};
    // The list of files on which the data flow task is executed.
    // 
    // Limits:
    // 
    // - The value must be encoded in UTF-8.
    // - The total length of the file list must be less than 64 KB.
    // - The file list is in JSON format.
    // - The path of each file must be 1 to 1,023 characters in length and must start with a forward slash (/).
    // - When TaskAction is set to Import, each element in the list represents an OSS object name.
    // - When TaskAction is set to Export, each element in the list represents a CPFS file path.
    // > Directory, EntryList, and TransferFileListPath are mutually exclusive parameters. You can specify only one of them.
    shared_ptr<string> entryList_ {};
    // The file system ID.
    // 
    // - General-purpose CPFS: must start with `cpfs-`, such as cpfs-125487\\*\\*\\*\\*.
    // 
    // - CPFS for Lingjun: must start with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\*.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // Filters directories under the specified directory and transfers the content of the included folders.
    // 
    // > - This parameter takes effect only when the Directory parameter is specified.
    // > - The path of each folder must be 1 to 1,023 characters in length and must start and end with a forward slash (/). The total length must not exceed 3,000 characters.
    // > - Only CPFS for Lingjun supports this feature.
    shared_ptr<string> includes_ {};
    // If you specify SrcTaskId, enter the data flow task ID. The system copies the TaskAction, DataType, and EntryList parameter information from the specified data flow task, and you do not need to specify these parameters separately.
    // > Data flow streaming tasks are not supported.
    shared_ptr<string> srcTaskId_ {};
    // The data flow node type.
    // 
    // Valid values:
    // 
    // - Import: performs data import from the source storage to CPFS.
    // - Export: exports specified data from CPFS to the source storage.
    // - StreamImport: batch imports specified data from the source storage to CPFS.
    // - StreamExport: batch exports specified data from CPFS to the source storage.
    // - Evict: releases data blocks of files on CPFS. After the release, only metadata is retained on CPFS. You can still query the file, but the data blocks are purged and do not occupy storage capacity on CPFS. When you access the file data, the data is loaded from the source storage on demand.
    // - Inventory: obtains the file checklist managed by the data stream on CPFS. The checklist provides the cache status of files in the data flow.
    // > CPFS for Lingjun supports only Import, Export, StreamImport, and StreamExport. StreamImport and StreamExport are supported only in CPFS for Lingjun 2.6.0 and later.
    shared_ptr<string> taskAction_ {};
    // The OSS directory. Data is synchronized based on the content of CSV files in the OSS directory. Limits:
    // - The value must start and end with a forward slash (/).
    // 
    // - The value is case-sensitive.
    // 
    // - The value must be 1 to 1,023 characters in length.
    // 
    // - The value must be encoded in UTF-8.
    // 
    // 
    // >- TransferFileListPath, Directory, and EntryList are mutually exclusive parameters. You can specify only one of them.
    // >- This parameter specifies an existing path in OSS. The \\*.csv files in the path are stored in OSS.
    // > - TransferFileListPath supports only Import and Export.
    // > - In the Import scenario, the files or directories specified in the CSV files are imported from OSS to CPFS.
    // > - In the Export scenario, the files or directories specified in the CSV files are exported from CPFS to OSS.
    // > - The CSV file format must include the Name and Type columns. Name is a relative path, and Type supports two values: dir and file. If Type is dir, the Name value must end with a forward slash (/).
    // >- Only CPFS for Lingjun supports this feature.
    shared_ptr<string> transferFileListPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

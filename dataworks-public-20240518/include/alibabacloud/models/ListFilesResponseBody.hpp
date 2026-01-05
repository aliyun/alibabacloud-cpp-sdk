// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListFilesResponseBody() = default ;
    ListFilesResponseBody(const ListFilesResponseBody &) = default ;
    ListFilesResponseBody(ListFilesResponseBody &&) = default ;
    ListFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFilesResponseBody() = default ;
    ListFilesResponseBody& operator=(const ListFilesResponseBody &) = default ;
    ListFilesResponseBody& operator=(ListFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Files, files_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Files, files_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Files : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Files& obj) { 
          DARABONBA_PTR_TO_JSON(AbsoluteFolderPath, absoluteFolderPath_);
          DARABONBA_PTR_TO_JSON(AutoParsing, autoParsing_);
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
          DARABONBA_PTR_TO_JSON(CommitStatus, commitStatus_);
          DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_TO_JSON(FileDescription, fileDescription_);
          DARABONBA_PTR_TO_JSON(FileFolderId, fileFolderId_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(IsMaxCompute, isMaxCompute_);
          DARABONBA_PTR_TO_JSON(LastEditTime, lastEditTime_);
          DARABONBA_PTR_TO_JSON(LastEditUser, lastEditUser_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(UseType, useType_);
        };
        friend void from_json(const Darabonba::Json& j, Files& obj) { 
          DARABONBA_PTR_FROM_JSON(AbsoluteFolderPath, absoluteFolderPath_);
          DARABONBA_PTR_FROM_JSON(AutoParsing, autoParsing_);
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
          DARABONBA_PTR_FROM_JSON(CommitStatus, commitStatus_);
          DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_FROM_JSON(FileDescription, fileDescription_);
          DARABONBA_PTR_FROM_JSON(FileFolderId, fileFolderId_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(IsMaxCompute, isMaxCompute_);
          DARABONBA_PTR_FROM_JSON(LastEditTime, lastEditTime_);
          DARABONBA_PTR_FROM_JSON(LastEditUser, lastEditUser_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(UseType, useType_);
        };
        Files() = default ;
        Files(const Files &) = default ;
        Files(Files &&) = default ;
        Files(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Files() = default ;
        Files& operator=(const Files &) = default ;
        Files& operator=(Files &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->absoluteFolderPath_ == nullptr
        && this->autoParsing_ == nullptr && this->bizId_ == nullptr && this->businessId_ == nullptr && this->commitStatus_ == nullptr && this->connectionName_ == nullptr
        && this->content_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->currentVersion_ == nullptr && this->fileDescription_ == nullptr
        && this->fileFolderId_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->isMaxCompute_ == nullptr
        && this->lastEditTime_ == nullptr && this->lastEditUser_ == nullptr && this->nodeId_ == nullptr && this->owner_ == nullptr && this->parentId_ == nullptr
        && this->useType_ == nullptr; };
        // absoluteFolderPath Field Functions 
        bool hasAbsoluteFolderPath() const { return this->absoluteFolderPath_ != nullptr;};
        void deleteAbsoluteFolderPath() { this->absoluteFolderPath_ = nullptr;};
        inline string getAbsoluteFolderPath() const { DARABONBA_PTR_GET_DEFAULT(absoluteFolderPath_, "") };
        inline Files& setAbsoluteFolderPath(string absoluteFolderPath) { DARABONBA_PTR_SET_VALUE(absoluteFolderPath_, absoluteFolderPath) };


        // autoParsing Field Functions 
        bool hasAutoParsing() const { return this->autoParsing_ != nullptr;};
        void deleteAutoParsing() { this->autoParsing_ = nullptr;};
        inline bool getAutoParsing() const { DARABONBA_PTR_GET_DEFAULT(autoParsing_, false) };
        inline Files& setAutoParsing(bool autoParsing) { DARABONBA_PTR_SET_VALUE(autoParsing_, autoParsing) };


        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline int64_t getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
        inline Files& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // businessId Field Functions 
        bool hasBusinessId() const { return this->businessId_ != nullptr;};
        void deleteBusinessId() { this->businessId_ = nullptr;};
        inline int64_t getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
        inline Files& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


        // commitStatus Field Functions 
        bool hasCommitStatus() const { return this->commitStatus_ != nullptr;};
        void deleteCommitStatus() { this->commitStatus_ = nullptr;};
        inline int32_t getCommitStatus() const { DARABONBA_PTR_GET_DEFAULT(commitStatus_, 0) };
        inline Files& setCommitStatus(int32_t commitStatus) { DARABONBA_PTR_SET_VALUE(commitStatus_, commitStatus) };


        // connectionName Field Functions 
        bool hasConnectionName() const { return this->connectionName_ != nullptr;};
        void deleteConnectionName() { this->connectionName_ = nullptr;};
        inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
        inline Files& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Files& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Files& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline Files& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // currentVersion Field Functions 
        bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
        void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
        inline int32_t getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0) };
        inline Files& setCurrentVersion(int32_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


        // fileDescription Field Functions 
        bool hasFileDescription() const { return this->fileDescription_ != nullptr;};
        void deleteFileDescription() { this->fileDescription_ = nullptr;};
        inline string getFileDescription() const { DARABONBA_PTR_GET_DEFAULT(fileDescription_, "") };
        inline Files& setFileDescription(string fileDescription) { DARABONBA_PTR_SET_VALUE(fileDescription_, fileDescription) };


        // fileFolderId Field Functions 
        bool hasFileFolderId() const { return this->fileFolderId_ != nullptr;};
        void deleteFileFolderId() { this->fileFolderId_ = nullptr;};
        inline string getFileFolderId() const { DARABONBA_PTR_GET_DEFAULT(fileFolderId_, "") };
        inline Files& setFileFolderId(string fileFolderId) { DARABONBA_PTR_SET_VALUE(fileFolderId_, fileFolderId) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline Files& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline Files& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
        inline Files& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // isMaxCompute Field Functions 
        bool hasIsMaxCompute() const { return this->isMaxCompute_ != nullptr;};
        void deleteIsMaxCompute() { this->isMaxCompute_ = nullptr;};
        inline bool getIsMaxCompute() const { DARABONBA_PTR_GET_DEFAULT(isMaxCompute_, false) };
        inline Files& setIsMaxCompute(bool isMaxCompute) { DARABONBA_PTR_SET_VALUE(isMaxCompute_, isMaxCompute) };


        // lastEditTime Field Functions 
        bool hasLastEditTime() const { return this->lastEditTime_ != nullptr;};
        void deleteLastEditTime() { this->lastEditTime_ = nullptr;};
        inline int64_t getLastEditTime() const { DARABONBA_PTR_GET_DEFAULT(lastEditTime_, 0L) };
        inline Files& setLastEditTime(int64_t lastEditTime) { DARABONBA_PTR_SET_VALUE(lastEditTime_, lastEditTime) };


        // lastEditUser Field Functions 
        bool hasLastEditUser() const { return this->lastEditUser_ != nullptr;};
        void deleteLastEditUser() { this->lastEditUser_ = nullptr;};
        inline string getLastEditUser() const { DARABONBA_PTR_GET_DEFAULT(lastEditUser_, "") };
        inline Files& setLastEditUser(string lastEditUser) { DARABONBA_PTR_SET_VALUE(lastEditUser_, lastEditUser) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline Files& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Files& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline Files& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // useType Field Functions 
        bool hasUseType() const { return this->useType_ != nullptr;};
        void deleteUseType() { this->useType_ = nullptr;};
        inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
        inline Files& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


      protected:
        // The path to the folder where the file is located.
        shared_ptr<string> absoluteFolderPath_ {};
        // Specifies whether automatic parsing is enabled for the file. Valid values:
        // 
        // *   true: The file automatically parses code.
        // *   false: The file does not automatically parse code.
        // 
        // This parameter corresponds to Analyze Code when you set Dependencies to Same Cycle in the scheduling configuration of a Data Studio task in the [DataWorks console](https://workbench.data.aliyun.com/console).
        shared_ptr<bool> autoParsing_ {};
        // The ID of the workflow to which the file belongs. This parameter is deprecated. Use the BusinessId parameter instead.
        shared_ptr<int64_t> bizId_ {};
        // The ID of the workflow to which the file belongs.
        shared_ptr<int64_t> businessId_ {};
        // The current commit status of the file. Valid values: 0 (the latest code is not committed) and 1 (the latest code is committed).
        shared_ptr<int32_t> commitStatus_ {};
        // The data source name used by the task.
        shared_ptr<string> connectionName_ {};
        // This parameter is deprecated. You can call the [GetFile](https://help.aliyun.com/document_detail/173954.html) operation to query this information.
        shared_ptr<string> content_ {};
        // The timestamp (in milliseconds) when the file was created.
        shared_ptr<int64_t> createTime_ {};
        // The Alibaba Cloud account ID of the file creator.
        shared_ptr<string> createUser_ {};
        // The latest version of the file.
        shared_ptr<int32_t> currentVersion_ {};
        // The description of the file.
        shared_ptr<string> fileDescription_ {};
        // The ID of the folder where the file is located.
        shared_ptr<string> fileFolderId_ {};
        // The file ID.
        shared_ptr<int64_t> fileId_ {};
        // The file name.
        shared_ptr<string> fileName_ {};
        // The file type. Different file types have different code. For more information, see [DataWorks node types](https://help.aliyun.com/document_detail/600169.html).
        shared_ptr<int32_t> fileType_ {};
        // If the current file is a MaxCompute resource file, this parameter specifies whether the resource file needs to be uploaded to MaxCompute.
        // 
        // You only need to configure this parameter when the file is a MaxCompute resource file.
        shared_ptr<bool> isMaxCompute_ {};
        // The timestamp (in milliseconds) when the file was last modified.
        shared_ptr<int64_t> lastEditTime_ {};
        // The Alibaba Cloud account ID of the user who last updated the file.
        shared_ptr<string> lastEditUser_ {};
        // The ID of the scheduling task generated in the scheduling system after the file is committed.
        shared_ptr<int64_t> nodeId_ {};
        // The Alibaba Cloud account ID of the file owner.
        shared_ptr<string> owner_ {};
        // If the current file is an internal file of a combined node, this parameter specifies the ID of the corresponding combined node file.
        shared_ptr<int64_t> parentId_ {};
        // The functional module to which the file belongs. Valid values:
        // 
        // *   NORMAL: Data Studio
        // *   MANUAL: Manually triggered node
        // *   MANUAL_BIZ: Manually triggered workflow
        // *   SKIP: Dry-run scheduling in Data Studio
        // *   ADHOCQUERY: Ad hoc query
        // *   COMPONENT: Component management
        shared_ptr<string> useType_ {};
      };

      virtual bool empty() const override { return this->files_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // files Field Functions 
      bool hasFiles() const { return this->files_ != nullptr;};
      void deleteFiles() { this->files_ = nullptr;};
      inline const vector<Data::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<Data::Files>) };
      inline vector<Data::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<Data::Files>) };
      inline Data& setFiles(const vector<Data::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
      inline Data& setFiles(vector<Data::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The file details.
      shared_ptr<vector<Data::Files>> files_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListFilesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListFilesResponseBody::Data) };
    inline ListFilesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListFilesResponseBody::Data) };
    inline ListFilesResponseBody& setData(const ListFilesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFilesResponseBody& setData(ListFilesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListFilesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListFilesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListFilesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListFilesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response details.
    shared_ptr<ListFilesResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID. Use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call succeeded. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

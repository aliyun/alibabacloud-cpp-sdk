// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEVERSIONSRESPONSEBODY_HPP_
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
  class ListFileVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListFileVersionsResponseBody() = default ;
    ListFileVersionsResponseBody(const ListFileVersionsResponseBody &) = default ;
    ListFileVersionsResponseBody(ListFileVersionsResponseBody &&) = default ;
    ListFileVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileVersionsResponseBody() = default ;
    ListFileVersionsResponseBody& operator=(const ListFileVersionsResponseBody &) = default ;
    ListFileVersionsResponseBody& operator=(ListFileVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileVersions, fileVersions_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileVersions, fileVersions_);
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
      class FileVersions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileVersions& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CommitTime, commitTime_);
          DARABONBA_PTR_TO_JSON(CommitUser, commitUser_);
          DARABONBA_PTR_TO_JSON(FileContent, fileContent_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FilePropertyContent, filePropertyContent_);
          DARABONBA_PTR_TO_JSON(FileVersion, fileVersion_);
          DARABONBA_PTR_TO_JSON(IsCurrentProd, isCurrentProd_);
          DARABONBA_PTR_TO_JSON(NodeContent, nodeContent_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UseType, useType_);
        };
        friend void from_json(const Darabonba::Json& j, FileVersions& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CommitTime, commitTime_);
          DARABONBA_PTR_FROM_JSON(CommitUser, commitUser_);
          DARABONBA_PTR_FROM_JSON(FileContent, fileContent_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FilePropertyContent, filePropertyContent_);
          DARABONBA_PTR_FROM_JSON(FileVersion, fileVersion_);
          DARABONBA_PTR_FROM_JSON(IsCurrentProd, isCurrentProd_);
          DARABONBA_PTR_FROM_JSON(NodeContent, nodeContent_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UseType, useType_);
        };
        FileVersions() = default ;
        FileVersions(const FileVersions &) = default ;
        FileVersions(FileVersions &&) = default ;
        FileVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileVersions() = default ;
        FileVersions& operator=(const FileVersions &) = default ;
        FileVersions& operator=(FileVersions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeType_ == nullptr
        && this->comment_ == nullptr && this->commitTime_ == nullptr && this->commitUser_ == nullptr && this->fileContent_ == nullptr && this->fileName_ == nullptr
        && this->filePropertyContent_ == nullptr && this->fileVersion_ == nullptr && this->isCurrentProd_ == nullptr && this->nodeContent_ == nullptr && this->nodeId_ == nullptr
        && this->status_ == nullptr && this->useType_ == nullptr; };
        // changeType Field Functions 
        bool hasChangeType() const { return this->changeType_ != nullptr;};
        void deleteChangeType() { this->changeType_ = nullptr;};
        inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
        inline FileVersions& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline FileVersions& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // commitTime Field Functions 
        bool hasCommitTime() const { return this->commitTime_ != nullptr;};
        void deleteCommitTime() { this->commitTime_ = nullptr;};
        inline int64_t getCommitTime() const { DARABONBA_PTR_GET_DEFAULT(commitTime_, 0L) };
        inline FileVersions& setCommitTime(int64_t commitTime) { DARABONBA_PTR_SET_VALUE(commitTime_, commitTime) };


        // commitUser Field Functions 
        bool hasCommitUser() const { return this->commitUser_ != nullptr;};
        void deleteCommitUser() { this->commitUser_ = nullptr;};
        inline string getCommitUser() const { DARABONBA_PTR_GET_DEFAULT(commitUser_, "") };
        inline FileVersions& setCommitUser(string commitUser) { DARABONBA_PTR_SET_VALUE(commitUser_, commitUser) };


        // fileContent Field Functions 
        bool hasFileContent() const { return this->fileContent_ != nullptr;};
        void deleteFileContent() { this->fileContent_ = nullptr;};
        inline string getFileContent() const { DARABONBA_PTR_GET_DEFAULT(fileContent_, "") };
        inline FileVersions& setFileContent(string fileContent) { DARABONBA_PTR_SET_VALUE(fileContent_, fileContent) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline FileVersions& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // filePropertyContent Field Functions 
        bool hasFilePropertyContent() const { return this->filePropertyContent_ != nullptr;};
        void deleteFilePropertyContent() { this->filePropertyContent_ = nullptr;};
        inline string getFilePropertyContent() const { DARABONBA_PTR_GET_DEFAULT(filePropertyContent_, "") };
        inline FileVersions& setFilePropertyContent(string filePropertyContent) { DARABONBA_PTR_SET_VALUE(filePropertyContent_, filePropertyContent) };


        // fileVersion Field Functions 
        bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
        void deleteFileVersion() { this->fileVersion_ = nullptr;};
        inline int32_t getFileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0) };
        inline FileVersions& setFileVersion(int32_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


        // isCurrentProd Field Functions 
        bool hasIsCurrentProd() const { return this->isCurrentProd_ != nullptr;};
        void deleteIsCurrentProd() { this->isCurrentProd_ = nullptr;};
        inline bool getIsCurrentProd() const { DARABONBA_PTR_GET_DEFAULT(isCurrentProd_, false) };
        inline FileVersions& setIsCurrentProd(bool isCurrentProd) { DARABONBA_PTR_SET_VALUE(isCurrentProd_, isCurrentProd) };


        // nodeContent Field Functions 
        bool hasNodeContent() const { return this->nodeContent_ != nullptr;};
        void deleteNodeContent() { this->nodeContent_ = nullptr;};
        inline string getNodeContent() const { DARABONBA_PTR_GET_DEFAULT(nodeContent_, "") };
        inline FileVersions& setNodeContent(string nodeContent) { DARABONBA_PTR_SET_VALUE(nodeContent_, nodeContent) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline FileVersions& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FileVersions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // useType Field Functions 
        bool hasUseType() const { return this->useType_ != nullptr;};
        void deleteUseType() { this->useType_ = nullptr;};
        inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
        inline FileVersions& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


      protected:
        // The change type for this file version. Valid values: CREATE, UPDATE, and DELETE.
        shared_ptr<string> changeType_ {};
        // The description of this file version.
        shared_ptr<string> comment_ {};
        // The timestamp (in milliseconds) when the file version was created.
        shared_ptr<int64_t> commitTime_ {};
        // The Alibaba Cloud account ID of the user who created this file version.
        shared_ptr<string> commitUser_ {};
        // The file code for this version.
        shared_ptr<string> fileContent_ {};
        // The file name for this file version.
        shared_ptr<string> fileName_ {};
        // The text information for this file version.
        shared_ptr<string> filePropertyContent_ {};
        // The file version.
        shared_ptr<int32_t> fileVersion_ {};
        // Indicates whether this file version is the latest version in the production environment.
        // 
        // *   true
        // *   false
        shared_ptr<bool> isCurrentProd_ {};
        // The scheduling configuration for this file version.
        shared_ptr<string> nodeContent_ {};
        // The scheduling task ID associated with this file version.
        shared_ptr<int64_t> nodeId_ {};
        // The current status of the file version. Valid values: COMMITTING (committing), COMMITTED or CHECK_OK (committed), PACKAGED (ready for deployment), DEPLOYING (deploying), DEPLOYED (deployed), and CANCELLED (deployment canceled).
        shared_ptr<string> status_ {};
        // The functional module to which the file belongs. Valid values: NORMAL (Data Studio), MANUAL (manual task), MANUAL_BIZ (manual workflow), SKIP (dry-run scheduling in Data Studio), ADHOCQUERY (ad hoc query), and COMPONENT (component management).
        shared_ptr<string> useType_ {};
      };

      virtual bool empty() const override { return this->fileVersions_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // fileVersions Field Functions 
      bool hasFileVersions() const { return this->fileVersions_ != nullptr;};
      void deleteFileVersions() { this->fileVersions_ = nullptr;};
      inline const vector<Data::FileVersions> & getFileVersions() const { DARABONBA_PTR_GET_CONST(fileVersions_, vector<Data::FileVersions>) };
      inline vector<Data::FileVersions> getFileVersions() { DARABONBA_PTR_GET(fileVersions_, vector<Data::FileVersions>) };
      inline Data& setFileVersions(const vector<Data::FileVersions> & fileVersions) { DARABONBA_PTR_SET_VALUE(fileVersions_, fileVersions) };
      inline Data& setFileVersions(vector<Data::FileVersions> && fileVersions) { DARABONBA_PTR_SET_RVALUE(fileVersions_, fileVersions) };


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
      // The list of file version details.
      shared_ptr<vector<Data::FileVersions>> fileVersions_ {};
      // The current page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries on the current page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListFileVersionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListFileVersionsResponseBody::Data) };
    inline ListFileVersionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListFileVersionsResponseBody::Data) };
    inline ListFileVersionsResponseBody& setData(const ListFileVersionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFileVersionsResponseBody& setData(ListFileVersionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListFileVersionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListFileVersionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListFileVersionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListFileVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of file versions.
    shared_ptr<ListFileVersionsResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
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

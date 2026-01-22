// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
        DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
        DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->fileId_ == nullptr && this->fileName_ == nullptr && this->status_ == nullptr && this->statusDescription_ == nullptr && this->targetPath_ == nullptr
        && this->updateTime_ == nullptr && this->uploadTime_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Files& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Files& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Files& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Files& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDescription Field Functions 
      bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
      void deleteStatusDescription() { this->statusDescription_ = nullptr;};
      inline string getStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
      inline Files& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


      // targetPath Field Functions 
      bool hasTargetPath() const { return this->targetPath_ != nullptr;};
      void deleteTargetPath() { this->targetPath_ = nullptr;};
      inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
      inline Files& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Files& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
      inline Files& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> fileId_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusDescription_ {};
      shared_ptr<string> targetPath_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> uploadTime_ {};
    };

    virtual bool empty() const override { return this->files_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<ListFilesResponseBody::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<ListFilesResponseBody::Files>) };
    inline vector<ListFilesResponseBody::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<ListFilesResponseBody::Files>) };
    inline ListFilesResponseBody& setFiles(const vector<ListFilesResponseBody::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ListFilesResponseBody& setFiles(vector<ListFilesResponseBody::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListFilesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListFilesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListFilesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListFilesResponseBody::Files>> files_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif

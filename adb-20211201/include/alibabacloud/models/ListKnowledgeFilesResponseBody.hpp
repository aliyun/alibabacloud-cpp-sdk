// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListKnowledgeFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListKnowledgeFilesResponseBody() = default ;
    ListKnowledgeFilesResponseBody(const ListKnowledgeFilesResponseBody &) = default ;
    ListKnowledgeFilesResponseBody(ListKnowledgeFilesResponseBody &&) = default ;
    ListKnowledgeFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeFilesResponseBody() = default ;
    ListKnowledgeFilesResponseBody& operator=(const ListKnowledgeFilesResponseBody &) = default ;
    ListKnowledgeFilesResponseBody& operator=(ListKnowledgeFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Files, files_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Files, files_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
          DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileSizeBytes, fileSizeBytes_);
          DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(IsDirectory, isDirectory_);
          DARABONBA_PTR_TO_JSON(OwnerFileId, ownerFileId_);
          DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
          DARABONBA_PTR_TO_JSON(ProcessMessage, processMessage_);
          DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
          DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        };
        friend void from_json(const Darabonba::Json& j, Files& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileSizeBytes, fileSizeBytes_);
          DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(IsDirectory, isDirectory_);
          DARABONBA_PTR_FROM_JSON(OwnerFileId, ownerFileId_);
          DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
          DARABONBA_PTR_FROM_JSON(ProcessMessage, processMessage_);
          DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
          DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
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
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->fileId_ == nullptr && this->fileSizeBytes_ == nullptr && this->fileUrl_ == nullptr && this->format_ == nullptr && this->isDirectory_ == nullptr
        && this->ownerFileId_ == nullptr && this->pageCount_ == nullptr && this->processMessage_ == nullptr && this->processStatus_ == nullptr && this->updatedAt_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Files& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline Files& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileSizeBytes Field Functions 
        bool hasFileSizeBytes() const { return this->fileSizeBytes_ != nullptr;};
        void deleteFileSizeBytes() { this->fileSizeBytes_ = nullptr;};
        inline int64_t getFileSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(fileSizeBytes_, 0L) };
        inline Files& setFileSizeBytes(int64_t fileSizeBytes) { DARABONBA_PTR_SET_VALUE(fileSizeBytes_, fileSizeBytes) };


        // fileUrl Field Functions 
        bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
        void deleteFileUrl() { this->fileUrl_ = nullptr;};
        inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
        inline Files& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline Files& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // isDirectory Field Functions 
        bool hasIsDirectory() const { return this->isDirectory_ != nullptr;};
        void deleteIsDirectory() { this->isDirectory_ = nullptr;};
        inline bool getIsDirectory() const { DARABONBA_PTR_GET_DEFAULT(isDirectory_, false) };
        inline Files& setIsDirectory(bool isDirectory) { DARABONBA_PTR_SET_VALUE(isDirectory_, isDirectory) };


        // ownerFileId Field Functions 
        bool hasOwnerFileId() const { return this->ownerFileId_ != nullptr;};
        void deleteOwnerFileId() { this->ownerFileId_ = nullptr;};
        inline int64_t getOwnerFileId() const { DARABONBA_PTR_GET_DEFAULT(ownerFileId_, 0L) };
        inline Files& setOwnerFileId(int64_t ownerFileId) { DARABONBA_PTR_SET_VALUE(ownerFileId_, ownerFileId) };


        // pageCount Field Functions 
        bool hasPageCount() const { return this->pageCount_ != nullptr;};
        void deletePageCount() { this->pageCount_ = nullptr;};
        inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
        inline Files& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


        // processMessage Field Functions 
        bool hasProcessMessage() const { return this->processMessage_ != nullptr;};
        void deleteProcessMessage() { this->processMessage_ = nullptr;};
        inline string getProcessMessage() const { DARABONBA_PTR_GET_DEFAULT(processMessage_, "") };
        inline Files& setProcessMessage(string processMessage) { DARABONBA_PTR_SET_VALUE(processMessage_, processMessage) };


        // processStatus Field Functions 
        bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
        void deleteProcessStatus() { this->processStatus_ = nullptr;};
        inline string getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, "") };
        inline Files& setProcessStatus(string processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Files& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      protected:
        // The time when the file was added to the knowledge base.
        shared_ptr<string> createdAt_ {};
        // The ID of the file.
        shared_ptr<int64_t> fileId_ {};
        // The size of the file, in bytes.
        shared_ptr<int64_t> fileSizeBytes_ {};
        // The Object Storage Service (OSS) URL of the file.
        shared_ptr<string> fileUrl_ {};
        // The format of the file.
        shared_ptr<string> format_ {};
        // Indicates whether the file is a directory.
        shared_ptr<bool> isDirectory_ {};
        // The file_id of the content host.
        shared_ptr<int64_t> ownerFileId_ {};
        // The total number of pages in the file, such as the number of pages in a PDF file.
        shared_ptr<int32_t> pageCount_ {};
        // The processing message of the knowledge base file.
        shared_ptr<string> processMessage_ {};
        // The status of the file in the knowledge base. Valid values:
        // 
        // - Processing: The file is being processed.
        // 
        // - Finished: The file has been processed.
        shared_ptr<string> processStatus_ {};
        // The time when the file was last updated.
        shared_ptr<string> updatedAt_ {};
      };

      virtual bool empty() const override { return this->files_ == nullptr
        && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
      // files Field Functions 
      bool hasFiles() const { return this->files_ != nullptr;};
      void deleteFiles() { this->files_ = nullptr;};
      inline const vector<Data::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<Data::Files>) };
      inline vector<Data::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<Data::Files>) };
      inline Data& setFiles(const vector<Data::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
      inline Data& setFiles(vector<Data::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of file information.
      shared_ptr<vector<Data::Files>> files_ {};
      // The message returned by the request.
      shared_ptr<string> message_ {};
      // The current page number.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // Indicates whether the request was successful. Valid values:
      // - **true**: The request was successful.
      // - **false**: The request failed.
      shared_ptr<bool> success_ {};
      // The total number of entries.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListKnowledgeFilesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListKnowledgeFilesResponseBody::Data) };
    inline ListKnowledgeFilesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListKnowledgeFilesResponseBody::Data) };
    inline ListKnowledgeFilesResponseBody& setData(const ListKnowledgeFilesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKnowledgeFilesResponseBody& setData(ListKnowledgeFilesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListKnowledgeFilesResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

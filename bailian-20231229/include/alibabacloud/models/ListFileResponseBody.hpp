// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListFileResponseBody() = default ;
    ListFileResponseBody(const ListFileResponseBody &) = default ;
    ListFileResponseBody(ListFileResponseBody &&) = default ;
    ListFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileResponseBody() = default ;
    ListFileResponseBody& operator=(const ListFileResponseBody &) = default ;
    ListFileResponseBody& operator=(ListFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileList, fileList_);
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileList, fileList_);
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      class FileList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileList& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(Parser, parser_);
          DARABONBA_PTR_TO_JSON(SizeInBytes, sizeInBytes_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, FileList& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(Parser, parser_);
          DARABONBA_PTR_FROM_JSON(SizeInBytes, sizeInBytes_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        FileList() = default ;
        FileList(const FileList &) = default ;
        FileList(FileList &&) = default ;
        FileList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileList() = default ;
        FileList& operator=(const FileList &) = default ;
        FileList& operator=(FileList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->createTime_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->parser_ == nullptr
        && this->sizeInBytes_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
        inline FileList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline FileList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
        inline FileList& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline FileList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline FileList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // parser Field Functions 
        bool hasParser() const { return this->parser_ != nullptr;};
        void deleteParser() { this->parser_ = nullptr;};
        inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
        inline FileList& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


        // sizeInBytes Field Functions 
        bool hasSizeInBytes() const { return this->sizeInBytes_ != nullptr;};
        void deleteSizeInBytes() { this->sizeInBytes_ = nullptr;};
        inline int64_t getSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeInBytes_, 0L) };
        inline FileList& setSizeInBytes(int64_t sizeInBytes) { DARABONBA_PTR_SET_VALUE(sizeInBytes_, sizeInBytes) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FileList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline FileList& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline FileList& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<string> categoryId_ {};
        shared_ptr<string> createTime_ {};
        // The document ID, which is the `FileId` parameter returned by the [AddFile](~~AddFile~~) operation. To view the ID, click the icon next to the file name on the [Data Management](https://bailian.console.alibabacloud.com/#/data-center) page.
        shared_ptr<string> fileId_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> fileType_ {};
        shared_ptr<string> parser_ {};
        shared_ptr<int64_t> sizeInBytes_ {};
        shared_ptr<string> status_ {};
        shared_ptr<vector<string>> tags_ {};
      };

      virtual bool empty() const override { return this->fileList_ == nullptr
        && this->hasNext_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // fileList Field Functions 
      bool hasFileList() const { return this->fileList_ != nullptr;};
      void deleteFileList() { this->fileList_ = nullptr;};
      inline const vector<Data::FileList> & getFileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<Data::FileList>) };
      inline vector<Data::FileList> getFileList() { DARABONBA_PTR_GET(fileList_, vector<Data::FileList>) };
      inline Data& setFileList(const vector<Data::FileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
      inline Data& setFileList(vector<Data::FileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline Data& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of documents in the category.
      shared_ptr<vector<Data::FileList>> fileList_ {};
      shared_ptr<bool> hasNext_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListFileResponseBody::Data) };
    inline ListFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListFileResponseBody::Data) };
    inline ListFileResponseBody& setData(const ListFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFileResponseBody& setData(ListFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFileResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListFileResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

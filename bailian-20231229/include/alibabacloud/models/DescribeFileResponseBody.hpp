// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILERESPONSEBODY_HPP_
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
  class DescribeFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeFileResponseBody() = default ;
    DescribeFileResponseBody(const DescribeFileResponseBody &) = default ;
    DescribeFileResponseBody(DescribeFileResponseBody &&) = default ;
    DescribeFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileResponseBody() = default ;
    DescribeFileResponseBody& operator=(const DescribeFileResponseBody &) = default ;
    DescribeFileResponseBody& operator=(DescribeFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->createTime_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->parser_ == nullptr
        && this->sizeInBytes_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
      inline Data& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline Data& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // parser Field Functions 
      bool hasParser() const { return this->parser_ != nullptr;};
      void deleteParser() { this->parser_ = nullptr;};
      inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
      inline Data& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


      // sizeInBytes Field Functions 
      bool hasSizeInBytes() const { return this->sizeInBytes_ != nullptr;};
      void deleteSizeInBytes() { this->sizeInBytes_ = nullptr;};
      inline int64_t getSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeInBytes_, 0L) };
      inline Data& setSizeInBytes(int64_t sizeInBytes) { DARABONBA_PTR_SET_VALUE(sizeInBytes_, sizeInBytes) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline Data& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the category to which the document belongs.
      shared_ptr<string> categoryId_ {};
      // The timestamp when the document was uploaded to Model Studio. Format: yyyy-MM-dd HH:mm:ss. Time zone: UTC + 8.
      shared_ptr<string> createTime_ {};
      // The primary key ID of the document.
      shared_ptr<string> fileId_ {};
      // The name of the document.
      shared_ptr<string> fileName_ {};
      // The file type of the document. The value is an extension. Valid values: pdf, docx, doc, txt, md, pptx, and ppt.
      shared_ptr<string> fileType_ {};
      // The parser that is used to parse the document. Valid value:
      // 
      // *   DASHSCOPE_DOCMIND: The default document parser.
      shared_ptr<string> parser_ {};
      // The size of the document. Unit: bytes.
      shared_ptr<int64_t> sizeInBytes_ {};
      // The status of the document. Valid values:
      // 
      // *   INIT: pending parsing.
      // *   PARSING
      // *   PARSE_SUCCESS
      // *   PARSE_FAILED
      shared_ptr<string> status_ {};
      // The tags that are associated with the document. A document can be associated with multiple tags.
      shared_ptr<vector<string>> tags_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeFileResponseBody::Data) };
    inline DescribeFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeFileResponseBody::Data) };
    inline DescribeFileResponseBody& setData(const DescribeFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeFileResponseBody& setData(DescribeFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFileResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data fields.
    shared_ptr<DescribeFileResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The HTTP status code.
    shared_ptr<string> status_ {};
    // Indications whether the API call is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDocInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDocInfoResponseBody() = default ;
    GetDocInfoResponseBody(const GetDocInfoResponseBody &) = default ;
    GetDocInfoResponseBody(GetDocInfoResponseBody &&) = default ;
    GetDocInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocInfoResponseBody() = default ;
    GetDocInfoResponseBody& operator=(const GetDocInfoResponseBody &) = default ;
    GetDocInfoResponseBody& operator=(GetDocInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(DocName, docName_);
        DARABONBA_PTR_TO_JSON(DocType, docType_);
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
        DARABONBA_PTR_TO_JSON(VideoContents, videoContents_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(DocName, docName_);
        DARABONBA_PTR_FROM_JSON(DocType, docType_);
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
        DARABONBA_PTR_FROM_JSON(VideoContents, videoContents_);
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
      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        PageInfo() = default ;
        PageInfo(const PageInfo &) = default ;
        PageInfo(PageInfo &&) = default ;
        PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageInfo() = default ;
        PageInfo& operator=(const PageInfo &) = default ;
        PageInfo& operator=(PageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->height_ == nullptr
        && this->width_ == nullptr; };
        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline PageInfo& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline PageInfo& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        shared_ptr<int32_t> height_ {};
        shared_ptr<int32_t> width_ {};
      };

      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->docName_ == nullptr && this->docType_ == nullptr && this->fileUrl_ == nullptr && this->pageInfo_ == nullptr && this->status_ == nullptr
        && this->statusMessage_ == nullptr && this->videoContents_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
      inline Data& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // docName Field Functions 
      bool hasDocName() const { return this->docName_ != nullptr;};
      void deleteDocName() { this->docName_ = nullptr;};
      inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
      inline Data& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


      // docType Field Functions 
      bool hasDocType() const { return this->docType_ != nullptr;};
      void deleteDocType() { this->docType_ = nullptr;};
      inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
      inline Data& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline Data& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline Data& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // videoContents Field Functions 
      bool hasVideoContents() const { return this->videoContents_ != nullptr;};
      void deleteVideoContents() { this->videoContents_ = nullptr;};
      inline const vector<string> & getVideoContents() const { DARABONBA_PTR_GET_CONST(videoContents_, vector<string>) };
      inline vector<string> getVideoContents() { DARABONBA_PTR_GET(videoContents_, vector<string>) };
      inline Data& setVideoContents(const vector<string> & videoContents) { DARABONBA_PTR_SET_VALUE(videoContents_, videoContents) };
      inline Data& setVideoContents(vector<string> && videoContents) { DARABONBA_PTR_SET_RVALUE(videoContents_, videoContents) };


    protected:
      // The category where the document is stored.
      shared_ptr<string> categoryId_ {};
      // The document name.
      shared_ptr<string> docName_ {};
      // The document type.
      shared_ptr<string> docType_ {};
      // The URL of the document.
      shared_ptr<string> fileUrl_ {};
      shared_ptr<Data::PageInfo> pageInfo_ {};
      // The task status.
      shared_ptr<int32_t> status_ {};
      // The status message.
      shared_ptr<string> statusMessage_ {};
      // Text transcripts from the video\\"s audio.
      shared_ptr<vector<string>> videoContents_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDocInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDocInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDocInfoResponseBody::Data) };
    inline GetDocInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDocInfoResponseBody::Data) };
    inline GetDocInfoResponseBody& setData(const GetDocInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDocInfoResponseBody& setData(GetDocInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDocInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDocInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDocInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDocInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The internal error code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetDocInfoResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. A value of `true` indicates success, and `false` indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

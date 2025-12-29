// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTAUDITRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTAUDITRESULTRESPONSEBODY_HPP_
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
  class GetSmartAuditResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartAuditResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartAuditResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSmartAuditResultResponseBody() = default ;
    GetSmartAuditResultResponseBody(const GetSmartAuditResultResponseBody &) = default ;
    GetSmartAuditResultResponseBody(GetSmartAuditResultResponseBody &&) = default ;
    GetSmartAuditResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartAuditResultResponseBody() = default ;
    GetSmartAuditResultResponseBody& operator=(const GetSmartAuditResultResponseBody &) = default ;
    GetSmartAuditResultResponseBody& operator=(GetSmartAuditResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorItemDetails, errorItemDetails_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorItemDetails, errorItemDetails_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class ErrorItemDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorItemDetails& obj) { 
          DARABONBA_PTR_TO_JSON(CheckId, checkId_);
          DARABONBA_PTR_TO_JSON(Context, context_);
          DARABONBA_PTR_TO_JSON(ContextOffset, contextOffset_);
          DARABONBA_PTR_TO_JSON(ErrorLevel, errorLevel_);
          DARABONBA_PTR_TO_JSON(ErrorWord, errorWord_);
          DARABONBA_PTR_TO_JSON(MajorCode, majorCode_);
          DARABONBA_PTR_TO_JSON(MajorCodeDesc, majorCodeDesc_);
          DARABONBA_PTR_TO_JSON(Offset, offset_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(RightWord, rightWord_);
          DARABONBA_PTR_TO_JSON(SubClassCode, subClassCode_);
          DARABONBA_PTR_TO_JSON(SubClassDesc, subClassDesc_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorItemDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
          DARABONBA_PTR_FROM_JSON(Context, context_);
          DARABONBA_PTR_FROM_JSON(ContextOffset, contextOffset_);
          DARABONBA_PTR_FROM_JSON(ErrorLevel, errorLevel_);
          DARABONBA_PTR_FROM_JSON(ErrorWord, errorWord_);
          DARABONBA_PTR_FROM_JSON(MajorCode, majorCode_);
          DARABONBA_PTR_FROM_JSON(MajorCodeDesc, majorCodeDesc_);
          DARABONBA_PTR_FROM_JSON(Offset, offset_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(RightWord, rightWord_);
          DARABONBA_PTR_FROM_JSON(SubClassCode, subClassCode_);
          DARABONBA_PTR_FROM_JSON(SubClassDesc, subClassDesc_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        ErrorItemDetails() = default ;
        ErrorItemDetails(const ErrorItemDetails &) = default ;
        ErrorItemDetails(ErrorItemDetails &&) = default ;
        ErrorItemDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorItemDetails() = default ;
        ErrorItemDetails& operator=(const ErrorItemDetails &) = default ;
        ErrorItemDetails& operator=(ErrorItemDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkId_ == nullptr
        && this->context_ == nullptr && this->contextOffset_ == nullptr && this->errorLevel_ == nullptr && this->errorWord_ == nullptr && this->majorCode_ == nullptr
        && this->majorCodeDesc_ == nullptr && this->offset_ == nullptr && this->reason_ == nullptr && this->rightWord_ == nullptr && this->subClassCode_ == nullptr
        && this->subClassDesc_ == nullptr && this->url_ == nullptr; };
        // checkId Field Functions 
        bool hasCheckId() const { return this->checkId_ != nullptr;};
        void deleteCheckId() { this->checkId_ = nullptr;};
        inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
        inline ErrorItemDetails& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


        // context Field Functions 
        bool hasContext() const { return this->context_ != nullptr;};
        void deleteContext() { this->context_ = nullptr;};
        inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
        inline ErrorItemDetails& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


        // contextOffset Field Functions 
        bool hasContextOffset() const { return this->contextOffset_ != nullptr;};
        void deleteContextOffset() { this->contextOffset_ = nullptr;};
        inline int32_t getContextOffset() const { DARABONBA_PTR_GET_DEFAULT(contextOffset_, 0) };
        inline ErrorItemDetails& setContextOffset(int32_t contextOffset) { DARABONBA_PTR_SET_VALUE(contextOffset_, contextOffset) };


        // errorLevel Field Functions 
        bool hasErrorLevel() const { return this->errorLevel_ != nullptr;};
        void deleteErrorLevel() { this->errorLevel_ = nullptr;};
        inline int32_t getErrorLevel() const { DARABONBA_PTR_GET_DEFAULT(errorLevel_, 0) };
        inline ErrorItemDetails& setErrorLevel(int32_t errorLevel) { DARABONBA_PTR_SET_VALUE(errorLevel_, errorLevel) };


        // errorWord Field Functions 
        bool hasErrorWord() const { return this->errorWord_ != nullptr;};
        void deleteErrorWord() { this->errorWord_ = nullptr;};
        inline string getErrorWord() const { DARABONBA_PTR_GET_DEFAULT(errorWord_, "") };
        inline ErrorItemDetails& setErrorWord(string errorWord) { DARABONBA_PTR_SET_VALUE(errorWord_, errorWord) };


        // majorCode Field Functions 
        bool hasMajorCode() const { return this->majorCode_ != nullptr;};
        void deleteMajorCode() { this->majorCode_ = nullptr;};
        inline string getMajorCode() const { DARABONBA_PTR_GET_DEFAULT(majorCode_, "") };
        inline ErrorItemDetails& setMajorCode(string majorCode) { DARABONBA_PTR_SET_VALUE(majorCode_, majorCode) };


        // majorCodeDesc Field Functions 
        bool hasMajorCodeDesc() const { return this->majorCodeDesc_ != nullptr;};
        void deleteMajorCodeDesc() { this->majorCodeDesc_ = nullptr;};
        inline string getMajorCodeDesc() const { DARABONBA_PTR_GET_DEFAULT(majorCodeDesc_, "") };
        inline ErrorItemDetails& setMajorCodeDesc(string majorCodeDesc) { DARABONBA_PTR_SET_VALUE(majorCodeDesc_, majorCodeDesc) };


        // offset Field Functions 
        bool hasOffset() const { return this->offset_ != nullptr;};
        void deleteOffset() { this->offset_ = nullptr;};
        inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
        inline ErrorItemDetails& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline ErrorItemDetails& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // rightWord Field Functions 
        bool hasRightWord() const { return this->rightWord_ != nullptr;};
        void deleteRightWord() { this->rightWord_ = nullptr;};
        inline string getRightWord() const { DARABONBA_PTR_GET_DEFAULT(rightWord_, "") };
        inline ErrorItemDetails& setRightWord(string rightWord) { DARABONBA_PTR_SET_VALUE(rightWord_, rightWord) };


        // subClassCode Field Functions 
        bool hasSubClassCode() const { return this->subClassCode_ != nullptr;};
        void deleteSubClassCode() { this->subClassCode_ = nullptr;};
        inline string getSubClassCode() const { DARABONBA_PTR_GET_DEFAULT(subClassCode_, "") };
        inline ErrorItemDetails& setSubClassCode(string subClassCode) { DARABONBA_PTR_SET_VALUE(subClassCode_, subClassCode) };


        // subClassDesc Field Functions 
        bool hasSubClassDesc() const { return this->subClassDesc_ != nullptr;};
        void deleteSubClassDesc() { this->subClassDesc_ = nullptr;};
        inline string getSubClassDesc() const { DARABONBA_PTR_GET_DEFAULT(subClassDesc_, "") };
        inline ErrorItemDetails& setSubClassDesc(string subClassDesc) { DARABONBA_PTR_SET_VALUE(subClassDesc_, subClassDesc) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline ErrorItemDetails& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> checkId_ {};
        shared_ptr<string> context_ {};
        shared_ptr<int32_t> contextOffset_ {};
        shared_ptr<int32_t> errorLevel_ {};
        shared_ptr<string> errorWord_ {};
        shared_ptr<string> majorCode_ {};
        shared_ptr<string> majorCodeDesc_ {};
        shared_ptr<int32_t> offset_ {};
        shared_ptr<string> reason_ {};
        shared_ptr<string> rightWord_ {};
        shared_ptr<string> subClassCode_ {};
        shared_ptr<string> subClassDesc_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->errorItemDetails_ == nullptr
        && this->errorMessage_ == nullptr && this->status_ == nullptr; };
      // errorItemDetails Field Functions 
      bool hasErrorItemDetails() const { return this->errorItemDetails_ != nullptr;};
      void deleteErrorItemDetails() { this->errorItemDetails_ = nullptr;};
      inline const vector<Data::ErrorItemDetails> & getErrorItemDetails() const { DARABONBA_PTR_GET_CONST(errorItemDetails_, vector<Data::ErrorItemDetails>) };
      inline vector<Data::ErrorItemDetails> getErrorItemDetails() { DARABONBA_PTR_GET(errorItemDetails_, vector<Data::ErrorItemDetails>) };
      inline Data& setErrorItemDetails(const vector<Data::ErrorItemDetails> & errorItemDetails) { DARABONBA_PTR_SET_VALUE(errorItemDetails_, errorItemDetails) };
      inline Data& setErrorItemDetails(vector<Data::ErrorItemDetails> && errorItemDetails) { DARABONBA_PTR_SET_RVALUE(errorItemDetails_, errorItemDetails) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<vector<Data::ErrorItemDetails>> errorItemDetails_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSmartAuditResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSmartAuditResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSmartAuditResultResponseBody::Data) };
    inline GetSmartAuditResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSmartAuditResultResponseBody::Data) };
    inline GetSmartAuditResultResponseBody& setData(const GetSmartAuditResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSmartAuditResultResponseBody& setData(GetSmartAuditResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSmartAuditResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSmartAuditResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmartAuditResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSmartAuditResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSmartAuditResultResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

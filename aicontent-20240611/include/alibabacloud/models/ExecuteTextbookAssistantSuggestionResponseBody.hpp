// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTSUGGESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTSUGGESTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteTextbookAssistantSuggestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteTextbookAssistantSuggestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpstatusCode, httpstatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteTextbookAssistantSuggestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpstatusCode, httpstatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ExecuteTextbookAssistantSuggestionResponseBody() = default ;
    ExecuteTextbookAssistantSuggestionResponseBody(const ExecuteTextbookAssistantSuggestionResponseBody &) = default ;
    ExecuteTextbookAssistantSuggestionResponseBody(ExecuteTextbookAssistantSuggestionResponseBody &&) = default ;
    ExecuteTextbookAssistantSuggestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteTextbookAssistantSuggestionResponseBody() = default ;
    ExecuteTextbookAssistantSuggestionResponseBody& operator=(const ExecuteTextbookAssistantSuggestionResponseBody &) = default ;
    ExecuteTextbookAssistantSuggestionResponseBody& operator=(ExecuteTextbookAssistantSuggestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(result, result_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(chineseResult, chineseResult_);
          DARABONBA_PTR_TO_JSON(englishResult, englishResult_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(chineseResult, chineseResult_);
          DARABONBA_PTR_FROM_JSON(englishResult, englishResult_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chineseResult_ == nullptr
        && this->englishResult_ == nullptr; };
        // chineseResult Field Functions 
        bool hasChineseResult() const { return this->chineseResult_ != nullptr;};
        void deleteChineseResult() { this->chineseResult_ = nullptr;};
        inline string getChineseResult() const { DARABONBA_PTR_GET_DEFAULT(chineseResult_, "") };
        inline Result& setChineseResult(string chineseResult) { DARABONBA_PTR_SET_VALUE(chineseResult_, chineseResult) };


        // englishResult Field Functions 
        bool hasEnglishResult() const { return this->englishResult_ != nullptr;};
        void deleteEnglishResult() { this->englishResult_ = nullptr;};
        inline string getEnglishResult() const { DARABONBA_PTR_GET_DEFAULT(englishResult_, "") };
        inline Result& setEnglishResult(string englishResult) { DARABONBA_PTR_SET_VALUE(englishResult_, englishResult) };


      protected:
        shared_ptr<string> chineseResult_ {};
        shared_ptr<string> englishResult_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      shared_ptr<Data::Result> result_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpstatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteTextbookAssistantSuggestionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecuteTextbookAssistantSuggestionResponseBody::Data) };
    inline ExecuteTextbookAssistantSuggestionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecuteTextbookAssistantSuggestionResponseBody::Data) };
    inline ExecuteTextbookAssistantSuggestionResponseBody& setData(const ExecuteTextbookAssistantSuggestionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteTextbookAssistantSuggestionResponseBody& setData(ExecuteTextbookAssistantSuggestionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ExecuteTextbookAssistantSuggestionResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ExecuteTextbookAssistantSuggestionResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpstatusCode Field Functions 
    bool hasHttpstatusCode() const { return this->httpstatusCode_ != nullptr;};
    void deleteHttpstatusCode() { this->httpstatusCode_ = nullptr;};
    inline int32_t getHttpstatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpstatusCode_, 0) };
    inline ExecuteTextbookAssistantSuggestionResponseBody& setHttpstatusCode(int32_t httpstatusCode) { DARABONBA_PTR_SET_VALUE(httpstatusCode_, httpstatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteTextbookAssistantSuggestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecuteTextbookAssistantSuggestionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ExecuteTextbookAssistantSuggestionResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpstatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif

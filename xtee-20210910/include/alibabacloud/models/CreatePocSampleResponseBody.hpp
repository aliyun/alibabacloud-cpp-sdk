// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOCSAMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOCSAMPLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreatePocSampleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePocSampleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePocSampleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CreatePocSampleResponseBody() = default ;
    CreatePocSampleResponseBody(const CreatePocSampleResponseBody &) = default ;
    CreatePocSampleResponseBody(CreatePocSampleResponseBody &&) = default ;
    CreatePocSampleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePocSampleResponseBody() = default ;
    CreatePocSampleResponseBody& operator=(const CreatePocSampleResponseBody &) = default ;
    CreatePocSampleResponseBody& operator=(CreatePocSampleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(HasWarnings, hasWarnings_);
        DARABONBA_PTR_TO_JSON(SampleId, sampleId_);
        DARABONBA_PTR_TO_JSON(SampleName, sampleName_);
        DARABONBA_PTR_TO_JSON(Tab, tab_);
        DARABONBA_PTR_TO_JSON(WarningMessage, warningMessage_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(HasWarnings, hasWarnings_);
        DARABONBA_PTR_FROM_JSON(SampleId, sampleId_);
        DARABONBA_PTR_FROM_JSON(SampleName, sampleName_);
        DARABONBA_PTR_FROM_JSON(Tab, tab_);
        DARABONBA_PTR_FROM_JSON(WarningMessage, warningMessage_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hasWarnings_ == nullptr
        && this->sampleId_ == nullptr && this->sampleName_ == nullptr && this->tab_ == nullptr && this->warningMessage_ == nullptr; };
      // hasWarnings Field Functions 
      bool hasHasWarnings() const { return this->hasWarnings_ != nullptr;};
      void deleteHasWarnings() { this->hasWarnings_ = nullptr;};
      inline bool getHasWarnings() const { DARABONBA_PTR_GET_DEFAULT(hasWarnings_, false) };
      inline ResultObject& setHasWarnings(bool hasWarnings) { DARABONBA_PTR_SET_VALUE(hasWarnings_, hasWarnings) };


      // sampleId Field Functions 
      bool hasSampleId() const { return this->sampleId_ != nullptr;};
      void deleteSampleId() { this->sampleId_ = nullptr;};
      inline int32_t getSampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, 0) };
      inline ResultObject& setSampleId(int32_t sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


      // sampleName Field Functions 
      bool hasSampleName() const { return this->sampleName_ != nullptr;};
      void deleteSampleName() { this->sampleName_ = nullptr;};
      inline string getSampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
      inline ResultObject& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


      // tab Field Functions 
      bool hasTab() const { return this->tab_ != nullptr;};
      void deleteTab() { this->tab_ = nullptr;};
      inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
      inline ResultObject& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


      // warningMessage Field Functions 
      bool hasWarningMessage() const { return this->warningMessage_ != nullptr;};
      void deleteWarningMessage() { this->warningMessage_ = nullptr;};
      inline string getWarningMessage() const { DARABONBA_PTR_GET_DEFAULT(warningMessage_, "") };
      inline ResultObject& setWarningMessage(string warningMessage) { DARABONBA_PTR_SET_VALUE(warningMessage_, warningMessage) };


    protected:
      shared_ptr<bool> hasWarnings_ {};
      shared_ptr<int32_t> sampleId_ {};
      shared_ptr<string> sampleName_ {};
      shared_ptr<string> tab_ {};
      shared_ptr<string> warningMessage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreatePocSampleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline CreatePocSampleResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePocSampleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePocSampleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CreatePocSampleResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CreatePocSampleResponseBody::ResultObject) };
    inline CreatePocSampleResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CreatePocSampleResponseBody::ResultObject) };
    inline CreatePocSampleResponseBody& setResultObject(const CreatePocSampleResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CreatePocSampleResponseBody& setResultObject(CreatePocSampleResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<CreatePocSampleResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

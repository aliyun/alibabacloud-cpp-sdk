// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEMGSAPIRESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVEMGSAPIRESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class SaveMgsApirestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveMgsApirestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, SaveMgsApirestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    SaveMgsApirestResponseBody() = default ;
    SaveMgsApirestResponseBody(const SaveMgsApirestResponseBody &) = default ;
    SaveMgsApirestResponseBody(SaveMgsApirestResponseBody &&) = default ;
    SaveMgsApirestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveMgsApirestResponseBody() = default ;
    SaveMgsApirestResponseBody& operator=(const SaveMgsApirestResponseBody &) = default ;
    SaveMgsApirestResponseBody& operator=(SaveMgsApirestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->success_ == nullptr && this->value_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline ResultContent& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ResultContent& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline bool getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, false) };
      inline ResultContent& setValue(bool value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> errorMessage_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<bool> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveMgsApirestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline SaveMgsApirestResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const SaveMgsApirestResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, SaveMgsApirestResponseBody::ResultContent) };
    inline SaveMgsApirestResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, SaveMgsApirestResponseBody::ResultContent) };
    inline SaveMgsApirestResponseBody& setResultContent(const SaveMgsApirestResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline SaveMgsApirestResponseBody& setResultContent(SaveMgsApirestResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline SaveMgsApirestResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<SaveMgsApirestResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBERRORINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBERRORINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobErrorInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobErrorInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobErrorInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTrainingJobErrorInfoResponseBody() = default ;
    GetTrainingJobErrorInfoResponseBody(const GetTrainingJobErrorInfoResponseBody &) = default ;
    GetTrainingJobErrorInfoResponseBody(GetTrainingJobErrorInfoResponseBody &&) = default ;
    GetTrainingJobErrorInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobErrorInfoResponseBody() = default ;
    GetTrainingJobErrorInfoResponseBody& operator=(const GetTrainingJobErrorInfoResponseBody &) = default ;
    GetTrainingJobErrorInfoResponseBody& operator=(GetTrainingJobErrorInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ErrorInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AdditionalInfo, additionalInfo_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AdditionalInfo, additionalInfo_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      ErrorInfo() = default ;
      ErrorInfo(const ErrorInfo &) = default ;
      ErrorInfo(ErrorInfo &&) = default ;
      ErrorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorInfo() = default ;
      ErrorInfo& operator=(const ErrorInfo &) = default ;
      ErrorInfo& operator=(ErrorInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->additionalInfo_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr; };
      // additionalInfo Field Functions 
      bool hasAdditionalInfo() const { return this->additionalInfo_ != nullptr;};
      void deleteAdditionalInfo() { this->additionalInfo_ = nullptr;};
      inline string getAdditionalInfo() const { DARABONBA_PTR_GET_DEFAULT(additionalInfo_, "") };
      inline ErrorInfo& setAdditionalInfo(string additionalInfo) { DARABONBA_PTR_SET_VALUE(additionalInfo_, additionalInfo) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ErrorInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ErrorInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      shared_ptr<string> additionalInfo_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->errorInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline const GetTrainingJobErrorInfoResponseBody::ErrorInfo & getErrorInfo() const { DARABONBA_PTR_GET_CONST(errorInfo_, GetTrainingJobErrorInfoResponseBody::ErrorInfo) };
    inline GetTrainingJobErrorInfoResponseBody::ErrorInfo getErrorInfo() { DARABONBA_PTR_GET(errorInfo_, GetTrainingJobErrorInfoResponseBody::ErrorInfo) };
    inline GetTrainingJobErrorInfoResponseBody& setErrorInfo(const GetTrainingJobErrorInfoResponseBody::ErrorInfo & errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };
    inline GetTrainingJobErrorInfoResponseBody& setErrorInfo(GetTrainingJobErrorInfoResponseBody::ErrorInfo && errorInfo) { DARABONBA_PTR_SET_RVALUE(errorInfo_, errorInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrainingJobErrorInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetTrainingJobErrorInfoResponseBody::ErrorInfo> errorInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif

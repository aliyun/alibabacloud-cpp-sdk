// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CheckResultResponseBody() = default ;
    CheckResultResponseBody(const CheckResultResponseBody &) = default ;
    CheckResultResponseBody(CheckResultResponseBody &&) = default ;
    CheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResultResponseBody() = default ;
    CheckResultResponseBody& operator=(const CheckResultResponseBody &) = default ;
    CheckResultResponseBody& operator=(CheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(EkycResult, ekycResult_);
        DARABONBA_PTR_TO_JSON(ExtBasicInfo, extBasicInfo_);
        DARABONBA_PTR_TO_JSON(ExtFaceInfo, extFaceInfo_);
        DARABONBA_PTR_TO_JSON(ExtIdInfo, extIdInfo_);
        DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_TO_JSON(ExtRiskInfo, extRiskInfo_);
        DARABONBA_PTR_TO_JSON(ExtSourceInfo, extSourceInfo_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(EkycResult, ekycResult_);
        DARABONBA_PTR_FROM_JSON(ExtBasicInfo, extBasicInfo_);
        DARABONBA_PTR_FROM_JSON(ExtFaceInfo, extFaceInfo_);
        DARABONBA_PTR_FROM_JSON(ExtIdInfo, extIdInfo_);
        DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_FROM_JSON(ExtRiskInfo, extRiskInfo_);
        DARABONBA_PTR_FROM_JSON(ExtSourceInfo, extSourceInfo_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
        DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
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
      virtual bool empty() const override { return this->ekycResult_ == nullptr
        && this->extBasicInfo_ == nullptr && this->extFaceInfo_ == nullptr && this->extIdInfo_ == nullptr && this->extInfo_ == nullptr && this->extRiskInfo_ == nullptr
        && this->extSourceInfo_ == nullptr && this->passed_ == nullptr && this->subCode_ == nullptr; };
      // ekycResult Field Functions 
      bool hasEkycResult() const { return this->ekycResult_ != nullptr;};
      void deleteEkycResult() { this->ekycResult_ = nullptr;};
      inline string getEkycResult() const { DARABONBA_PTR_GET_DEFAULT(ekycResult_, "") };
      inline Result& setEkycResult(string ekycResult) { DARABONBA_PTR_SET_VALUE(ekycResult_, ekycResult) };


      // extBasicInfo Field Functions 
      bool hasExtBasicInfo() const { return this->extBasicInfo_ != nullptr;};
      void deleteExtBasicInfo() { this->extBasicInfo_ = nullptr;};
      inline string getExtBasicInfo() const { DARABONBA_PTR_GET_DEFAULT(extBasicInfo_, "") };
      inline Result& setExtBasicInfo(string extBasicInfo) { DARABONBA_PTR_SET_VALUE(extBasicInfo_, extBasicInfo) };


      // extFaceInfo Field Functions 
      bool hasExtFaceInfo() const { return this->extFaceInfo_ != nullptr;};
      void deleteExtFaceInfo() { this->extFaceInfo_ = nullptr;};
      inline string getExtFaceInfo() const { DARABONBA_PTR_GET_DEFAULT(extFaceInfo_, "") };
      inline Result& setExtFaceInfo(string extFaceInfo) { DARABONBA_PTR_SET_VALUE(extFaceInfo_, extFaceInfo) };


      // extIdInfo Field Functions 
      bool hasExtIdInfo() const { return this->extIdInfo_ != nullptr;};
      void deleteExtIdInfo() { this->extIdInfo_ = nullptr;};
      inline string getExtIdInfo() const { DARABONBA_PTR_GET_DEFAULT(extIdInfo_, "") };
      inline Result& setExtIdInfo(string extIdInfo) { DARABONBA_PTR_SET_VALUE(extIdInfo_, extIdInfo) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
      inline Result& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


      // extRiskInfo Field Functions 
      bool hasExtRiskInfo() const { return this->extRiskInfo_ != nullptr;};
      void deleteExtRiskInfo() { this->extRiskInfo_ = nullptr;};
      inline string getExtRiskInfo() const { DARABONBA_PTR_GET_DEFAULT(extRiskInfo_, "") };
      inline Result& setExtRiskInfo(string extRiskInfo) { DARABONBA_PTR_SET_VALUE(extRiskInfo_, extRiskInfo) };


      // extSourceInfo Field Functions 
      bool hasExtSourceInfo() const { return this->extSourceInfo_ != nullptr;};
      void deleteExtSourceInfo() { this->extSourceInfo_ = nullptr;};
      inline string getExtSourceInfo() const { DARABONBA_PTR_GET_DEFAULT(extSourceInfo_, "") };
      inline Result& setExtSourceInfo(string extSourceInfo) { DARABONBA_PTR_SET_VALUE(extSourceInfo_, extSourceInfo) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
      inline Result& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline Result& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    protected:
      // Authentication result.
      shared_ptr<string> ekycResult_ {};
      // Extended basic information.
      shared_ptr<string> extBasicInfo_ {};
      // Face information.
      shared_ptr<string> extFaceInfo_ {};
      // ID information.
      shared_ptr<string> extIdInfo_ {};
      // Extended information
      shared_ptr<string> extInfo_ {};
      // Risk information.
      shared_ptr<string> extRiskInfo_ {};
      shared_ptr<string> extSourceInfo_ {};
      // Whether the authentication is passed.
      // 
      // - Y: Passed
      // - N: Not passed
      shared_ptr<string> passed_ {};
      // Sub-result code.
      shared_ptr<string> subCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CheckResultResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CheckResultResponseBody::Result) };
    inline CheckResultResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CheckResultResponseBody::Result) };
    inline CheckResultResponseBody& setResult(const CheckResultResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CheckResultResponseBody& setResult(CheckResultResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Return result.
    shared_ptr<CheckResultResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif

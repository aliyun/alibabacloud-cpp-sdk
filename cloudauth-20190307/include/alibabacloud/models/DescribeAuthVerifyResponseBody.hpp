// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeAuthVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeAuthVerifyResponseBody() = default ;
    DescribeAuthVerifyResponseBody(const DescribeAuthVerifyResponseBody &) = default ;
    DescribeAuthVerifyResponseBody(DescribeAuthVerifyResponseBody &&) = default ;
    DescribeAuthVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthVerifyResponseBody() = default ;
    DescribeAuthVerifyResponseBody& operator=(const DescribeAuthVerifyResponseBody &) = default ;
    DescribeAuthVerifyResponseBody& operator=(DescribeAuthVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
        DARABONBA_PTR_TO_JSON(SpoofBackInfo, spoofBackInfo_);
        DARABONBA_PTR_TO_JSON(SpoofInfo, spoofInfo_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
        DARABONBA_PTR_FROM_JSON(SpoofBackInfo, spoofBackInfo_);
        DARABONBA_PTR_FROM_JSON(SpoofInfo, spoofInfo_);
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
      virtual bool empty() const override { return this->materialInfo_ == nullptr
        && this->spoofBackInfo_ == nullptr && this->spoofInfo_ == nullptr && this->subCode_ == nullptr; };
      // materialInfo Field Functions 
      bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
      void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
      inline string getMaterialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
      inline Result& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


      // spoofBackInfo Field Functions 
      bool hasSpoofBackInfo() const { return this->spoofBackInfo_ != nullptr;};
      void deleteSpoofBackInfo() { this->spoofBackInfo_ = nullptr;};
      inline string getSpoofBackInfo() const { DARABONBA_PTR_GET_DEFAULT(spoofBackInfo_, "") };
      inline Result& setSpoofBackInfo(string spoofBackInfo) { DARABONBA_PTR_SET_VALUE(spoofBackInfo_, spoofBackInfo) };


      // spoofInfo Field Functions 
      bool hasSpoofInfo() const { return this->spoofInfo_ != nullptr;};
      void deleteSpoofInfo() { this->spoofInfo_ = nullptr;};
      inline string getSpoofInfo() const { DARABONBA_PTR_GET_DEFAULT(spoofInfo_, "") };
      inline Result& setSpoofInfo(string spoofInfo) { DARABONBA_PTR_SET_VALUE(spoofInfo_, spoofInfo) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline Result& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    protected:
      shared_ptr<string> materialInfo_ {};
      shared_ptr<string> spoofBackInfo_ {};
      shared_ptr<string> spoofInfo_ {};
      shared_ptr<string> subCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAuthVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAuthVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuthVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeAuthVerifyResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeAuthVerifyResponseBody::Result) };
    inline DescribeAuthVerifyResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeAuthVerifyResponseBody::Result) };
    inline DescribeAuthVerifyResponseBody& setResult(const DescribeAuthVerifyResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeAuthVerifyResponseBody& setResult(DescribeAuthVerifyResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeAuthVerifyResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

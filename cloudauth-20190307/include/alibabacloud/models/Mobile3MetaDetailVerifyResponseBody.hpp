// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE3METADETAILVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOBILE3METADETAILVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Mobile3MetaDetailVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile3MetaDetailVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile3MetaDetailVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    Mobile3MetaDetailVerifyResponseBody() = default ;
    Mobile3MetaDetailVerifyResponseBody(const Mobile3MetaDetailVerifyResponseBody &) = default ;
    Mobile3MetaDetailVerifyResponseBody(Mobile3MetaDetailVerifyResponseBody &&) = default ;
    Mobile3MetaDetailVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile3MetaDetailVerifyResponseBody() = default ;
    Mobile3MetaDetailVerifyResponseBody& operator=(const Mobile3MetaDetailVerifyResponseBody &) = default ;
    Mobile3MetaDetailVerifyResponseBody& operator=(Mobile3MetaDetailVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(IspName, ispName_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(IspName, ispName_);
        DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
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
      virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->ispName_ == nullptr && this->subCode_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline ResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // ispName Field Functions 
      bool hasIspName() const { return this->ispName_ != nullptr;};
      void deleteIspName() { this->ispName_ = nullptr;};
      inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
      inline ResultObject& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline ResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    protected:
      // Verification result code:
      // - **1**: Verification consistent.
      // - **2**: Verification inconsistent.
      // - **3**: No record found.
      shared_ptr<string> bizCode_ {};
      // Operator name:
      // 
      // - **CMCC**: China Mobile.
      // - **CUCC**: China Unicom.
      // - **CTCC**: China Telecom.
      shared_ptr<string> ispName_ {};
      // Detailed verification results:
      // 
      // - **101**: Verification passed.
      // - **201**: Mobile number and name do not match, mobile number and ID number do not match.
      // - **202**: Mobile number and name match, but mobile number and ID number do not match.
      // - **203**: Mobile number and ID number match, but mobile number and name do not match.
      // - **204**: Other inconsistencies.
      // - **301**: No record found.
      shared_ptr<string> subCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Mobile3MetaDetailVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Mobile3MetaDetailVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Mobile3MetaDetailVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const Mobile3MetaDetailVerifyResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, Mobile3MetaDetailVerifyResponseBody::ResultObject) };
    inline Mobile3MetaDetailVerifyResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, Mobile3MetaDetailVerifyResponseBody::ResultObject) };
    inline Mobile3MetaDetailVerifyResponseBody& setResultObject(const Mobile3MetaDetailVerifyResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline Mobile3MetaDetailVerifyResponseBody& setResultObject(Mobile3MetaDetailVerifyResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code, **200** indicates a successful API response.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result information.
    shared_ptr<Mobile3MetaDetailVerifyResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

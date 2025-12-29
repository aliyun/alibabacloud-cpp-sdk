// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAVERIFYWITHOCRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ID2METAVERIFYWITHOCRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id2MetaVerifyWithOCRResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaVerifyWithOCRResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaVerifyWithOCRResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    Id2MetaVerifyWithOCRResponseBody() = default ;
    Id2MetaVerifyWithOCRResponseBody(const Id2MetaVerifyWithOCRResponseBody &) = default ;
    Id2MetaVerifyWithOCRResponseBody(Id2MetaVerifyWithOCRResponseBody &&) = default ;
    Id2MetaVerifyWithOCRResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaVerifyWithOCRResponseBody() = default ;
    Id2MetaVerifyWithOCRResponseBody& operator=(const Id2MetaVerifyWithOCRResponseBody &) = default ;
    Id2MetaVerifyWithOCRResponseBody& operator=(Id2MetaVerifyWithOCRResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(CardInfo, cardInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(CardInfo, cardInfo_);
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
        && this->cardInfo_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline ResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // cardInfo Field Functions 
      bool hasCardInfo() const { return this->cardInfo_ != nullptr;};
      void deleteCardInfo() { this->cardInfo_ = nullptr;};
      inline string getCardInfo() const { DARABONBA_PTR_GET_DEFAULT(cardInfo_, "") };
      inline ResultObject& setCardInfo(string cardInfo) { DARABONBA_PTR_SET_VALUE(cardInfo_, cardInfo) };


    protected:
      // Identity verification result:
      // - 1: Consistent
      // - 2: Inconsistent
      // - 3: No record found
      shared_ptr<string> bizCode_ {};
      // {"address":"Zhejiang Province, Hangzhou City, Yu*****","birthDate":"19901226","certName":"Zhang San","certNo":"1234561990122*****","nationality":"Han","authority":"xxx Public Security Bureau","startDate":"20201130","endDate":"20301130"}
      shared_ptr<string> cardInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Id2MetaVerifyWithOCRResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Id2MetaVerifyWithOCRResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Id2MetaVerifyWithOCRResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const Id2MetaVerifyWithOCRResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, Id2MetaVerifyWithOCRResponseBody::ResultObject) };
    inline Id2MetaVerifyWithOCRResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, Id2MetaVerifyWithOCRResponseBody::ResultObject) };
    inline Id2MetaVerifyWithOCRResponseBody& setResultObject(const Id2MetaVerifyWithOCRResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline Id2MetaVerifyWithOCRResponseBody& setResultObject(Id2MetaVerifyWithOCRResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 indicates success, any other value indicates failure.
    // **Important**
    // - This parameter indicates whether the API was called correctly. For detailed return code explanations, please refer to the error codes.
    // - Check the business verification results through the fields in ResultObject.
    shared_ptr<string> code_ {};
    // API call return message.
    // **Important**
    // This parameter only indicates if there was an exception with the API call.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Result object
    shared_ptr<Id2MetaVerifyWithOCRResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

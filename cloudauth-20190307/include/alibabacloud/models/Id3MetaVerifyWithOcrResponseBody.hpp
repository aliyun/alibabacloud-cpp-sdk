// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID3METAVERIFYWITHOCRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ID3METAVERIFYWITHOCRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id3MetaVerifyWithOCRResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id3MetaVerifyWithOCRResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, Id3MetaVerifyWithOCRResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    Id3MetaVerifyWithOCRResponseBody() = default ;
    Id3MetaVerifyWithOCRResponseBody(const Id3MetaVerifyWithOCRResponseBody &) = default ;
    Id3MetaVerifyWithOCRResponseBody(Id3MetaVerifyWithOCRResponseBody &&) = default ;
    Id3MetaVerifyWithOCRResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id3MetaVerifyWithOCRResponseBody() = default ;
    Id3MetaVerifyWithOCRResponseBody& operator=(const Id3MetaVerifyWithOCRResponseBody &) = default ;
    Id3MetaVerifyWithOCRResponseBody& operator=(Id3MetaVerifyWithOCRResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(CardInfo, cardInfo_);
        DARABONBA_PTR_TO_JSON(FaceDetail, faceDetail_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(CardInfo, cardInfo_);
        DARABONBA_PTR_FROM_JSON(FaceDetail, faceDetail_);
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
        && this->cardInfo_ == nullptr && this->faceDetail_ == nullptr; };
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


      // faceDetail Field Functions 
      bool hasFaceDetail() const { return this->faceDetail_ != nullptr;};
      void deleteFaceDetail() { this->faceDetail_ = nullptr;};
      inline string getFaceDetail() const { DARABONBA_PTR_GET_DEFAULT(faceDetail_, "") };
      inline ResultObject& setFaceDetail(string faceDetail) { DARABONBA_PTR_SET_VALUE(faceDetail_, faceDetail) };


    protected:
      // Identity verification result:
      // 
      // - 1: Consistent
      // - 2: Inconsistent
      // - 3: No record found
      shared_ptr<string> bizCode_ {};
      // Card ocr result.
      shared_ptr<string> cardInfo_ {};
      // Face comparison score.
      shared_ptr<string> faceDetail_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Id3MetaVerifyWithOCRResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Id3MetaVerifyWithOCRResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Id3MetaVerifyWithOCRResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const Id3MetaVerifyWithOCRResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, Id3MetaVerifyWithOCRResponseBody::ResultObject) };
    inline Id3MetaVerifyWithOCRResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, Id3MetaVerifyWithOCRResponseBody::ResultObject) };
    inline Id3MetaVerifyWithOCRResponseBody& setResultObject(const Id3MetaVerifyWithOCRResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline Id3MetaVerifyWithOCRResponseBody& setResultObject(Id3MetaVerifyWithOCRResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 indicates success, any other value indicates failure. **Important**
    // 
    // - This parameter indicates whether the interface was called correctly. For a detailed explanation of return codes, please refer to the error codes.
    // - The business verification result can be viewed through the fields in ResultObject.
    shared_ptr<string> code_ {};
    // Interface call return message. **Important** This parameter only indicates whether there was an exception with the interface.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Result object.
    shared_ptr<Id3MetaVerifyWithOCRResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

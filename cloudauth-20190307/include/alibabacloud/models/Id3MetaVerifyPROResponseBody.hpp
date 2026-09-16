// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID3METAVERIFYPRORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ID3METAVERIFYPRORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id3MetaVerifyPROResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id3MetaVerifyPROResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, Id3MetaVerifyPROResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    Id3MetaVerifyPROResponseBody() = default ;
    Id3MetaVerifyPROResponseBody(const Id3MetaVerifyPROResponseBody &) = default ;
    Id3MetaVerifyPROResponseBody(Id3MetaVerifyPROResponseBody &&) = default ;
    Id3MetaVerifyPROResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id3MetaVerifyPROResponseBody() = default ;
    Id3MetaVerifyPROResponseBody& operator=(const Id3MetaVerifyPROResponseBody &) = default ;
    Id3MetaVerifyPROResponseBody& operator=(Id3MetaVerifyPROResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(FaceDetail, faceDetail_);
        DARABONBA_PTR_TO_JSON(HitWhitelist, hitWhitelist_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(FaceDetail, faceDetail_);
        DARABONBA_PTR_FROM_JSON(HitWhitelist, hitWhitelist_);
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
        && this->faceDetail_ == nullptr && this->hitWhitelist_ == nullptr && this->subCode_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline ResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // faceDetail Field Functions 
      bool hasFaceDetail() const { return this->faceDetail_ != nullptr;};
      void deleteFaceDetail() { this->faceDetail_ = nullptr;};
      inline string getFaceDetail() const { DARABONBA_PTR_GET_DEFAULT(faceDetail_, "") };
      inline ResultObject& setFaceDetail(string faceDetail) { DARABONBA_PTR_SET_VALUE(faceDetail_, faceDetail) };


      // hitWhitelist Field Functions 
      bool hasHitWhitelist() const { return this->hitWhitelist_ != nullptr;};
      void deleteHitWhitelist() { this->hitWhitelist_ = nullptr;};
      inline string getHitWhitelist() const { DARABONBA_PTR_GET_DEFAULT(hitWhitelist_, "") };
      inline ResultObject& setHitWhitelist(string hitWhitelist) { DARABONBA_PTR_SET_VALUE(hitWhitelist_, hitWhitelist) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline ResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    protected:
      // The authoritative source verification result. Valid values:
      // 
      // - **1**: Verification is consistent (billable).
      // - **2**: Verification is inconsistent (billable).
      // - **3**: No record found (not billable).
      shared_ptr<string> bizCode_ {};
      // - **verifyScore**: The face comparison score. Value range: 0 to 1000. A higher score indicates a higher probability of the same face. A score >= 700.0 confirms the same person.
      // 
      // - **faceAttack**: Returned when liveness detection is enabled (does not participate in the verification result decision).
      // 
      // - **invokeChannel**: The identifier of the actual invocation channel. 1: authoritative source. 0: comprehensive source.
      shared_ptr<string> faceDetail_ {};
      // Indicates whether the whitelist is hit: **Y**.
      shared_ptr<string> hitWhitelist_ {};
      // The authoritative source verification details. Valid values:
      // 
      // - **101**: Authentication passed.
      // 
      // - **201**: Authentication failed. The name does not match the ID card number.
      // 
      // - **202**: Authentication failed. Suspected to be the person.
      // 
      // - **203**: Authentication failed. No photo in the database.
      // 
      // - **204**: Authentication failed. Not the same person.
      // 
      // - **205**: Authentication failed. Modeling of the image to be compared failed.
      // 
      // - **206**: Authentication failed. The image format is incorrect.
      // 
      // - **207**: Authentication failed. The uploaded image is too small. Upload the image again.
      // 
      // - **208**: Authentication failed. The quality of the uploaded portrait photo is poor. Upload the photo again.
      // 
      // - **301**: No record found. The ID number does not exist in the database.
      // 
      // - **302**: No record found. Verification is not possible.
      shared_ptr<string> subCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Id3MetaVerifyPROResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Id3MetaVerifyPROResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Id3MetaVerifyPROResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const Id3MetaVerifyPROResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, Id3MetaVerifyPROResponseBody::ResultObject) };
    inline Id3MetaVerifyPROResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, Id3MetaVerifyPROResponseBody::ResultObject) };
    inline Id3MetaVerifyPROResponseBody& setResultObject(const Id3MetaVerifyPROResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline Id3MetaVerifyPROResponseBody& setResultObject(Id3MetaVerifyPROResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // The response code. **200** indicates that the API call is successful.
    shared_ptr<string> code_ {};
    // The response message of the API call.
    // >Notice: This parameter only indicates whether the API call is abnormal.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<Id3MetaVerifyPROResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

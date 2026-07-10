// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFACEVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFACEVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeFaceVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaceVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaceVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeFaceVerifyResponseBody() = default ;
    DescribeFaceVerifyResponseBody(const DescribeFaceVerifyResponseBody &) = default ;
    DescribeFaceVerifyResponseBody(DescribeFaceVerifyResponseBody &&) = default ;
    DescribeFaceVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaceVerifyResponseBody() = default ;
    DescribeFaceVerifyResponseBody& operator=(const DescribeFaceVerifyResponseBody &) = default ;
    DescribeFaceVerifyResponseBody& operator=(DescribeFaceVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceRisk, deviceRisk_);
        DARABONBA_PTR_TO_JSON(DeviceToken, deviceToken_);
        DARABONBA_PTR_TO_JSON(IdentityInfo, identityInfo_);
        DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceRisk, deviceRisk_);
        DARABONBA_PTR_FROM_JSON(DeviceToken, deviceToken_);
        DARABONBA_PTR_FROM_JSON(IdentityInfo, identityInfo_);
        DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
        DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
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
      virtual bool empty() const override { return this->deviceRisk_ == nullptr
        && this->deviceToken_ == nullptr && this->identityInfo_ == nullptr && this->materialInfo_ == nullptr && this->passed_ == nullptr && this->subCode_ == nullptr
        && this->success_ == nullptr && this->userInfo_ == nullptr; };
      // deviceRisk Field Functions 
      bool hasDeviceRisk() const { return this->deviceRisk_ != nullptr;};
      void deleteDeviceRisk() { this->deviceRisk_ = nullptr;};
      inline string getDeviceRisk() const { DARABONBA_PTR_GET_DEFAULT(deviceRisk_, "") };
      inline ResultObject& setDeviceRisk(string deviceRisk) { DARABONBA_PTR_SET_VALUE(deviceRisk_, deviceRisk) };


      // deviceToken Field Functions 
      bool hasDeviceToken() const { return this->deviceToken_ != nullptr;};
      void deleteDeviceToken() { this->deviceToken_ = nullptr;};
      inline string getDeviceToken() const { DARABONBA_PTR_GET_DEFAULT(deviceToken_, "") };
      inline ResultObject& setDeviceToken(string deviceToken) { DARABONBA_PTR_SET_VALUE(deviceToken_, deviceToken) };


      // identityInfo Field Functions 
      bool hasIdentityInfo() const { return this->identityInfo_ != nullptr;};
      void deleteIdentityInfo() { this->identityInfo_ = nullptr;};
      inline string getIdentityInfo() const { DARABONBA_PTR_GET_DEFAULT(identityInfo_, "") };
      inline ResultObject& setIdentityInfo(string identityInfo) { DARABONBA_PTR_SET_VALUE(identityInfo_, identityInfo) };


      // materialInfo Field Functions 
      bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
      void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
      inline string getMaterialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
      inline ResultObject& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
      inline ResultObject& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline ResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
      inline ResultObject& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // userInfo Field Functions 
      bool hasUserInfo() const { return this->userInfo_ != nullptr;};
      void deleteUserInfo() { this->userInfo_ = nullptr;};
      inline string getUserInfo() const { DARABONBA_PTR_GET_DEFAULT(userInfo_, "") };
      inline ResultObject& setUserInfo(string userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };


    protected:
      // The device risk label.
      shared_ptr<string> deviceRisk_ {};
      // The device token.
      shared_ptr<string> deviceToken_ {};
      // The identity information of the verification subject. This field is empty in common verification scenarios.
      shared_ptr<string> identityInfo_ {};
      // The supplementary material information of the verification subject, primarily image-based materials. The value is in JSON format. See the example below.
      shared_ptr<string> materialInfo_ {};
      // Indicates whether the verification is passed. A value of T indicates passed. A value of F indicates not passed.
      shared_ptr<string> passed_ {};
      // The verification result description. For more information, see the SubCode description below.
      shared_ptr<string> subCode_ {};
      // Indicates whether the response is successful.
      shared_ptr<string> success_ {};
      // The identity information and corresponding encoding entered by the user in rare character mode. The value is a JSON-formatted string. An empty string is returned if the name does not contain rare characters.
      // 
      // - name: the name entered by the user.
      // 
      // - verifyName: the final name encoding that passed verification. For example, if a rare character is verified through transcoding: "王先生", the actual verified name is "王先升".
      // 
      // - number: the ID number entered by the user.
      shared_ptr<string> userInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeFaceVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeFaceVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaceVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeFaceVerifyResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeFaceVerifyResponseBody::ResultObject) };
    inline DescribeFaceVerifyResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeFaceVerifyResponseBody::ResultObject) };
    inline DescribeFaceVerifyResponseBody& setResultObject(const DescribeFaceVerifyResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeFaceVerifyResponseBody& setResultObject(DescribeFaceVerifyResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // The return code. A value of 200 indicates success. Other values indicate failure.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result information.
    shared_ptr<DescribeFaceVerifyResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFACEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFACEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeFaceVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaceVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceRisk, deviceRisk_);
      DARABONBA_PTR_TO_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_TO_JSON(IdentityInfo, identityInfo_);
      DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaceVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceRisk, deviceRisk_);
      DARABONBA_PTR_FROM_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_FROM_JSON(IdentityInfo, identityInfo_);
      DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    DescribeFaceVerifyResponseBodyResultObject() = default ;
    DescribeFaceVerifyResponseBodyResultObject(const DescribeFaceVerifyResponseBodyResultObject &) = default ;
    DescribeFaceVerifyResponseBodyResultObject(DescribeFaceVerifyResponseBodyResultObject &&) = default ;
    DescribeFaceVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaceVerifyResponseBodyResultObject() = default ;
    DescribeFaceVerifyResponseBodyResultObject& operator=(const DescribeFaceVerifyResponseBodyResultObject &) = default ;
    DescribeFaceVerifyResponseBodyResultObject& operator=(DescribeFaceVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceRisk_ != nullptr
        && this->deviceToken_ != nullptr && this->identityInfo_ != nullptr && this->materialInfo_ != nullptr && this->passed_ != nullptr && this->subCode_ != nullptr
        && this->success_ != nullptr && this->userInfo_ != nullptr; };
    // deviceRisk Field Functions 
    bool hasDeviceRisk() const { return this->deviceRisk_ != nullptr;};
    void deleteDeviceRisk() { this->deviceRisk_ = nullptr;};
    inline string deviceRisk() const { DARABONBA_PTR_GET_DEFAULT(deviceRisk_, "") };
    inline DescribeFaceVerifyResponseBodyResultObject& setDeviceRisk(string deviceRisk) { DARABONBA_PTR_SET_VALUE(deviceRisk_, deviceRisk) };


    // deviceToken Field Functions 
    bool hasDeviceToken() const { return this->deviceToken_ != nullptr;};
    void deleteDeviceToken() { this->deviceToken_ = nullptr;};
    inline string deviceToken() const { DARABONBA_PTR_GET_DEFAULT(deviceToken_, "") };
    inline DescribeFaceVerifyResponseBodyResultObject& setDeviceToken(string deviceToken) { DARABONBA_PTR_SET_VALUE(deviceToken_, deviceToken) };


    // identityInfo Field Functions 
    bool hasIdentityInfo() const { return this->identityInfo_ != nullptr;};
    void deleteIdentityInfo() { this->identityInfo_ = nullptr;};
    inline string identityInfo() const { DARABONBA_PTR_GET_DEFAULT(identityInfo_, "") };
    inline DescribeFaceVerifyResponseBodyResultObject& setIdentityInfo(string identityInfo) { DARABONBA_PTR_SET_VALUE(identityInfo_, identityInfo) };


    // materialInfo Field Functions 
    bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
    void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
    inline string materialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
    inline DescribeFaceVerifyResponseBodyResultObject& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline DescribeFaceVerifyResponseBodyResultObject& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline DescribeFaceVerifyResponseBodyResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeFaceVerifyResponseBodyResultObject& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline string userInfo() const { DARABONBA_PTR_GET_DEFAULT(userInfo_, "") };
    inline DescribeFaceVerifyResponseBodyResultObject& setUserInfo(string userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };


  protected:
    // Device risk label.
    std::shared_ptr<string> deviceRisk_ = nullptr;
    // Device token.
    std::shared_ptr<string> deviceToken_ = nullptr;
    // Information about the authenticated subject, usually empty in general authentication scenarios.
    std::shared_ptr<string> identityInfo_ = nullptr;
    // Attachment information of the authenticated subject, mainly image materials. JSON format, see example below.
    std::shared_ptr<string> materialInfo_ = nullptr;
    // Whether it passed, T for pass, F for fail.
    std::shared_ptr<string> passed_ = nullptr;
    // Description of the authentication result. For details, see the SubCode explanation below.
    std::shared_ptr<string> subCode_ = nullptr;
    // Whether the response was successful.
    std::shared_ptr<string> success_ = nullptr;
    // Records the identity information and corresponding encoding entered by the user under the rare character mode. The returned data is a JSON formatted string, which will be an empty string if there are no rare characters in the name.
    // 
    // - name: Refers to the name entered by the user.
    // 
    // - verifyName: Refers to the final name encoding after verification. For example, if a rare character is verified through transcoding: “Mr. Wang”, the actual verified name is “Wang Xiansheng”.
    // 
    // - number: Refers to the identification number entered by the user.
    std::shared_ptr<string> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

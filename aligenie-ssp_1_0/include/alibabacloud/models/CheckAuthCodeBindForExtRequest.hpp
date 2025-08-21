// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAUTHCODEBINDFOREXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKAUTHCODEBINDFOREXTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckAuthCodeBindForExtRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAuthCodeBindForExtRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAuthCodeBindForExtRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAuthCodeBindForExtRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CheckAuthCodeBindForExtRequest() = default ;
    CheckAuthCodeBindForExtRequest(const CheckAuthCodeBindForExtRequest &) = default ;
    CheckAuthCodeBindForExtRequest(CheckAuthCodeBindForExtRequest &&) = default ;
    CheckAuthCodeBindForExtRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAuthCodeBindForExtRequest() = default ;
    CheckAuthCodeBindForExtRequest& operator=(const CheckAuthCodeBindForExtRequest &) = default ;
    CheckAuthCodeBindForExtRequest& operator=(CheckAuthCodeBindForExtRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authCode_ != nullptr
        && this->encodeKey_ != nullptr && this->encodeType_ != nullptr && this->userInfo_ != nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string authCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline CheckAuthCodeBindForExtRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline CheckAuthCodeBindForExtRequest& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline CheckAuthCodeBindForExtRequest& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CheckAuthCodeBindForExtRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CheckAuthCodeBindForExtRequestUserInfo) };
    inline CheckAuthCodeBindForExtRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, CheckAuthCodeBindForExtRequestUserInfo) };
    inline CheckAuthCodeBindForExtRequest& setUserInfo(const CheckAuthCodeBindForExtRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CheckAuthCodeBindForExtRequest& setUserInfo(CheckAuthCodeBindForExtRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> authCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encodeKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encodeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CheckAuthCodeBindForExtRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

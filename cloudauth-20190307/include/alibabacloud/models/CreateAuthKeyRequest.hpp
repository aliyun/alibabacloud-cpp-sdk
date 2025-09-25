// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTHKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTHKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CreateAuthKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAuthKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthYears, authYears_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Test, test_);
      DARABONBA_PTR_TO_JSON(UserDeviceId, userDeviceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAuthKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthYears, authYears_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Test, test_);
      DARABONBA_PTR_FROM_JSON(UserDeviceId, userDeviceId_);
    };
    CreateAuthKeyRequest() = default ;
    CreateAuthKeyRequest(const CreateAuthKeyRequest &) = default ;
    CreateAuthKeyRequest(CreateAuthKeyRequest &&) = default ;
    CreateAuthKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAuthKeyRequest() = default ;
    CreateAuthKeyRequest& operator=(const CreateAuthKeyRequest &) = default ;
    CreateAuthKeyRequest& operator=(CreateAuthKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authYears_ != nullptr
        && this->bizType_ != nullptr && this->test_ != nullptr && this->userDeviceId_ != nullptr; };
    // authYears Field Functions 
    bool hasAuthYears() const { return this->authYears_ != nullptr;};
    void deleteAuthYears() { this->authYears_ = nullptr;};
    inline int32_t authYears() const { DARABONBA_PTR_GET_DEFAULT(authYears_, 0) };
    inline CreateAuthKeyRequest& setAuthYears(int32_t authYears) { DARABONBA_PTR_SET_VALUE(authYears_, authYears) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreateAuthKeyRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // test Field Functions 
    bool hasTest() const { return this->test_ != nullptr;};
    void deleteTest() { this->test_ = nullptr;};
    inline bool test() const { DARABONBA_PTR_GET_DEFAULT(test_, false) };
    inline CreateAuthKeyRequest& setTest(bool test) { DARABONBA_PTR_SET_VALUE(test_, test) };


    // userDeviceId Field Functions 
    bool hasUserDeviceId() const { return this->userDeviceId_ != nullptr;};
    void deleteUserDeviceId() { this->userDeviceId_ = nullptr;};
    inline string userDeviceId() const { DARABONBA_PTR_GET_DEFAULT(userDeviceId_, "") };
    inline CreateAuthKeyRequest& setUserDeviceId(string userDeviceId) { DARABONBA_PTR_SET_VALUE(userDeviceId_, userDeviceId) };


  protected:
    // When the Test flag is false or empty, AuthYears is required, in years, with a range of [1,100]. A value of 100 indicates permanent authorization.
    std::shared_ptr<int32_t> authYears_ = nullptr;
    // Business type. No more than 64 characters. Can be used to note specific business, such as different face usage scenarios of the access party or the customer identifier to be delivered. It is recommended to pass this parameter.
    std::shared_ptr<string> bizType_ = nullptr;
    // Test flag. If true, it indicates using test authorization with a default duration of 30 days; if false, the authorization duration will be based on AuthYears.
    std::shared_ptr<bool> test_ = nullptr;
    // User device ID. No more than 64 characters. Can be used to identify a specific device, and it is suggested to use the physical number of the device. It is recommended to pass this parameter.
    std::shared_ptr<string> userDeviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLATFORMUSERINFOFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLATFORMUSERINFOFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class GetPlatformUserInfoForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlatformUserInfoForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedOpenId, encryptedOpenId_);
      DARABONBA_PTR_TO_JSON(EncryptedUnionId, encryptedUnionId_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlatformUserInfoForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedOpenId, encryptedOpenId_);
      DARABONBA_PTR_FROM_JSON(EncryptedUnionId, encryptedUnionId_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPlatformUserInfoForPartnerResponseBody() = default ;
    GetPlatformUserInfoForPartnerResponseBody(const GetPlatformUserInfoForPartnerResponseBody &) = default ;
    GetPlatformUserInfoForPartnerResponseBody(GetPlatformUserInfoForPartnerResponseBody &&) = default ;
    GetPlatformUserInfoForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlatformUserInfoForPartnerResponseBody() = default ;
    GetPlatformUserInfoForPartnerResponseBody& operator=(const GetPlatformUserInfoForPartnerResponseBody &) = default ;
    GetPlatformUserInfoForPartnerResponseBody& operator=(GetPlatformUserInfoForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptedOpenId_ == nullptr
        && return this->encryptedUnionId_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // encryptedOpenId Field Functions 
    bool hasEncryptedOpenId() const { return this->encryptedOpenId_ != nullptr;};
    void deleteEncryptedOpenId() { this->encryptedOpenId_ = nullptr;};
    inline string encryptedOpenId() const { DARABONBA_PTR_GET_DEFAULT(encryptedOpenId_, "") };
    inline GetPlatformUserInfoForPartnerResponseBody& setEncryptedOpenId(string encryptedOpenId) { DARABONBA_PTR_SET_VALUE(encryptedOpenId_, encryptedOpenId) };


    // encryptedUnionId Field Functions 
    bool hasEncryptedUnionId() const { return this->encryptedUnionId_ != nullptr;};
    void deleteEncryptedUnionId() { this->encryptedUnionId_ = nullptr;};
    inline string encryptedUnionId() const { DARABONBA_PTR_GET_DEFAULT(encryptedUnionId_, "") };
    inline GetPlatformUserInfoForPartnerResponseBody& setEncryptedUnionId(string encryptedUnionId) { DARABONBA_PTR_SET_VALUE(encryptedUnionId_, encryptedUnionId) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetPlatformUserInfoForPartnerResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPlatformUserInfoForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPlatformUserInfoForPartnerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> encryptedOpenId_ = nullptr;
    std::shared_ptr<string> encryptedUnionId_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // success
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif

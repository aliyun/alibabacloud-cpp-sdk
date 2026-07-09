// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{
namespace Models
{
  class GetAuthCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_TO_JSON(AdPassword, adPassword_);
      DARABONBA_PTR_TO_JSON(AutoCreateUser, autoCreateUser_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(TokenType, tokenType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_FROM_JSON(AdPassword, adPassword_);
      DARABONBA_PTR_FROM_JSON(AutoCreateUser, autoCreateUser_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(TokenType, tokenType_);
    };
    GetAuthCodeRequest() = default ;
    GetAuthCodeRequest(const GetAuthCodeRequest &) = default ;
    GetAuthCodeRequest(GetAuthCodeRequest &&) = default ;
    GetAuthCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthCodeRequest() = default ;
    GetAuthCodeRequest& operator=(const GetAuthCodeRequest &) = default ;
    GetAuthCodeRequest& operator=(GetAuthCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountType_ == nullptr
        && this->adDomain_ == nullptr && this->adPassword_ == nullptr && this->autoCreateUser_ == nullptr && this->endUserId_ == nullptr && this->externalUserId_ == nullptr
        && this->policy_ == nullptr && this->tokenType_ == nullptr; };
    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline GetAuthCodeRequest& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // adDomain Field Functions 
    bool hasAdDomain() const { return this->adDomain_ != nullptr;};
    void deleteAdDomain() { this->adDomain_ = nullptr;};
    inline string getAdDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
    inline GetAuthCodeRequest& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


    // adPassword Field Functions 
    bool hasAdPassword() const { return this->adPassword_ != nullptr;};
    void deleteAdPassword() { this->adPassword_ = nullptr;};
    inline string getAdPassword() const { DARABONBA_PTR_GET_DEFAULT(adPassword_, "") };
    inline GetAuthCodeRequest& setAdPassword(string adPassword) { DARABONBA_PTR_SET_VALUE(adPassword_, adPassword) };


    // autoCreateUser Field Functions 
    bool hasAutoCreateUser() const { return this->autoCreateUser_ != nullptr;};
    void deleteAutoCreateUser() { this->autoCreateUser_ = nullptr;};
    inline bool getAutoCreateUser() const { DARABONBA_PTR_GET_DEFAULT(autoCreateUser_, false) };
    inline GetAuthCodeRequest& setAutoCreateUser(bool autoCreateUser) { DARABONBA_PTR_SET_VALUE(autoCreateUser_, autoCreateUser) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetAuthCodeRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline GetAuthCodeRequest& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetAuthCodeRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // tokenType Field Functions 
    bool hasTokenType() const { return this->tokenType_ != nullptr;};
    void deleteTokenType() { this->tokenType_ = nullptr;};
    inline string getTokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
    inline GetAuthCodeRequest& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


  protected:
    shared_ptr<string> accountType_ {};
    shared_ptr<string> adDomain_ {};
    shared_ptr<string> adPassword_ {};
    // Specifies whether to synchronously create an EndUserId based on ExternalUserId. This parameter takes effect only when EndUserId is empty.
    shared_ptr<bool> autoCreateUser_ {};
    // The username of the China Desktop Service (China Desktop Service) convenience account. The username must be unique within an Alibaba Cloud account. This parameter and ExternalUserId cannot both be empty.
    shared_ptr<string> endUserId_ {};
    // The external user ID. This ID is defined by the caller and must be unique within an Alibaba Cloud account. This parameter and EndUserId cannot both be empty.
    shared_ptr<string> externalUserId_ {};
    // The access policy that restricts the access permissions of the authorization code. If this parameter is left empty, no restrictions are applied.
    // 
    // Syntax:
    // 
    // ```json
    // {
    //       "Version": "1",
    //       "Resource": {
    //             "Type": "<Resource type>",
    //             "Id": "<Resource ID>"
    //       }
    // }
    // ```
    // 
    // Valid values of <Resource type>:
    // 
    // - AppInstanceGroup: delivery group. You can call the ListAppInstanceGroup operation to obtain the ID.
    // - AppInstance: application instance (dedicated field).
    // - App: application. You can call the ListAppInstanceGroup operation to obtain the ID.
    shared_ptr<string> policy_ {};
    shared_ptr<string> tokenType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif

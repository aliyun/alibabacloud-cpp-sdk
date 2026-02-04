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
      DARABONBA_PTR_TO_JSON(AutoCreateUser, autoCreateUser_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateUser, autoCreateUser_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
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
    virtual bool empty() const override { return this->autoCreateUser_ == nullptr
        && this->endUserId_ == nullptr && this->externalUserId_ == nullptr && this->policy_ == nullptr; };
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


  protected:
    shared_ptr<bool> autoCreateUser_ {};
    shared_ptr<string> endUserId_ {};
    shared_ptr<string> externalUserId_ {};
    shared_ptr<string> policy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif

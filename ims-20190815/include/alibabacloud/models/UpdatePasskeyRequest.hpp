// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPASSKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPASSKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdatePasskeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePasskeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PasskeyId, passkeyId_);
      DARABONBA_PTR_TO_JSON(PasskeyName, passkeyName_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePasskeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PasskeyId, passkeyId_);
      DARABONBA_PTR_FROM_JSON(PasskeyName, passkeyName_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    UpdatePasskeyRequest() = default ;
    UpdatePasskeyRequest(const UpdatePasskeyRequest &) = default ;
    UpdatePasskeyRequest(UpdatePasskeyRequest &&) = default ;
    UpdatePasskeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePasskeyRequest() = default ;
    UpdatePasskeyRequest& operator=(const UpdatePasskeyRequest &) = default ;
    UpdatePasskeyRequest& operator=(UpdatePasskeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passkeyId_ != nullptr
        && this->passkeyName_ != nullptr && this->userPrincipalName_ != nullptr; };
    // passkeyId Field Functions 
    bool hasPasskeyId() const { return this->passkeyId_ != nullptr;};
    void deletePasskeyId() { this->passkeyId_ = nullptr;};
    inline string passkeyId() const { DARABONBA_PTR_GET_DEFAULT(passkeyId_, "") };
    inline UpdatePasskeyRequest& setPasskeyId(string passkeyId) { DARABONBA_PTR_SET_VALUE(passkeyId_, passkeyId) };


    // passkeyName Field Functions 
    bool hasPasskeyName() const { return this->passkeyName_ != nullptr;};
    void deletePasskeyName() { this->passkeyName_ = nullptr;};
    inline string passkeyName() const { DARABONBA_PTR_GET_DEFAULT(passkeyName_, "") };
    inline UpdatePasskeyRequest& setPasskeyName(string passkeyName) { DARABONBA_PTR_SET_VALUE(passkeyName_, passkeyName) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline UpdatePasskeyRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The ID of the passkey.
    std::shared_ptr<string> passkeyId_ = nullptr;
    // The name of the passkey.
    std::shared_ptr<string> passkeyName_ = nullptr;
    // The logon name of the Resource Access Management (RAM) user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPASSKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPASSKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class DeletePasskeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePasskeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PasskeyId, passkeyId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePasskeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PasskeyId, passkeyId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    DeletePasskeyRequest() = default ;
    DeletePasskeyRequest(const DeletePasskeyRequest &) = default ;
    DeletePasskeyRequest(DeletePasskeyRequest &&) = default ;
    DeletePasskeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePasskeyRequest() = default ;
    DeletePasskeyRequest& operator=(const DeletePasskeyRequest &) = default ;
    DeletePasskeyRequest& operator=(DeletePasskeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passkeyId_ != nullptr
        && this->userPrincipalName_ != nullptr; };
    // passkeyId Field Functions 
    bool hasPasskeyId() const { return this->passkeyId_ != nullptr;};
    void deletePasskeyId() { this->passkeyId_ = nullptr;};
    inline string passkeyId() const { DARABONBA_PTR_GET_DEFAULT(passkeyId_, "") };
    inline DeletePasskeyRequest& setPasskeyId(string passkeyId) { DARABONBA_PTR_SET_VALUE(passkeyId_, passkeyId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline DeletePasskeyRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The ID of the passkey.
    std::shared_ptr<string> passkeyId_ = nullptr;
    // The logon name of the RAM user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

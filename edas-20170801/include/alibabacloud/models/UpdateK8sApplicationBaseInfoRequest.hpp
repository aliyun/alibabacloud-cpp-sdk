// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEK8SAPPLICATIONBASEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEK8SAPPLICATIONBASEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateK8sApplicationBaseInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateK8sApplicationBaseInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateK8sApplicationBaseInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
    };
    UpdateK8sApplicationBaseInfoRequest() = default ;
    UpdateK8sApplicationBaseInfoRequest(const UpdateK8sApplicationBaseInfoRequest &) = default ;
    UpdateK8sApplicationBaseInfoRequest(UpdateK8sApplicationBaseInfoRequest &&) = default ;
    UpdateK8sApplicationBaseInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateK8sApplicationBaseInfoRequest() = default ;
    UpdateK8sApplicationBaseInfoRequest& operator=(const UpdateK8sApplicationBaseInfoRequest &) = default ;
    UpdateK8sApplicationBaseInfoRequest& operator=(UpdateK8sApplicationBaseInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->description_ == nullptr && return this->email_ == nullptr && return this->owner_ == nullptr && return this->phoneNumber_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateK8sApplicationBaseInfoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateK8sApplicationBaseInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline UpdateK8sApplicationBaseInfoRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateK8sApplicationBaseInfoRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline UpdateK8sApplicationBaseInfoRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


  protected:
    // The ID of the application that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The description of the application. The description can be up to 256 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The email address of the application owner.
    std::shared_ptr<string> email_ = nullptr;
    // The owner of the application. The value can be up to 128 characters in length.
    std::shared_ptr<string> owner_ = nullptr;
    // The phone number of the application owner.
    std::shared_ptr<string> phoneNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

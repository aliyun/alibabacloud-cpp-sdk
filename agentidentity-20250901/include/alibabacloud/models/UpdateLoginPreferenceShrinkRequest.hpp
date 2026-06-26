// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOGINPREFERENCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOGINPREFERENCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class UpdateLoginPreferenceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoginPreferenceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoginPreference, loginPreferenceShrink_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoginPreferenceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginPreference, loginPreferenceShrink_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    UpdateLoginPreferenceShrinkRequest() = default ;
    UpdateLoginPreferenceShrinkRequest(const UpdateLoginPreferenceShrinkRequest &) = default ;
    UpdateLoginPreferenceShrinkRequest(UpdateLoginPreferenceShrinkRequest &&) = default ;
    UpdateLoginPreferenceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoginPreferenceShrinkRequest() = default ;
    UpdateLoginPreferenceShrinkRequest& operator=(const UpdateLoginPreferenceShrinkRequest &) = default ;
    UpdateLoginPreferenceShrinkRequest& operator=(UpdateLoginPreferenceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loginPreferenceShrink_ == nullptr
        && this->userPoolName_ == nullptr; };
    // loginPreferenceShrink Field Functions 
    bool hasLoginPreferenceShrink() const { return this->loginPreferenceShrink_ != nullptr;};
    void deleteLoginPreferenceShrink() { this->loginPreferenceShrink_ = nullptr;};
    inline string getLoginPreferenceShrink() const { DARABONBA_PTR_GET_DEFAULT(loginPreferenceShrink_, "") };
    inline UpdateLoginPreferenceShrinkRequest& setLoginPreferenceShrink(string loginPreferenceShrink) { DARABONBA_PTR_SET_VALUE(loginPreferenceShrink_, loginPreferenceShrink) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline UpdateLoginPreferenceShrinkRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> loginPreferenceShrink_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif

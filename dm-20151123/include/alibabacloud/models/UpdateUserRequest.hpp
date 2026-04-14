// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class UpdateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    UpdateUserRequest() = default ;
    UpdateUserRequest(const UpdateUserRequest &) = default ;
    UpdateUserRequest(UpdateUserRequest &&) = default ;
    UpdateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserRequest() = default ;
    UpdateUserRequest& operator=(const UpdateUserRequest &) = default ;
    UpdateUserRequest& operator=(UpdateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
        DARABONBA_PTR_TO_JSON(EnableEventbridge, enableEventbridge_);
      };
      friend void from_json(const Darabonba::Json& j, User& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableEventbridge, enableEventbridge_);
      };
      User() = default ;
      User(const User &) = default ;
      User(User &&) = default ;
      User(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~User() = default ;
      User& operator=(const User &) = default ;
      User& operator=(User &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableEventbridge_ == nullptr; };
      // enableEventbridge Field Functions 
      bool hasEnableEventbridge() const { return this->enableEventbridge_ != nullptr;};
      void deleteEnableEventbridge() { this->enableEventbridge_ = nullptr;};
      inline bool getEnableEventbridge() const { DARABONBA_PTR_GET_DEFAULT(enableEventbridge_, false) };
      inline User& setEnableEventbridge(bool enableEventbridge) { DARABONBA_PTR_SET_VALUE(enableEventbridge_, enableEventbridge) };


    protected:
      // Whether EventBridge is enabled
      shared_ptr<bool> enableEventbridge_ {};
    };

    virtual bool empty() const override { return this->user_ == nullptr; };
    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const UpdateUserRequest::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, UpdateUserRequest::User) };
    inline UpdateUserRequest::User getUser() { DARABONBA_PTR_GET(user_, UpdateUserRequest::User) };
    inline UpdateUserRequest& setUser(const UpdateUserRequest::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline UpdateUserRequest& setUser(UpdateUserRequest::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // User Information
    shared_ptr<UpdateUserRequest::User> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif

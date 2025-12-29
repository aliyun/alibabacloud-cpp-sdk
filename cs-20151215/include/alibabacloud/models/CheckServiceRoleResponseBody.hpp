// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICEROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICEROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CheckServiceRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(roles, roles_);
    };
    CheckServiceRoleResponseBody() = default ;
    CheckServiceRoleResponseBody(const CheckServiceRoleResponseBody &) = default ;
    CheckServiceRoleResponseBody(CheckServiceRoleResponseBody &&) = default ;
    CheckServiceRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceRoleResponseBody() = default ;
    CheckServiceRoleResponseBody& operator=(const CheckServiceRoleResponseBody &) = default ;
    CheckServiceRoleResponseBody& operator=(CheckServiceRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Roles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Roles& obj) { 
        DARABONBA_PTR_TO_JSON(granted, granted_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Roles& obj) { 
        DARABONBA_PTR_FROM_JSON(granted, granted_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Roles() = default ;
      Roles(const Roles &) = default ;
      Roles(Roles &&) = default ;
      Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Roles() = default ;
      Roles& operator=(const Roles &) = default ;
      Roles& operator=(Roles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->granted_ == nullptr
        && this->message_ == nullptr && this->name_ == nullptr; };
      // granted Field Functions 
      bool hasGranted() const { return this->granted_ != nullptr;};
      void deleteGranted() { this->granted_ = nullptr;};
      inline bool getGranted() const { DARABONBA_PTR_GET_DEFAULT(granted_, false) };
      inline Roles& setGranted(bool granted) { DARABONBA_PTR_SET_VALUE(granted_, granted) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Roles& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Roles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // Indicates whether the service role is assigned to ACK.
      // 
      // Valid values:
      // 
      // *   true: The role is assigned to ACK.
      // *   false: The role is not assigned to ACK.
      shared_ptr<bool> granted_ {};
      // The message that is displayed for a role that is not assigned to ACK.
      shared_ptr<string> message_ {};
      // The name of the service role.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->roles_ == nullptr; };
    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<CheckServiceRoleResponseBody::Roles> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<CheckServiceRoleResponseBody::Roles>) };
    inline vector<CheckServiceRoleResponseBody::Roles> getRoles() { DARABONBA_PTR_GET(roles_, vector<CheckServiceRoleResponseBody::Roles>) };
    inline CheckServiceRoleResponseBody& setRoles(const vector<CheckServiceRoleResponseBody::Roles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline CheckServiceRoleResponseBody& setRoles(vector<CheckServiceRoleResponseBody::Roles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    // The check results.
    shared_ptr<vector<CheckServiceRoleResponseBody::Roles>> roles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

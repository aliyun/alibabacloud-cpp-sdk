// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICEROLERESPONSEBODYROLES_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICEROLERESPONSEBODYROLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CheckServiceRoleResponseBodyRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceRoleResponseBodyRoles& obj) { 
      DARABONBA_PTR_TO_JSON(granted, granted_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceRoleResponseBodyRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(granted, granted_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CheckServiceRoleResponseBodyRoles() = default ;
    CheckServiceRoleResponseBodyRoles(const CheckServiceRoleResponseBodyRoles &) = default ;
    CheckServiceRoleResponseBodyRoles(CheckServiceRoleResponseBodyRoles &&) = default ;
    CheckServiceRoleResponseBodyRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceRoleResponseBodyRoles() = default ;
    CheckServiceRoleResponseBodyRoles& operator=(const CheckServiceRoleResponseBodyRoles &) = default ;
    CheckServiceRoleResponseBodyRoles& operator=(CheckServiceRoleResponseBodyRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->granted_ != nullptr
        && this->message_ != nullptr && this->name_ != nullptr; };
    // granted Field Functions 
    bool hasGranted() const { return this->granted_ != nullptr;};
    void deleteGranted() { this->granted_ = nullptr;};
    inline bool granted() const { DARABONBA_PTR_GET_DEFAULT(granted_, false) };
    inline CheckServiceRoleResponseBodyRoles& setGranted(bool granted) { DARABONBA_PTR_SET_VALUE(granted_, granted) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckServiceRoleResponseBodyRoles& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CheckServiceRoleResponseBodyRoles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Indicates whether the service role is assigned to ACK.
    // 
    // Valid values:
    // 
    // *   true: The role is assigned to ACK.
    // *   false: The role is not assigned to ACK.
    std::shared_ptr<bool> granted_ = nullptr;
    // The message that is displayed for a role that is not assigned to ACK.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the service role.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif

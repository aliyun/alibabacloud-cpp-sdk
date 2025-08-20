// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETLOGINPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETLOGINPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ResetLoginPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetLoginPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
    };
    friend void from_json(const Darabonba::Json& j, ResetLoginPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
    };
    ResetLoginPasswordRequest() = default ;
    ResetLoginPasswordRequest(const ResetLoginPasswordRequest &) = default ;
    ResetLoginPasswordRequest(ResetLoginPasswordRequest &&) = default ;
    ResetLoginPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetLoginPasswordRequest() = default ;
    ResetLoginPasswordRequest& operator=(const ResetLoginPasswordRequest &) = default ;
    ResetLoginPasswordRequest& operator=(ResetLoginPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->password_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ResetLoginPasswordRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ResetLoginPasswordRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The new password that you specify to log on to the instance. The password must be 8 to 32 bits in length, and must contain at least two of the following character types: letters, special characters, and digits.
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif

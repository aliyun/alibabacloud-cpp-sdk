// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPASSWORDHISTORYCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPASSWORDHISTORYCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetPasswordHistoryConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPasswordHistoryConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PasswordHistoryMaxRetention, passwordHistoryMaxRetention_);
      DARABONBA_PTR_TO_JSON(PasswordHistoryStatus, passwordHistoryStatus_);
    };
    friend void from_json(const Darabonba::Json& j, SetPasswordHistoryConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PasswordHistoryMaxRetention, passwordHistoryMaxRetention_);
      DARABONBA_PTR_FROM_JSON(PasswordHistoryStatus, passwordHistoryStatus_);
    };
    SetPasswordHistoryConfigurationRequest() = default ;
    SetPasswordHistoryConfigurationRequest(const SetPasswordHistoryConfigurationRequest &) = default ;
    SetPasswordHistoryConfigurationRequest(SetPasswordHistoryConfigurationRequest &&) = default ;
    SetPasswordHistoryConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPasswordHistoryConfigurationRequest() = default ;
    SetPasswordHistoryConfigurationRequest& operator=(const SetPasswordHistoryConfigurationRequest &) = default ;
    SetPasswordHistoryConfigurationRequest& operator=(SetPasswordHistoryConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->passwordHistoryMaxRetention_ == nullptr && this->passwordHistoryStatus_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPasswordHistoryConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // passwordHistoryMaxRetention Field Functions 
    bool hasPasswordHistoryMaxRetention() const { return this->passwordHistoryMaxRetention_ != nullptr;};
    void deletePasswordHistoryMaxRetention() { this->passwordHistoryMaxRetention_ = nullptr;};
    inline int32_t getPasswordHistoryMaxRetention() const { DARABONBA_PTR_GET_DEFAULT(passwordHistoryMaxRetention_, 0) };
    inline SetPasswordHistoryConfigurationRequest& setPasswordHistoryMaxRetention(int32_t passwordHistoryMaxRetention) { DARABONBA_PTR_SET_VALUE(passwordHistoryMaxRetention_, passwordHistoryMaxRetention) };


    // passwordHistoryStatus Field Functions 
    bool hasPasswordHistoryStatus() const { return this->passwordHistoryStatus_ != nullptr;};
    void deletePasswordHistoryStatus() { this->passwordHistoryStatus_ = nullptr;};
    inline string getPasswordHistoryStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordHistoryStatus_, "") };
    inline SetPasswordHistoryConfigurationRequest& setPasswordHistoryStatus(string passwordHistoryStatus) { DARABONBA_PTR_SET_VALUE(passwordHistoryStatus_, passwordHistoryStatus) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The maximum number of recent passwords that can be retained. This parameter must be specified when PasswordHistoryStatus is set to enabled.
    shared_ptr<int32_t> passwordHistoryMaxRetention_ {};
    // Specifies whether to enable the password history feature. Valid values:
    // 
    // *   enabled
    // *   disabled
    // 
    // This parameter is required.
    shared_ptr<string> passwordHistoryStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

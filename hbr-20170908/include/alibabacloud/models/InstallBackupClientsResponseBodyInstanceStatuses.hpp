// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLBACKUPCLIENTSRESPONSEBODYINSTANCESTATUSES_HPP_
#define ALIBABACLOUD_MODELS_INSTALLBACKUPCLIENTSRESPONSEBODYINSTANCESTATUSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class InstallBackupClientsResponseBodyInstanceStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallBackupClientsResponseBodyInstanceStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ValidInstance, validInstance_);
    };
    friend void from_json(const Darabonba::Json& j, InstallBackupClientsResponseBodyInstanceStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ValidInstance, validInstance_);
    };
    InstallBackupClientsResponseBodyInstanceStatuses() = default ;
    InstallBackupClientsResponseBodyInstanceStatuses(const InstallBackupClientsResponseBodyInstanceStatuses &) = default ;
    InstallBackupClientsResponseBodyInstanceStatuses(InstallBackupClientsResponseBodyInstanceStatuses &&) = default ;
    InstallBackupClientsResponseBodyInstanceStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallBackupClientsResponseBodyInstanceStatuses() = default ;
    InstallBackupClientsResponseBodyInstanceStatuses& operator=(const InstallBackupClientsResponseBodyInstanceStatuses &) = default ;
    InstallBackupClientsResponseBodyInstanceStatuses& operator=(InstallBackupClientsResponseBodyInstanceStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->instanceId_ == nullptr && return this->validInstance_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline InstallBackupClientsResponseBodyInstanceStatuses& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InstallBackupClientsResponseBodyInstanceStatuses& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // validInstance Field Functions 
    bool hasValidInstance() const { return this->validInstance_ != nullptr;};
    void deleteValidInstance() { this->validInstance_ = nullptr;};
    inline bool validInstance() const { DARABONBA_PTR_GET_DEFAULT(validInstance_, false) };
    inline InstallBackupClientsResponseBodyInstanceStatuses& setValidInstance(bool validInstance) { DARABONBA_PTR_SET_VALUE(validInstance_, validInstance) };


  protected:
    // The error code that is returned. Valid values:
    // 
    // *   If the value is empty, the call is successful.
    // *   **InstanceNotExists**: The ECS instance does not exist.
    // *   **InstanceNotRunning**: The ECS instance is not running.
    // *   **CloudAssistNotRunningOnInstance**: Cloud Assistant is unavailable.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether an HBR client can be installed on the ECS instance. Valid values:
    // 
    // *   true: An HBR client can be installed on the ECS instance.
    // *   false: An HBR client cannot be installed on the ECS instance.
    std::shared_ptr<bool> validInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif

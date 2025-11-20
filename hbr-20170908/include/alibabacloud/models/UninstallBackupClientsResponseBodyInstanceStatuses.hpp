// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLBACKUPCLIENTSRESPONSEBODYINSTANCESTATUSES_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLBACKUPCLIENTSRESPONSEBODYINSTANCESTATUSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UninstallBackupClientsResponseBodyInstanceStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallBackupClientsResponseBodyInstanceStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ValidInstance, validInstance_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallBackupClientsResponseBodyInstanceStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ValidInstance, validInstance_);
    };
    UninstallBackupClientsResponseBodyInstanceStatuses() = default ;
    UninstallBackupClientsResponseBodyInstanceStatuses(const UninstallBackupClientsResponseBodyInstanceStatuses &) = default ;
    UninstallBackupClientsResponseBodyInstanceStatuses(UninstallBackupClientsResponseBodyInstanceStatuses &&) = default ;
    UninstallBackupClientsResponseBodyInstanceStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallBackupClientsResponseBodyInstanceStatuses() = default ;
    UninstallBackupClientsResponseBodyInstanceStatuses& operator=(const UninstallBackupClientsResponseBodyInstanceStatuses &) = default ;
    UninstallBackupClientsResponseBodyInstanceStatuses& operator=(UninstallBackupClientsResponseBodyInstanceStatuses &&) = default ;
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
    inline UninstallBackupClientsResponseBodyInstanceStatuses& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UninstallBackupClientsResponseBodyInstanceStatuses& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // validInstance Field Functions 
    bool hasValidInstance() const { return this->validInstance_ != nullptr;};
    void deleteValidInstance() { this->validInstance_ = nullptr;};
    inline bool validInstance() const { DARABONBA_PTR_GET_DEFAULT(validInstance_, false) };
    inline UninstallBackupClientsResponseBodyInstanceStatuses& setValidInstance(bool validInstance) { DARABONBA_PTR_SET_VALUE(validInstance_, validInstance) };


  protected:
    // The error code. Valid values:
    // 
    // *   If the value is empty, the request is successful.
    // *   **InstanceNotExists**: The ECS instance does not exist.
    // *   **InstanceNotRunning**: The ECS instance is not running.
    // *   **CloudAssistNotRunningOnInstance**: Cloud Assistant is unavailable.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether a backup client can be installed on the ECS instance.
    // 
    // *   true: A backup client can be installed on the ECS instance.
    // *   false: A backup client cannot be installed on the ECS instance.
    std::shared_ptr<bool> validInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif

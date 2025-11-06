// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREUSERSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREUSERSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ConfigureUserSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureUserSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(PutType, putType_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureUserSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(PutType, putType_);
    };
    ConfigureUserSettingRequest() = default ;
    ConfigureUserSettingRequest(const ConfigureUserSettingRequest &) = default ;
    ConfigureUserSettingRequest(ConfigureUserSettingRequest &&) = default ;
    ConfigureUserSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureUserSettingRequest() = default ;
    ConfigureUserSettingRequest& operator=(const ConfigureUserSettingRequest &) = default ;
    ConfigureUserSettingRequest& operator=(ConfigureUserSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->consoleSessionId_ == nullptr && return this->instanceId_ == nullptr && return this->logstore_ == nullptr && return this->projectName_ == nullptr && return this->putType_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ConfigureUserSettingRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline ConfigureUserSettingRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigureUserSettingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline ConfigureUserSettingRequest& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ConfigureUserSettingRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // putType Field Functions 
    bool hasPutType() const { return this->putType_ != nullptr;};
    void deletePutType() { this->putType_ = nullptr;};
    inline string putType() const { DARABONBA_PTR_GET_DEFAULT(putType_, "") };
    inline ConfigureUserSettingRequest& setPutType(string putType) { DARABONBA_PTR_SET_VALUE(putType_, putType) };


  protected:
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> logstore_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> putType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif

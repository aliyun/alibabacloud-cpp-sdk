// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONMAINTENANCECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONMAINTENANCECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeActiveOperationMaintenanceConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveOperationMaintenanceConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(HasConfig, hasConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveOperationMaintenanceConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(HasConfig, hasConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeActiveOperationMaintenanceConfigResponseBody() = default ;
    DescribeActiveOperationMaintenanceConfigResponseBody(const DescribeActiveOperationMaintenanceConfigResponseBody &) = default ;
    DescribeActiveOperationMaintenanceConfigResponseBody(DescribeActiveOperationMaintenanceConfigResponseBody &&) = default ;
    DescribeActiveOperationMaintenanceConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveOperationMaintenanceConfigResponseBody() = default ;
    DescribeActiveOperationMaintenanceConfigResponseBody& operator=(const DescribeActiveOperationMaintenanceConfigResponseBody &) = default ;
    DescribeActiveOperationMaintenanceConfigResponseBody& operator=(DescribeActiveOperationMaintenanceConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(CycleTime, cycleTime_);
        DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
        DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
        DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(CycleTime, cycleTime_);
        DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
        DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
        DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->cycleTime_ == nullptr && this->cycleType_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->modifiedTime_ == nullptr
        && this->status_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Config& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // cycleTime Field Functions 
      bool hasCycleTime() const { return this->cycleTime_ != nullptr;};
      void deleteCycleTime() { this->cycleTime_ = nullptr;};
      inline string getCycleTime() const { DARABONBA_PTR_GET_DEFAULT(cycleTime_, "") };
      inline Config& setCycleTime(string cycleTime) { DARABONBA_PTR_SET_VALUE(cycleTime_, cycleTime) };


      // cycleType Field Functions 
      bool hasCycleType() const { return this->cycleType_ != nullptr;};
      void deleteCycleType() { this->cycleType_ = nullptr;};
      inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
      inline Config& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


      // maintainEndTime Field Functions 
      bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
      void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
      inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
      inline Config& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


      // maintainStartTime Field Functions 
      bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
      void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
      inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
      inline Config& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Config& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Config& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the O\\&M task was created. The timefollows the *yyyy-mm-dd*t*hh:mm:ss*z format. The time is displayed in UTC.
      shared_ptr<string> createdTime_ {};
      // The start time of the O\\&M period. The time follows the *hh:mm* z format. The time is displayed in UTC.
      shared_ptr<string> cycleTime_ {};
      // The cyclical type of the O\\&M task.
      shared_ptr<string> cycleType_ {};
      // The end time of the maintenance window. The time follows the *hh:mm*z format. The time is displayed in UTC.
      shared_ptr<string> maintainEndTime_ {};
      // The start time of the maintenance window. The time follows the *hh:mm*z format.
      shared_ptr<string> maintainStartTime_ {};
      // The time when the O\\&M task was modified. The time follows the *yyyy-mm-dd*t*hh:mm:ss*z format. The time is displayed in Coordinated Universal Time (UTC).
      shared_ptr<string> modifiedTime_ {};
      // The state of the O\\&M task. Valid values: **0**: The O\\&M task is in the starting state. **1**: The O\\&M task is in the running state. **2**: The O\\&M task is in the stopped state.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->hasConfig_ == nullptr && this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribeActiveOperationMaintenanceConfigResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, DescribeActiveOperationMaintenanceConfigResponseBody::Config) };
    inline DescribeActiveOperationMaintenanceConfigResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, DescribeActiveOperationMaintenanceConfigResponseBody::Config) };
    inline DescribeActiveOperationMaintenanceConfigResponseBody& setConfig(const DescribeActiveOperationMaintenanceConfigResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeActiveOperationMaintenanceConfigResponseBody& setConfig(DescribeActiveOperationMaintenanceConfigResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // hasConfig Field Functions 
    bool hasHasConfig() const { return this->hasConfig_ != nullptr;};
    void deleteHasConfig() { this->hasConfig_ = nullptr;};
    inline int32_t getHasConfig() const { DARABONBA_PTR_GET_DEFAULT(hasConfig_, 0) };
    inline DescribeActiveOperationMaintenanceConfigResponseBody& setHasConfig(int32_t hasConfig) { DARABONBA_PTR_SET_VALUE(hasConfig_, hasConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveOperationMaintenanceConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The description of the configuration.
    shared_ptr<DescribeActiveOperationMaintenanceConfigResponseBody::Config> config_ {};
    // Indicates whether the O\\&M task is configured. Valid values:
    // 
    // *   1: The O\\&M task is configured.
    // *   0: The O\\&M task is not configured.
    shared_ptr<int32_t> hasConfig_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif

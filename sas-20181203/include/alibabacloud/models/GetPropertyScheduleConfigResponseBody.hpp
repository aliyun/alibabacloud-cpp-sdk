// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTYSCHEDULECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTYSCHEDULECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetPropertyScheduleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertyScheduleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyScheduleConfig, propertyScheduleConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertyScheduleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyScheduleConfig, propertyScheduleConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPropertyScheduleConfigResponseBody() = default ;
    GetPropertyScheduleConfigResponseBody(const GetPropertyScheduleConfigResponseBody &) = default ;
    GetPropertyScheduleConfigResponseBody(GetPropertyScheduleConfigResponseBody &&) = default ;
    GetPropertyScheduleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertyScheduleConfigResponseBody() = default ;
    GetPropertyScheduleConfigResponseBody& operator=(const GetPropertyScheduleConfigResponseBody &) = default ;
    GetPropertyScheduleConfigResponseBody& operator=(GetPropertyScheduleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PropertyScheduleConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PropertyScheduleConfig& obj) { 
        DARABONBA_PTR_TO_JSON(NextScheduleTime, nextScheduleTime_);
        DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, PropertyScheduleConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(NextScheduleTime, nextScheduleTime_);
        DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      PropertyScheduleConfig() = default ;
      PropertyScheduleConfig(const PropertyScheduleConfig &) = default ;
      PropertyScheduleConfig(PropertyScheduleConfig &&) = default ;
      PropertyScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PropertyScheduleConfig() = default ;
      PropertyScheduleConfig& operator=(const PropertyScheduleConfig &) = default ;
      PropertyScheduleConfig& operator=(PropertyScheduleConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nextScheduleTime_ == nullptr
        && this->scheduleTime_ == nullptr && this->type_ == nullptr; };
      // nextScheduleTime Field Functions 
      bool hasNextScheduleTime() const { return this->nextScheduleTime_ != nullptr;};
      void deleteNextScheduleTime() { this->nextScheduleTime_ = nullptr;};
      inline int64_t getNextScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(nextScheduleTime_, 0L) };
      inline PropertyScheduleConfig& setNextScheduleTime(int64_t nextScheduleTime) { DARABONBA_PTR_SET_VALUE(nextScheduleTime_, nextScheduleTime) };


      // scheduleTime Field Functions 
      bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
      void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
      inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
      inline PropertyScheduleConfig& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PropertyScheduleConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The timestamp when the next collection of asset fingerprints starts. Unit: milliseconds.
      shared_ptr<int64_t> nextScheduleTime_ {};
      // The collection frequency of asset fingerprints. Valid values:
      // 
      // *   **0**: disabled, which indicates that the asset fingerprints are not automatically or periodically collected.
      // *   **1**: collects asset fingerprints once an hour.
      // *   **3**: collects asset fingerprints once every 3 hours.
      // *   **12**: collects asset fingerprints once every 12 hours.
      // *   **24**: collects asset fingerprints once a day.
      // *   **168**: collects asset fingerprints once every 7 days.
      shared_ptr<string> scheduleTime_ {};
      // The type of the asset fingerprints. Valid values:
      // 
      // *   **scheduler_port_period**: listening port
      // *   **scheduler_process_period**: running process
      // *   **scheduler_account_period**: account
      // *   **scheduler_software_period**: software
      // *   **scheduler_cron_period**: scheduled task
      // *   **scheduler_sca_period**: middleware
      // *   **scheduler_autorun_period**: startup item
      // *   **scheduler_lkm_period**: kernel module
      // *   **scheduler_sca_proxy_period**: website
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->propertyScheduleConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // propertyScheduleConfig Field Functions 
    bool hasPropertyScheduleConfig() const { return this->propertyScheduleConfig_ != nullptr;};
    void deletePropertyScheduleConfig() { this->propertyScheduleConfig_ = nullptr;};
    inline const GetPropertyScheduleConfigResponseBody::PropertyScheduleConfig & getPropertyScheduleConfig() const { DARABONBA_PTR_GET_CONST(propertyScheduleConfig_, GetPropertyScheduleConfigResponseBody::PropertyScheduleConfig) };
    inline GetPropertyScheduleConfigResponseBody::PropertyScheduleConfig getPropertyScheduleConfig() { DARABONBA_PTR_GET(propertyScheduleConfig_, GetPropertyScheduleConfigResponseBody::PropertyScheduleConfig) };
    inline GetPropertyScheduleConfigResponseBody& setPropertyScheduleConfig(const GetPropertyScheduleConfigResponseBody::PropertyScheduleConfig & propertyScheduleConfig) { DARABONBA_PTR_SET_VALUE(propertyScheduleConfig_, propertyScheduleConfig) };
    inline GetPropertyScheduleConfigResponseBody& setPropertyScheduleConfig(GetPropertyScheduleConfigResponseBody::PropertyScheduleConfig && propertyScheduleConfig) { DARABONBA_PTR_SET_RVALUE(propertyScheduleConfig_, propertyScheduleConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPropertyScheduleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations for the collection frequency of asset fingerprints.
    shared_ptr<GetPropertyScheduleConfigResponseBody::PropertyScheduleConfig> propertyScheduleConfig_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

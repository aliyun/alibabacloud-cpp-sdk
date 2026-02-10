// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEALARMSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEALARMSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInstanceAlarmStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceAlarmStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceAlarmStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetInstanceAlarmStatisticsRequest() = default ;
    GetInstanceAlarmStatisticsRequest(const GetInstanceAlarmStatisticsRequest &) = default ;
    GetInstanceAlarmStatisticsRequest(GetInstanceAlarmStatisticsRequest &&) = default ;
    GetInstanceAlarmStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceAlarmStatisticsRequest() = default ;
    GetInstanceAlarmStatisticsRequest& operator=(const GetInstanceAlarmStatisticsRequest &) = default ;
    GetInstanceAlarmStatisticsRequest& operator=(GetInstanceAlarmStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->uuid_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline GetInstanceAlarmStatisticsRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetInstanceAlarmStatisticsRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The data source for statistics on instance alarms, with a default value of aqs:
    // - *sas*: Situation Awareness data source
    // - *aqs*: Alarm event data
    // - *honeypot*: Honeypot
    shared_ptr<string> from_ {};
    // The UUID of the server to be queried.
    // > Call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) API to obtain this parameter.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

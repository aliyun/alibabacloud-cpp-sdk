// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERDEVICEWORKLOADTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERDEVICEWORKLOADTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetUserDeviceWorkloadTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserDeviceWorkloadTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceTag, deviceTag_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserDeviceWorkloadTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceTag, deviceTag_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
    };
    GetUserDeviceWorkloadTrendRequest() = default ;
    GetUserDeviceWorkloadTrendRequest(const GetUserDeviceWorkloadTrendRequest &) = default ;
    GetUserDeviceWorkloadTrendRequest(GetUserDeviceWorkloadTrendRequest &&) = default ;
    GetUserDeviceWorkloadTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserDeviceWorkloadTrendRequest() = default ;
    GetUserDeviceWorkloadTrendRequest& operator=(const GetUserDeviceWorkloadTrendRequest &) = default ;
    GetUserDeviceWorkloadTrendRequest& operator=(GetUserDeviceWorkloadTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceTag_ == nullptr
        && this->from_ == nullptr && this->to_ == nullptr && this->workloadType_ == nullptr; };
    // deviceTag Field Functions 
    bool hasDeviceTag() const { return this->deviceTag_ != nullptr;};
    void deleteDeviceTag() { this->deviceTag_ = nullptr;};
    inline string getDeviceTag() const { DARABONBA_PTR_GET_DEFAULT(deviceTag_, "") };
    inline GetUserDeviceWorkloadTrendRequest& setDeviceTag(string deviceTag) { DARABONBA_PTR_SET_VALUE(deviceTag_, deviceTag) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline GetUserDeviceWorkloadTrendRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline GetUserDeviceWorkloadTrendRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string getWorkloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline GetUserDeviceWorkloadTrendRequest& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


  protected:
    // The endpoint device ID. You can obtain this value from the following operations:
    // - [GetUserDevice](~~GetUserDevice~~): Queries the details of a user endpoint device.
    // - [ListUserDevices](~~ListUserDevices~~): Queries user endpoint devices in batches.
    // 
    // This parameter is required.
    shared_ptr<string> deviceTag_ {};
    // The start time of the query time range. This value is a UNIX timestamp in seconds. The value must be greater than or equal to 0 and less than the value of To.
    // 
    // This parameter is required.
    shared_ptr<int64_t> from_ {};
    // The end time of the query time range. This value is a UNIX timestamp in seconds. The value must be greater than the value of From.
    // 
    // This parameter is required.
    shared_ptr<int64_t> to_ {};
    // The workload type. Valid values:
    // - **cpu**: CPU usage.
    // - **mem**: memory usage.
    // 
    // This parameter is required.
    shared_ptr<string> workloadType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

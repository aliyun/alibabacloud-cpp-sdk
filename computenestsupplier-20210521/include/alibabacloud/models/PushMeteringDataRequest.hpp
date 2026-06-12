// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class PushMeteringDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMeteringDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Metering, metering_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, PushMeteringDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Metering, metering_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    PushMeteringDataRequest() = default ;
    PushMeteringDataRequest(const PushMeteringDataRequest &) = default ;
    PushMeteringDataRequest(PushMeteringDataRequest &&) = default ;
    PushMeteringDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushMeteringDataRequest() = default ;
    PushMeteringDataRequest& operator=(const PushMeteringDataRequest &) = default ;
    PushMeteringDataRequest& operator=(PushMeteringDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metering_ == nullptr
        && this->serviceInstanceId_ == nullptr; };
    // metering Field Functions 
    bool hasMetering() const { return this->metering_ != nullptr;};
    void deleteMetering() { this->metering_ = nullptr;};
    inline string getMetering() const { DARABONBA_PTR_GET_DEFAULT(metering_, "") };
    inline PushMeteringDataRequest& setMetering(string metering) { DARABONBA_PTR_SET_VALUE(metering_, metering) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline PushMeteringDataRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The parameters are described as follows:
    // 
    // - InstanceId: The ID of the Alibaba Cloud Marketplace instance. The parameter type is String.
    // 
    // - StartTime: The start time of the metering. The unit is seconds. The format is a UNIX timestamp. The parameter type is Long.
    // 
    // - EndTime: The end time of the metering. The unit is seconds. The format is a UNIX timestamp. The parameter type is Long.
    // 
    // - `Entities`: The metering entity object. The parameter type is List\\<Map>.
    // 
    //   - Key: The name of the metering item property. The parameter type is String.
    // 
    //     - Frequency: The number of times used.
    // 
    //     - `Period`: The usage duration in seconds.
    //       <props="intl">Note: The duration in the request parameter is measured in seconds, but the billing unit is hours. The duration is converted to hours for billing. For example, if you push a usage of 1800 for the period from 19:00 to 20:00 and the price is USD 1/hour, the hourly bill for this period is 1800 / 3600 × 1 = USD 0.5. If the fee is a decimal, it is truncated to two decimal places.
    // 
    //     - `Storage`: The storage space used, in bytes.
    //       <props="intl">Note: The unit in the request parameter is bytes, but the billing unit is MB. The value is converted to MB for billing. For example, if you push a usage of 524288 for the period from 19:00 to 20:00 and the price is USD 1/MB, the hourly bill for this period is 524288 / 1024 / 1024 × 1 = USD 0.5. If the fee is a decimal, it is truncated to two decimal places.
    // 
    //     - `NetworkOut`: The outbound data transfer, in bits.
    //       <props="intl">Note: The unit in the request parameter is bits, but the billing unit is Mb. The value is converted to Mb for billing. For example, if you push a usage of 524288 for the period from 19:00 to 20:00 and the price is USD 1/Mb, the hourly bill for this period is 524288 / 1024 / 1024 × 1 = USD 0.5. If the fee is a decimal, it is truncated to two decimal places.
    // 
    //     - `NetworkIn`: The inbound data transfer, in bits.
    //       <props="intl">Note: The unit in the request parameter is bits, but the billing unit is Mb. The value is converted to Mb for billing. For example, if you push a usage of 524288 for the period from 19:00 to 20:00 and the price is USD 1/Mb, the hourly bill for this period is 524288 / 1024 / 1024 × 1 = USD 0.5. If the fee is a decimal, it is truncated to two decimal places.
    // 
    //     - Character: The number of characters.
    // 
    //     - DailyActiveUser: The number of daily active users (DAU).
    // 
    //     - PeriodMin: The usage duration in minutes.
    // 
    //     - VirtualCpu: The number of vCPU cores.
    // 
    //       - Unit: The number of units.
    // 
    //       - Memory: The memory size in GB.
    // 
    //   - Value: The metering value. The value must be greater than or equal to 0. The parameter type is Integer.
    // 
    // **Note**:
    // 
    // - For products with real-time billing, the interval between StartTime and EndTime can be of any length. EndTime must be later than StartTime.
    // 
    // - For products that are not billed in real-time, such as those billed by the hour, day, or month, the interval between StartTime and EndTime must be longer than 5 minutes.
    // 
    // - When pushing metering data in batches, the InstanceId property must be for instances of the same product. Pushing data for instances of multiple products at the same time is not supported.
    // 
    // This parameter is required.
    shared_ptr<string> metering_ {};
    // The service instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHMETERINGDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class PushMeteringDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMeteringDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Metering, metering_);
    };
    friend void from_json(const Darabonba::Json& j, PushMeteringDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Metering, metering_);
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
    virtual bool empty() const override { return this->metering_ == nullptr; };
    // metering Field Functions 
    bool hasMetering() const { return this->metering_ != nullptr;};
    void deleteMetering() { this->metering_ = nullptr;};
    inline string getMetering() const { DARABONBA_PTR_GET_DEFAULT(metering_, "") };
    inline PushMeteringDataRequest& setMetering(string metering) { DARABONBA_PTR_SET_VALUE(metering_, metering) };


  protected:
    // The parameters in the example are described as follows:
    // 
    // - InstanceId: The cloud marketplace instance ID. The parameter type is String.
    // - StartTime: The metering start time. Unit: seconds (in Unix timestamp format, e.g., 1723771200). The parameter type is Long.
    // - EndTime: The metering end time. Unit: seconds (in Unix timestamp format, e.g., 1723771800). The parameter type is Long.
    // - Entities: The metering entity objects. The parameter type is List<Map>.
    //     - Key: The name of the metering item attribute. The parameter type is String.
    //         - Frequency: The number of uses (count).
    //         - Period: The usage duration in hours (seconds).
    //          Note: The duration unit in the request parameter is seconds, while the billing unit is hours. Therefore, the value is converted to hours during billing. For example, if you push usage of 1800 for the period 19:00-20:00 and the billing price is 1 CNY/hour, the hourly bill for that period is 1800 / 3600 x 1 = 0.5 CNY. If the amount is a decimal, it is rounded to two decimal places with any digits beyond two truncated.
    // 
    //         - Storage: The storage space used (Byte).
    // 
    //          Note: The unit in the request parameter is Byte, while the billing unit is MB. Therefore, the value is converted to MB during billing. For example, if you push usage of 524288 for the period 19:00-20:00 and the billing price is 1 CNY/MB, the hourly bill for that period is 524288 / 1024 / 1024 x 1 = 0.5 CNY. If the amount is a decimal, it is rounded to two decimal places with any digits beyond two truncated.
    // 
    //         - NetworkOut: The outbound traffic used (Bit).
    // 
    //          Note: The unit in the request parameter is Bit, while the billing unit is Mb. Therefore, the value is converted to Mb during billing. For example, if you push usage of 524288 for the period 19:00-20:00 and the billing price is 1 CNY/Mb, the hourly bill for that period is 524288 / 1024 / 1024 x 1 = 0.5 CNY. If the amount is a decimal, it is rounded to two decimal places with any digits beyond two truncated.
    // 
    //         - NetworkIn: The inbound traffic used (Bit).
    // 
    //          Note: The unit in the request parameter is Bit, while the billing unit is Mb. Therefore, the value is converted to Mb during billing. For example, if you push usage of 524288 for the period 19:00-20:00 and the billing price is 1 CNY/Mb, the hourly bill for that period is 524288 / 1024 / 1024 x 1 = 0.5 CNY. If the amount is a decimal, it is rounded to two decimal places with any digits beyond two truncated.
    // 
    //         - Character: The number of characters (count).
    //         - DailyActiveUser: The number of daily active users (DAU).
    //         - PeriodMin: The usage duration in minutes (minutes).
    //         - VirtualCpu: The number of virtual CPU cores.
    //         - Unit: Unit (count).
    //         - Memory: Memory (GB).
    //         - KTokens: The number of tokens used (token).
    //          Note: The unit of KTokens in the request parameter is token. You do not need to convert the value to thousands of tokens. The billing unit is thousands of tokens. Therefore, the token value in the pushed metering parameter is converted to thousands of tokens during billing. For example, if you push usage of 1500 tokens for the period 19:00-20:00, example: {"Key":"KTokens","Value":"1500","meteringAssit":"cmapi00071246-KTokens-1"}, and the billing price is 1 CNY/thousand tokens, the hourly bill for that period is 1500 / 1000 x 1 = 1.5 CNY. If the amount is a decimal, it is rounded to two decimal places with any digits beyond two truncated.
    //         - Suit: Suit (set). Note that the value passed in the parameter is in sets.
    //         - StorageGigaByte: StorageGigaByte (storage space in GB). Note that the unit of the value passed in the parameter is directly GB, without needing to convert to Byte or other units.
    //     - Value: The metering value (value >= 0). The parameter type is Integer.
    //     - meteringAssit: The multi-dimensional metering item ID. The parameter type is String. This billing item ID can be found in the product publishing backend. Billing items such as Frequency may have one or more of these values. When pushing metering data for newly published products, this parameter must be included.
    //     - SerialNo: Specific to large model invocation scenarios. When using HTTP calls, set this to the requestId. When using WebSocket, set this to the uid of the single task. This parameter is only required when the product is billed by the minute. It is not required in other cases.
    // 
    // **Note**:
    // - Multi-dimensional metering capability: For the billing items mentioned above such as Frequency (count), Period (usage duration), PeriodMin, etc., multiple items can be supported when publishing a product. For example, a product can have multiple PeriodMin billing items, and each PeriodMin billing item generates a unique ID to identify the billing item. This billing item is generated when the product is published, and the format is like (cmapi00060317-PeriodMin-3, cmapi00060317-PeriodMin-4). When pushing metering data, the above ID must be included to enable the corresponding billing deduction. The metering data format for newly published products is as follows:
    // [{"InstanceId":"1000001","StartTime":"100000000","EndTime":"100000010","Entities":[{"Key":"PeriodMin","Value":"96","meteringAssit":"cmapi00060317-PeriodMin-4"}]}].
    // - The pushed metering parameters should follow the example. All parameters in the example are required. Missing data will cause the metering push to fail.
    shared_ptr<string> metering_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif

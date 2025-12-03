// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALARMREQUESTDIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEALARMREQUESTDIMENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateAlarmRequestDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlarmRequestDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlarmRequestDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
    };
    CreateAlarmRequestDimensions() = default ;
    CreateAlarmRequestDimensions(const CreateAlarmRequestDimensions &) = default ;
    CreateAlarmRequestDimensions(CreateAlarmRequestDimensions &&) = default ;
    CreateAlarmRequestDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlarmRequestDimensions() = default ;
    CreateAlarmRequestDimensions& operator=(const CreateAlarmRequestDimensions &) = default ;
    CreateAlarmRequestDimensions& operator=(CreateAlarmRequestDimensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimensionKey_ == nullptr
        && return this->dimensionValue_ == nullptr; };
    // dimensionKey Field Functions 
    bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
    void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
    inline string dimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
    inline CreateAlarmRequestDimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


    // dimensionValue Field Functions 
    bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
    void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
    inline string dimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
    inline CreateAlarmRequestDimensions& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


  protected:
    // The dimension key of the metric. The valid values vary based on the metric type.
    // 
    // *   If you set MetricType to custom, you can specify this parameter based on your business requirements.
    // 
    // *   If you set MetricType to system, this parameter has the following valid values:
    // 
    //     *   user_id: the ID of your Alibaba Cloud account.
    //     *   scaling_group: the scaling group that is monitored by the event-triggered task.
    //     *   device: the NIC type.
    //     *   state: the status of the TCP connection.
    //     *   rulePool: the specified server group for the ALB qps metric.
    std::shared_ptr<string> dimensionKey_ = nullptr;
    // The dimension value of the metric. The valid values of this parameter vary based on the value of Dimensions.DimensionKey.
    // 
    // *   If you set MetricType to custom, you can specify this parameter based on your business requirements.
    // 
    // *   If you set MetricType to system, this parameter has the following valid values:
    // 
    //     *   user_id: The system specifies the value.
    // 
    //     *   scaling_group: The system specifies the value.
    // 
    //     *   device:
    // 
    //         *   eth0: For classic network instances, eth0 indicates the internal network network interface controller. Only one eth0 NIC exists on each instance that resides in VPCs.
    //         *   eth1: For classic network instances, eth1 represents the Internet network interface controller.
    // 
    //     *   state:
    // 
    //         *   TCP_TOTAL specifies the total number of TCP connections.
    //         *   ESTABLISHED indicates the number of TCP connections that are established.
    // 
    //     *   rulePool: the ID of the ALB server group. Example: sgp-xxxxx.
    std::shared_ptr<string> dimensionValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif

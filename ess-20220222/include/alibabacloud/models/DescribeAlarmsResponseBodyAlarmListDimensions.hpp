// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODYALARMLISTDIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODYALARMLISTDIMENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeAlarmsResponseBodyAlarmListDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmsResponseBodyAlarmListDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmsResponseBodyAlarmListDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
    };
    DescribeAlarmsResponseBodyAlarmListDimensions() = default ;
    DescribeAlarmsResponseBodyAlarmListDimensions(const DescribeAlarmsResponseBodyAlarmListDimensions &) = default ;
    DescribeAlarmsResponseBodyAlarmListDimensions(DescribeAlarmsResponseBodyAlarmListDimensions &&) = default ;
    DescribeAlarmsResponseBodyAlarmListDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmsResponseBodyAlarmListDimensions() = default ;
    DescribeAlarmsResponseBodyAlarmListDimensions& operator=(const DescribeAlarmsResponseBodyAlarmListDimensions &) = default ;
    DescribeAlarmsResponseBodyAlarmListDimensions& operator=(DescribeAlarmsResponseBodyAlarmListDimensions &&) = default ;
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
    inline DescribeAlarmsResponseBodyAlarmListDimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


    // dimensionValue Field Functions 
    bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
    void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
    inline string dimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
    inline DescribeAlarmsResponseBodyAlarmListDimensions& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


  protected:
    // The dimension key of the metric. Valid values:
    // 
    // *   user_id: the ID of your Alibaba Cloud account.
    // *   scaling_group: the scaling group that is monitored by the event-triggered task.
    // *   device: the NIC type.
    // *   state: the status of the TCP connection.
    std::shared_ptr<string> dimensionKey_ = nullptr;
    // The dimension value of the metric. The value of DimensionValue varies based on the value of DimensionKey.
    // 
    // *   If you set DimensionKey to `user_id`, the system specifies the value of DimensionValue.
    // 
    // *   If you set DimensionKey to `scaling_group`, the system specifies the value of DimensionValue.
    // 
    // *   If you set DimensionKey to `device`, you can set DimensionValue to eth0 or eth1.
    // 
    //     *   For instances of the classic network type, eth0 indicates the internal NIC. Only one eth0 NIC exists on each instance that resides in VPCs.
    //     *   For instances of the classic network type, eth1 indicates the public NIC.
    // 
    // *   If you set DimensionKey to `state`, you can set DimensionValue to TCP_TOTAL or ESTABLISHED.
    // 
    //     *   TCP_TOTAL indicates the total number of TCP connections.
    //     *   ESTABLISHED indicates the number of TCP connections that are established.
    std::shared_ptr<string> dimensionValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif

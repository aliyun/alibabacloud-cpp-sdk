// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYALARMREQUESTDIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYALARMREQUESTDIMENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyAlarmRequestDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAlarmRequestDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAlarmRequestDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
    };
    ModifyAlarmRequestDimensions() = default ;
    ModifyAlarmRequestDimensions(const ModifyAlarmRequestDimensions &) = default ;
    ModifyAlarmRequestDimensions(ModifyAlarmRequestDimensions &&) = default ;
    ModifyAlarmRequestDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAlarmRequestDimensions() = default ;
    ModifyAlarmRequestDimensions& operator=(const ModifyAlarmRequestDimensions &) = default ;
    ModifyAlarmRequestDimensions& operator=(ModifyAlarmRequestDimensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensionKey_ != nullptr
        && this->dimensionValue_ != nullptr; };
    // dimensionKey Field Functions 
    bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
    void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
    inline string dimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
    inline ModifyAlarmRequestDimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


    // dimensionValue Field Functions 
    bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
    void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
    inline string dimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
    inline ModifyAlarmRequestDimensions& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


  protected:
    // The key of the dimension. The valid values vary based on the metric type.
    // 
    // *   If you set the MetricType parameter to custom, you can specify this parameter based on your business requirements.
    // 
    // *   If you set the MetricType parameter to system, this parameter has the following valid values:
    // 
    //     *   user_id: the ID of your Alibaba Cloud account
    //     *   scaling_group: the scaling group that you want to monitor
    //     *   device: the type of the NIC
    //     *   state: the status of the TCP connection
    std::shared_ptr<string> dimensionKey_ = nullptr;
    // The value of the dimension. The valid values vary based on the value of the DimensionKey parameter.
    // 
    // *   If you set the MetricType parameter to custom, you can specify this parameter based on your business requirements.
    // 
    // *   If you set the MetricType parameter to system, this parameter has the following valid values:
    // 
    //     *   If you set the DimensionKey parameter to user_id, the system specifies the value
    // 
    //     *   scaling_group: The system specifies the value of the DimensionValue parameter.
    // 
    //     *   If you set the DimensionKey parameter to device, you can set the DimensionValue parameter to eth0 or eth1.
    // 
    //         *   For instances that reside in the classic network type, eth0 specifies the internal NIC. Only one eth0 NIC exists on each instance that resides in a VPC.
    //         *   For instances that reside in the classic network, eth1 specifies the public NIC.
    // 
    //     *   If you set the DimensionKey parameter to state, you can set the DimensionValue parameter to TCP_TOTAL or ESTABLISHED.
    // 
    //         *   TCP_TOTAL specifies the total number of TCP connections.
    //         *   ESTABLISHED specifies the number of established TCP connections.
    std::shared_ptr<string> dimensionValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif

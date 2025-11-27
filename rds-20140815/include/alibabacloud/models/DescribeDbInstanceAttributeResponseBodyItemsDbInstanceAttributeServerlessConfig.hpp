// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTESERVERLESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTESERVERLESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPause, autoPause_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(SwitchForce, switchForce_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPause, autoPause_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(SwitchForce, switchForce_);
    };
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig &&) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig& operator=(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig& operator=(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPause_ == nullptr
        && return this->scaleMax_ == nullptr && return this->scaleMin_ == nullptr && return this->switchForce_ == nullptr; };
    // autoPause Field Functions 
    bool hasAutoPause() const { return this->autoPause_ != nullptr;};
    void deleteAutoPause() { this->autoPause_ = nullptr;};
    inline bool autoPause() const { DARABONBA_PTR_GET_DEFAULT(autoPause_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig& setAutoPause(bool autoPause) { DARABONBA_PTR_SET_VALUE(autoPause_, autoPause) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline double scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0.0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig& setScaleMax(double scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline double scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0.0) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig& setScaleMin(double scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // switchForce Field Functions 
    bool hasSwitchForce() const { return this->switchForce_ != nullptr;};
    void deleteSwitchForce() { this->switchForce_ = nullptr;};
    inline bool switchForce() const { DARABONBA_PTR_GET_DEFAULT(switchForce_, false) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeServerlessConfig& setSwitchForce(bool switchForce) { DARABONBA_PTR_SET_VALUE(switchForce_, switchForce) };


  protected:
    // Indicates whether the automatic start and stop feature is enabled for the serverless instance. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  After the automatic start and stop feature is enabled, if no connections to the instance are established within 10 minutes, the instance is suspended. After a connection to the instance is established, the instance is automatically resumed.
    std::shared_ptr<bool> autoPause_ = nullptr;
    // The maximum number of RCUs.
    std::shared_ptr<double> scaleMax_ = nullptr;
    // The minimum number of RDS Capacity Units (RCUs).
    std::shared_ptr<double> scaleMin_ = nullptr;
    // Indicates whether the forced scaling feature is enabled for the serverless instance. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  In most cases, ApsaraDB RDS automatically scales in or out the RCUs of a serverless instance based on business requirements in real time. In rare cases, the scaling does not take effect in real time. You can enable the forced scaling feature to forcefully scales in or out the RCUs of the instance.
    std::shared_ptr<bool> switchForce_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

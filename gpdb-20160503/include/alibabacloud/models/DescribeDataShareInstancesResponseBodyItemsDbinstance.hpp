// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASHAREINSTANCESRESPONSEBODYITEMSDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASHAREINSTANCESRESPONSEBODYITEMSDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDataShareInstancesResponseBodyItemsDBInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataShareInstancesResponseBodyItemsDBInstance& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceMode, DBInstanceMode_);
      DARABONBA_PTR_TO_JSON(DataShareStatus, dataShareStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataShareInstancesResponseBodyItemsDBInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceMode, DBInstanceMode_);
      DARABONBA_PTR_FROM_JSON(DataShareStatus, dataShareStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDataShareInstancesResponseBodyItemsDBInstance() = default ;
    DescribeDataShareInstancesResponseBodyItemsDBInstance(const DescribeDataShareInstancesResponseBodyItemsDBInstance &) = default ;
    DescribeDataShareInstancesResponseBodyItemsDBInstance(DescribeDataShareInstancesResponseBodyItemsDBInstance &&) = default ;
    DescribeDataShareInstancesResponseBodyItemsDBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataShareInstancesResponseBodyItemsDBInstance() = default ;
    DescribeDataShareInstancesResponseBodyItemsDBInstance& operator=(const DescribeDataShareInstancesResponseBodyItemsDBInstance &) = default ;
    DescribeDataShareInstancesResponseBodyItemsDBInstance& operator=(DescribeDataShareInstancesResponseBodyItemsDBInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->DBInstanceMode_ != nullptr && this->dataShareStatus_ != nullptr && this->description_ != nullptr && this->regionId_ != nullptr && this->zoneId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDataShareInstancesResponseBodyItemsDBInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceMode Field Functions 
    bool hasDBInstanceMode() const { return this->DBInstanceMode_ != nullptr;};
    void deleteDBInstanceMode() { this->DBInstanceMode_ = nullptr;};
    inline string DBInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceMode_, "") };
    inline DescribeDataShareInstancesResponseBodyItemsDBInstance& setDBInstanceMode(string DBInstanceMode) { DARABONBA_PTR_SET_VALUE(DBInstanceMode_, DBInstanceMode) };


    // dataShareStatus Field Functions 
    bool hasDataShareStatus() const { return this->dataShareStatus_ != nullptr;};
    void deleteDataShareStatus() { this->dataShareStatus_ = nullptr;};
    inline string dataShareStatus() const { DARABONBA_PTR_GET_DEFAULT(dataShareStatus_, "") };
    inline DescribeDataShareInstancesResponseBodyItemsDBInstance& setDataShareStatus(string dataShareStatus) { DARABONBA_PTR_SET_VALUE(dataShareStatus_, dataShareStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDataShareInstancesResponseBodyItemsDBInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataShareInstancesResponseBodyItemsDBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDataShareInstancesResponseBodyItemsDBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The resource type of the instance. Valid values:
    // 
    // *   **Serverless**: Serverless mode
    // *   **StorageElasic**: elastic storage mode
    // *   **Classic**: reserved storage mode
    std::shared_ptr<string> DBInstanceMode_ = nullptr;
    // The state of data sharing. Valid values:
    // 
    // *   **opening**: Data sharing is being enabled.
    // *   **opened**: Data sharing is enabled.
    // *   **closing**: Data sharing is being disabled.
    // *   **closed**: Data sharing is disabled.
    std::shared_ptr<string> dataShareStatus_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The zone ID of the instance.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

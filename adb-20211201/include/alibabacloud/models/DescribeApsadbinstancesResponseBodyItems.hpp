// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSADBINSTANCESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSADBINSTANCESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAPSADBInstancesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAPSADBInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(ReservedACU, reservedACU_);
      DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAPSADBInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(ReservedACU, reservedACU_);
      DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAPSADBInstancesResponseBodyItems() = default ;
    DescribeAPSADBInstancesResponseBodyItems(const DescribeAPSADBInstancesResponseBodyItems &) = default ;
    DescribeAPSADBInstancesResponseBodyItems(DescribeAPSADBInstancesResponseBodyItems &&) = default ;
    DescribeAPSADBInstancesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAPSADBInstancesResponseBodyItems() = default ;
    DescribeAPSADBInstancesResponseBodyItems& operator=(const DescribeAPSADBInstancesResponseBodyItems &) = default ;
    DescribeAPSADBInstancesResponseBodyItems& operator=(DescribeAPSADBInstancesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeResource_ != nullptr
        && this->DBClusterDescription_ != nullptr && this->DBClusterId_ != nullptr && this->DBClusterStatus_ != nullptr && this->reservedACU_ != nullptr && this->storageResource_ != nullptr
        && this->zoneId_ != nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline string computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
    inline DescribeAPSADBInstancesResponseBodyItems& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeAPSADBInstancesResponseBodyItems& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAPSADBInstancesResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeAPSADBInstancesResponseBodyItems& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // reservedACU Field Functions 
    bool hasReservedACU() const { return this->reservedACU_ != nullptr;};
    void deleteReservedACU() { this->reservedACU_ = nullptr;};
    inline string reservedACU() const { DARABONBA_PTR_GET_DEFAULT(reservedACU_, "") };
    inline DescribeAPSADBInstancesResponseBodyItems& setReservedACU(string reservedACU) { DARABONBA_PTR_SET_VALUE(reservedACU_, reservedACU) };


    // storageResource Field Functions 
    bool hasStorageResource() const { return this->storageResource_ != nullptr;};
    void deleteStorageResource() { this->storageResource_ = nullptr;};
    inline int64_t storageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, 0L) };
    inline DescribeAPSADBInstancesResponseBodyItems& setStorageResource(int64_t storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAPSADBInstancesResponseBodyItems& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The specifications of the reserved computing resources.
    std::shared_ptr<string> computeResource_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The status of the cluster.
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    // The amount of remaining reserved computing resources that are available in the cluster.
    std::shared_ptr<string> reservedACU_ = nullptr;
    // The specifications of the reserved storage resources.
    std::shared_ptr<int64_t> storageResource_ = nullptr;
    // The zone ID of the cluster.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

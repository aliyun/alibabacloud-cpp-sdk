// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODYRESTOREORDERDORDSORDERDOLISTRDSORDERDOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODYRESTOREORDERDORDSORDERDOLISTRDSORDERDOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& obj) { 
      DARABONBA_PTR_TO_JSON(AzoneId, azoneId_);
      DARABONBA_PTR_TO_JSON(DbInstanceStorage, dbInstanceStorage_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& obj) { 
      DARABONBA_PTR_FROM_JSON(AzoneId, azoneId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceStorage, dbInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList() = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList(const DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList &) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList(DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList &&) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList() = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& operator=(const DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList &) = default ;
    DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& operator=(DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->azoneId_ != nullptr
        && this->dbInstanceStorage_ != nullptr && this->engine_ != nullptr && this->instanceClass_ != nullptr && this->network_ != nullptr && this->num_ != nullptr
        && this->regionId_ != nullptr && this->version_ != nullptr; };
    // azoneId Field Functions 
    bool hasAzoneId() const { return this->azoneId_ != nullptr;};
    void deleteAzoneId() { this->azoneId_ = nullptr;};
    inline string azoneId() const { DARABONBA_PTR_GET_DEFAULT(azoneId_, "") };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& setAzoneId(string azoneId) { DARABONBA_PTR_SET_VALUE(azoneId_, azoneId) };


    // dbInstanceStorage Field Functions 
    bool hasDbInstanceStorage() const { return this->dbInstanceStorage_ != nullptr;};
    void deleteDbInstanceStorage() { this->dbInstanceStorage_ = nullptr;};
    inline string dbInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceStorage_, "") };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& setDbInstanceStorage(string dbInstanceStorage) { DARABONBA_PTR_SET_VALUE(dbInstanceStorage_, dbInstanceStorage) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int64_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDORdsOrderDOListRdsOrderDOList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The zone ID of the node.
    std::shared_ptr<string> azoneId_ = nullptr;
    // The capacity of disk.
    std::shared_ptr<string> dbInstanceStorage_ = nullptr;
    // The storage engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The instance type of the instance.
    std::shared_ptr<string> instanceClass_ = nullptr;
    // The network type. Valid values: - **Classic **: Classic Network
    // - **vpc**: VPC
    std::shared_ptr<string> network_ = nullptr;
    // The number of streams that were returned.
    std::shared_ptr<int64_t> num_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The version of the operating system.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif

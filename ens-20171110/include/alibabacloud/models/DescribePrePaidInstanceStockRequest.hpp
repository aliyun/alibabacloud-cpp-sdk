// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREPAIDINSTANCESTOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREPAIDINSTANCESTOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribePrePaidInstanceStockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrePaidInstanceStockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrePaidInstanceStockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    DescribePrePaidInstanceStockRequest() = default ;
    DescribePrePaidInstanceStockRequest(const DescribePrePaidInstanceStockRequest &) = default ;
    DescribePrePaidInstanceStockRequest(DescribePrePaidInstanceStockRequest &&) = default ;
    DescribePrePaidInstanceStockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrePaidInstanceStockRequest() = default ;
    DescribePrePaidInstanceStockRequest& operator=(const DescribePrePaidInstanceStockRequest &) = default ;
    DescribePrePaidInstanceStockRequest& operator=(DescribePrePaidInstanceStockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDiskSize_ != nullptr
        && this->ensRegionId_ != nullptr && this->instanceSpec_ != nullptr && this->systemDiskSize_ != nullptr; };
    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline DescribePrePaidInstanceStockRequest& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribePrePaidInstanceStockRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribePrePaidInstanceStockRequest& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribePrePaidInstanceStockRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    // The size of the data disk. Unit: GB.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> dataDiskSize_ = nullptr;
    // The ID of the edge node.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The specification of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The size of the system disk. Unit: GB.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

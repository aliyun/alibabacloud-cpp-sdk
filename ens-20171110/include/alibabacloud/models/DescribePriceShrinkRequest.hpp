// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribePriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisksShrink_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisksShrink_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
    };
    DescribePriceShrinkRequest() = default ;
    DescribePriceShrinkRequest(const DescribePriceShrinkRequest &) = default ;
    DescribePriceShrinkRequest(DescribePriceShrinkRequest &&) = default ;
    DescribePriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceShrinkRequest() = default ;
    DescribePriceShrinkRequest& operator=(const DescribePriceShrinkRequest &) = default ;
    DescribePriceShrinkRequest& operator=(DescribePriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      SystemDisk() = default ;
      SystemDisk(const SystemDisk &) = default ;
      SystemDisk(SystemDisk &&) = default ;
      SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemDisk() = default ;
      SystemDisk& operator=(const SystemDisk &) = default ;
      SystemDisk& operator=(SystemDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->size_ == nullptr; };
      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline SystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The size of the system cloud disk. Unit: GB.
      // 
      // This parameter is required.
      shared_ptr<int32_t> size_ {};
    };

    class DataDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      DataDisk() = default ;
      DataDisk(const DataDisk &) = default ;
      DataDisk(DataDisk &&) = default ;
      DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDisk() = default ;
      DataDisk& operator=(const DataDisk &) = default ;
      DataDisk& operator=(DataDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->size_ == nullptr; };
      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline DataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The size of the data cloud disk. Unit: GB. If this field is not empty, it takes precedence.
      shared_ptr<int32_t> size_ {};
    };

    virtual bool empty() const override { return this->dataDisk_ == nullptr
        && this->systemDisk_ == nullptr && this->dataDisksShrink_ == nullptr && this->ensRegionId_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr && this->quantity_ == nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<DescribePriceShrinkRequest::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<DescribePriceShrinkRequest::DataDisk>) };
    inline vector<DescribePriceShrinkRequest::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<DescribePriceShrinkRequest::DataDisk>) };
    inline DescribePriceShrinkRequest& setDataDisk(const vector<DescribePriceShrinkRequest::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline DescribePriceShrinkRequest& setDataDisk(vector<DescribePriceShrinkRequest::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const DescribePriceShrinkRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, DescribePriceShrinkRequest::SystemDisk) };
    inline DescribePriceShrinkRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, DescribePriceShrinkRequest::SystemDisk) };
    inline DescribePriceShrinkRequest& setSystemDisk(const DescribePriceShrinkRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline DescribePriceShrinkRequest& setSystemDisk(DescribePriceShrinkRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // dataDisksShrink Field Functions 
    bool hasDataDisksShrink() const { return this->dataDisksShrink_ != nullptr;};
    void deleteDataDisksShrink() { this->dataDisksShrink_ = nullptr;};
    inline string getDataDisksShrink() const { DARABONBA_PTR_GET_DEFAULT(dataDisksShrink_, "") };
    inline DescribePriceShrinkRequest& setDataDisksShrink(string dataDisksShrink) { DARABONBA_PTR_SET_VALUE(dataDisksShrink_, dataDisksShrink) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribePriceShrinkRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribePriceShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribePriceShrinkRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribePriceShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribePriceShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline DescribePriceShrinkRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


  protected:
    shared_ptr<vector<DescribePriceShrinkRequest::DataDisk>> dataDisk_ {};
    shared_ptr<DescribePriceShrinkRequest::SystemDisk> systemDisk_ {};
    // The data cloud disks. If DataDisk.1.Size is empty and this field is not empty, this field takes precedence.
    shared_ptr<string> dataDisksShrink_ {};
    // The edge zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> ensRegionId_ {};
    // The instance type.
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The Billable methods for ENS bandwidth. Valid values:
    // 
    // - BandwidthByDay: daily peak bandwidth.
    // - 95BandwidthByMonth: monthly 95th percentile bandwidth.
    // - PayByBandwidth4thMonth: monthly fourth peak bandwidth.
    // - PayByBandwidth: bandwidth with defined specifications.
    // 
    // This parameter is required.
    shared_ptr<string> internetChargeType_ {};
    // The subscription duration of the resource.
    // 
    // - If PeriodUnit is not specified, the default billing cycle is month. Only Day and Month are supported.
    // - If PeriodUnit is set to Day, Period can only be set to 3.
    // - If PeriodUnit is set to Month, Period can be set to 1 to 9 or 12.
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // The billing cycle for querying the prices of ENS resources. Valid values:
    // 
    // - Month (default): monthly billing cycle.
    // - Day: daily billing cycle.
    shared_ptr<string> periodUnit_ {};
    // The quantity.
    // 
    // This parameter is required.
    shared_ptr<int32_t> quantity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

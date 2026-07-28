// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESOURCECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESOURCECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyResourceControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyResourceControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(MaxCpu, maxCpu_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceControlName, resourceControlName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyResourceControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(MaxCpu, maxCpu_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceControlName, resourceControlName_);
    };
    ModifyResourceControlRequest() = default ;
    ModifyResourceControlRequest(const ModifyResourceControlRequest &) = default ;
    ModifyResourceControlRequest(ModifyResourceControlRequest &&) = default ;
    ModifyResourceControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyResourceControlRequest() = default ;
    ModifyResourceControlRequest& operator=(const ModifyResourceControlRequest &) = default ;
    ModifyResourceControlRequest& operator=(ModifyResourceControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCount_ == nullptr
        && this->DBClusterId_ == nullptr && this->maxCpu_ == nullptr && this->regionId_ == nullptr && this->resourceControlName_ == nullptr; };
    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline ModifyResourceControlRequest& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyResourceControlRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // maxCpu Field Functions 
    bool hasMaxCpu() const { return this->maxCpu_ != nullptr;};
    void deleteMaxCpu() { this->maxCpu_ = nullptr;};
    inline int32_t getMaxCpu() const { DARABONBA_PTR_GET_DEFAULT(maxCpu_, 0) };
    inline ModifyResourceControlRequest& setMaxCpu(int32_t maxCpu) { DARABONBA_PTR_SET_VALUE(maxCpu_, maxCpu) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyResourceControlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceControlName Field Functions 
    bool hasResourceControlName() const { return this->resourceControlName_ != nullptr;};
    void deleteResourceControlName() { this->resourceControlName_ = nullptr;};
    inline string getResourceControlName() const { DARABONBA_PTR_GET_DEFAULT(resourceControlName_, "") };
    inline ModifyResourceControlRequest& setResourceControlName(string resourceControlName) { DARABONBA_PTR_SET_VALUE(resourceControlName_, resourceControlName) };


  protected:
    // The total number of CPU cores.
    shared_ptr<int32_t> cpuCount_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The maximum number of CPUs. Unit: 0.001 CPU. A value of 1000 indicates one CPU. If you specify this parameter, instances whose CPU count is less than the specified value are returned.
    shared_ptr<int32_t> maxCpu_ {};
    // The region ID.
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query available regions.
    shared_ptr<string> regionId_ {};
    // The resource control name.
    // 
    // This parameter is required.
    shared_ptr<string> resourceControlName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

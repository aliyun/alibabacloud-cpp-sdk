// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIELDSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIELDSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeFieldStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFieldStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFieldStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineTypes, machineTypes_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    DescribeFieldStatisticsRequest() = default ;
    DescribeFieldStatisticsRequest(const DescribeFieldStatisticsRequest &) = default ;
    DescribeFieldStatisticsRequest(DescribeFieldStatisticsRequest &&) = default ;
    DescribeFieldStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFieldStatisticsRequest() = default ;
    DescribeFieldStatisticsRequest& operator=(const DescribeFieldStatisticsRequest &) = default ;
    DescribeFieldStatisticsRequest& operator=(DescribeFieldStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->machineTypes_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceDirectoryAccountId_ == nullptr; };
    // machineTypes Field Functions 
    bool hasMachineTypes() const { return this->machineTypes_ != nullptr;};
    void deleteMachineTypes() { this->machineTypes_ = nullptr;};
    inline string machineTypes() const { DARABONBA_PTR_GET_DEFAULT(machineTypes_, "") };
    inline DescribeFieldStatisticsRequest& setMachineTypes(string machineTypes) { DARABONBA_PTR_SET_VALUE(machineTypes_, machineTypes) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFieldStatisticsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeFieldStatisticsRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    // The type of the asset to query. If no asset types are specified, all types of assets are returned. Valid values:
    // 
    // *   **ecs**: server
    // *   **cloud_product**: Alibaba Cloud service
    std::shared_ptr<string> machineTypes_ = nullptr;
    // The ID of the region in which the asset resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the primary account of the Resource Directory member account.
    // > call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) interface to obtain this parameter.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

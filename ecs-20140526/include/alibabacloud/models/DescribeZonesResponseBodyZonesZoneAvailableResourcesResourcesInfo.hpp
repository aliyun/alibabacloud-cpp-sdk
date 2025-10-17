// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypeFamilies.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskCategories, dataDiskCategories_);
      DARABONBA_PTR_TO_JSON(InstanceGenerations, instanceGenerations_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(NetworkTypes, networkTypes_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategories, systemDiskCategories_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskCategories, dataDiskCategories_);
      DARABONBA_PTR_FROM_JSON(InstanceGenerations, instanceGenerations_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(NetworkTypes, networkTypes_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategories, systemDiskCategories_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& operator=(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& operator=(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDiskCategories_ == nullptr
        && return this->instanceGenerations_ == nullptr && return this->instanceTypeFamilies_ == nullptr && return this->instanceTypes_ == nullptr && return this->ioOptimized_ == nullptr && return this->networkTypes_ == nullptr
        && return this->systemDiskCategories_ == nullptr; };
    // dataDiskCategories Field Functions 
    bool hasDataDiskCategories() const { return this->dataDiskCategories_ != nullptr;};
    void deleteDataDiskCategories() { this->dataDiskCategories_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories & dataDiskCategories() const { DARABONBA_PTR_GET_CONST(dataDiskCategories_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories dataDiskCategories() { DARABONBA_PTR_GET(dataDiskCategories_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setDataDiskCategories(const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories & dataDiskCategories) { DARABONBA_PTR_SET_VALUE(dataDiskCategories_, dataDiskCategories) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setDataDiskCategories(Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories && dataDiskCategories) { DARABONBA_PTR_SET_RVALUE(dataDiskCategories_, dataDiskCategories) };


    // instanceGenerations Field Functions 
    bool hasInstanceGenerations() const { return this->instanceGenerations_ != nullptr;};
    void deleteInstanceGenerations() { this->instanceGenerations_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations & instanceGenerations() const { DARABONBA_PTR_GET_CONST(instanceGenerations_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations instanceGenerations() { DARABONBA_PTR_GET(instanceGenerations_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setInstanceGenerations(const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations & instanceGenerations) { DARABONBA_PTR_SET_VALUE(instanceGenerations_, instanceGenerations) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setInstanceGenerations(Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations && instanceGenerations) { DARABONBA_PTR_SET_RVALUE(instanceGenerations_, instanceGenerations) };


    // instanceTypeFamilies Field Functions 
    bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
    void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypeFamilies & instanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypeFamilies) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypeFamilies instanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypeFamilies) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setInstanceTypeFamilies(const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypeFamilies & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setInstanceTypeFamilies(Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypeFamilies && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setInstanceTypes(const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setInstanceTypes(Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline bool ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, false) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setIoOptimized(bool ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // networkTypes Field Functions 
    bool hasNetworkTypes() const { return this->networkTypes_ != nullptr;};
    void deleteNetworkTypes() { this->networkTypes_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes & networkTypes() const { DARABONBA_PTR_GET_CONST(networkTypes_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes networkTypes() { DARABONBA_PTR_GET(networkTypes_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setNetworkTypes(const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes & networkTypes) { DARABONBA_PTR_SET_VALUE(networkTypes_, networkTypes) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setNetworkTypes(Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes && networkTypes) { DARABONBA_PTR_SET_RVALUE(networkTypes_, networkTypes) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories & systemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories) };
    inline Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories systemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setSystemDiskCategories(const Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfo& setSystemDiskCategories(Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


  protected:
    // The categories of data disks that can be created.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories> dataDiskCategories_ = nullptr;
    // The supported generations of instance families.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations> instanceGenerations_ = nullptr;
    // The supported instance families.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypeFamilies> instanceTypeFamilies_ = nullptr;
    // The supported instance types.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes> instanceTypes_ = nullptr;
    // Indicates whether the instance is I/O optimized.
    std::shared_ptr<bool> ioOptimized_ = nullptr;
    // The supported network types.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes> networkTypes_ = nullptr;
    // The categories of system disks that can be created.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories> systemDiskCategories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

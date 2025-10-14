// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceResponseBodySupportResourcesSupportResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodySupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(SupportResourcesCount, supportResourcesCount_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodySupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(SupportResourcesCount, supportResourcesCount_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    DescribeAvailableResourceResponseBodySupportResourcesSupportResource() = default ;
    DescribeAvailableResourceResponseBodySupportResourcesSupportResource(const DescribeAvailableResourceResponseBodySupportResourcesSupportResource &) = default ;
    DescribeAvailableResourceResponseBodySupportResourcesSupportResource(DescribeAvailableResourceResponseBodySupportResourcesSupportResource &&) = default ;
    DescribeAvailableResourceResponseBodySupportResourcesSupportResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodySupportResourcesSupportResource() = default ;
    DescribeAvailableResourceResponseBodySupportResourcesSupportResource& operator=(const DescribeAvailableResourceResponseBodySupportResourcesSupportResource &) = default ;
    DescribeAvailableResourceResponseBodySupportResourcesSupportResource& operator=(DescribeAvailableResourceResponseBodySupportResourcesSupportResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDiskSize_ == nullptr
        && return this->ensRegionId_ == nullptr && return this->instanceSpec_ == nullptr && return this->supportResourcesCount_ == nullptr && return this->systemDiskSize_ == nullptr; };
    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline string dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, "") };
    inline DescribeAvailableResourceResponseBodySupportResourcesSupportResource& setDataDiskSize(string dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeAvailableResourceResponseBodySupportResourcesSupportResource& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribeAvailableResourceResponseBodySupportResourcesSupportResource& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // supportResourcesCount Field Functions 
    bool hasSupportResourcesCount() const { return this->supportResourcesCount_ != nullptr;};
    void deleteSupportResourcesCount() { this->supportResourcesCount_ = nullptr;};
    inline string supportResourcesCount() const { DARABONBA_PTR_GET_DEFAULT(supportResourcesCount_, "") };
    inline DescribeAvailableResourceResponseBodySupportResourcesSupportResource& setSupportResourcesCount(string supportResourcesCount) { DARABONBA_PTR_SET_VALUE(supportResourcesCount_, supportResourcesCount) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline string systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, "") };
    inline DescribeAvailableResourceResponseBodySupportResourcesSupportResource& setSystemDiskSize(string systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    // The size of the data disk. Unit: GB.
    std::shared_ptr<string> dataDiskSize_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The specifications of the resource plan.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The number of resources that you can purchase.
    std::shared_ptr<string> supportResourcesCount_ = nullptr;
    // The size of the system disk. Unit: GiB.
    std::shared_ptr<string> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

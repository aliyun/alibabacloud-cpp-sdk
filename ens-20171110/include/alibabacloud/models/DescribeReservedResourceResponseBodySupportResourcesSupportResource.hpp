// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDRESOURCERESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDRESOURCERESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes.hpp>
#include <alibabacloud/models/DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeReservedResourceResponseBodySupportResourcesSupportResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedResourceResponseBodySupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskSizes, dataDiskSizes_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(SupportResourcesCount, supportResourcesCount_);
      DARABONBA_PTR_TO_JSON(SystemDiskSizes, systemDiskSizes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedResourceResponseBodySupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskSizes, dataDiskSizes_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(SupportResourcesCount, supportResourcesCount_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSizes, systemDiskSizes_);
    };
    DescribeReservedResourceResponseBodySupportResourcesSupportResource() = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResource(const DescribeReservedResourceResponseBodySupportResourcesSupportResource &) = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResource(DescribeReservedResourceResponseBodySupportResourcesSupportResource &&) = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedResourceResponseBodySupportResourcesSupportResource() = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResource& operator=(const DescribeReservedResourceResponseBodySupportResourcesSupportResource &) = default ;
    DescribeReservedResourceResponseBodySupportResourcesSupportResource& operator=(DescribeReservedResourceResponseBodySupportResourcesSupportResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDiskSizes_ != nullptr
        && this->ensRegionId_ != nullptr && this->instanceSpec_ != nullptr && this->supportResourcesCount_ != nullptr && this->systemDiskSizes_ != nullptr; };
    // dataDiskSizes Field Functions 
    bool hasDataDiskSizes() const { return this->dataDiskSizes_ != nullptr;};
    void deleteDataDiskSizes() { this->dataDiskSizes_ = nullptr;};
    inline const Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes & dataDiskSizes() const { DARABONBA_PTR_GET_CONST(dataDiskSizes_, Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes) };
    inline Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes dataDiskSizes() { DARABONBA_PTR_GET(dataDiskSizes_, Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes) };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResource& setDataDiskSizes(const Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes & dataDiskSizes) { DARABONBA_PTR_SET_VALUE(dataDiskSizes_, dataDiskSizes) };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResource& setDataDiskSizes(Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes && dataDiskSizes) { DARABONBA_PTR_SET_RVALUE(dataDiskSizes_, dataDiskSizes) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResource& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResource& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // supportResourcesCount Field Functions 
    bool hasSupportResourcesCount() const { return this->supportResourcesCount_ != nullptr;};
    void deleteSupportResourcesCount() { this->supportResourcesCount_ = nullptr;};
    inline string supportResourcesCount() const { DARABONBA_PTR_GET_DEFAULT(supportResourcesCount_, "") };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResource& setSupportResourcesCount(string supportResourcesCount) { DARABONBA_PTR_SET_VALUE(supportResourcesCount_, supportResourcesCount) };


    // systemDiskSizes Field Functions 
    bool hasSystemDiskSizes() const { return this->systemDiskSizes_ != nullptr;};
    void deleteSystemDiskSizes() { this->systemDiskSizes_ = nullptr;};
    inline const Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes & systemDiskSizes() const { DARABONBA_PTR_GET_CONST(systemDiskSizes_, Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes) };
    inline Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes systemDiskSizes() { DARABONBA_PTR_GET(systemDiskSizes_, Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes) };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResource& setSystemDiskSizes(const Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes & systemDiskSizes) { DARABONBA_PTR_SET_VALUE(systemDiskSizes_, systemDiskSizes) };
    inline DescribeReservedResourceResponseBodySupportResourcesSupportResource& setSystemDiskSizes(Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes && systemDiskSizes) { DARABONBA_PTR_SET_RVALUE(systemDiskSizes_, systemDiskSizes) };


  protected:
    // The sizes of data disks.
    std::shared_ptr<Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceDataDiskSizes> dataDiskSizes_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The specifications of instances.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The number of resources that you can purchase.
    std::shared_ptr<string> supportResourcesCount_ = nullptr;
    // The sizes of system disks.
    std::shared_ptr<Models::DescribeReservedResourceResponseBodySupportResourcesSupportResourceSystemDiskSizes> systemDiskSizes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

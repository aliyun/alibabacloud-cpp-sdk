// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes.hpp>
#include <alibabacloud/models/DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds.hpp>
#include <alibabacloud/models/DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends.hpp>
#include <alibabacloud/models/DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces.hpp>
#include <alibabacloud/models/DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthTypes, bandwidthTypes_);
      DARABONBA_PTR_TO_JSON(DataDiskMaxSize, dataDiskMaxSize_);
      DARABONBA_PTR_TO_JSON(DataDiskMinSize, dataDiskMinSize_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(EnsRegionIdsExtends, ensRegionIdsExtends_);
      DARABONBA_PTR_TO_JSON(InstanceSpeces, instanceSpeces_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(SystemDiskMaxSize, systemDiskMaxSize_);
      DARABONBA_PTR_TO_JSON(SystemDiskMinSize, systemDiskMinSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthTypes, bandwidthTypes_);
      DARABONBA_PTR_FROM_JSON(DataDiskMaxSize, dataDiskMaxSize_);
      DARABONBA_PTR_FROM_JSON(DataDiskMinSize, dataDiskMinSize_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIdsExtends, ensRegionIdsExtends_);
      DARABONBA_PTR_FROM_JSON(InstanceSpeces, instanceSpeces_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(SystemDiskMaxSize, systemDiskMaxSize_);
      DARABONBA_PTR_FROM_JSON(SystemDiskMinSize, systemDiskMinSize_);
    };
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource &&) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& operator=(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& operator=(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthTypes_ == nullptr
        && return this->dataDiskMaxSize_ == nullptr && return this->dataDiskMinSize_ == nullptr && return this->ensRegionIds_ == nullptr && return this->ensRegionIdsExtends_ == nullptr && return this->instanceSpeces_ == nullptr
        && return this->isp_ == nullptr && return this->systemDiskMaxSize_ == nullptr && return this->systemDiskMinSize_ == nullptr; };
    // bandwidthTypes Field Functions 
    bool hasBandwidthTypes() const { return this->bandwidthTypes_ != nullptr;};
    void deleteBandwidthTypes() { this->bandwidthTypes_ = nullptr;};
    inline const Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes & bandwidthTypes() const { DARABONBA_PTR_GET_CONST(bandwidthTypes_, Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes) };
    inline Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes bandwidthTypes() { DARABONBA_PTR_GET(bandwidthTypes_, Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setBandwidthTypes(const Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes & bandwidthTypes) { DARABONBA_PTR_SET_VALUE(bandwidthTypes_, bandwidthTypes) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setBandwidthTypes(Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes && bandwidthTypes) { DARABONBA_PTR_SET_RVALUE(bandwidthTypes_, bandwidthTypes) };


    // dataDiskMaxSize Field Functions 
    bool hasDataDiskMaxSize() const { return this->dataDiskMaxSize_ != nullptr;};
    void deleteDataDiskMaxSize() { this->dataDiskMaxSize_ = nullptr;};
    inline int32_t dataDiskMaxSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskMaxSize_, 0) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setDataDiskMaxSize(int32_t dataDiskMaxSize) { DARABONBA_PTR_SET_VALUE(dataDiskMaxSize_, dataDiskMaxSize) };


    // dataDiskMinSize Field Functions 
    bool hasDataDiskMinSize() const { return this->dataDiskMinSize_ != nullptr;};
    void deleteDataDiskMinSize() { this->dataDiskMinSize_ = nullptr;};
    inline int32_t dataDiskMinSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskMinSize_, 0) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setDataDiskMinSize(int32_t dataDiskMinSize) { DARABONBA_PTR_SET_VALUE(dataDiskMinSize_, dataDiskMinSize) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline const Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds & ensRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds) };
    inline Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds ensRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setEnsRegionIds(const Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setEnsRegionIds(Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


    // ensRegionIdsExtends Field Functions 
    bool hasEnsRegionIdsExtends() const { return this->ensRegionIdsExtends_ != nullptr;};
    void deleteEnsRegionIdsExtends() { this->ensRegionIdsExtends_ = nullptr;};
    inline const Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends & ensRegionIdsExtends() const { DARABONBA_PTR_GET_CONST(ensRegionIdsExtends_, Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends) };
    inline Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends ensRegionIdsExtends() { DARABONBA_PTR_GET(ensRegionIdsExtends_, Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setEnsRegionIdsExtends(const Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends & ensRegionIdsExtends) { DARABONBA_PTR_SET_VALUE(ensRegionIdsExtends_, ensRegionIdsExtends) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setEnsRegionIdsExtends(Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends && ensRegionIdsExtends) { DARABONBA_PTR_SET_RVALUE(ensRegionIdsExtends_, ensRegionIdsExtends) };


    // instanceSpeces Field Functions 
    bool hasInstanceSpeces() const { return this->instanceSpeces_ != nullptr;};
    void deleteInstanceSpeces() { this->instanceSpeces_ = nullptr;};
    inline const Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces & instanceSpeces() const { DARABONBA_PTR_GET_CONST(instanceSpeces_, Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces) };
    inline Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces instanceSpeces() { DARABONBA_PTR_GET(instanceSpeces_, Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setInstanceSpeces(const Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces & instanceSpeces) { DARABONBA_PTR_SET_VALUE(instanceSpeces_, instanceSpeces) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setInstanceSpeces(Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces && instanceSpeces) { DARABONBA_PTR_SET_RVALUE(instanceSpeces_, instanceSpeces) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline const Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp & isp() const { DARABONBA_PTR_GET_CONST(isp_, Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp) };
    inline Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp isp() { DARABONBA_PTR_GET(isp_, Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setIsp(const Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp & isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setIsp(Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp && isp) { DARABONBA_PTR_SET_RVALUE(isp_, isp) };


    // systemDiskMaxSize Field Functions 
    bool hasSystemDiskMaxSize() const { return this->systemDiskMaxSize_ != nullptr;};
    void deleteSystemDiskMaxSize() { this->systemDiskMaxSize_ = nullptr;};
    inline int32_t systemDiskMaxSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskMaxSize_, 0) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setSystemDiskMaxSize(int32_t systemDiskMaxSize) { DARABONBA_PTR_SET_VALUE(systemDiskMaxSize_, systemDiskMaxSize) };


    // systemDiskMinSize Field Functions 
    bool hasSystemDiskMinSize() const { return this->systemDiskMinSize_ != nullptr;};
    void deleteSystemDiskMinSize() { this->systemDiskMinSize_ = nullptr;};
    inline int32_t systemDiskMinSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskMinSize_, 0) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResource& setSystemDiskMinSize(int32_t systemDiskMinSize) { DARABONBA_PTR_SET_VALUE(systemDiskMinSize_, systemDiskMinSize) };


  protected:
    // Bandwidth billing method.
    std::shared_ptr<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceBandwidthTypes> bandwidthTypes_ = nullptr;
    // The maximum capacity of a data disk. Unit: GB.
    std::shared_ptr<int32_t> dataDiskMaxSize_ = nullptr;
    // The minimum data disk size. Unit: GiB.
    std::shared_ptr<int32_t> dataDiskMinSize_ = nullptr;
    // node ID
    std::shared_ptr<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds> ensRegionIds_ = nullptr;
    // The supplementary information about the edge nodes.
    std::shared_ptr<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIdsExtends> ensRegionIdsExtends_ = nullptr;
    std::shared_ptr<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceInstanceSpeces> instanceSpeces_ = nullptr;
    // Operator
    std::shared_ptr<Models::DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceIsp> isp_ = nullptr;
    // The maximum size of the system disk. Unit: GiB.
    std::shared_ptr<int32_t> systemDiskMaxSize_ = nullptr;
    // The minimum capacity of a system disk. Unit: GB.
    std::shared_ptr<int32_t> systemDiskMinSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

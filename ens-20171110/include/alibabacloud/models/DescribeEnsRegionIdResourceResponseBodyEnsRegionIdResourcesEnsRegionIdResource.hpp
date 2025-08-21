// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDRESOURCERESPONSEBODYENSREGIONIDRESOURCESENSREGIONIDRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDRESOURCERESPONSEBODYENSREGIONIDRESOURCESENSREGIONIDRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIdName, ensRegionIdName_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InternetBandwidth, internetBandwidth_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(VCpu, VCpu_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIdName, ensRegionIdName_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InternetBandwidth, internetBandwidth_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(VCpu, VCpu_);
    };
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource() = default ;
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource(const DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource &) = default ;
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource(DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource &&) = default ;
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource() = default ;
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& operator=(const DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource &) = default ;
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& operator=(DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->areaCode_ != nullptr && this->bizDate_ != nullptr && this->ensRegionId_ != nullptr && this->ensRegionIdName_ != nullptr && this->instanceCount_ != nullptr
        && this->internetBandwidth_ != nullptr && this->isp_ != nullptr && this->VCpu_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // areaCode Field Functions 
    bool hasAreaCode() const { return this->areaCode_ != nullptr;};
    void deleteAreaCode() { this->areaCode_ = nullptr;};
    inline string areaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIdName Field Functions 
    bool hasEnsRegionIdName() const { return this->ensRegionIdName_ != nullptr;};
    void deleteEnsRegionIdName() { this->ensRegionIdName_ = nullptr;};
    inline string ensRegionIdName() const { DARABONBA_PTR_GET_DEFAULT(ensRegionIdName_, "") };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& setEnsRegionIdName(string ensRegionIdName) { DARABONBA_PTR_SET_VALUE(ensRegionIdName_, ensRegionIdName) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // internetBandwidth Field Functions 
    bool hasInternetBandwidth() const { return this->internetBandwidth_ != nullptr;};
    void deleteInternetBandwidth() { this->internetBandwidth_ = nullptr;};
    inline int64_t internetBandwidth() const { DARABONBA_PTR_GET_DEFAULT(internetBandwidth_, 0L) };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& setInternetBandwidth(int64_t internetBandwidth) { DARABONBA_PTR_SET_VALUE(internetBandwidth_, internetBandwidth) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // VCpu Field Functions 
    bool hasVCpu() const { return this->VCpu_ != nullptr;};
    void deleteVCpu() { this->VCpu_ = nullptr;};
    inline int32_t VCpu() const { DARABONBA_PTR_GET_DEFAULT(VCpu_, 0) };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource& setVCpu(int32_t VCpu) { DARABONBA_PTR_SET_VALUE(VCpu_, VCpu) };


  protected:
    // The region. Set the value to West.
    std::shared_ptr<string> area_ = nullptr;
    // The code of the region.
    std::shared_ptr<string> areaCode_ = nullptr;
    // The date when the transaction was processed.
    std::shared_ptr<string> bizDate_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> ensRegionIdName_ = nullptr;
    // The number of instances.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The public bandwidth of the instance. Unit: Bits/s.
    std::shared_ptr<int64_t> internetBandwidth_ = nullptr;
    // The ISP. Valid values:
    // 
    // *   cmcc: China Mobile
    // *   unicom: China Unicom
    // *   telecom: China Telecom
    // *   multiCarrier: multi-line ISP
    std::shared_ptr<string> isp_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> VCpu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

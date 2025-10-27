// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSUMMARYRESPONSEBODYASSETSSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSUMMARYRESPONSEBODYASSETSSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetSummaryResponseBodyAssetsSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetSummaryResponseBodyAssetsSummary& obj) { 
      DARABONBA_PTR_TO_JSON(TotalAssetAllRegion, totalAssetAllRegion_);
      DARABONBA_PTR_TO_JSON(TotalCoreAllRegion, totalCoreAllRegion_);
      DARABONBA_PTR_TO_JSON(TotalCoreNum, totalCoreNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetSummaryResponseBodyAssetsSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalAssetAllRegion, totalAssetAllRegion_);
      DARABONBA_PTR_FROM_JSON(TotalCoreAllRegion, totalCoreAllRegion_);
      DARABONBA_PTR_FROM_JSON(TotalCoreNum, totalCoreNum_);
    };
    DescribeAssetSummaryResponseBodyAssetsSummary() = default ;
    DescribeAssetSummaryResponseBodyAssetsSummary(const DescribeAssetSummaryResponseBodyAssetsSummary &) = default ;
    DescribeAssetSummaryResponseBodyAssetsSummary(DescribeAssetSummaryResponseBodyAssetsSummary &&) = default ;
    DescribeAssetSummaryResponseBodyAssetsSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetSummaryResponseBodyAssetsSummary() = default ;
    DescribeAssetSummaryResponseBodyAssetsSummary& operator=(const DescribeAssetSummaryResponseBodyAssetsSummary &) = default ;
    DescribeAssetSummaryResponseBodyAssetsSummary& operator=(DescribeAssetSummaryResponseBodyAssetsSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalAssetAllRegion_ == nullptr
        && return this->totalCoreAllRegion_ == nullptr && return this->totalCoreNum_ == nullptr; };
    // totalAssetAllRegion Field Functions 
    bool hasTotalAssetAllRegion() const { return this->totalAssetAllRegion_ != nullptr;};
    void deleteTotalAssetAllRegion() { this->totalAssetAllRegion_ = nullptr;};
    inline int32_t totalAssetAllRegion() const { DARABONBA_PTR_GET_DEFAULT(totalAssetAllRegion_, 0) };
    inline DescribeAssetSummaryResponseBodyAssetsSummary& setTotalAssetAllRegion(int32_t totalAssetAllRegion) { DARABONBA_PTR_SET_VALUE(totalAssetAllRegion_, totalAssetAllRegion) };


    // totalCoreAllRegion Field Functions 
    bool hasTotalCoreAllRegion() const { return this->totalCoreAllRegion_ != nullptr;};
    void deleteTotalCoreAllRegion() { this->totalCoreAllRegion_ = nullptr;};
    inline int32_t totalCoreAllRegion() const { DARABONBA_PTR_GET_DEFAULT(totalCoreAllRegion_, 0) };
    inline DescribeAssetSummaryResponseBodyAssetsSummary& setTotalCoreAllRegion(int32_t totalCoreAllRegion) { DARABONBA_PTR_SET_VALUE(totalCoreAllRegion_, totalCoreAllRegion) };


    // totalCoreNum Field Functions 
    bool hasTotalCoreNum() const { return this->totalCoreNum_ != nullptr;};
    void deleteTotalCoreNum() { this->totalCoreNum_ = nullptr;};
    inline int32_t totalCoreNum() const { DARABONBA_PTR_GET_DEFAULT(totalCoreNum_, 0) };
    inline DescribeAssetSummaryResponseBodyAssetsSummary& setTotalCoreNum(int32_t totalCoreNum) { DARABONBA_PTR_SET_VALUE(totalCoreNum_, totalCoreNum) };


  protected:
    // The total number of protected assets in all regions.
    // 
    // >  Security Center supports the Hangzhou and Singapore service centers, which separately correspond to the China and Outside China data management centers. In the Hangzhou service center, Security Center provides protection capabilities for assets that are deployed in the regions covered by the China data management center. In the Singapore service center, Security Center provides protection capabilities for assets that are deployed in the regions covered by the Outside China data management center. You can determine whether the current region is covered by the China data management center or by the Outside China data management center based on the endpoint of Security Center. For more information about the supported regions for each data management center, see [What is Security Center?](https://help.aliyun.com/document_detail/42302.html)
    std::shared_ptr<int32_t> totalAssetAllRegion_ = nullptr;
    // The total number of cores of protected assets in all regions.
    // 
    // >  Security Center supports the Hangzhou and Singapore service centers, which separately correspond to the China and Outside China data management centers. In the Hangzhou service center, Security Center provides protection capabilities for assets that are deployed in the regions covered by the China data management center. In the Singapore service center, Security Center provides protection capabilities for assets that are deployed in the regions covered by the Outside China data management center. You can determine whether the current region is covered by the China data management center or by the Outside China data management center based on the endpoint of Security Center. For more information about the supported regions for each data management center, see [What is Security Center?](https://help.aliyun.com/document_detail/42302.html)
    std::shared_ptr<int32_t> totalCoreAllRegion_ = nullptr;
    // The total number of cores of protected assets in the current region.
    // 
    // >  Security Center supports the Hangzhou and Singapore service centers, which separately correspond to the China and Outside China data management centers. In the Hangzhou service center, Security Center provides protection capabilities for assets that are deployed in the regions covered by the China data management center. In the Singapore service center, Security Center provides protection capabilities for assets that are deployed in the regions covered by the Outside China data management center. You can determine whether the current region is covered by the China data management center or by the Outside China data management center based on the endpoint of Security Center. For more information about the supported regions for each data management center, see [What is Security Center?](https://help.aliyun.com/document_detail/42302.html)
    std::shared_ptr<int32_t> totalCoreNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSSECURITYEVENTSUMMARYRESPONSEBODYASSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSSECURITYEVENTSUMMARYRESPONSEBODYASSETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetsSecurityEventSummaryResponseBodyAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetsSecurityEventSummaryResponseBodyAssets& obj) { 
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetsSecurityEventSummaryResponseBodyAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAssetsSecurityEventSummaryResponseBodyAssets() = default ;
    DescribeAssetsSecurityEventSummaryResponseBodyAssets(const DescribeAssetsSecurityEventSummaryResponseBodyAssets &) = default ;
    DescribeAssetsSecurityEventSummaryResponseBodyAssets(DescribeAssetsSecurityEventSummaryResponseBodyAssets &&) = default ;
    DescribeAssetsSecurityEventSummaryResponseBodyAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetsSecurityEventSummaryResponseBodyAssets() = default ;
    DescribeAssetsSecurityEventSummaryResponseBodyAssets& operator=(const DescribeAssetsSecurityEventSummaryResponseBodyAssets &) = default ;
    DescribeAssetsSecurityEventSummaryResponseBodyAssets& operator=(DescribeAssetsSecurityEventSummaryResponseBodyAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetType_ == nullptr
        && return this->riskCount_ == nullptr && return this->totalCount_ == nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline DescribeAssetsSecurityEventSummaryResponseBodyAssets& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int64_t riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
    inline DescribeAssetsSecurityEventSummaryResponseBodyAssets& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAssetsSecurityEventSummaryResponseBodyAssets& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The type of the asset. Valid values:
    // 
    // *   **namespace**
    // *   **clusters**
    // *   **applications**
    // *   **pods**
    // *   **containers**
    // *   **images**
    // *   **hosts**
    std::shared_ptr<string> assetType_ = nullptr;
    // The number of potential risky assets.
    std::shared_ptr<int64_t> riskCount_ = nullptr;
    // The total number of assets.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

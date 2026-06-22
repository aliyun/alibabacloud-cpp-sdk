// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsSummary, assetsSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsSummary, assetsSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAssetSummaryResponseBody() = default ;
    DescribeAssetSummaryResponseBody(const DescribeAssetSummaryResponseBody &) = default ;
    DescribeAssetSummaryResponseBody(DescribeAssetSummaryResponseBody &&) = default ;
    DescribeAssetSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetSummaryResponseBody() = default ;
    DescribeAssetSummaryResponseBody& operator=(const DescribeAssetSummaryResponseBody &) = default ;
    DescribeAssetSummaryResponseBody& operator=(DescribeAssetSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetsSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetsSummary& obj) { 
        DARABONBA_PTR_TO_JSON(TotalAssetAllRegion, totalAssetAllRegion_);
        DARABONBA_PTR_TO_JSON(TotalCoreAllRegion, totalCoreAllRegion_);
        DARABONBA_PTR_TO_JSON(TotalCoreNum, totalCoreNum_);
      };
      friend void from_json(const Darabonba::Json& j, AssetsSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalAssetAllRegion, totalAssetAllRegion_);
        DARABONBA_PTR_FROM_JSON(TotalCoreAllRegion, totalCoreAllRegion_);
        DARABONBA_PTR_FROM_JSON(TotalCoreNum, totalCoreNum_);
      };
      AssetsSummary() = default ;
      AssetsSummary(const AssetsSummary &) = default ;
      AssetsSummary(AssetsSummary &&) = default ;
      AssetsSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetsSummary() = default ;
      AssetsSummary& operator=(const AssetsSummary &) = default ;
      AssetsSummary& operator=(AssetsSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->totalAssetAllRegion_ == nullptr
        && this->totalCoreAllRegion_ == nullptr && this->totalCoreNum_ == nullptr; };
      // totalAssetAllRegion Field Functions 
      bool hasTotalAssetAllRegion() const { return this->totalAssetAllRegion_ != nullptr;};
      void deleteTotalAssetAllRegion() { this->totalAssetAllRegion_ = nullptr;};
      inline int32_t getTotalAssetAllRegion() const { DARABONBA_PTR_GET_DEFAULT(totalAssetAllRegion_, 0) };
      inline AssetsSummary& setTotalAssetAllRegion(int32_t totalAssetAllRegion) { DARABONBA_PTR_SET_VALUE(totalAssetAllRegion_, totalAssetAllRegion) };


      // totalCoreAllRegion Field Functions 
      bool hasTotalCoreAllRegion() const { return this->totalCoreAllRegion_ != nullptr;};
      void deleteTotalCoreAllRegion() { this->totalCoreAllRegion_ = nullptr;};
      inline int32_t getTotalCoreAllRegion() const { DARABONBA_PTR_GET_DEFAULT(totalCoreAllRegion_, 0) };
      inline AssetsSummary& setTotalCoreAllRegion(int32_t totalCoreAllRegion) { DARABONBA_PTR_SET_VALUE(totalCoreAllRegion_, totalCoreAllRegion) };


      // totalCoreNum Field Functions 
      bool hasTotalCoreNum() const { return this->totalCoreNum_ != nullptr;};
      void deleteTotalCoreNum() { this->totalCoreNum_ = nullptr;};
      inline int32_t getTotalCoreNum() const { DARABONBA_PTR_GET_DEFAULT(totalCoreNum_, 0) };
      inline AssetsSummary& setTotalCoreNum(int32_t totalCoreNum) { DARABONBA_PTR_SET_VALUE(totalCoreNum_, totalCoreNum) };


    protected:
      // The total number of assets across all regions.
      // >Security Center uses independent service centers in the Chinese mainland and outside the Chinese mainland. You can check the endpoint to which you are connected to determine the current service region. For more information about the regions included in each service region, see [What is Security Center?](https://help.aliyun.com/document_detail/42302.html).
      shared_ptr<int32_t> totalAssetAllRegion_ {};
      // The total number of cores of assets across all regions.
      // >Security Center uses independent service centers in the Chinese mainland and outside the Chinese mainland. You can check the endpoint to which you are connected to determine the current service region. For more information about the regions included in each service region, see [What is Security Center?](https://help.aliyun.com/document_detail/42302.html).
      shared_ptr<int32_t> totalCoreAllRegion_ {};
      // The total number of cores of assets in the current region.
      // 
      // >Security Center uses independent service centers in the Chinese mainland and outside the Chinese mainland. You can check the endpoint to which you are connected to determine the current service region. For more information about the regions included in each service region, see [What is Security Center?](https://help.aliyun.com/document_detail/42302.html).
      shared_ptr<int32_t> totalCoreNum_ {};
    };

    virtual bool empty() const override { return this->assetsSummary_ == nullptr
        && this->requestId_ == nullptr; };
    // assetsSummary Field Functions 
    bool hasAssetsSummary() const { return this->assetsSummary_ != nullptr;};
    void deleteAssetsSummary() { this->assetsSummary_ = nullptr;};
    inline const DescribeAssetSummaryResponseBody::AssetsSummary & getAssetsSummary() const { DARABONBA_PTR_GET_CONST(assetsSummary_, DescribeAssetSummaryResponseBody::AssetsSummary) };
    inline DescribeAssetSummaryResponseBody::AssetsSummary getAssetsSummary() { DARABONBA_PTR_GET(assetsSummary_, DescribeAssetSummaryResponseBody::AssetsSummary) };
    inline DescribeAssetSummaryResponseBody& setAssetsSummary(const DescribeAssetSummaryResponseBody::AssetsSummary & assetsSummary) { DARABONBA_PTR_SET_VALUE(assetsSummary_, assetsSummary) };
    inline DescribeAssetSummaryResponseBody& setAssetsSummary(DescribeAssetSummaryResponseBody::AssetsSummary && assetsSummary) { DARABONBA_PTR_SET_RVALUE(assetsSummary_, assetsSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAssetSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The asset statistics information.
    shared_ptr<DescribeAssetSummaryResponseBody::AssetsSummary> assetsSummary_ {};
    // The ID of the request. The ID is a unique identifier that Alibaba Cloud generates for the request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

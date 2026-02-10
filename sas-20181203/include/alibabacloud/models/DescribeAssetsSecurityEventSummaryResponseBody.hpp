// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSSECURITYEVENTSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSSECURITYEVENTSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetsSecurityEventSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetsSecurityEventSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetsSecurityEventSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAssetsSecurityEventSummaryResponseBody() = default ;
    DescribeAssetsSecurityEventSummaryResponseBody(const DescribeAssetsSecurityEventSummaryResponseBody &) = default ;
    DescribeAssetsSecurityEventSummaryResponseBody(DescribeAssetsSecurityEventSummaryResponseBody &&) = default ;
    DescribeAssetsSecurityEventSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetsSecurityEventSummaryResponseBody() = default ;
    DescribeAssetsSecurityEventSummaryResponseBody& operator=(const DescribeAssetsSecurityEventSummaryResponseBody &) = default ;
    DescribeAssetsSecurityEventSummaryResponseBody& operator=(DescribeAssetsSecurityEventSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Assets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Assets& obj) { 
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Assets& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Assets() = default ;
      Assets(const Assets &) = default ;
      Assets(Assets &&) = default ;
      Assets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Assets() = default ;
      Assets& operator=(const Assets &) = default ;
      Assets& operator=(Assets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetType_ == nullptr
        && this->riskCount_ == nullptr && this->totalCount_ == nullptr; };
      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline Assets& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline Assets& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Assets& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


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
      shared_ptr<string> assetType_ {};
      // The number of potential risky assets.
      shared_ptr<int64_t> riskCount_ {};
      // The total number of assets.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->assets_ == nullptr
        && this->requestId_ == nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<DescribeAssetsSecurityEventSummaryResponseBody::Assets> & getAssets() const { DARABONBA_PTR_GET_CONST(assets_, vector<DescribeAssetsSecurityEventSummaryResponseBody::Assets>) };
    inline vector<DescribeAssetsSecurityEventSummaryResponseBody::Assets> getAssets() { DARABONBA_PTR_GET(assets_, vector<DescribeAssetsSecurityEventSummaryResponseBody::Assets>) };
    inline DescribeAssetsSecurityEventSummaryResponseBody& setAssets(const vector<DescribeAssetsSecurityEventSummaryResponseBody::Assets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline DescribeAssetsSecurityEventSummaryResponseBody& setAssets(vector<DescribeAssetsSecurityEventSummaryResponseBody::Assets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAssetsSecurityEventSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of risk information about containers.
    shared_ptr<vector<DescribeAssetsSecurityEventSummaryResponseBody::Assets>> assets_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

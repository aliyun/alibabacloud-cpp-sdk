// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAssetSummaryResponseBodyAssetsSummary.hpp>
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
    virtual bool empty() const override { return this->assetsSummary_ == nullptr
        && return this->requestId_ == nullptr; };
    // assetsSummary Field Functions 
    bool hasAssetsSummary() const { return this->assetsSummary_ != nullptr;};
    void deleteAssetsSummary() { this->assetsSummary_ = nullptr;};
    inline const DescribeAssetSummaryResponseBodyAssetsSummary & assetsSummary() const { DARABONBA_PTR_GET_CONST(assetsSummary_, DescribeAssetSummaryResponseBodyAssetsSummary) };
    inline DescribeAssetSummaryResponseBodyAssetsSummary assetsSummary() { DARABONBA_PTR_GET(assetsSummary_, DescribeAssetSummaryResponseBodyAssetsSummary) };
    inline DescribeAssetSummaryResponseBody& setAssetsSummary(const DescribeAssetSummaryResponseBodyAssetsSummary & assetsSummary) { DARABONBA_PTR_SET_VALUE(assetsSummary_, assetsSummary) };
    inline DescribeAssetSummaryResponseBody& setAssetsSummary(DescribeAssetSummaryResponseBodyAssetsSummary && assetsSummary) { DARABONBA_PTR_SET_RVALUE(assetsSummary_, assetsSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAssetSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistical information about the assets.
    std::shared_ptr<DescribeAssetSummaryResponseBodyAssetsSummary> assetsSummary_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

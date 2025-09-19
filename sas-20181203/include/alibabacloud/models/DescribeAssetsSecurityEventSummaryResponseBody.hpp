// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSSECURITYEVENTSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSSECURITYEVENTSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAssetsSecurityEventSummaryResponseBodyAssets.hpp>
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
    virtual bool empty() const override { this->assets_ != nullptr
        && this->requestId_ != nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<DescribeAssetsSecurityEventSummaryResponseBodyAssets> & assets() const { DARABONBA_PTR_GET_CONST(assets_, vector<DescribeAssetsSecurityEventSummaryResponseBodyAssets>) };
    inline vector<DescribeAssetsSecurityEventSummaryResponseBodyAssets> assets() { DARABONBA_PTR_GET(assets_, vector<DescribeAssetsSecurityEventSummaryResponseBodyAssets>) };
    inline DescribeAssetsSecurityEventSummaryResponseBody& setAssets(const vector<DescribeAssetsSecurityEventSummaryResponseBodyAssets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline DescribeAssetsSecurityEventSummaryResponseBody& setAssets(vector<DescribeAssetsSecurityEventSummaryResponseBodyAssets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAssetsSecurityEventSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of risk information about containers.
    std::shared_ptr<vector<DescribeAssetsSecurityEventSummaryResponseBodyAssets>> assets_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

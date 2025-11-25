// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLASSETREGIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLASSETREGIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallAssetRegionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAssetRegionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegionNoList, regionNoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAssetRegionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionNoList, regionNoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVpcFirewallAssetRegionListResponseBody() = default ;
    DescribeVpcFirewallAssetRegionListResponseBody(const DescribeVpcFirewallAssetRegionListResponseBody &) = default ;
    DescribeVpcFirewallAssetRegionListResponseBody(DescribeVpcFirewallAssetRegionListResponseBody &&) = default ;
    DescribeVpcFirewallAssetRegionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAssetRegionListResponseBody() = default ;
    DescribeVpcFirewallAssetRegionListResponseBody& operator=(const DescribeVpcFirewallAssetRegionListResponseBody &) = default ;
    DescribeVpcFirewallAssetRegionListResponseBody& operator=(DescribeVpcFirewallAssetRegionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionNoList_ == nullptr
        && return this->requestId_ == nullptr; };
    // regionNoList Field Functions 
    bool hasRegionNoList() const { return this->regionNoList_ != nullptr;};
    void deleteRegionNoList() { this->regionNoList_ = nullptr;};
    inline const vector<string> & regionNoList() const { DARABONBA_PTR_GET_CONST(regionNoList_, vector<string>) };
    inline vector<string> regionNoList() { DARABONBA_PTR_GET(regionNoList_, vector<string>) };
    inline DescribeVpcFirewallAssetRegionListResponseBody& setRegionNoList(const vector<string> & regionNoList) { DARABONBA_PTR_SET_VALUE(regionNoList_, regionNoList) };
    inline DescribeVpcFirewallAssetRegionListResponseBody& setRegionNoList(vector<string> && regionNoList) { DARABONBA_PTR_SET_RVALUE(regionNoList_, regionNoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallAssetRegionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> regionNoList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

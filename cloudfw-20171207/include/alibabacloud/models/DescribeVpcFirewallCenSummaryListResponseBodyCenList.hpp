// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENSUMMARYLISTRESPONSEBODYCENLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENSUMMARYLISTRESPONSEBODYCENLIST_HPP_
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
  class DescribeVpcFirewallCenSummaryListResponseBodyCenList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenSummaryListResponseBodyCenList& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenName, cenName_);
      DARABONBA_PTR_TO_JSON(RegionNoList, regionNoList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenSummaryListResponseBodyCenList& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenName, cenName_);
      DARABONBA_PTR_FROM_JSON(RegionNoList, regionNoList_);
    };
    DescribeVpcFirewallCenSummaryListResponseBodyCenList() = default ;
    DescribeVpcFirewallCenSummaryListResponseBodyCenList(const DescribeVpcFirewallCenSummaryListResponseBodyCenList &) = default ;
    DescribeVpcFirewallCenSummaryListResponseBodyCenList(DescribeVpcFirewallCenSummaryListResponseBodyCenList &&) = default ;
    DescribeVpcFirewallCenSummaryListResponseBodyCenList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenSummaryListResponseBodyCenList() = default ;
    DescribeVpcFirewallCenSummaryListResponseBodyCenList& operator=(const DescribeVpcFirewallCenSummaryListResponseBodyCenList &) = default ;
    DescribeVpcFirewallCenSummaryListResponseBodyCenList& operator=(DescribeVpcFirewallCenSummaryListResponseBodyCenList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenId_ == nullptr
        && return this->cenName_ == nullptr && return this->regionNoList_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeVpcFirewallCenSummaryListResponseBodyCenList& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenName Field Functions 
    bool hasCenName() const { return this->cenName_ != nullptr;};
    void deleteCenName() { this->cenName_ = nullptr;};
    inline string cenName() const { DARABONBA_PTR_GET_DEFAULT(cenName_, "") };
    inline DescribeVpcFirewallCenSummaryListResponseBodyCenList& setCenName(string cenName) { DARABONBA_PTR_SET_VALUE(cenName_, cenName) };


    // regionNoList Field Functions 
    bool hasRegionNoList() const { return this->regionNoList_ != nullptr;};
    void deleteRegionNoList() { this->regionNoList_ = nullptr;};
    inline const vector<string> & regionNoList() const { DARABONBA_PTR_GET_CONST(regionNoList_, vector<string>) };
    inline vector<string> regionNoList() { DARABONBA_PTR_GET(regionNoList_, vector<string>) };
    inline DescribeVpcFirewallCenSummaryListResponseBodyCenList& setRegionNoList(const vector<string> & regionNoList) { DARABONBA_PTR_SET_VALUE(regionNoList_, regionNoList) };
    inline DescribeVpcFirewallCenSummaryListResponseBodyCenList& setRegionNoList(vector<string> && regionNoList) { DARABONBA_PTR_SET_RVALUE(regionNoList_, regionNoList) };


  protected:
    std::shared_ptr<string> cenId_ = nullptr;
    std::shared_ptr<string> cenName_ = nullptr;
    std::shared_ptr<vector<string>> regionNoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

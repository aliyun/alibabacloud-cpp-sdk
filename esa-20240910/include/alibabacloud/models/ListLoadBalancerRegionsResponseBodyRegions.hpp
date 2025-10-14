// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERREGIONSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERREGIONSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLoadBalancerRegionsResponseBodyRegionsSubRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListLoadBalancerRegionsResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancerRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RegionCnName, regionCnName_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(RegionEnName, regionEnName_);
      DARABONBA_PTR_TO_JSON(SubRegions, subRegions_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancerRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionCnName, regionCnName_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(RegionEnName, regionEnName_);
      DARABONBA_PTR_FROM_JSON(SubRegions, subRegions_);
    };
    ListLoadBalancerRegionsResponseBodyRegions() = default ;
    ListLoadBalancerRegionsResponseBodyRegions(const ListLoadBalancerRegionsResponseBodyRegions &) = default ;
    ListLoadBalancerRegionsResponseBodyRegions(ListLoadBalancerRegionsResponseBodyRegions &&) = default ;
    ListLoadBalancerRegionsResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancerRegionsResponseBodyRegions() = default ;
    ListLoadBalancerRegionsResponseBodyRegions& operator=(const ListLoadBalancerRegionsResponseBodyRegions &) = default ;
    ListLoadBalancerRegionsResponseBodyRegions& operator=(ListLoadBalancerRegionsResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionCnName_ == nullptr
        && return this->regionCode_ == nullptr && return this->regionEnName_ == nullptr && return this->subRegions_ == nullptr; };
    // regionCnName Field Functions 
    bool hasRegionCnName() const { return this->regionCnName_ != nullptr;};
    void deleteRegionCnName() { this->regionCnName_ = nullptr;};
    inline string regionCnName() const { DARABONBA_PTR_GET_DEFAULT(regionCnName_, "") };
    inline ListLoadBalancerRegionsResponseBodyRegions& setRegionCnName(string regionCnName) { DARABONBA_PTR_SET_VALUE(regionCnName_, regionCnName) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string regionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline ListLoadBalancerRegionsResponseBodyRegions& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // regionEnName Field Functions 
    bool hasRegionEnName() const { return this->regionEnName_ != nullptr;};
    void deleteRegionEnName() { this->regionEnName_ = nullptr;};
    inline string regionEnName() const { DARABONBA_PTR_GET_DEFAULT(regionEnName_, "") };
    inline ListLoadBalancerRegionsResponseBodyRegions& setRegionEnName(string regionEnName) { DARABONBA_PTR_SET_VALUE(regionEnName_, regionEnName) };


    // subRegions Field Functions 
    bool hasSubRegions() const { return this->subRegions_ != nullptr;};
    void deleteSubRegions() { this->subRegions_ = nullptr;};
    inline const vector<Models::ListLoadBalancerRegionsResponseBodyRegionsSubRegions> & subRegions() const { DARABONBA_PTR_GET_CONST(subRegions_, vector<Models::ListLoadBalancerRegionsResponseBodyRegionsSubRegions>) };
    inline vector<Models::ListLoadBalancerRegionsResponseBodyRegionsSubRegions> subRegions() { DARABONBA_PTR_GET(subRegions_, vector<Models::ListLoadBalancerRegionsResponseBodyRegionsSubRegions>) };
    inline ListLoadBalancerRegionsResponseBodyRegions& setSubRegions(const vector<Models::ListLoadBalancerRegionsResponseBodyRegionsSubRegions> & subRegions) { DARABONBA_PTR_SET_VALUE(subRegions_, subRegions) };
    inline ListLoadBalancerRegionsResponseBodyRegions& setSubRegions(vector<Models::ListLoadBalancerRegionsResponseBodyRegionsSubRegions> && subRegions) { DARABONBA_PTR_SET_RVALUE(subRegions_, subRegions) };


  protected:
    // Primary region Chinese full name
    std::shared_ptr<string> regionCnName_ = nullptr;
    // Primary region code
    std::shared_ptr<string> regionCode_ = nullptr;
    // Primary region English full name
    std::shared_ptr<string> regionEnName_ = nullptr;
    // List of secondary region information
    std::shared_ptr<vector<Models::ListLoadBalancerRegionsResponseBodyRegionsSubRegions>> subRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

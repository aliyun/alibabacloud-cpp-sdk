// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERREGIONSRESPONSEBODYREGIONSSUBREGIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERREGIONSRESPONSEBODYREGIONSSUBREGIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListLoadBalancerRegionsResponseBodyRegionsSubRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancerRegionsResponseBodyRegionsSubRegions& obj) { 
      DARABONBA_PTR_TO_JSON(SubRegionCnName, subRegionCnName_);
      DARABONBA_PTR_TO_JSON(SubRegionCode, subRegionCode_);
      DARABONBA_PTR_TO_JSON(SubRegionEnName, subRegionEnName_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancerRegionsResponseBodyRegionsSubRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(SubRegionCnName, subRegionCnName_);
      DARABONBA_PTR_FROM_JSON(SubRegionCode, subRegionCode_);
      DARABONBA_PTR_FROM_JSON(SubRegionEnName, subRegionEnName_);
    };
    ListLoadBalancerRegionsResponseBodyRegionsSubRegions() = default ;
    ListLoadBalancerRegionsResponseBodyRegionsSubRegions(const ListLoadBalancerRegionsResponseBodyRegionsSubRegions &) = default ;
    ListLoadBalancerRegionsResponseBodyRegionsSubRegions(ListLoadBalancerRegionsResponseBodyRegionsSubRegions &&) = default ;
    ListLoadBalancerRegionsResponseBodyRegionsSubRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancerRegionsResponseBodyRegionsSubRegions() = default ;
    ListLoadBalancerRegionsResponseBodyRegionsSubRegions& operator=(const ListLoadBalancerRegionsResponseBodyRegionsSubRegions &) = default ;
    ListLoadBalancerRegionsResponseBodyRegionsSubRegions& operator=(ListLoadBalancerRegionsResponseBodyRegionsSubRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subRegionCnName_ != nullptr
        && this->subRegionCode_ != nullptr && this->subRegionEnName_ != nullptr; };
    // subRegionCnName Field Functions 
    bool hasSubRegionCnName() const { return this->subRegionCnName_ != nullptr;};
    void deleteSubRegionCnName() { this->subRegionCnName_ = nullptr;};
    inline string subRegionCnName() const { DARABONBA_PTR_GET_DEFAULT(subRegionCnName_, "") };
    inline ListLoadBalancerRegionsResponseBodyRegionsSubRegions& setSubRegionCnName(string subRegionCnName) { DARABONBA_PTR_SET_VALUE(subRegionCnName_, subRegionCnName) };


    // subRegionCode Field Functions 
    bool hasSubRegionCode() const { return this->subRegionCode_ != nullptr;};
    void deleteSubRegionCode() { this->subRegionCode_ = nullptr;};
    inline string subRegionCode() const { DARABONBA_PTR_GET_DEFAULT(subRegionCode_, "") };
    inline ListLoadBalancerRegionsResponseBodyRegionsSubRegions& setSubRegionCode(string subRegionCode) { DARABONBA_PTR_SET_VALUE(subRegionCode_, subRegionCode) };


    // subRegionEnName Field Functions 
    bool hasSubRegionEnName() const { return this->subRegionEnName_ != nullptr;};
    void deleteSubRegionEnName() { this->subRegionEnName_ = nullptr;};
    inline string subRegionEnName() const { DARABONBA_PTR_GET_DEFAULT(subRegionEnName_, "") };
    inline ListLoadBalancerRegionsResponseBodyRegionsSubRegions& setSubRegionEnName(string subRegionEnName) { DARABONBA_PTR_SET_VALUE(subRegionEnName_, subRegionEnName) };


  protected:
    // Secondary region Chinese full name
    std::shared_ptr<string> subRegionCnName_ = nullptr;
    // Secondary region code
    std::shared_ptr<string> subRegionCode_ = nullptr;
    // Secondary region English full name
    std::shared_ptr<string> subRegionEnName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHILDINSTANCEREGIONSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHILDINSTANCEREGIONSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChildInstanceRegionsResponseBodyRegionsRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeChildInstanceRegionsResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChildInstanceRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChildInstanceRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeChildInstanceRegionsResponseBodyRegions() = default ;
    DescribeChildInstanceRegionsResponseBodyRegions(const DescribeChildInstanceRegionsResponseBodyRegions &) = default ;
    DescribeChildInstanceRegionsResponseBodyRegions(DescribeChildInstanceRegionsResponseBodyRegions &&) = default ;
    DescribeChildInstanceRegionsResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChildInstanceRegionsResponseBodyRegions() = default ;
    DescribeChildInstanceRegionsResponseBodyRegions& operator=(const DescribeChildInstanceRegionsResponseBodyRegions &) = default ;
    DescribeChildInstanceRegionsResponseBodyRegions& operator=(DescribeChildInstanceRegionsResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->region_ != nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const vector<Models::DescribeChildInstanceRegionsResponseBodyRegionsRegion> & region() const { DARABONBA_PTR_GET_CONST(region_, vector<Models::DescribeChildInstanceRegionsResponseBodyRegionsRegion>) };
    inline vector<Models::DescribeChildInstanceRegionsResponseBodyRegionsRegion> region() { DARABONBA_PTR_GET(region_, vector<Models::DescribeChildInstanceRegionsResponseBodyRegionsRegion>) };
    inline DescribeChildInstanceRegionsResponseBodyRegions& setRegion(const vector<Models::DescribeChildInstanceRegionsResponseBodyRegionsRegion> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline DescribeChildInstanceRegionsResponseBodyRegions& setRegion(vector<Models::DescribeChildInstanceRegionsResponseBodyRegionsRegion> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


  protected:
    std::shared_ptr<vector<Models::DescribeChildInstanceRegionsResponseBodyRegionsRegion>> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif

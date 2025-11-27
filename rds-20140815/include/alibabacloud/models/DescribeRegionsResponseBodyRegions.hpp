// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionsResponseBodyRegionsRDSRegion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RDSRegion, RDSRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RDSRegion, RDSRegion_);
    };
    DescribeRegionsResponseBodyRegions() = default ;
    DescribeRegionsResponseBodyRegions(const DescribeRegionsResponseBodyRegions &) = default ;
    DescribeRegionsResponseBodyRegions(DescribeRegionsResponseBodyRegions &&) = default ;
    DescribeRegionsResponseBodyRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegions() = default ;
    DescribeRegionsResponseBodyRegions& operator=(const DescribeRegionsResponseBodyRegions &) = default ;
    DescribeRegionsResponseBodyRegions& operator=(DescribeRegionsResponseBodyRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->RDSRegion_ == nullptr; };
    // RDSRegion Field Functions 
    bool hasRDSRegion() const { return this->RDSRegion_ != nullptr;};
    void deleteRDSRegion() { this->RDSRegion_ = nullptr;};
    inline const vector<Models::DescribeRegionsResponseBodyRegionsRDSRegion> & RDSRegion() const { DARABONBA_PTR_GET_CONST(RDSRegion_, vector<Models::DescribeRegionsResponseBodyRegionsRDSRegion>) };
    inline vector<Models::DescribeRegionsResponseBodyRegionsRDSRegion> RDSRegion() { DARABONBA_PTR_GET(RDSRegion_, vector<Models::DescribeRegionsResponseBodyRegionsRDSRegion>) };
    inline DescribeRegionsResponseBodyRegions& setRDSRegion(const vector<Models::DescribeRegionsResponseBodyRegionsRDSRegion> & RDSRegion) { DARABONBA_PTR_SET_VALUE(RDSRegion_, RDSRegion) };
    inline DescribeRegionsResponseBodyRegions& setRDSRegion(vector<Models::DescribeRegionsResponseBodyRegionsRDSRegion> && RDSRegion) { DARABONBA_PTR_SET_RVALUE(RDSRegion_, RDSRegion) };


  protected:
    std::shared_ptr<vector<Models::DescribeRegionsResponseBodyRegionsRDSRegion>> RDSRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

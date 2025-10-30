// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGIONSERVICERESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODYREGIONSREGIONSERVICERESOURCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceResourceType, serviceResourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceResourceType, serviceResourceType_);
    };
    DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes() = default ;
    DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes(const DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes &) = default ;
    DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes(DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes &&) = default ;
    DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes() = default ;
    DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes& operator=(const DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes &) = default ;
    DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes& operator=(DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceResourceType_ == nullptr; };
    // serviceResourceType Field Functions 
    bool hasServiceResourceType() const { return this->serviceResourceType_ != nullptr;};
    void deleteServiceResourceType() { this->serviceResourceType_ = nullptr;};
    inline const vector<string> & serviceResourceType() const { DARABONBA_PTR_GET_CONST(serviceResourceType_, vector<string>) };
    inline vector<string> serviceResourceType() { DARABONBA_PTR_GET(serviceResourceType_, vector<string>) };
    inline DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes& setServiceResourceType(const vector<string> & serviceResourceType) { DARABONBA_PTR_SET_VALUE(serviceResourceType_, serviceResourceType) };
    inline DescribeRegionsResponseBodyRegionsRegionServiceResourceTypes& setServiceResourceType(vector<string> && serviceResourceType) { DARABONBA_PTR_SET_RVALUE(serviceResourceType_, serviceResourceType) };


  protected:
    std::shared_ptr<vector<string>> serviceResourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif

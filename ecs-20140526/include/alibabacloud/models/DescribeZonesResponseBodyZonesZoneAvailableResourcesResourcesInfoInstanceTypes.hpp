// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFOINSTANCETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFOINSTANCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(supportedInstanceType, supportedInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(supportedInstanceType, supportedInstanceType_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes& operator=(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes& operator=(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedInstanceType_ != nullptr; };
    // supportedInstanceType Field Functions 
    bool hasSupportedInstanceType() const { return this->supportedInstanceType_ != nullptr;};
    void deleteSupportedInstanceType() { this->supportedInstanceType_ = nullptr;};
    inline const vector<string> & supportedInstanceType() const { DARABONBA_PTR_GET_CONST(supportedInstanceType_, vector<string>) };
    inline vector<string> supportedInstanceType() { DARABONBA_PTR_GET(supportedInstanceType_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes& setSupportedInstanceType(const vector<string> & supportedInstanceType) { DARABONBA_PTR_SET_VALUE(supportedInstanceType_, supportedInstanceType) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceTypes& setSupportedInstanceType(vector<string> && supportedInstanceType) { DARABONBA_PTR_SET_RVALUE(supportedInstanceType_, supportedInstanceType) };


  protected:
    std::shared_ptr<vector<string>> supportedInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

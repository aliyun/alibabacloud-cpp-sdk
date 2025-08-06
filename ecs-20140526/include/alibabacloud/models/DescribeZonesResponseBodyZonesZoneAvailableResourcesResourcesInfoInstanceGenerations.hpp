// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFOINSTANCEGENERATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFOINSTANCEGENERATIONS_HPP_
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
  class DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations& obj) { 
      DARABONBA_PTR_TO_JSON(supportedInstanceGeneration, supportedInstanceGeneration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations& obj) { 
      DARABONBA_PTR_FROM_JSON(supportedInstanceGeneration, supportedInstanceGeneration_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations& operator=(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations& operator=(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedInstanceGeneration_ != nullptr; };
    // supportedInstanceGeneration Field Functions 
    bool hasSupportedInstanceGeneration() const { return this->supportedInstanceGeneration_ != nullptr;};
    void deleteSupportedInstanceGeneration() { this->supportedInstanceGeneration_ = nullptr;};
    inline const vector<string> & supportedInstanceGeneration() const { DARABONBA_PTR_GET_CONST(supportedInstanceGeneration_, vector<string>) };
    inline vector<string> supportedInstanceGeneration() { DARABONBA_PTR_GET(supportedInstanceGeneration_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations& setSupportedInstanceGeneration(const vector<string> & supportedInstanceGeneration) { DARABONBA_PTR_SET_VALUE(supportedInstanceGeneration_, supportedInstanceGeneration) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoInstanceGenerations& setSupportedInstanceGeneration(vector<string> && supportedInstanceGeneration) { DARABONBA_PTR_SET_RVALUE(supportedInstanceGeneration_, supportedInstanceGeneration) };


  protected:
    std::shared_ptr<vector<string>> supportedInstanceGeneration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

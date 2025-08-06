// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCECREATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCECREATION_HPP_
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
  class DescribeZonesResponseBodyZonesZoneAvailableResourceCreation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableResourceCreation& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableResourceCreation& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableResourceCreation() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourceCreation(const DescribeZonesResponseBodyZonesZoneAvailableResourceCreation &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourceCreation(DescribeZonesResponseBodyZonesZoneAvailableResourceCreation &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourceCreation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableResourceCreation() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourceCreation& operator=(const DescribeZonesResponseBodyZonesZoneAvailableResourceCreation &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourceCreation& operator=(DescribeZonesResponseBodyZonesZoneAvailableResourceCreation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceTypes_ != nullptr; };
    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & resourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> resourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourceCreation& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourceCreation& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    std::shared_ptr<vector<string>> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

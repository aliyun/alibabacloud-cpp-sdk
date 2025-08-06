// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFONETWORKTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFONETWORKTYPES_HPP_
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
  class DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes& obj) { 
      DARABONBA_PTR_TO_JSON(supportedNetworkCategory, supportedNetworkCategory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(supportedNetworkCategory, supportedNetworkCategory_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes& operator=(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes& operator=(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedNetworkCategory_ != nullptr; };
    // supportedNetworkCategory Field Functions 
    bool hasSupportedNetworkCategory() const { return this->supportedNetworkCategory_ != nullptr;};
    void deleteSupportedNetworkCategory() { this->supportedNetworkCategory_ = nullptr;};
    inline const vector<string> & supportedNetworkCategory() const { DARABONBA_PTR_GET_CONST(supportedNetworkCategory_, vector<string>) };
    inline vector<string> supportedNetworkCategory() { DARABONBA_PTR_GET(supportedNetworkCategory_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes& setSupportedNetworkCategory(const vector<string> & supportedNetworkCategory) { DARABONBA_PTR_SET_VALUE(supportedNetworkCategory_, supportedNetworkCategory) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoNetworkTypes& setSupportedNetworkCategory(vector<string> && supportedNetworkCategory) { DARABONBA_PTR_SET_RVALUE(supportedNetworkCategory_, supportedNetworkCategory) };


  protected:
    std::shared_ptr<vector<string>> supportedNetworkCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

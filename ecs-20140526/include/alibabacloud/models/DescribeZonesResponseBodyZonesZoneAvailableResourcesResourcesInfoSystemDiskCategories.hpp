// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFOSYSTEMDISKCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFOSYSTEMDISKCATEGORIES_HPP_
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
  class DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories& obj) { 
      DARABONBA_PTR_TO_JSON(supportedSystemDiskCategory, supportedSystemDiskCategory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(supportedSystemDiskCategory, supportedSystemDiskCategory_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories& operator=(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories& operator=(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportedSystemDiskCategory_ == nullptr; };
    // supportedSystemDiskCategory Field Functions 
    bool hasSupportedSystemDiskCategory() const { return this->supportedSystemDiskCategory_ != nullptr;};
    void deleteSupportedSystemDiskCategory() { this->supportedSystemDiskCategory_ = nullptr;};
    inline const vector<string> & supportedSystemDiskCategory() const { DARABONBA_PTR_GET_CONST(supportedSystemDiskCategory_, vector<string>) };
    inline vector<string> supportedSystemDiskCategory() { DARABONBA_PTR_GET(supportedSystemDiskCategory_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories& setSupportedSystemDiskCategory(const vector<string> & supportedSystemDiskCategory) { DARABONBA_PTR_SET_VALUE(supportedSystemDiskCategory_, supportedSystemDiskCategory) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoSystemDiskCategories& setSupportedSystemDiskCategory(vector<string> && supportedSystemDiskCategory) { DARABONBA_PTR_SET_RVALUE(supportedSystemDiskCategory_, supportedSystemDiskCategory) };


  protected:
    std::shared_ptr<vector<string>> supportedSystemDiskCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

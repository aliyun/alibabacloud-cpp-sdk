// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFODATADISKCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLERESOURCESRESOURCESINFODATADISKCATEGORIES_HPP_
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
  class DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories& obj) { 
      DARABONBA_PTR_TO_JSON(supportedDataDiskCategory, supportedDataDiskCategory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(supportedDataDiskCategory, supportedDataDiskCategory_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories& operator=(const DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories& operator=(DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedDataDiskCategory_ != nullptr; };
    // supportedDataDiskCategory Field Functions 
    bool hasSupportedDataDiskCategory() const { return this->supportedDataDiskCategory_ != nullptr;};
    void deleteSupportedDataDiskCategory() { this->supportedDataDiskCategory_ = nullptr;};
    inline const vector<string> & supportedDataDiskCategory() const { DARABONBA_PTR_GET_CONST(supportedDataDiskCategory_, vector<string>) };
    inline vector<string> supportedDataDiskCategory() { DARABONBA_PTR_GET(supportedDataDiskCategory_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories& setSupportedDataDiskCategory(const vector<string> & supportedDataDiskCategory) { DARABONBA_PTR_SET_VALUE(supportedDataDiskCategory_, supportedDataDiskCategory) };
    inline DescribeZonesResponseBodyZonesZoneAvailableResourcesResourcesInfoDataDiskCategories& setSupportedDataDiskCategory(vector<string> && supportedDataDiskCategory) { DARABONBA_PTR_SET_RVALUE(supportedDataDiskCategory_, supportedDataDiskCategory) };


  protected:
    std::shared_ptr<vector<string>> supportedDataDiskCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

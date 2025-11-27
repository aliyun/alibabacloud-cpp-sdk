// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODYAVAILABLEZONESSUPPORTEDENGINESSUPPORTEDENGINEVERSIONSSUPPORTEDCATEGORYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODYAVAILABLEZONESSUPPORTEDENGINESSUPPORTEDENGINEVERSIONSSUPPORTEDCATEGORYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorysSupportedStorageTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(SupportedStorageTypes, supportedStorageTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(SupportedStorageTypes, supportedStorageTypes_);
    };
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys() = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys(const DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys &) = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys(DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys &&) = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys() = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys& operator=(const DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys &) = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys& operator=(DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->supportedStorageTypes_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // supportedStorageTypes Field Functions 
    bool hasSupportedStorageTypes() const { return this->supportedStorageTypes_ != nullptr;};
    void deleteSupportedStorageTypes() { this->supportedStorageTypes_ = nullptr;};
    inline const vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorysSupportedStorageTypes> & supportedStorageTypes() const { DARABONBA_PTR_GET_CONST(supportedStorageTypes_, vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorysSupportedStorageTypes>) };
    inline vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorysSupportedStorageTypes> supportedStorageTypes() { DARABONBA_PTR_GET(supportedStorageTypes_, vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorysSupportedStorageTypes>) };
    inline DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys& setSupportedStorageTypes(const vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorysSupportedStorageTypes> & supportedStorageTypes) { DARABONBA_PTR_SET_VALUE(supportedStorageTypes_, supportedStorageTypes) };
    inline DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys& setSupportedStorageTypes(vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorysSupportedStorageTypes> && supportedStorageTypes) { DARABONBA_PTR_SET_RVALUE(supportedStorageTypes_, supportedStorageTypes) };


  protected:
    // The RDS edition of the instance.
    std::shared_ptr<string> category_ = nullptr;
    // The storage types that are available for purchase.
    std::shared_ptr<vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorysSupportedStorageTypes>> supportedStorageTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

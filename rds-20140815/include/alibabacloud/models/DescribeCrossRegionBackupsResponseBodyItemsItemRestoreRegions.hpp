// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPSRESPONSEBODYITEMSITEMRESTOREREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPSRESPONSEBODYITEMSITEMRESTOREREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RestoreRegion, restoreRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RestoreRegion, restoreRegion_);
    };
    DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions() = default ;
    DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions(const DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions &) = default ;
    DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions(DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions &&) = default ;
    DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions() = default ;
    DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions& operator=(const DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions &) = default ;
    DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions& operator=(DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->restoreRegion_ == nullptr; };
    // restoreRegion Field Functions 
    bool hasRestoreRegion() const { return this->restoreRegion_ != nullptr;};
    void deleteRestoreRegion() { this->restoreRegion_ = nullptr;};
    inline const vector<string> & restoreRegion() const { DARABONBA_PTR_GET_CONST(restoreRegion_, vector<string>) };
    inline vector<string> restoreRegion() { DARABONBA_PTR_GET(restoreRegion_, vector<string>) };
    inline DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions& setRestoreRegion(const vector<string> & restoreRegion) { DARABONBA_PTR_SET_VALUE(restoreRegion_, restoreRegion) };
    inline DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions& setRestoreRegion(vector<string> && restoreRegion) { DARABONBA_PTR_SET_RVALUE(restoreRegion_, restoreRegion) };


  protected:
    std::shared_ptr<vector<string>> restoreRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

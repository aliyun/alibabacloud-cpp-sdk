// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPDBINSTANCERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPDBINSTANCERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCrossRegionBackupDBInstanceResponseBodyItemsItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCrossRegionBackupDBInstanceResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossRegionBackupDBInstanceResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossRegionBackupDBInstanceResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
    };
    DescribeCrossRegionBackupDBInstanceResponseBodyItems() = default ;
    DescribeCrossRegionBackupDBInstanceResponseBodyItems(const DescribeCrossRegionBackupDBInstanceResponseBodyItems &) = default ;
    DescribeCrossRegionBackupDBInstanceResponseBodyItems(DescribeCrossRegionBackupDBInstanceResponseBodyItems &&) = default ;
    DescribeCrossRegionBackupDBInstanceResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossRegionBackupDBInstanceResponseBodyItems() = default ;
    DescribeCrossRegionBackupDBInstanceResponseBodyItems& operator=(const DescribeCrossRegionBackupDBInstanceResponseBodyItems &) = default ;
    DescribeCrossRegionBackupDBInstanceResponseBodyItems& operator=(DescribeCrossRegionBackupDBInstanceResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::DescribeCrossRegionBackupDBInstanceResponseBodyItemsItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::DescribeCrossRegionBackupDBInstanceResponseBodyItemsItem>) };
    inline vector<Models::DescribeCrossRegionBackupDBInstanceResponseBodyItemsItem> item() { DARABONBA_PTR_GET(item_, vector<Models::DescribeCrossRegionBackupDBInstanceResponseBodyItemsItem>) };
    inline DescribeCrossRegionBackupDBInstanceResponseBodyItems& setItem(const vector<Models::DescribeCrossRegionBackupDBInstanceResponseBodyItemsItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline DescribeCrossRegionBackupDBInstanceResponseBodyItems& setItem(vector<Models::DescribeCrossRegionBackupDBInstanceResponseBodyItemsItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


  protected:
    std::shared_ptr<vector<Models::DescribeCrossRegionBackupDBInstanceResponseBodyItemsItem>> item_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

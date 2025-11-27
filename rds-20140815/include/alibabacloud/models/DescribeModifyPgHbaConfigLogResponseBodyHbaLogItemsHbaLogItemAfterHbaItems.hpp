// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPGHBACONFIGLOGRESPONSEBODYHBALOGITEMSHBALOGITEMAFTERHBAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPGHBACONFIGLOGRESPONSEBODYHBALOGITEMSHBALOGITEMAFTERHBAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItemsHbaItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems& obj) { 
      DARABONBA_PTR_TO_JSON(HbaItem, hbaItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems& obj) { 
      DARABONBA_PTR_FROM_JSON(HbaItem, hbaItem_);
    };
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems() = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems(const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems &) = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems(DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems &&) = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems() = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems& operator=(const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems &) = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems& operator=(DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hbaItem_ == nullptr; };
    // hbaItem Field Functions 
    bool hasHbaItem() const { return this->hbaItem_ != nullptr;};
    void deleteHbaItem() { this->hbaItem_ = nullptr;};
    inline const vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItemsHbaItem> & hbaItem() const { DARABONBA_PTR_GET_CONST(hbaItem_, vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItemsHbaItem>) };
    inline vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItemsHbaItem> hbaItem() { DARABONBA_PTR_GET(hbaItem_, vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItemsHbaItem>) };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems& setHbaItem(const vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItemsHbaItem> & hbaItem) { DARABONBA_PTR_SET_VALUE(hbaItem_, hbaItem) };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems& setHbaItem(vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItemsHbaItem> && hbaItem) { DARABONBA_PTR_SET_RVALUE(hbaItem_, hbaItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItemsHbaItem>> hbaItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

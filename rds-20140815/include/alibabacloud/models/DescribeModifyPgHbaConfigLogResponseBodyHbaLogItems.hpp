// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPGHBACONFIGLOGRESPONSEBODYHBALOGITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPGHBACONFIGLOGRESPONSEBODYHBALOGITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems& obj) { 
      DARABONBA_PTR_TO_JSON(HbaLogItem, hbaLogItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems& obj) { 
      DARABONBA_PTR_FROM_JSON(HbaLogItem, hbaLogItem_);
    };
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems() = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems(const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems &) = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems(DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems &&) = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems() = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems& operator=(const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems &) = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems& operator=(DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hbaLogItem_ == nullptr; };
    // hbaLogItem Field Functions 
    bool hasHbaLogItem() const { return this->hbaLogItem_ != nullptr;};
    void deleteHbaLogItem() { this->hbaLogItem_ = nullptr;};
    inline const vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem> & hbaLogItem() const { DARABONBA_PTR_GET_CONST(hbaLogItem_, vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem>) };
    inline vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem> hbaLogItem() { DARABONBA_PTR_GET(hbaLogItem_, vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem>) };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems& setHbaLogItem(const vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem> & hbaLogItem) { DARABONBA_PTR_SET_VALUE(hbaLogItem_, hbaLogItem) };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems& setHbaLogItem(vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem> && hbaLogItem) { DARABONBA_PTR_SET_RVALUE(hbaLogItem_, hbaLogItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem>> hbaLogItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

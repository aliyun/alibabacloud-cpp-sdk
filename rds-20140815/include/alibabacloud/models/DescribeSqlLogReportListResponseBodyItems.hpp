// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSQLLogReportListResponseBodyItemsItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogReportListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogReportListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogReportListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
    };
    DescribeSQLLogReportListResponseBodyItems() = default ;
    DescribeSQLLogReportListResponseBodyItems(const DescribeSQLLogReportListResponseBodyItems &) = default ;
    DescribeSQLLogReportListResponseBodyItems(DescribeSQLLogReportListResponseBodyItems &&) = default ;
    DescribeSQLLogReportListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogReportListResponseBodyItems() = default ;
    DescribeSQLLogReportListResponseBodyItems& operator=(const DescribeSQLLogReportListResponseBodyItems &) = default ;
    DescribeSQLLogReportListResponseBodyItems& operator=(DescribeSQLLogReportListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::DescribeSQLLogReportListResponseBodyItemsItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::DescribeSQLLogReportListResponseBodyItemsItem>) };
    inline vector<Models::DescribeSQLLogReportListResponseBodyItemsItem> item() { DARABONBA_PTR_GET(item_, vector<Models::DescribeSQLLogReportListResponseBodyItemsItem>) };
    inline DescribeSQLLogReportListResponseBodyItems& setItem(const vector<Models::DescribeSQLLogReportListResponseBodyItemsItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline DescribeSQLLogReportListResponseBodyItems& setItem(vector<Models::DescribeSQLLogReportListResponseBodyItemsItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


  protected:
    std::shared_ptr<vector<Models::DescribeSQLLogReportListResponseBodyItemsItem>> item_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

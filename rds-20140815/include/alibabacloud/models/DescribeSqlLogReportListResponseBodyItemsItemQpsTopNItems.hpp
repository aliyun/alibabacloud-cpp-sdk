// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMSITEMQPSTOPNITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMSITEMQPSTOPNITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems& obj) { 
      DARABONBA_PTR_TO_JSON(QPSTopNItem, QPSTopNItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems& obj) { 
      DARABONBA_PTR_FROM_JSON(QPSTopNItem, QPSTopNItem_);
    };
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems() = default ;
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems(const DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems &) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems(DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems &&) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems() = default ;
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems& operator=(const DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems &) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems& operator=(DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->QPSTopNItem_ == nullptr; };
    // QPSTopNItem Field Functions 
    bool hasQPSTopNItem() const { return this->QPSTopNItem_ != nullptr;};
    void deleteQPSTopNItem() { this->QPSTopNItem_ = nullptr;};
    inline const vector<Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem> & QPSTopNItem() const { DARABONBA_PTR_GET_CONST(QPSTopNItem_, vector<Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem>) };
    inline vector<Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem> QPSTopNItem() { DARABONBA_PTR_GET(QPSTopNItem_, vector<Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem>) };
    inline DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems& setQPSTopNItem(const vector<Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem> & QPSTopNItem) { DARABONBA_PTR_SET_VALUE(QPSTopNItem_, QPSTopNItem) };
    inline DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems& setQPSTopNItem(vector<Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem> && QPSTopNItem) { DARABONBA_PTR_SET_RVALUE(QPSTopNItem_, QPSTopNItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem>> QPSTopNItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

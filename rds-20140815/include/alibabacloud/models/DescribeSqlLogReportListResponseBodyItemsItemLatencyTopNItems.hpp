// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMSITEMLATENCYTOPNITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMSITEMLATENCYTOPNITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems& obj) { 
      DARABONBA_PTR_TO_JSON(LatencyTopNItem, latencyTopNItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems& obj) { 
      DARABONBA_PTR_FROM_JSON(LatencyTopNItem, latencyTopNItem_);
    };
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems() = default ;
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems(const DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems &) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems(DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems &&) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems() = default ;
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems& operator=(const DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems &) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems& operator=(DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latencyTopNItem_ == nullptr; };
    // latencyTopNItem Field Functions 
    bool hasLatencyTopNItem() const { return this->latencyTopNItem_ != nullptr;};
    void deleteLatencyTopNItem() { this->latencyTopNItem_ = nullptr;};
    inline const vector<Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem> & latencyTopNItem() const { DARABONBA_PTR_GET_CONST(latencyTopNItem_, vector<Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem>) };
    inline vector<Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem> latencyTopNItem() { DARABONBA_PTR_GET(latencyTopNItem_, vector<Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem>) };
    inline DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems& setLatencyTopNItem(const vector<Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem> & latencyTopNItem) { DARABONBA_PTR_SET_VALUE(latencyTopNItem_, latencyTopNItem) };
    inline DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems& setLatencyTopNItem(vector<Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem> && latencyTopNItem) { DARABONBA_PTR_SET_RVALUE(latencyTopNItem_, latencyTopNItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem>> latencyTopNItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

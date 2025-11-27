// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMSITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMSITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems.hpp>
#include <alibabacloud/models/DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogReportListResponseBodyItemsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogReportListResponseBodyItemsItem& obj) { 
      DARABONBA_PTR_TO_JSON(LatencyTopNItems, latencyTopNItems_);
      DARABONBA_PTR_TO_JSON(QPSTopNItems, QPSTopNItems_);
      DARABONBA_PTR_TO_JSON(ReportTime, reportTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogReportListResponseBodyItemsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(LatencyTopNItems, latencyTopNItems_);
      DARABONBA_PTR_FROM_JSON(QPSTopNItems, QPSTopNItems_);
      DARABONBA_PTR_FROM_JSON(ReportTime, reportTime_);
    };
    DescribeSQLLogReportListResponseBodyItemsItem() = default ;
    DescribeSQLLogReportListResponseBodyItemsItem(const DescribeSQLLogReportListResponseBodyItemsItem &) = default ;
    DescribeSQLLogReportListResponseBodyItemsItem(DescribeSQLLogReportListResponseBodyItemsItem &&) = default ;
    DescribeSQLLogReportListResponseBodyItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogReportListResponseBodyItemsItem() = default ;
    DescribeSQLLogReportListResponseBodyItemsItem& operator=(const DescribeSQLLogReportListResponseBodyItemsItem &) = default ;
    DescribeSQLLogReportListResponseBodyItemsItem& operator=(DescribeSQLLogReportListResponseBodyItemsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latencyTopNItems_ == nullptr
        && return this->QPSTopNItems_ == nullptr && return this->reportTime_ == nullptr; };
    // latencyTopNItems Field Functions 
    bool hasLatencyTopNItems() const { return this->latencyTopNItems_ != nullptr;};
    void deleteLatencyTopNItems() { this->latencyTopNItems_ = nullptr;};
    inline const Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems & latencyTopNItems() const { DARABONBA_PTR_GET_CONST(latencyTopNItems_, Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems) };
    inline Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems latencyTopNItems() { DARABONBA_PTR_GET(latencyTopNItems_, Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems) };
    inline DescribeSQLLogReportListResponseBodyItemsItem& setLatencyTopNItems(const Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems & latencyTopNItems) { DARABONBA_PTR_SET_VALUE(latencyTopNItems_, latencyTopNItems) };
    inline DescribeSQLLogReportListResponseBodyItemsItem& setLatencyTopNItems(Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems && latencyTopNItems) { DARABONBA_PTR_SET_RVALUE(latencyTopNItems_, latencyTopNItems) };


    // QPSTopNItems Field Functions 
    bool hasQPSTopNItems() const { return this->QPSTopNItems_ != nullptr;};
    void deleteQPSTopNItems() { this->QPSTopNItems_ = nullptr;};
    inline const Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems & QPSTopNItems() const { DARABONBA_PTR_GET_CONST(QPSTopNItems_, Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems) };
    inline Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems QPSTopNItems() { DARABONBA_PTR_GET(QPSTopNItems_, Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems) };
    inline DescribeSQLLogReportListResponseBodyItemsItem& setQPSTopNItems(const Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems & QPSTopNItems) { DARABONBA_PTR_SET_VALUE(QPSTopNItems_, QPSTopNItems) };
    inline DescribeSQLLogReportListResponseBodyItemsItem& setQPSTopNItems(Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems && QPSTopNItems) { DARABONBA_PTR_SET_RVALUE(QPSTopNItems_, QPSTopNItems) };


    // reportTime Field Functions 
    bool hasReportTime() const { return this->reportTime_ != nullptr;};
    void deleteReportTime() { this->reportTime_ = nullptr;};
    inline string reportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, "") };
    inline DescribeSQLLogReportListResponseBodyItemsItem& setReportTime(string reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


  protected:
    // An array that consists of SQL statements executed with the highest latency.
    std::shared_ptr<Models::DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItems> latencyTopNItems_ = nullptr;
    // An array that consists of SQL statements executed the most frequently.
    std::shared_ptr<Models::DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItems> QPSTopNItems_ = nullptr;
    // The time when the report was generated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> reportTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

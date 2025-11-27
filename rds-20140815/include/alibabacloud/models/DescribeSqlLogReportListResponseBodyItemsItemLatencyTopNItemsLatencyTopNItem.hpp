// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMSITEMLATENCYTOPNITEMSLATENCYTOPNITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMSITEMLATENCYTOPNITEMSLATENCYTOPNITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem& obj) { 
      DARABONBA_PTR_TO_JSON(AvgLatency, avgLatency_);
      DARABONBA_PTR_TO_JSON(SQLExecuteTimes, SQLExecuteTimes_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgLatency, avgLatency_);
      DARABONBA_PTR_FROM_JSON(SQLExecuteTimes, SQLExecuteTimes_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
    };
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem() = default ;
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem(const DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem &) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem(DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem &&) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem() = default ;
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem& operator=(const DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem &) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem& operator=(DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgLatency_ == nullptr
        && return this->SQLExecuteTimes_ == nullptr && return this->SQLText_ == nullptr; };
    // avgLatency Field Functions 
    bool hasAvgLatency() const { return this->avgLatency_ != nullptr;};
    void deleteAvgLatency() { this->avgLatency_ = nullptr;};
    inline int64_t avgLatency() const { DARABONBA_PTR_GET_DEFAULT(avgLatency_, 0L) };
    inline DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem& setAvgLatency(int64_t avgLatency) { DARABONBA_PTR_SET_VALUE(avgLatency_, avgLatency) };


    // SQLExecuteTimes Field Functions 
    bool hasSQLExecuteTimes() const { return this->SQLExecuteTimes_ != nullptr;};
    void deleteSQLExecuteTimes() { this->SQLExecuteTimes_ = nullptr;};
    inline int64_t SQLExecuteTimes() const { DARABONBA_PTR_GET_DEFAULT(SQLExecuteTimes_, 0L) };
    inline DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem& setSQLExecuteTimes(int64_t SQLExecuteTimes) { DARABONBA_PTR_SET_VALUE(SQLExecuteTimes_, SQLExecuteTimes) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSQLLogReportListResponseBodyItemsItemLatencyTopNItemsLatencyTopNItem& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


  protected:
    // The average time that is required to execute the SQL statement. Unit: milliseconds.
    std::shared_ptr<int64_t> avgLatency_ = nullptr;
    // The number of times that the SQL statement is executed.
    std::shared_ptr<int64_t> SQLExecuteTimes_ = nullptr;
    // The SQL statement.
    // 
    // >  Only the first 128 characters of the SQL statement are returned. In addition, only the SQL statements that take more than 100 ms to execute are returned.
    std::shared_ptr<string> SQLText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

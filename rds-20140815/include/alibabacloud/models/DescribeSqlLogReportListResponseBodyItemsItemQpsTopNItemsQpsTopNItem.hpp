// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMSITEMQPSTOPNITEMSQPSTOPNITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGREPORTLISTRESPONSEBODYITEMSITEMQPSTOPNITEMSQPSTOPNITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem& obj) { 
      DARABONBA_PTR_TO_JSON(SQLExecuteTimes, SQLExecuteTimes_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem& obj) { 
      DARABONBA_PTR_FROM_JSON(SQLExecuteTimes, SQLExecuteTimes_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
    };
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem() = default ;
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem(const DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem &) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem(DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem &&) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem() = default ;
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem& operator=(const DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem &) = default ;
    DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem& operator=(DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->SQLExecuteTimes_ == nullptr
        && return this->SQLText_ == nullptr; };
    // SQLExecuteTimes Field Functions 
    bool hasSQLExecuteTimes() const { return this->SQLExecuteTimes_ != nullptr;};
    void deleteSQLExecuteTimes() { this->SQLExecuteTimes_ = nullptr;};
    inline int64_t SQLExecuteTimes() const { DARABONBA_PTR_GET_DEFAULT(SQLExecuteTimes_, 0L) };
    inline DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem& setSQLExecuteTimes(int64_t SQLExecuteTimes) { DARABONBA_PTR_SET_VALUE(SQLExecuteTimes_, SQLExecuteTimes) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSQLLogReportListResponseBodyItemsItemQPSTopNItemsQPSTopNItem& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


  protected:
    // The number of times that the SQL statement is executed.
    std::shared_ptr<int64_t> SQLExecuteTimes_ = nullptr;
    // The SQL statement.
    // 
    // >  Only the first 128 characters of the SQL statement are returned. In addition, only the SQL statements that take more than 5 ms to execute are returned.
    std::shared_ptr<string> SQLText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

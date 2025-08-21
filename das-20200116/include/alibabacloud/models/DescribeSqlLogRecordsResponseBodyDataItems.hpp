// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSqlLogRecordsResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogRecordsResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(SQLLogRecord, SQLLogRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogRecordsResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(SQLLogRecord, SQLLogRecord_);
    };
    DescribeSqlLogRecordsResponseBodyDataItems() = default ;
    DescribeSqlLogRecordsResponseBodyDataItems(const DescribeSqlLogRecordsResponseBodyDataItems &) = default ;
    DescribeSqlLogRecordsResponseBodyDataItems(DescribeSqlLogRecordsResponseBodyDataItems &&) = default ;
    DescribeSqlLogRecordsResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogRecordsResponseBodyDataItems() = default ;
    DescribeSqlLogRecordsResponseBodyDataItems& operator=(const DescribeSqlLogRecordsResponseBodyDataItems &) = default ;
    DescribeSqlLogRecordsResponseBodyDataItems& operator=(DescribeSqlLogRecordsResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SQLLogRecord_ != nullptr; };
    // SQLLogRecord Field Functions 
    bool hasSQLLogRecord() const { return this->SQLLogRecord_ != nullptr;};
    void deleteSQLLogRecord() { this->SQLLogRecord_ = nullptr;};
    inline const vector<Models::DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord> & SQLLogRecord() const { DARABONBA_PTR_GET_CONST(SQLLogRecord_, vector<Models::DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord>) };
    inline vector<Models::DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord> SQLLogRecord() { DARABONBA_PTR_GET(SQLLogRecord_, vector<Models::DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord>) };
    inline DescribeSqlLogRecordsResponseBodyDataItems& setSQLLogRecord(const vector<Models::DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord> & SQLLogRecord) { DARABONBA_PTR_SET_VALUE(SQLLogRecord_, SQLLogRecord) };
    inline DescribeSqlLogRecordsResponseBodyDataItems& setSQLLogRecord(vector<Models::DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord> && SQLLogRecord) { DARABONBA_PTR_SET_RVALUE(SQLLogRecord_, SQLLogRecord) };


  protected:
    // The SQL log data.
    std::shared_ptr<vector<Models::DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord>> SQLLogRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif

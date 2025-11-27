// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSQLLogRecordsResponseBodyItemsSQLRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogRecordsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(SQLRecord, SQLRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(SQLRecord, SQLRecord_);
    };
    DescribeSQLLogRecordsResponseBodyItems() = default ;
    DescribeSQLLogRecordsResponseBodyItems(const DescribeSQLLogRecordsResponseBodyItems &) = default ;
    DescribeSQLLogRecordsResponseBodyItems(DescribeSQLLogRecordsResponseBodyItems &&) = default ;
    DescribeSQLLogRecordsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogRecordsResponseBodyItems() = default ;
    DescribeSQLLogRecordsResponseBodyItems& operator=(const DescribeSQLLogRecordsResponseBodyItems &) = default ;
    DescribeSQLLogRecordsResponseBodyItems& operator=(DescribeSQLLogRecordsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->SQLRecord_ == nullptr; };
    // SQLRecord Field Functions 
    bool hasSQLRecord() const { return this->SQLRecord_ != nullptr;};
    void deleteSQLRecord() { this->SQLRecord_ = nullptr;};
    inline const vector<Models::DescribeSQLLogRecordsResponseBodyItemsSQLRecord> & SQLRecord() const { DARABONBA_PTR_GET_CONST(SQLRecord_, vector<Models::DescribeSQLLogRecordsResponseBodyItemsSQLRecord>) };
    inline vector<Models::DescribeSQLLogRecordsResponseBodyItemsSQLRecord> SQLRecord() { DARABONBA_PTR_GET(SQLRecord_, vector<Models::DescribeSQLLogRecordsResponseBodyItemsSQLRecord>) };
    inline DescribeSQLLogRecordsResponseBodyItems& setSQLRecord(const vector<Models::DescribeSQLLogRecordsResponseBodyItemsSQLRecord> & SQLRecord) { DARABONBA_PTR_SET_VALUE(SQLRecord_, SQLRecord) };
    inline DescribeSQLLogRecordsResponseBodyItems& setSQLRecord(vector<Models::DescribeSQLLogRecordsResponseBodyItemsSQLRecord> && SQLRecord) { DARABONBA_PTR_SET_RVALUE(SQLRecord_, SQLRecord) };


  protected:
    std::shared_ptr<vector<Models::DescribeSQLLogRecordsResponseBodyItemsSQLRecord>> SQLRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

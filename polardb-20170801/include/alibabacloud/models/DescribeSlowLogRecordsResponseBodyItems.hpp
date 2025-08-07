// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(SQLSlowRecord, SQLSlowRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(SQLSlowRecord, SQLSlowRecord_);
    };
    DescribeSlowLogRecordsResponseBodyItems() = default ;
    DescribeSlowLogRecordsResponseBodyItems(const DescribeSlowLogRecordsResponseBodyItems &) = default ;
    DescribeSlowLogRecordsResponseBodyItems(DescribeSlowLogRecordsResponseBodyItems &&) = default ;
    DescribeSlowLogRecordsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBodyItems() = default ;
    DescribeSlowLogRecordsResponseBodyItems& operator=(const DescribeSlowLogRecordsResponseBodyItems &) = default ;
    DescribeSlowLogRecordsResponseBodyItems& operator=(DescribeSlowLogRecordsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SQLSlowRecord_ != nullptr; };
    // SQLSlowRecord Field Functions 
    bool hasSQLSlowRecord() const { return this->SQLSlowRecord_ != nullptr;};
    void deleteSQLSlowRecord() { this->SQLSlowRecord_ = nullptr;};
    inline const vector<Models::DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord> & SQLSlowRecord() const { DARABONBA_PTR_GET_CONST(SQLSlowRecord_, vector<Models::DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord>) };
    inline vector<Models::DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord> SQLSlowRecord() { DARABONBA_PTR_GET(SQLSlowRecord_, vector<Models::DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord>) };
    inline DescribeSlowLogRecordsResponseBodyItems& setSQLSlowRecord(const vector<Models::DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord> & SQLSlowRecord) { DARABONBA_PTR_SET_VALUE(SQLSlowRecord_, SQLSlowRecord) };
    inline DescribeSlowLogRecordsResponseBodyItems& setSQLSlowRecord(vector<Models::DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord> && SQLSlowRecord) { DARABONBA_PTR_SET_RVALUE(SQLSlowRecord_, SQLSlowRecord) };


  protected:
    std::shared_ptr<vector<Models::DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord>> SQLSlowRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

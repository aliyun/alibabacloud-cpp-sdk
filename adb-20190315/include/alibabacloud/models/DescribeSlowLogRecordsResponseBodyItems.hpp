// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(SlowLogRecord, slowLogRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(SlowLogRecord, slowLogRecord_);
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
    virtual bool empty() const override { return this->slowLogRecord_ == nullptr; };
    // slowLogRecord Field Functions 
    bool hasSlowLogRecord() const { return this->slowLogRecord_ != nullptr;};
    void deleteSlowLogRecord() { this->slowLogRecord_ = nullptr;};
    inline const vector<Models::DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord> & slowLogRecord() const { DARABONBA_PTR_GET_CONST(slowLogRecord_, vector<Models::DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord>) };
    inline vector<Models::DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord> slowLogRecord() { DARABONBA_PTR_GET(slowLogRecord_, vector<Models::DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord>) };
    inline DescribeSlowLogRecordsResponseBodyItems& setSlowLogRecord(const vector<Models::DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord> & slowLogRecord) { DARABONBA_PTR_SET_VALUE(slowLogRecord_, slowLogRecord) };
    inline DescribeSlowLogRecordsResponseBodyItems& setSlowLogRecord(vector<Models::DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord> && slowLogRecord) { DARABONBA_PTR_SET_RVALUE(slowLogRecord_, slowLogRecord) };


  protected:
    std::shared_ptr<vector<Models::DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord>> slowLogRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif

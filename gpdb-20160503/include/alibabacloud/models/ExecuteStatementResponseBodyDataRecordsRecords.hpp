// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODYDATARECORDSRECORDS_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODYDATARECORDSRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Gpdb20160503.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ExecuteStatementResponseBodyDataRecordsRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteStatementResponseBodyDataRecordsRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Record, record_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteStatementResponseBodyDataRecordsRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Record, record_);
    };
    ExecuteStatementResponseBodyDataRecordsRecords() = default ;
    ExecuteStatementResponseBodyDataRecordsRecords(const ExecuteStatementResponseBodyDataRecordsRecords &) = default ;
    ExecuteStatementResponseBodyDataRecordsRecords(ExecuteStatementResponseBodyDataRecordsRecords &&) = default ;
    ExecuteStatementResponseBodyDataRecordsRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteStatementResponseBodyDataRecordsRecords() = default ;
    ExecuteStatementResponseBodyDataRecordsRecords& operator=(const ExecuteStatementResponseBodyDataRecordsRecords &) = default ;
    ExecuteStatementResponseBodyDataRecordsRecords& operator=(ExecuteStatementResponseBodyDataRecordsRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->record_ != nullptr; };
    // record Field Functions 
    bool hasRecord() const { return this->record_ != nullptr;};
    void deleteRecord() { this->record_ = nullptr;};
    inline const vector<Models::Field> & record() const { DARABONBA_PTR_GET_CONST(record_, vector<Models::Field>) };
    inline vector<Models::Field> record() { DARABONBA_PTR_GET(record_, vector<Models::Field>) };
    inline ExecuteStatementResponseBodyDataRecordsRecords& setRecord(const vector<Models::Field> & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
    inline ExecuteStatementResponseBodyDataRecordsRecords& setRecord(vector<Models::Field> && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


  protected:
    std::shared_ptr<vector<Models::Field>> record_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

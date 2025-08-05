// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteStatementResponseBodyDataRecordsRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ExecuteStatementResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteStatementResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteStatementResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
    };
    ExecuteStatementResponseBodyDataRecords() = default ;
    ExecuteStatementResponseBodyDataRecords(const ExecuteStatementResponseBodyDataRecords &) = default ;
    ExecuteStatementResponseBodyDataRecords(ExecuteStatementResponseBodyDataRecords &&) = default ;
    ExecuteStatementResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteStatementResponseBodyDataRecords() = default ;
    ExecuteStatementResponseBodyDataRecords& operator=(const ExecuteStatementResponseBodyDataRecords &) = default ;
    ExecuteStatementResponseBodyDataRecords& operator=(ExecuteStatementResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->records_ != nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::ExecuteStatementResponseBodyDataRecordsRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::ExecuteStatementResponseBodyDataRecordsRecords>) };
    inline vector<Models::ExecuteStatementResponseBodyDataRecordsRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::ExecuteStatementResponseBodyDataRecordsRecords>) };
    inline ExecuteStatementResponseBodyDataRecords& setRecords(const vector<Models::ExecuteStatementResponseBodyDataRecordsRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ExecuteStatementResponseBodyDataRecords& setRecords(vector<Models::ExecuteStatementResponseBodyDataRecordsRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    std::shared_ptr<vector<Models::ExecuteStatementResponseBodyDataRecordsRecords>> records_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTATEMENTRESULTRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETSTATEMENTRESULTRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStatementResultResponseBodyDataRecordsRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetStatementResultResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStatementResultResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
    };
    friend void from_json(const Darabonba::Json& j, GetStatementResultResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
    };
    GetStatementResultResponseBodyDataRecords() = default ;
    GetStatementResultResponseBodyDataRecords(const GetStatementResultResponseBodyDataRecords &) = default ;
    GetStatementResultResponseBodyDataRecords(GetStatementResultResponseBodyDataRecords &&) = default ;
    GetStatementResultResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStatementResultResponseBodyDataRecords() = default ;
    GetStatementResultResponseBodyDataRecords& operator=(const GetStatementResultResponseBodyDataRecords &) = default ;
    GetStatementResultResponseBodyDataRecords& operator=(GetStatementResultResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->records_ != nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::GetStatementResultResponseBodyDataRecordsRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::GetStatementResultResponseBodyDataRecordsRecords>) };
    inline vector<Models::GetStatementResultResponseBodyDataRecordsRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::GetStatementResultResponseBodyDataRecordsRecords>) };
    inline GetStatementResultResponseBodyDataRecords& setRecords(const vector<Models::GetStatementResultResponseBodyDataRecordsRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetStatementResultResponseBodyDataRecords& setRecords(vector<Models::GetStatementResultResponseBodyDataRecordsRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    std::shared_ptr<vector<Models::GetStatementResultResponseBodyDataRecordsRecords>> records_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECURSIONRECORDSRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTRECURSIONRECORDSRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecursionRecordsResponseBodyRecordsRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListRecursionRecordsResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecursionRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Record, record_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecursionRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Record, record_);
    };
    ListRecursionRecordsResponseBodyRecords() = default ;
    ListRecursionRecordsResponseBodyRecords(const ListRecursionRecordsResponseBodyRecords &) = default ;
    ListRecursionRecordsResponseBodyRecords(ListRecursionRecordsResponseBodyRecords &&) = default ;
    ListRecursionRecordsResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecursionRecordsResponseBodyRecords() = default ;
    ListRecursionRecordsResponseBodyRecords& operator=(const ListRecursionRecordsResponseBodyRecords &) = default ;
    ListRecursionRecordsResponseBodyRecords& operator=(ListRecursionRecordsResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->record_ == nullptr; };
    // record Field Functions 
    bool hasRecord() const { return this->record_ != nullptr;};
    void deleteRecord() { this->record_ = nullptr;};
    inline const vector<Models::ListRecursionRecordsResponseBodyRecordsRecord> & record() const { DARABONBA_PTR_GET_CONST(record_, vector<Models::ListRecursionRecordsResponseBodyRecordsRecord>) };
    inline vector<Models::ListRecursionRecordsResponseBodyRecordsRecord> record() { DARABONBA_PTR_GET(record_, vector<Models::ListRecursionRecordsResponseBodyRecordsRecord>) };
    inline ListRecursionRecordsResponseBodyRecords& setRecord(const vector<Models::ListRecursionRecordsResponseBodyRecordsRecord> & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
    inline ListRecursionRecordsResponseBodyRecords& setRecord(vector<Models::ListRecursionRecordsResponseBodyRecordsRecord> && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


  protected:
    std::shared_ptr<vector<Models::ListRecursionRecordsResponseBodyRecordsRecord>> record_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

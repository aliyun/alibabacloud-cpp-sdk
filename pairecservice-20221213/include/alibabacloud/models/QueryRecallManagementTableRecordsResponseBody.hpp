// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECALLMANAGEMENTTABLERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECALLMANAGEMENTTABLERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryRecallManagementTableRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecallManagementTableRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecallManagementTableRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryRecallManagementTableRecordsResponseBody() = default ;
    QueryRecallManagementTableRecordsResponseBody(const QueryRecallManagementTableRecordsResponseBody &) = default ;
    QueryRecallManagementTableRecordsResponseBody(QueryRecallManagementTableRecordsResponseBody &&) = default ;
    QueryRecallManagementTableRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecallManagementTableRecordsResponseBody() = default ;
    QueryRecallManagementTableRecordsResponseBody& operator=(const QueryRecallManagementTableRecordsResponseBody &) = default ;
    QueryRecallManagementTableRecordsResponseBody& operator=(QueryRecallManagementTableRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->records_ == nullptr
        && this->requestId_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Darabonba::Json> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getRecords() { DARABONBA_PTR_GET(records_, vector<Darabonba::Json>) };
    inline QueryRecallManagementTableRecordsResponseBody& setRecords(const vector<Darabonba::Json> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline QueryRecallManagementTableRecordsResponseBody& setRecords(vector<Darabonba::Json> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRecallManagementTableRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of the retrieved records.
    shared_ptr<vector<Darabonba::Json>> records_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

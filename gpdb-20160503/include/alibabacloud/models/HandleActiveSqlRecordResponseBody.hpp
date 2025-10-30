// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLEACTIVESQLRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HANDLEACTIVESQLRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HandleActiveSQLRecordResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class HandleActiveSQLRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleActiveSQLRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, HandleActiveSQLRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    HandleActiveSQLRecordResponseBody() = default ;
    HandleActiveSQLRecordResponseBody(const HandleActiveSQLRecordResponseBody &) = default ;
    HandleActiveSQLRecordResponseBody(HandleActiveSQLRecordResponseBody &&) = default ;
    HandleActiveSQLRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleActiveSQLRecordResponseBody() = default ;
    HandleActiveSQLRecordResponseBody& operator=(const HandleActiveSQLRecordResponseBody &) = default ;
    HandleActiveSQLRecordResponseBody& operator=(HandleActiveSQLRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->requestId_ == nullptr && return this->results_ == nullptr && return this->status_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline HandleActiveSQLRecordResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HandleActiveSQLRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<HandleActiveSQLRecordResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<HandleActiveSQLRecordResponseBodyResults>) };
    inline vector<HandleActiveSQLRecordResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<HandleActiveSQLRecordResponseBodyResults>) };
    inline HandleActiveSQLRecordResponseBody& setResults(const vector<HandleActiveSQLRecordResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline HandleActiveSQLRecordResponseBody& setResults(vector<HandleActiveSQLRecordResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline HandleActiveSQLRecordResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The processing result of the active query.
    std::shared_ptr<vector<HandleActiveSQLRecordResponseBodyResults>> results_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

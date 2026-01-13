// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLEACTIVESQLRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HANDLEACTIVESQLRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pid_ == nullptr
        && this->status_ == nullptr; };
      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline Results& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Results& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The process ID, which is a unique identifier of the query.
      shared_ptr<string> pid_ {};
      // Indicates whether the processing was successful. Valid values:
      // 
      // *   **false**
      // *   **true**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->requestId_ == nullptr && this->results_ == nullptr && this->status_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline HandleActiveSQLRecordResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HandleActiveSQLRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<HandleActiveSQLRecordResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<HandleActiveSQLRecordResponseBody::Results>) };
    inline vector<HandleActiveSQLRecordResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<HandleActiveSQLRecordResponseBody::Results>) };
    inline HandleActiveSQLRecordResponseBody& setResults(const vector<HandleActiveSQLRecordResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline HandleActiveSQLRecordResponseBody& setResults(vector<HandleActiveSQLRecordResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline HandleActiveSQLRecordResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The processing result of the active query.
    shared_ptr<vector<HandleActiveSQLRecordResponseBody::Results>> results_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **false**
    // *   **true**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

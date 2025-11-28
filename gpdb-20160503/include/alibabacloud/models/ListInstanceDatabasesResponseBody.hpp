// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEDATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEDATABASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceDatabasesResponseBodyDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListInstanceDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstanceDatabasesResponseBody() = default ;
    ListInstanceDatabasesResponseBody(const ListInstanceDatabasesResponseBody &) = default ;
    ListInstanceDatabasesResponseBody(ListInstanceDatabasesResponseBody &&) = default ;
    ListInstanceDatabasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceDatabasesResponseBody() = default ;
    ListInstanceDatabasesResponseBody& operator=(const ListInstanceDatabasesResponseBody &) = default ;
    ListInstanceDatabasesResponseBody& operator=(ListInstanceDatabasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->databases_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ListInstanceDatabasesResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<ListInstanceDatabasesResponseBodyDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<ListInstanceDatabasesResponseBodyDatabases>) };
    inline vector<ListInstanceDatabasesResponseBodyDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<ListInstanceDatabasesResponseBodyDatabases>) };
    inline ListInstanceDatabasesResponseBody& setDatabases(const vector<ListInstanceDatabasesResponseBodyDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ListInstanceDatabasesResponseBody& setDatabases(vector<ListInstanceDatabasesResponseBodyDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceDatabasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListInstanceDatabasesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<vector<ListInstanceDatabasesResponseBodyDatabases>> databases_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

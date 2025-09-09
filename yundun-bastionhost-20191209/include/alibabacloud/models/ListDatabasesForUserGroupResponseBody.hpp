// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESFORUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESFORUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatabasesForUserGroupResponseBodyDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListDatabasesForUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesForUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatabasesForUserGroupResponseBody() = default ;
    ListDatabasesForUserGroupResponseBody(const ListDatabasesForUserGroupResponseBody &) = default ;
    ListDatabasesForUserGroupResponseBody(ListDatabasesForUserGroupResponseBody &&) = default ;
    ListDatabasesForUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesForUserGroupResponseBody() = default ;
    ListDatabasesForUserGroupResponseBody& operator=(const ListDatabasesForUserGroupResponseBody &) = default ;
    ListDatabasesForUserGroupResponseBody& operator=(ListDatabasesForUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databases_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<ListDatabasesForUserGroupResponseBodyDatabases> & databases() const { DARABONBA_PTR_GET_CONST(databases_, vector<ListDatabasesForUserGroupResponseBodyDatabases>) };
    inline vector<ListDatabasesForUserGroupResponseBodyDatabases> databases() { DARABONBA_PTR_GET(databases_, vector<ListDatabasesForUserGroupResponseBodyDatabases>) };
    inline ListDatabasesForUserGroupResponseBody& setDatabases(const vector<ListDatabasesForUserGroupResponseBodyDatabases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ListDatabasesForUserGroupResponseBody& setDatabases(vector<ListDatabasesForUserGroupResponseBodyDatabases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatabasesForUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDatabasesForUserGroupResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The databases returned.
    std::shared_ptr<vector<ListDatabasesForUserGroupResponseBodyDatabases>> databases_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of databases returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

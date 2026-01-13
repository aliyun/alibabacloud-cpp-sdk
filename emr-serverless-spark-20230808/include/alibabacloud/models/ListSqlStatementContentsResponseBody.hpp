// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLSTATEMENTCONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLSTATEMENTCONTENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListSqlStatementContentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSqlStatementContentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sqlStatementContents, sqlStatementContents_);
    };
    friend void from_json(const Darabonba::Json& j, ListSqlStatementContentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sqlStatementContents, sqlStatementContents_);
    };
    ListSqlStatementContentsResponseBody() = default ;
    ListSqlStatementContentsResponseBody(const ListSqlStatementContentsResponseBody &) = default ;
    ListSqlStatementContentsResponseBody(ListSqlStatementContentsResponseBody &&) = default ;
    ListSqlStatementContentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSqlStatementContentsResponseBody() = default ;
    ListSqlStatementContentsResponseBody& operator=(const ListSqlStatementContentsResponseBody &) = default ;
    ListSqlStatementContentsResponseBody& operator=(ListSqlStatementContentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SqlStatementContents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SqlStatementContents& obj) { 
        DARABONBA_PTR_TO_JSON(contents, contents_);
        DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, SqlStatementContents& obj) { 
        DARABONBA_PTR_FROM_JSON(contents, contents_);
        DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      };
      SqlStatementContents() = default ;
      SqlStatementContents(const SqlStatementContents &) = default ;
      SqlStatementContents(SqlStatementContents &&) = default ;
      SqlStatementContents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SqlStatementContents() = default ;
      SqlStatementContents& operator=(const SqlStatementContents &) = default ;
      SqlStatementContents& operator=(SqlStatementContents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contents_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // contents Field Functions 
      bool hasContents() const { return this->contents_ != nullptr;};
      void deleteContents() { this->contents_ = nullptr;};
      inline string getContents() const { DARABONBA_PTR_GET_DEFAULT(contents_, "") };
      inline SqlStatementContents& setContents(string contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline SqlStatementContents& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline SqlStatementContents& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline SqlStatementContents& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> contents_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sqlStatementContents_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSqlStatementContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sqlStatementContents Field Functions 
    bool hasSqlStatementContents() const { return this->sqlStatementContents_ != nullptr;};
    void deleteSqlStatementContents() { this->sqlStatementContents_ = nullptr;};
    inline const ListSqlStatementContentsResponseBody::SqlStatementContents & getSqlStatementContents() const { DARABONBA_PTR_GET_CONST(sqlStatementContents_, ListSqlStatementContentsResponseBody::SqlStatementContents) };
    inline ListSqlStatementContentsResponseBody::SqlStatementContents getSqlStatementContents() { DARABONBA_PTR_GET(sqlStatementContents_, ListSqlStatementContentsResponseBody::SqlStatementContents) };
    inline ListSqlStatementContentsResponseBody& setSqlStatementContents(const ListSqlStatementContentsResponseBody::SqlStatementContents & sqlStatementContents) { DARABONBA_PTR_SET_VALUE(sqlStatementContents_, sqlStatementContents) };
    inline ListSqlStatementContentsResponseBody& setSqlStatementContents(ListSqlStatementContentsResponseBody::SqlStatementContents && sqlStatementContents) { DARABONBA_PTR_SET_RVALUE(sqlStatementContents_, sqlStatementContents) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<ListSqlStatementContentsResponseBody::SqlStatementContents> sqlStatementContents_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif

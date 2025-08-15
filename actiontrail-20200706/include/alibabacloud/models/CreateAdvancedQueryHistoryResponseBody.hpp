// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADVANCEDQUERYHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEADVANCEDQUERYHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class CreateAdvancedQueryHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAdvancedQueryHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(QuerySql, querySql_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SimpleQuery, simpleQuery_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAdvancedQueryHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(QuerySql, querySql_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SimpleQuery, simpleQuery_);
    };
    CreateAdvancedQueryHistoryResponseBody() = default ;
    CreateAdvancedQueryHistoryResponseBody(const CreateAdvancedQueryHistoryResponseBody &) = default ;
    CreateAdvancedQueryHistoryResponseBody(CreateAdvancedQueryHistoryResponseBody &&) = default ;
    CreateAdvancedQueryHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAdvancedQueryHistoryResponseBody() = default ;
    CreateAdvancedQueryHistoryResponseBody& operator=(const CreateAdvancedQueryHistoryResponseBody &) = default ;
    CreateAdvancedQueryHistoryResponseBody& operator=(CreateAdvancedQueryHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->queryId_ != nullptr
        && this->querySql_ != nullptr && this->requestId_ != nullptr && this->simpleQuery_ != nullptr; };
    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline CreateAdvancedQueryHistoryResponseBody& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // querySql Field Functions 
    bool hasQuerySql() const { return this->querySql_ != nullptr;};
    void deleteQuerySql() { this->querySql_ = nullptr;};
    inline string querySql() const { DARABONBA_PTR_GET_DEFAULT(querySql_, "") };
    inline CreateAdvancedQueryHistoryResponseBody& setQuerySql(string querySql) { DARABONBA_PTR_SET_VALUE(querySql_, querySql) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAdvancedQueryHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // simpleQuery Field Functions 
    bool hasSimpleQuery() const { return this->simpleQuery_ != nullptr;};
    void deleteSimpleQuery() { this->simpleQuery_ = nullptr;};
    inline bool simpleQuery() const { DARABONBA_PTR_GET_DEFAULT(simpleQuery_, false) };
    inline CreateAdvancedQueryHistoryResponseBody& setSimpleQuery(bool simpleQuery) { DARABONBA_PTR_SET_VALUE(simpleQuery_, simpleQuery) };


  protected:
    std::shared_ptr<string> queryId_ = nullptr;
    std::shared_ptr<string> querySql_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> simpleQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif

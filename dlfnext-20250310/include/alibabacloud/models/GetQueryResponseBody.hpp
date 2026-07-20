// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StatementResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(queryId, queryId_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(sql, sql_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tier, tier_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(queryId, queryId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(sql, sql_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tier, tier_);
    };
    GetQueryResponseBody() = default ;
    GetQueryResponseBody(const GetQueryResponseBody &) = default ;
    GetQueryResponseBody(GetQueryResponseBody &&) = default ;
    GetQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryResponseBody() = default ;
    GetQueryResponseBody& operator=(const GetQueryResponseBody &) = default ;
    GetQueryResponseBody& operator=(GetQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completedAt_ == nullptr
        && this->createdAt_ == nullptr && this->queryId_ == nullptr && this->results_ == nullptr && this->sql_ == nullptr && this->status_ == nullptr
        && this->tier_ == nullptr; };
    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline int64_t getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, 0L) };
    inline GetQueryResponseBody& setCompletedAt(int64_t completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline GetQueryResponseBody& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline GetQueryResponseBody& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<StatementResult> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<StatementResult>) };
    inline vector<StatementResult> getResults() { DARABONBA_PTR_GET(results_, vector<StatementResult>) };
    inline GetQueryResponseBody& setResults(const vector<StatementResult> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline GetQueryResponseBody& setResults(vector<StatementResult> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline GetQueryResponseBody& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetQueryResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tier Field Functions 
    bool hasTier() const { return this->tier_ != nullptr;};
    void deleteTier() { this->tier_ = nullptr;};
    inline string getTier() const { DARABONBA_PTR_GET_DEFAULT(tier_, "") };
    inline GetQueryResponseBody& setTier(string tier) { DARABONBA_PTR_SET_VALUE(tier_, tier) };


  protected:
    shared_ptr<int64_t> completedAt_ {};
    shared_ptr<int64_t> createdAt_ {};
    shared_ptr<string> queryId_ {};
    shared_ptr<vector<StatementResult>> results_ {};
    shared_ptr<string> sql_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> tier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif

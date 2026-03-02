// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLEXECUTIONFETCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_SQLEXECUTIONFETCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DqlResult.hpp>
#include <alibabacloud/models/SqlExecution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SqlExecutionFetchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlExecutionFetchResult& obj) { 
      DARABONBA_PTR_TO_JSON(dqlResult, dqlResult_);
      DARABONBA_PTR_TO_JSON(sqlExecution, sqlExecution_);
    };
    friend void from_json(const Darabonba::Json& j, SqlExecutionFetchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(dqlResult, dqlResult_);
      DARABONBA_PTR_FROM_JSON(sqlExecution, sqlExecution_);
    };
    SqlExecutionFetchResult() = default ;
    SqlExecutionFetchResult(const SqlExecutionFetchResult &) = default ;
    SqlExecutionFetchResult(SqlExecutionFetchResult &&) = default ;
    SqlExecutionFetchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlExecutionFetchResult() = default ;
    SqlExecutionFetchResult& operator=(const SqlExecutionFetchResult &) = default ;
    SqlExecutionFetchResult& operator=(SqlExecutionFetchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dqlResult_ == nullptr
        && this->sqlExecution_ == nullptr; };
    // dqlResult Field Functions 
    bool hasDqlResult() const { return this->dqlResult_ != nullptr;};
    void deleteDqlResult() { this->dqlResult_ = nullptr;};
    inline const DqlResult & getDqlResult() const { DARABONBA_PTR_GET_CONST(dqlResult_, DqlResult) };
    inline DqlResult getDqlResult() { DARABONBA_PTR_GET(dqlResult_, DqlResult) };
    inline SqlExecutionFetchResult& setDqlResult(const DqlResult & dqlResult) { DARABONBA_PTR_SET_VALUE(dqlResult_, dqlResult) };
    inline SqlExecutionFetchResult& setDqlResult(DqlResult && dqlResult) { DARABONBA_PTR_SET_RVALUE(dqlResult_, dqlResult) };


    // sqlExecution Field Functions 
    bool hasSqlExecution() const { return this->sqlExecution_ != nullptr;};
    void deleteSqlExecution() { this->sqlExecution_ = nullptr;};
    inline const SqlExecution & getSqlExecution() const { DARABONBA_PTR_GET_CONST(sqlExecution_, SqlExecution) };
    inline SqlExecution getSqlExecution() { DARABONBA_PTR_GET(sqlExecution_, SqlExecution) };
    inline SqlExecutionFetchResult& setSqlExecution(const SqlExecution & sqlExecution) { DARABONBA_PTR_SET_VALUE(sqlExecution_, sqlExecution) };
    inline SqlExecutionFetchResult& setSqlExecution(SqlExecution && sqlExecution) { DARABONBA_PTR_SET_RVALUE(sqlExecution_, sqlExecution) };


  protected:
    shared_ptr<DqlResult> dqlResult_ {};
    shared_ptr<SqlExecution> sqlExecution_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif

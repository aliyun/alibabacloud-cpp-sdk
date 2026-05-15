// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ExecuteStatementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteStatementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(maxBytes, maxBytes_);
      DARABONBA_PTR_TO_JSON(maxRows, maxRows_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(queryTimeout, queryTimeout_);
      DARABONBA_PTR_TO_JSON(sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteStatementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(maxBytes, maxBytes_);
      DARABONBA_PTR_FROM_JSON(maxRows, maxRows_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(queryTimeout, queryTimeout_);
      DARABONBA_PTR_FROM_JSON(sql, sql_);
    };
    ExecuteStatementRequest() = default ;
    ExecuteStatementRequest(const ExecuteStatementRequest &) = default ;
    ExecuteStatementRequest(ExecuteStatementRequest &&) = default ;
    ExecuteStatementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteStatementRequest() = default ;
    ExecuteStatementRequest& operator=(const ExecuteStatementRequest &) = default ;
    ExecuteStatementRequest& operator=(ExecuteStatementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->maxBytes_ == nullptr && this->maxRows_ == nullptr && this->parameters_ == nullptr && this->queryTimeout_ == nullptr && this->sql_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ExecuteStatementRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // maxBytes Field Functions 
    bool hasMaxBytes() const { return this->maxBytes_ != nullptr;};
    void deleteMaxBytes() { this->maxBytes_ = nullptr;};
    inline int64_t getMaxBytes() const { DARABONBA_PTR_GET_DEFAULT(maxBytes_, 0L) };
    inline ExecuteStatementRequest& setMaxBytes(int64_t maxBytes) { DARABONBA_PTR_SET_VALUE(maxBytes_, maxBytes) };


    // maxRows Field Functions 
    bool hasMaxRows() const { return this->maxRows_ != nullptr;};
    void deleteMaxRows() { this->maxRows_ = nullptr;};
    inline int64_t getMaxRows() const { DARABONBA_PTR_GET_DEFAULT(maxRows_, 0L) };
    inline ExecuteStatementRequest& setMaxRows(int64_t maxRows) { DARABONBA_PTR_SET_VALUE(maxRows_, maxRows) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Darabonba::Json> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Darabonba::Json>) };
    inline ExecuteStatementRequest& setParameters(const vector<Darabonba::Json> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ExecuteStatementRequest& setParameters(vector<Darabonba::Json> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // queryTimeout Field Functions 
    bool hasQueryTimeout() const { return this->queryTimeout_ != nullptr;};
    void deleteQueryTimeout() { this->queryTimeout_ = nullptr;};
    inline int64_t getQueryTimeout() const { DARABONBA_PTR_GET_DEFAULT(queryTimeout_, 0L) };
    inline ExecuteStatementRequest& setQueryTimeout(int64_t queryTimeout) { DARABONBA_PTR_SET_VALUE(queryTimeout_, queryTimeout) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline ExecuteStatementRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    shared_ptr<string> dbName_ {};
    shared_ptr<int64_t> maxBytes_ {};
    shared_ptr<int64_t> maxRows_ {};
    shared_ptr<vector<Darabonba::Json>> parameters_ {};
    shared_ptr<int64_t> queryTimeout_ {};
    shared_ptr<string> sql_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif

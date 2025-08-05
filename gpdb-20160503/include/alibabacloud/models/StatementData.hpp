// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATEMENTDATA_HPP_
#define ALIBABACLOUD_MODELS_STATEMENTDATA_HPP_
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
  class StatementData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StatementData& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(Sqls, sqls_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, StatementData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(Sqls, sqls_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
    };
    StatementData() = default ;
    StatementData(const StatementData &) = default ;
    StatementData(StatementData &&) = default ;
    StatementData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StatementData() = default ;
    StatementData& operator=(const StatementData &) = default ;
    StatementData& operator=(StatementData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->database_ != nullptr && this->id_ != nullptr && this->parameters_ != nullptr && this->secretArn_ != nullptr && this->sql_ != nullptr
        && this->sqls_ != nullptr && this->status_ != nullptr && this->updatedAt_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline StatementData& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline StatementData& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline StatementData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<string>) };
    inline vector<string> parameters() { DARABONBA_PTR_GET(parameters_, vector<string>) };
    inline StatementData& setParameters(const vector<string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline StatementData& setParameters(vector<string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // secretArn Field Functions 
    bool hasSecretArn() const { return this->secretArn_ != nullptr;};
    void deleteSecretArn() { this->secretArn_ = nullptr;};
    inline string secretArn() const { DARABONBA_PTR_GET_DEFAULT(secretArn_, "") };
    inline StatementData& setSecretArn(string secretArn) { DARABONBA_PTR_SET_VALUE(secretArn_, secretArn) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline StatementData& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // sqls Field Functions 
    bool hasSqls() const { return this->sqls_ != nullptr;};
    void deleteSqls() { this->sqls_ = nullptr;};
    inline const vector<string> & sqls() const { DARABONBA_PTR_GET_CONST(sqls_, vector<string>) };
    inline vector<string> sqls() { DARABONBA_PTR_GET(sqls_, vector<string>) };
    inline StatementData& setSqls(const vector<string> & sqls) { DARABONBA_PTR_SET_VALUE(sqls_, sqls) };
    inline StatementData& setSqls(vector<string> && sqls) { DARABONBA_PTR_SET_RVALUE(sqls_, sqls) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline StatementData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline StatementData& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> database_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<string>> parameters_ = nullptr;
    std::shared_ptr<string> secretArn_ = nullptr;
    std::shared_ptr<string> sql_ = nullptr;
    std::shared_ptr<vector<string>> sqls_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

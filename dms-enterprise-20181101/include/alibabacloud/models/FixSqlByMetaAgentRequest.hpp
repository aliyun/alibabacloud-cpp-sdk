// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIXSQLBYMETAAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FIXSQLBYMETAAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class FixSqlByMetaAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FixSqlByMetaAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, FixSqlByMetaAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
    };
    FixSqlByMetaAgentRequest() = default ;
    FixSqlByMetaAgentRequest(const FixSqlByMetaAgentRequest &) = default ;
    FixSqlByMetaAgentRequest(FixSqlByMetaAgentRequest &&) = default ;
    FixSqlByMetaAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FixSqlByMetaAgentRequest() = default ;
    FixSqlByMetaAgentRequest& operator=(const FixSqlByMetaAgentRequest &) = default ;
    FixSqlByMetaAgentRequest& operator=(FixSqlByMetaAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->error_ == nullptr && return this->model_ == nullptr && return this->query_ == nullptr && return this->sql_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline FixSqlByMetaAgentRequest& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline FixSqlByMetaAgentRequest& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline FixSqlByMetaAgentRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline FixSqlByMetaAgentRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline FixSqlByMetaAgentRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // The ID of the database. You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbId_ = nullptr;
    // The error message.
    std::shared_ptr<string> error_ = nullptr;
    // The name of the selected model. You can use only Qwen series models.
    std::shared_ptr<string> model_ = nullptr;
    // The remarks.
    std::shared_ptr<string> query_ = nullptr;
    // The SQL statement that reports the error.
    // 
    // This parameter is required.
    std::shared_ptr<string> sql_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

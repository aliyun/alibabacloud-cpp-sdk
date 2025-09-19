// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPTIMIZESQLBYMETAAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPTIMIZESQLBYMETAAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class OptimizeSqlByMetaAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OptimizeSqlByMetaAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, OptimizeSqlByMetaAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
    };
    OptimizeSqlByMetaAgentRequest() = default ;
    OptimizeSqlByMetaAgentRequest(const OptimizeSqlByMetaAgentRequest &) = default ;
    OptimizeSqlByMetaAgentRequest(OptimizeSqlByMetaAgentRequest &&) = default ;
    OptimizeSqlByMetaAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OptimizeSqlByMetaAgentRequest() = default ;
    OptimizeSqlByMetaAgentRequest& operator=(const OptimizeSqlByMetaAgentRequest &) = default ;
    OptimizeSqlByMetaAgentRequest& operator=(OptimizeSqlByMetaAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->model_ != nullptr && this->query_ != nullptr && this->sql_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline OptimizeSqlByMetaAgentRequest& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline OptimizeSqlByMetaAgentRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline OptimizeSqlByMetaAgentRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline OptimizeSqlByMetaAgentRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dbId_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sql_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

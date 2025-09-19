// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANSWERSQLSYNTAXBYMETAAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANSWERSQLSYNTAXBYMETAAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AnswerSqlSyntaxByMetaAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnswerSqlSyntaxByMetaAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, AnswerSqlSyntaxByMetaAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    AnswerSqlSyntaxByMetaAgentRequest() = default ;
    AnswerSqlSyntaxByMetaAgentRequest(const AnswerSqlSyntaxByMetaAgentRequest &) = default ;
    AnswerSqlSyntaxByMetaAgentRequest(AnswerSqlSyntaxByMetaAgentRequest &&) = default ;
    AnswerSqlSyntaxByMetaAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnswerSqlSyntaxByMetaAgentRequest() = default ;
    AnswerSqlSyntaxByMetaAgentRequest& operator=(const AnswerSqlSyntaxByMetaAgentRequest &) = default ;
    AnswerSqlSyntaxByMetaAgentRequest& operator=(AnswerSqlSyntaxByMetaAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->model_ != nullptr && this->query_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline AnswerSqlSyntaxByMetaAgentRequest& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline AnswerSqlSyntaxByMetaAgentRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline AnswerSqlSyntaxByMetaAgentRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dbId_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_EVALUATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EvaluationConfigAnswer.hpp>
#include <alibabacloud/models/EvaluationConfigContext.hpp>
#include <alibabacloud/models/EvaluationConfigQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class EvaluationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    EvaluationConfig() = default ;
    EvaluationConfig(const EvaluationConfig &) = default ;
    EvaluationConfig(EvaluationConfig &&) = default ;
    EvaluationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluationConfig() = default ;
    EvaluationConfig& operator=(const EvaluationConfig &) = default ;
    EvaluationConfig& operator=(EvaluationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answer_ != nullptr
        && this->context_ != nullptr && this->query_ != nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline const EvaluationConfigAnswer & answer() const { DARABONBA_PTR_GET_CONST(answer_, EvaluationConfigAnswer) };
    inline EvaluationConfigAnswer answer() { DARABONBA_PTR_GET(answer_, EvaluationConfigAnswer) };
    inline EvaluationConfig& setAnswer(const EvaluationConfigAnswer & answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };
    inline EvaluationConfig& setAnswer(EvaluationConfigAnswer && answer) { DARABONBA_PTR_SET_RVALUE(answer_, answer) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const EvaluationConfigContext & context() const { DARABONBA_PTR_GET_CONST(context_, EvaluationConfigContext) };
    inline EvaluationConfigContext context() { DARABONBA_PTR_GET(context_, EvaluationConfigContext) };
    inline EvaluationConfig& setContext(const EvaluationConfigContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline EvaluationConfig& setContext(EvaluationConfigContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline const EvaluationConfigQuery & query() const { DARABONBA_PTR_GET_CONST(query_, EvaluationConfigQuery) };
    inline EvaluationConfigQuery query() { DARABONBA_PTR_GET(query_, EvaluationConfigQuery) };
    inline EvaluationConfig& setQuery(const EvaluationConfigQuery & query) { DARABONBA_PTR_SET_VALUE(query_, query) };
    inline EvaluationConfig& setQuery(EvaluationConfigQuery && query) { DARABONBA_PTR_SET_RVALUE(query_, query) };


  protected:
    std::shared_ptr<EvaluationConfigAnswer> answer_ = nullptr;
    std::shared_ptr<EvaluationConfigContext> context_ = nullptr;
    std::shared_ptr<EvaluationConfigQuery> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif

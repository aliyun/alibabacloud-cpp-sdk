// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSREQUESTEXPRESSIONS_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSREQUESTEXPRESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchGetExpressionFieldsRequestExpressions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetExpressionFieldsRequestExpressions& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetExpressionFieldsRequestExpressions& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    BatchGetExpressionFieldsRequestExpressions() = default ;
    BatchGetExpressionFieldsRequestExpressions(const BatchGetExpressionFieldsRequestExpressions &) = default ;
    BatchGetExpressionFieldsRequestExpressions(BatchGetExpressionFieldsRequestExpressions &&) = default ;
    BatchGetExpressionFieldsRequestExpressions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetExpressionFieldsRequestExpressions() = default ;
    BatchGetExpressionFieldsRequestExpressions& operator=(const BatchGetExpressionFieldsRequestExpressions &) = default ;
    BatchGetExpressionFieldsRequestExpressions& operator=(BatchGetExpressionFieldsRequestExpressions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expression_ != nullptr
        && this->id_ != nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline BatchGetExpressionFieldsRequestExpressions& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline BatchGetExpressionFieldsRequestExpressions& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // Content of the expression.
    std::shared_ptr<string> expression_ = nullptr;
    // The sequence number of the expression.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

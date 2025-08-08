// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONDITION_HPP_
#define ALIBABACLOUD_MODELS_CONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class Condition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Condition& obj) { 
      DARABONBA_PTR_TO_JSON(expression, expression_);
    };
    friend void from_json(const Darabonba::Json& j, Condition& obj) { 
      DARABONBA_PTR_FROM_JSON(expression, expression_);
    };
    Condition() = default ;
    Condition(const Condition &) = default ;
    Condition(Condition &&) = default ;
    Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Condition() = default ;
    Condition& operator=(const Condition &) = default ;
    Condition& operator=(Condition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expression_ != nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline Condition& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


  protected:
    std::shared_ptr<string> expression_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif

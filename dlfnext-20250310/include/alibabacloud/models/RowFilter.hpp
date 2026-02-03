// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROWFILTER_HPP_
#define ALIBABACLOUD_MODELS_ROWFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class RowFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RowFilter& obj) { 
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(predicate, predicate_);
    };
    friend void from_json(const Darabonba::Json& j, RowFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(predicate, predicate_);
    };
    RowFilter() = default ;
    RowFilter(const RowFilter &) = default ;
    RowFilter(RowFilter &&) = default ;
    RowFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RowFilter() = default ;
    RowFilter& operator=(const RowFilter &) = default ;
    RowFilter& operator=(RowFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expression_ == nullptr
        && this->predicate_ == nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline RowFilter& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // predicate Field Functions 
    bool hasPredicate() const { return this->predicate_ != nullptr;};
    void deletePredicate() { this->predicate_ = nullptr;};
    inline string getPredicate() const { DARABONBA_PTR_GET_DEFAULT(predicate_, "") };
    inline RowFilter& setPredicate(string predicate) { DARABONBA_PTR_SET_VALUE(predicate_, predicate) };


  protected:
    shared_ptr<string> expression_ {};
    shared_ptr<string> predicate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif

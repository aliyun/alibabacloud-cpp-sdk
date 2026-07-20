// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMNMASK_HPP_
#define ALIBABACLOUD_MODELS_COLUMNMASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ColumnMask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ColumnMask& obj) { 
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(transform, transform_);
    };
    friend void from_json(const Darabonba::Json& j, ColumnMask& obj) { 
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(transform, transform_);
    };
    ColumnMask() = default ;
    ColumnMask(const ColumnMask &) = default ;
    ColumnMask(ColumnMask &&) = default ;
    ColumnMask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ColumnMask() = default ;
    ColumnMask& operator=(const ColumnMask &) = default ;
    ColumnMask& operator=(ColumnMask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expression_ == nullptr
        && this->transform_ == nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline ColumnMask& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // transform Field Functions 
    bool hasTransform() const { return this->transform_ != nullptr;};
    void deleteTransform() { this->transform_ = nullptr;};
    inline string getTransform() const { DARABONBA_PTR_GET_DEFAULT(transform_, "") };
    inline ColumnMask& setTransform(string transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };


  protected:
    shared_ptr<string> expression_ {};
    shared_ptr<string> transform_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTPROPERTY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ProductProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductProperty& obj) { 
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ProductProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    ProductProperty() = default ;
    ProductProperty(const ProductProperty &) = default ;
    ProductProperty(ProductProperty &&) = default ;
    ProductProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductProperty() = default ;
    ProductProperty& operator=(const ProductProperty &) = default ;
    ProductProperty& operator=(ProductProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr
        && this->values_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ProductProperty& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline ProductProperty& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ProductProperty& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    shared_ptr<string> text_ {};
    shared_ptr<vector<string>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif

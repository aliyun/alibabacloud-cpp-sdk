// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTEXTRASPRODUCTEXTRA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTEXTRASPRODUCTEXTRA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductExtrasProductExtra : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductExtrasProductExtra& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductExtrasProductExtra& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeProductResponseBodyProductExtrasProductExtra() = default ;
    DescribeProductResponseBodyProductExtrasProductExtra(const DescribeProductResponseBodyProductExtrasProductExtra &) = default ;
    DescribeProductResponseBodyProductExtrasProductExtra(DescribeProductResponseBodyProductExtrasProductExtra &&) = default ;
    DescribeProductResponseBodyProductExtrasProductExtra(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductExtrasProductExtra() = default ;
    DescribeProductResponseBodyProductExtrasProductExtra& operator=(const DescribeProductResponseBodyProductExtrasProductExtra &) = default ;
    DescribeProductResponseBodyProductExtrasProductExtra& operator=(DescribeProductResponseBodyProductExtrasProductExtra &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->label_ != nullptr && this->order_ != nullptr && this->type_ != nullptr && this->values_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeProductResponseBodyProductExtrasProductExtra& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeProductResponseBodyProductExtrasProductExtra& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline DescribeProductResponseBodyProductExtrasProductExtra& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeProductResponseBodyProductExtrasProductExtra& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline DescribeProductResponseBodyProductExtrasProductExtra& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<int32_t> order_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif

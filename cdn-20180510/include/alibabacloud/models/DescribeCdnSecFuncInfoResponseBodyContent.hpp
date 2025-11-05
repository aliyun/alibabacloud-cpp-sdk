// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSECFUNCINFORESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSECFUNCINFORESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSecFuncInfoResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSecFuncInfoResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSecFuncInfoResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeCdnSecFuncInfoResponseBodyContent() = default ;
    DescribeCdnSecFuncInfoResponseBodyContent(const DescribeCdnSecFuncInfoResponseBodyContent &) = default ;
    DescribeCdnSecFuncInfoResponseBodyContent(DescribeCdnSecFuncInfoResponseBodyContent &&) = default ;
    DescribeCdnSecFuncInfoResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSecFuncInfoResponseBodyContent() = default ;
    DescribeCdnSecFuncInfoResponseBodyContent& operator=(const DescribeCdnSecFuncInfoResponseBodyContent &) = default ;
    DescribeCdnSecFuncInfoResponseBodyContent& operator=(DescribeCdnSecFuncInfoResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->value_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeCdnSecFuncInfoResponseBodyContent& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeCdnSecFuncInfoResponseBodyContent& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag.
    std::shared_ptr<string> label_ = nullptr;
    // The value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

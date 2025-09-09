// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENTDETAILCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENTDETAILCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventDetailResponseBodyEventDetailContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDetailResponseBodyEventDetailContent& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDetailResponseBodyEventDetailContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeEventDetailResponseBodyEventDetailContent() = default ;
    DescribeEventDetailResponseBodyEventDetailContent(const DescribeEventDetailResponseBodyEventDetailContent &) = default ;
    DescribeEventDetailResponseBodyEventDetailContent(DescribeEventDetailResponseBodyEventDetailContent &&) = default ;
    DescribeEventDetailResponseBodyEventDetailContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDetailResponseBodyEventDetailContent() = default ;
    DescribeEventDetailResponseBodyEventDetailContent& operator=(const DescribeEventDetailResponseBodyEventDetailContent &) = default ;
    DescribeEventDetailResponseBodyEventDetailContent& operator=(DescribeEventDetailResponseBodyEventDetailContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr
        && this->name_ != nullptr && this->value_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline DescribeEventDetailResponseBodyEventDetailContent& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEventDetailResponseBodyEventDetailContent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeEventDetailResponseBodyEventDetailContent& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The title of the content in the anomalous event.
    std::shared_ptr<string> label_ = nullptr;
    // Exception event name.
    std::shared_ptr<string> name_ = nullptr;
    // The description of the content in the anomalous event.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif

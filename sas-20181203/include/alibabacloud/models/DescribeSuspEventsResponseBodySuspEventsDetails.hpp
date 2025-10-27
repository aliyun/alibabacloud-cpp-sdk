// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSRESPONSEBODYSUSPEVENTSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSRESPONSEBODYSUSPEVENTSDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventsResponseBodySuspEventsDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventsResponseBodySuspEventsDetails& obj) { 
      DARABONBA_PTR_TO_JSON(NameDisplay, nameDisplay_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueDisplay, valueDisplay_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventsResponseBodySuspEventsDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(NameDisplay, nameDisplay_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueDisplay, valueDisplay_);
    };
    DescribeSuspEventsResponseBodySuspEventsDetails() = default ;
    DescribeSuspEventsResponseBodySuspEventsDetails(const DescribeSuspEventsResponseBodySuspEventsDetails &) = default ;
    DescribeSuspEventsResponseBodySuspEventsDetails(DescribeSuspEventsResponseBodySuspEventsDetails &&) = default ;
    DescribeSuspEventsResponseBodySuspEventsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventsResponseBodySuspEventsDetails() = default ;
    DescribeSuspEventsResponseBodySuspEventsDetails& operator=(const DescribeSuspEventsResponseBodySuspEventsDetails &) = default ;
    DescribeSuspEventsResponseBodySuspEventsDetails& operator=(DescribeSuspEventsResponseBodySuspEventsDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nameDisplay_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr && return this->valueDisplay_ == nullptr; };
    // nameDisplay Field Functions 
    bool hasNameDisplay() const { return this->nameDisplay_ != nullptr;};
    void deleteNameDisplay() { this->nameDisplay_ = nullptr;};
    inline string nameDisplay() const { DARABONBA_PTR_GET_DEFAULT(nameDisplay_, "") };
    inline DescribeSuspEventsResponseBodySuspEventsDetails& setNameDisplay(string nameDisplay) { DARABONBA_PTR_SET_VALUE(nameDisplay_, nameDisplay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSuspEventsResponseBodySuspEventsDetails& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeSuspEventsResponseBodySuspEventsDetails& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueDisplay Field Functions 
    bool hasValueDisplay() const { return this->valueDisplay_ != nullptr;};
    void deleteValueDisplay() { this->valueDisplay_ = nullptr;};
    inline string valueDisplay() const { DARABONBA_PTR_GET_DEFAULT(valueDisplay_, "") };
    inline DescribeSuspEventsResponseBodySuspEventsDetails& setValueDisplay(string valueDisplay) { DARABONBA_PTR_SET_VALUE(valueDisplay_, valueDisplay) };


  protected:
    // The display name of the alert event.
    std::shared_ptr<string> nameDisplay_ = nullptr;
    // The type of the alert event.
    std::shared_ptr<string> type_ = nullptr;
    // The path of the alert event.
    std::shared_ptr<string> value_ = nullptr;
    // The display name of the path of the alert event.
    std::shared_ptr<string> valueDisplay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMDETAILBYIDRESPONSEBODYDATAEVENTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETALARMDETAILBYIDRESPONSEBODYDATAEVENTDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetAlarmDetailByIdResponseBodyDataEventDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlarmDetailByIdResponseBodyDataEventDetails& obj) { 
      DARABONBA_PTR_TO_JSON(NameDisplay, nameDisplay_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueDisplay, valueDisplay_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlarmDetailByIdResponseBodyDataEventDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(NameDisplay, nameDisplay_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueDisplay, valueDisplay_);
    };
    GetAlarmDetailByIdResponseBodyDataEventDetails() = default ;
    GetAlarmDetailByIdResponseBodyDataEventDetails(const GetAlarmDetailByIdResponseBodyDataEventDetails &) = default ;
    GetAlarmDetailByIdResponseBodyDataEventDetails(GetAlarmDetailByIdResponseBodyDataEventDetails &&) = default ;
    GetAlarmDetailByIdResponseBodyDataEventDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlarmDetailByIdResponseBodyDataEventDetails() = default ;
    GetAlarmDetailByIdResponseBodyDataEventDetails& operator=(const GetAlarmDetailByIdResponseBodyDataEventDetails &) = default ;
    GetAlarmDetailByIdResponseBodyDataEventDetails& operator=(GetAlarmDetailByIdResponseBodyDataEventDetails &&) = default ;
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
    inline GetAlarmDetailByIdResponseBodyDataEventDetails& setNameDisplay(string nameDisplay) { DARABONBA_PTR_SET_VALUE(nameDisplay_, nameDisplay) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAlarmDetailByIdResponseBodyDataEventDetails& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetAlarmDetailByIdResponseBodyDataEventDetails& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueDisplay Field Functions 
    bool hasValueDisplay() const { return this->valueDisplay_ != nullptr;};
    void deleteValueDisplay() { this->valueDisplay_ = nullptr;};
    inline string valueDisplay() const { DARABONBA_PTR_GET_DEFAULT(valueDisplay_, "") };
    inline GetAlarmDetailByIdResponseBodyDataEventDetails& setValueDisplay(string valueDisplay) { DARABONBA_PTR_SET_VALUE(valueDisplay_, valueDisplay) };


  protected:
    // Alarm event display name.
    std::shared_ptr<string> nameDisplay_ = nullptr;
    // Alarm event type.
    std::shared_ptr<string> type_ = nullptr;
    // Path where the alarm event occurred.
    std::shared_ptr<string> value_ = nullptr;
    // Path where the alarm event occurred.
    std::shared_ptr<string> valueDisplay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif

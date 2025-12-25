// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODYDATASEVERITY_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODYDATASEVERITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class GetTicketResponseBodyDataSeverity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketResponseBodyDataSeverity& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketResponseBodyDataSeverity& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetTicketResponseBodyDataSeverity() = default ;
    GetTicketResponseBodyDataSeverity(const GetTicketResponseBodyDataSeverity &) = default ;
    GetTicketResponseBodyDataSeverity(GetTicketResponseBodyDataSeverity &&) = default ;
    GetTicketResponseBodyDataSeverity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketResponseBodyDataSeverity() = default ;
    GetTicketResponseBodyDataSeverity& operator=(const GetTicketResponseBodyDataSeverity &) = default ;
    GetTicketResponseBodyDataSeverity& operator=(GetTicketResponseBodyDataSeverity &&) = default ;
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
    inline GetTicketResponseBodyDataSeverity& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetTicketResponseBodyDataSeverity& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Enumeration Text
    std::shared_ptr<string> label_ = nullptr;
    // Enumeration
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif

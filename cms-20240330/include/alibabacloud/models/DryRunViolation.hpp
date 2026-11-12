// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNVIOLATION_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNVIOLATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DryRunViolation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunViolation& obj) { 
      DARABONBA_PTR_TO_JSON(field, field_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunViolation& obj) { 
      DARABONBA_PTR_FROM_JSON(field, field_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(suggestion, suggestion_);
    };
    DryRunViolation() = default ;
    DryRunViolation(const DryRunViolation &) = default ;
    DryRunViolation(DryRunViolation &&) = default ;
    DryRunViolation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunViolation() = default ;
    DryRunViolation& operator=(const DryRunViolation &) = default ;
    DryRunViolation& operator=(DryRunViolation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->field_ == nullptr
        && this->message_ == nullptr && this->suggestion_ == nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DryRunViolation& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DryRunViolation& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline DryRunViolation& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // The path of the violated field, such as schedule.intervalSecs.
    shared_ptr<string> field_ {};
    // The violation description.
    shared_ptr<string> message_ {};
    // The remediation suggestion.
    shared_ptr<string> suggestion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

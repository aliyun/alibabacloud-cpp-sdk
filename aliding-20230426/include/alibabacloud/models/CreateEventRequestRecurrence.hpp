// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTREQUESTRECURRENCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTREQUESTRECURRENCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventRequestRecurrencePattern.hpp>
#include <alibabacloud/models/CreateEventRequestRecurrenceRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventRequestRecurrence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRequestRecurrence& obj) { 
      DARABONBA_PTR_TO_JSON(pattern, pattern_);
      DARABONBA_PTR_TO_JSON(range, range_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRequestRecurrence& obj) { 
      DARABONBA_PTR_FROM_JSON(pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(range, range_);
    };
    CreateEventRequestRecurrence() = default ;
    CreateEventRequestRecurrence(const CreateEventRequestRecurrence &) = default ;
    CreateEventRequestRecurrence(CreateEventRequestRecurrence &&) = default ;
    CreateEventRequestRecurrence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRequestRecurrence() = default ;
    CreateEventRequestRecurrence& operator=(const CreateEventRequestRecurrence &) = default ;
    CreateEventRequestRecurrence& operator=(CreateEventRequestRecurrence &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pattern_ == nullptr
        && return this->range_ == nullptr; };
    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline const Models::CreateEventRequestRecurrencePattern & pattern() const { DARABONBA_PTR_GET_CONST(pattern_, Models::CreateEventRequestRecurrencePattern) };
    inline Models::CreateEventRequestRecurrencePattern pattern() { DARABONBA_PTR_GET(pattern_, Models::CreateEventRequestRecurrencePattern) };
    inline CreateEventRequestRecurrence& setPattern(const Models::CreateEventRequestRecurrencePattern & pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };
    inline CreateEventRequestRecurrence& setPattern(Models::CreateEventRequestRecurrencePattern && pattern) { DARABONBA_PTR_SET_RVALUE(pattern_, pattern) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::CreateEventRequestRecurrenceRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::CreateEventRequestRecurrenceRange) };
    inline Models::CreateEventRequestRecurrenceRange range() { DARABONBA_PTR_GET(range_, Models::CreateEventRequestRecurrenceRange) };
    inline CreateEventRequestRecurrence& setRange(const Models::CreateEventRequestRecurrenceRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline CreateEventRequestRecurrence& setRange(Models::CreateEventRequestRecurrenceRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


  protected:
    std::shared_ptr<Models::CreateEventRequestRecurrencePattern> pattern_ = nullptr;
    std::shared_ptr<Models::CreateEventRequestRecurrenceRange> range_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

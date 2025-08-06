// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTRESPONSEBODYRECURRENCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTRESPONSEBODYRECURRENCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventResponseBodyRecurrencePattern.hpp>
#include <alibabacloud/models/CreateEventResponseBodyRecurrenceRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventResponseBodyRecurrence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventResponseBodyRecurrence& obj) { 
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(Range, range_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventResponseBodyRecurrence& obj) { 
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
    };
    CreateEventResponseBodyRecurrence() = default ;
    CreateEventResponseBodyRecurrence(const CreateEventResponseBodyRecurrence &) = default ;
    CreateEventResponseBodyRecurrence(CreateEventResponseBodyRecurrence &&) = default ;
    CreateEventResponseBodyRecurrence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventResponseBodyRecurrence() = default ;
    CreateEventResponseBodyRecurrence& operator=(const CreateEventResponseBodyRecurrence &) = default ;
    CreateEventResponseBodyRecurrence& operator=(CreateEventResponseBodyRecurrence &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pattern_ != nullptr
        && this->range_ != nullptr; };
    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline const Models::CreateEventResponseBodyRecurrencePattern & pattern() const { DARABONBA_PTR_GET_CONST(pattern_, Models::CreateEventResponseBodyRecurrencePattern) };
    inline Models::CreateEventResponseBodyRecurrencePattern pattern() { DARABONBA_PTR_GET(pattern_, Models::CreateEventResponseBodyRecurrencePattern) };
    inline CreateEventResponseBodyRecurrence& setPattern(const Models::CreateEventResponseBodyRecurrencePattern & pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };
    inline CreateEventResponseBodyRecurrence& setPattern(Models::CreateEventResponseBodyRecurrencePattern && pattern) { DARABONBA_PTR_SET_RVALUE(pattern_, pattern) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::CreateEventResponseBodyRecurrenceRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::CreateEventResponseBodyRecurrenceRange) };
    inline Models::CreateEventResponseBodyRecurrenceRange range() { DARABONBA_PTR_GET(range_, Models::CreateEventResponseBodyRecurrenceRange) };
    inline CreateEventResponseBodyRecurrence& setRange(const Models::CreateEventResponseBodyRecurrenceRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline CreateEventResponseBodyRecurrence& setRange(Models::CreateEventResponseBodyRecurrenceRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


  protected:
    std::shared_ptr<Models::CreateEventResponseBodyRecurrencePattern> pattern_ = nullptr;
    std::shared_ptr<Models::CreateEventResponseBodyRecurrenceRange> range_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYRECURRENCE_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYRECURRENCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventResponseBodyRecurrencePattern.hpp>
#include <alibabacloud/models/GetEventResponseBodyRecurrenceRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetEventResponseBodyRecurrence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventResponseBodyRecurrence& obj) { 
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(Range, range_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventResponseBodyRecurrence& obj) { 
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
    };
    GetEventResponseBodyRecurrence() = default ;
    GetEventResponseBodyRecurrence(const GetEventResponseBodyRecurrence &) = default ;
    GetEventResponseBodyRecurrence(GetEventResponseBodyRecurrence &&) = default ;
    GetEventResponseBodyRecurrence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventResponseBodyRecurrence() = default ;
    GetEventResponseBodyRecurrence& operator=(const GetEventResponseBodyRecurrence &) = default ;
    GetEventResponseBodyRecurrence& operator=(GetEventResponseBodyRecurrence &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pattern_ != nullptr
        && this->range_ != nullptr; };
    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline const Models::GetEventResponseBodyRecurrencePattern & pattern() const { DARABONBA_PTR_GET_CONST(pattern_, Models::GetEventResponseBodyRecurrencePattern) };
    inline Models::GetEventResponseBodyRecurrencePattern pattern() { DARABONBA_PTR_GET(pattern_, Models::GetEventResponseBodyRecurrencePattern) };
    inline GetEventResponseBodyRecurrence& setPattern(const Models::GetEventResponseBodyRecurrencePattern & pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };
    inline GetEventResponseBodyRecurrence& setPattern(Models::GetEventResponseBodyRecurrencePattern && pattern) { DARABONBA_PTR_SET_RVALUE(pattern_, pattern) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::GetEventResponseBodyRecurrenceRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::GetEventResponseBodyRecurrenceRange) };
    inline Models::GetEventResponseBodyRecurrenceRange range() { DARABONBA_PTR_GET(range_, Models::GetEventResponseBodyRecurrenceRange) };
    inline GetEventResponseBodyRecurrence& setRange(const Models::GetEventResponseBodyRecurrenceRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline GetEventResponseBodyRecurrence& setRange(Models::GetEventResponseBodyRecurrenceRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


  protected:
    std::shared_ptr<Models::GetEventResponseBodyRecurrencePattern> pattern_ = nullptr;
    std::shared_ptr<Models::GetEventResponseBodyRecurrenceRange> range_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

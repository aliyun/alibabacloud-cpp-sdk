// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODYRECURRENCE_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODYRECURRENCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PatchEventResponseBodyRecurrencePattern.hpp>
#include <alibabacloud/models/PatchEventResponseBodyRecurrenceRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventResponseBodyRecurrence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventResponseBodyRecurrence& obj) { 
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(Range, range_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventResponseBodyRecurrence& obj) { 
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
    };
    PatchEventResponseBodyRecurrence() = default ;
    PatchEventResponseBodyRecurrence(const PatchEventResponseBodyRecurrence &) = default ;
    PatchEventResponseBodyRecurrence(PatchEventResponseBodyRecurrence &&) = default ;
    PatchEventResponseBodyRecurrence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventResponseBodyRecurrence() = default ;
    PatchEventResponseBodyRecurrence& operator=(const PatchEventResponseBodyRecurrence &) = default ;
    PatchEventResponseBodyRecurrence& operator=(PatchEventResponseBodyRecurrence &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pattern_ != nullptr
        && this->range_ != nullptr; };
    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline const Models::PatchEventResponseBodyRecurrencePattern & pattern() const { DARABONBA_PTR_GET_CONST(pattern_, Models::PatchEventResponseBodyRecurrencePattern) };
    inline Models::PatchEventResponseBodyRecurrencePattern pattern() { DARABONBA_PTR_GET(pattern_, Models::PatchEventResponseBodyRecurrencePattern) };
    inline PatchEventResponseBodyRecurrence& setPattern(const Models::PatchEventResponseBodyRecurrencePattern & pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };
    inline PatchEventResponseBodyRecurrence& setPattern(Models::PatchEventResponseBodyRecurrencePattern && pattern) { DARABONBA_PTR_SET_RVALUE(pattern_, pattern) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::PatchEventResponseBodyRecurrenceRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::PatchEventResponseBodyRecurrenceRange) };
    inline Models::PatchEventResponseBodyRecurrenceRange range() { DARABONBA_PTR_GET(range_, Models::PatchEventResponseBodyRecurrenceRange) };
    inline PatchEventResponseBodyRecurrence& setRange(const Models::PatchEventResponseBodyRecurrenceRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline PatchEventResponseBodyRecurrence& setRange(Models::PatchEventResponseBodyRecurrenceRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


  protected:
    std::shared_ptr<Models::PatchEventResponseBodyRecurrencePattern> pattern_ = nullptr;
    std::shared_ptr<Models::PatchEventResponseBodyRecurrenceRange> range_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

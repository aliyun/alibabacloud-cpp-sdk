// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSRECURRENCE_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSRECURRENCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsRecurrencePattern.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsRecurrenceRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBodyEventsRecurrence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBodyEventsRecurrence& obj) { 
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(Range, range_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBodyEventsRecurrence& obj) { 
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
    };
    ListEventsResponseBodyEventsRecurrence() = default ;
    ListEventsResponseBodyEventsRecurrence(const ListEventsResponseBodyEventsRecurrence &) = default ;
    ListEventsResponseBodyEventsRecurrence(ListEventsResponseBodyEventsRecurrence &&) = default ;
    ListEventsResponseBodyEventsRecurrence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBodyEventsRecurrence() = default ;
    ListEventsResponseBodyEventsRecurrence& operator=(const ListEventsResponseBodyEventsRecurrence &) = default ;
    ListEventsResponseBodyEventsRecurrence& operator=(ListEventsResponseBodyEventsRecurrence &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pattern_ != nullptr
        && this->range_ != nullptr; };
    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsRecurrencePattern & pattern() const { DARABONBA_PTR_GET_CONST(pattern_, Models::ListEventsResponseBodyEventsRecurrencePattern) };
    inline Models::ListEventsResponseBodyEventsRecurrencePattern pattern() { DARABONBA_PTR_GET(pattern_, Models::ListEventsResponseBodyEventsRecurrencePattern) };
    inline ListEventsResponseBodyEventsRecurrence& setPattern(const Models::ListEventsResponseBodyEventsRecurrencePattern & pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };
    inline ListEventsResponseBodyEventsRecurrence& setPattern(Models::ListEventsResponseBodyEventsRecurrencePattern && pattern) { DARABONBA_PTR_SET_RVALUE(pattern_, pattern) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsRecurrenceRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::ListEventsResponseBodyEventsRecurrenceRange) };
    inline Models::ListEventsResponseBodyEventsRecurrenceRange range() { DARABONBA_PTR_GET(range_, Models::ListEventsResponseBodyEventsRecurrenceRange) };
    inline ListEventsResponseBodyEventsRecurrence& setRange(const Models::ListEventsResponseBodyEventsRecurrenceRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline ListEventsResponseBodyEventsRecurrence& setRange(Models::ListEventsResponseBodyEventsRecurrenceRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


  protected:
    std::shared_ptr<Models::ListEventsResponseBodyEventsRecurrencePattern> pattern_ = nullptr;
    std::shared_ptr<Models::ListEventsResponseBodyEventsRecurrenceRange> range_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTSRECURRENCE_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTSRECURRENCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsRecurrencePattern.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsRecurrenceRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsViewResponseBodyEventsRecurrence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsViewResponseBodyEventsRecurrence& obj) { 
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(Range, range_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsViewResponseBodyEventsRecurrence& obj) { 
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
    };
    ListEventsViewResponseBodyEventsRecurrence() = default ;
    ListEventsViewResponseBodyEventsRecurrence(const ListEventsViewResponseBodyEventsRecurrence &) = default ;
    ListEventsViewResponseBodyEventsRecurrence(ListEventsViewResponseBodyEventsRecurrence &&) = default ;
    ListEventsViewResponseBodyEventsRecurrence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsViewResponseBodyEventsRecurrence() = default ;
    ListEventsViewResponseBodyEventsRecurrence& operator=(const ListEventsViewResponseBodyEventsRecurrence &) = default ;
    ListEventsViewResponseBodyEventsRecurrence& operator=(ListEventsViewResponseBodyEventsRecurrence &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pattern_ != nullptr
        && this->range_ != nullptr; };
    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsRecurrencePattern & pattern() const { DARABONBA_PTR_GET_CONST(pattern_, Models::ListEventsViewResponseBodyEventsRecurrencePattern) };
    inline Models::ListEventsViewResponseBodyEventsRecurrencePattern pattern() { DARABONBA_PTR_GET(pattern_, Models::ListEventsViewResponseBodyEventsRecurrencePattern) };
    inline ListEventsViewResponseBodyEventsRecurrence& setPattern(const Models::ListEventsViewResponseBodyEventsRecurrencePattern & pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };
    inline ListEventsViewResponseBodyEventsRecurrence& setPattern(Models::ListEventsViewResponseBodyEventsRecurrencePattern && pattern) { DARABONBA_PTR_SET_RVALUE(pattern_, pattern) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsRecurrenceRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::ListEventsViewResponseBodyEventsRecurrenceRange) };
    inline Models::ListEventsViewResponseBodyEventsRecurrenceRange range() { DARABONBA_PTR_GET(range_, Models::ListEventsViewResponseBodyEventsRecurrenceRange) };
    inline ListEventsViewResponseBodyEventsRecurrence& setRange(const Models::ListEventsViewResponseBodyEventsRecurrenceRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline ListEventsViewResponseBodyEventsRecurrence& setRange(Models::ListEventsViewResponseBodyEventsRecurrenceRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


  protected:
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsRecurrencePattern> pattern_ = nullptr;
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsRecurrenceRange> range_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

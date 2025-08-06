// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTREQUESTRECURRENCE_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTREQUESTRECURRENCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PatchEventRequestRecurrencePattern.hpp>
#include <alibabacloud/models/PatchEventRequestRecurrenceRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventRequestRecurrence : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventRequestRecurrence& obj) { 
      DARABONBA_PTR_TO_JSON(pattern, pattern_);
      DARABONBA_PTR_TO_JSON(range, range_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventRequestRecurrence& obj) { 
      DARABONBA_PTR_FROM_JSON(pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(range, range_);
    };
    PatchEventRequestRecurrence() = default ;
    PatchEventRequestRecurrence(const PatchEventRequestRecurrence &) = default ;
    PatchEventRequestRecurrence(PatchEventRequestRecurrence &&) = default ;
    PatchEventRequestRecurrence(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventRequestRecurrence() = default ;
    PatchEventRequestRecurrence& operator=(const PatchEventRequestRecurrence &) = default ;
    PatchEventRequestRecurrence& operator=(PatchEventRequestRecurrence &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pattern_ != nullptr
        && this->range_ != nullptr; };
    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline const Models::PatchEventRequestRecurrencePattern & pattern() const { DARABONBA_PTR_GET_CONST(pattern_, Models::PatchEventRequestRecurrencePattern) };
    inline Models::PatchEventRequestRecurrencePattern pattern() { DARABONBA_PTR_GET(pattern_, Models::PatchEventRequestRecurrencePattern) };
    inline PatchEventRequestRecurrence& setPattern(const Models::PatchEventRequestRecurrencePattern & pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };
    inline PatchEventRequestRecurrence& setPattern(Models::PatchEventRequestRecurrencePattern && pattern) { DARABONBA_PTR_SET_RVALUE(pattern_, pattern) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::PatchEventRequestRecurrenceRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::PatchEventRequestRecurrenceRange) };
    inline Models::PatchEventRequestRecurrenceRange range() { DARABONBA_PTR_GET(range_, Models::PatchEventRequestRecurrenceRange) };
    inline PatchEventRequestRecurrence& setRange(const Models::PatchEventRequestRecurrenceRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline PatchEventRequestRecurrence& setRange(Models::PatchEventRequestRecurrenceRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


  protected:
    std::shared_ptr<Models::PatchEventRequestRecurrencePattern> pattern_ = nullptr;
    std::shared_ptr<Models::PatchEventRequestRecurrenceRange> range_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

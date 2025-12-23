// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEDTASKFILTER_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEDTASKFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ScheduledTaskFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduledTaskFilter& obj) { 
      DARABONBA_PTR_TO_JSON(days, days_);
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(field, field_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduledTaskFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(days, days_);
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(field, field_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    ScheduledTaskFilter() = default ;
    ScheduledTaskFilter(const ScheduledTaskFilter &) = default ;
    ScheduledTaskFilter(ScheduledTaskFilter &&) = default ;
    ScheduledTaskFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduledTaskFilter() = default ;
    ScheduledTaskFilter& operator=(const ScheduledTaskFilter &) = default ;
    ScheduledTaskFilter& operator=(ScheduledTaskFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->days_ == nullptr
        && return this->expression_ == nullptr && return this->field_ == nullptr && return this->unit_ == nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t days() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline ScheduledTaskFilter& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline ScheduledTaskFilter& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline ScheduledTaskFilter& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline ScheduledTaskFilter& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    std::shared_ptr<int32_t> days_ = nullptr;
    std::shared_ptr<string> expression_ = nullptr;
    std::shared_ptr<string> field_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif

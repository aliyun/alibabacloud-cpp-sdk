// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANSUBSCRIPTIONSCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANSUBSCRIPTIONSCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanSubscriptionsConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanSubscriptionsConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanSubscriptionsConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    MigrationJobPlanSubscriptionsConditions() = default ;
    MigrationJobPlanSubscriptionsConditions(const MigrationJobPlanSubscriptionsConditions &) = default ;
    MigrationJobPlanSubscriptionsConditions(MigrationJobPlanSubscriptionsConditions &&) = default ;
    MigrationJobPlanSubscriptionsConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanSubscriptionsConditions() = default ;
    MigrationJobPlanSubscriptionsConditions& operator=(const MigrationJobPlanSubscriptionsConditions &) = default ;
    MigrationJobPlanSubscriptionsConditions& operator=(MigrationJobPlanSubscriptionsConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->field_ != nullptr
        && this->op_ != nullptr && this->value_ != nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline MigrationJobPlanSubscriptionsConditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline MigrationJobPlanSubscriptionsConditions& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline MigrationJobPlanSubscriptionsConditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> field_ = nullptr;
    std::shared_ptr<string> op_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

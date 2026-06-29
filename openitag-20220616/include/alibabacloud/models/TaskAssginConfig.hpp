// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKASSGINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TASKASSGINCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class TaskAssginConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskAssginConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AssignCount, assignCount_);
      DARABONBA_PTR_TO_JSON(AssignField, assignField_);
      DARABONBA_PTR_TO_JSON(AssignSubTaskCount, assignSubTaskCount_);
      DARABONBA_PTR_TO_JSON(AssignType, assignType_);
    };
    friend void from_json(const Darabonba::Json& j, TaskAssginConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignCount, assignCount_);
      DARABONBA_PTR_FROM_JSON(AssignField, assignField_);
      DARABONBA_PTR_FROM_JSON(AssignSubTaskCount, assignSubTaskCount_);
      DARABONBA_PTR_FROM_JSON(AssignType, assignType_);
    };
    TaskAssginConfig() = default ;
    TaskAssginConfig(const TaskAssginConfig &) = default ;
    TaskAssginConfig(TaskAssginConfig &&) = default ;
    TaskAssginConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskAssginConfig() = default ;
    TaskAssginConfig& operator=(const TaskAssginConfig &) = default ;
    TaskAssginConfig& operator=(TaskAssginConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignCount_ == nullptr
        && this->assignField_ == nullptr && this->assignSubTaskCount_ == nullptr && this->assignType_ == nullptr; };
    // assignCount Field Functions 
    bool hasAssignCount() const { return this->assignCount_ != nullptr;};
    void deleteAssignCount() { this->assignCount_ = nullptr;};
    inline int64_t getAssignCount() const { DARABONBA_PTR_GET_DEFAULT(assignCount_, 0L) };
    inline TaskAssginConfig& setAssignCount(int64_t assignCount) { DARABONBA_PTR_SET_VALUE(assignCount_, assignCount) };


    // assignField Field Functions 
    bool hasAssignField() const { return this->assignField_ != nullptr;};
    void deleteAssignField() { this->assignField_ = nullptr;};
    inline string getAssignField() const { DARABONBA_PTR_GET_DEFAULT(assignField_, "") };
    inline TaskAssginConfig& setAssignField(string assignField) { DARABONBA_PTR_SET_VALUE(assignField_, assignField) };


    // assignSubTaskCount Field Functions 
    bool hasAssignSubTaskCount() const { return this->assignSubTaskCount_ != nullptr;};
    void deleteAssignSubTaskCount() { this->assignSubTaskCount_ = nullptr;};
    inline string getAssignSubTaskCount() const { DARABONBA_PTR_GET_DEFAULT(assignSubTaskCount_, "") };
    inline TaskAssginConfig& setAssignSubTaskCount(string assignSubTaskCount) { DARABONBA_PTR_SET_VALUE(assignSubTaskCount_, assignSubTaskCount) };


    // assignType Field Functions 
    bool hasAssignType() const { return this->assignType_ != nullptr;};
    void deleteAssignType() { this->assignType_ = nullptr;};
    inline string getAssignType() const { DARABONBA_PTR_GET_DEFAULT(assignType_, "") };
    inline TaskAssginConfig& setAssignType(string assignType) { DARABONBA_PTR_SET_VALUE(assignType_, assignType) };


  protected:
    // Allocation quantity.
    shared_ptr<int64_t> assignCount_ {};
    // Assign by field.
    shared_ptr<string> assignField_ {};
    // If average allocation is selected, specify the number of job packages.
    shared_ptr<string> assignSubTaskCount_ {};
    // The allocation rule for job packages. Valid values:
    // - FIXED_SIZE: Assign by fixed size.
    // - AVG_SIZE: Assign by average quantity.
    // - FIELD_BASE: Assign by imported field.
    shared_ptr<string> assignType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif

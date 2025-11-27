// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODYITEMSPARAMETERCHANGELOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODYITEMSPARAMETERCHANGELOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeModifyParameterLogResponseBodyItemsParameterChangeLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyParameterLogResponseBodyItemsParameterChangeLog& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(NewParameterValue, newParameterValue_);
      DARABONBA_PTR_TO_JSON(OldParameterValue, oldParameterValue_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyParameterLogResponseBodyItemsParameterChangeLog& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(NewParameterValue, newParameterValue_);
      DARABONBA_PTR_FROM_JSON(OldParameterValue, oldParameterValue_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeModifyParameterLogResponseBodyItemsParameterChangeLog() = default ;
    DescribeModifyParameterLogResponseBodyItemsParameterChangeLog(const DescribeModifyParameterLogResponseBodyItemsParameterChangeLog &) = default ;
    DescribeModifyParameterLogResponseBodyItemsParameterChangeLog(DescribeModifyParameterLogResponseBodyItemsParameterChangeLog &&) = default ;
    DescribeModifyParameterLogResponseBodyItemsParameterChangeLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyParameterLogResponseBodyItemsParameterChangeLog() = default ;
    DescribeModifyParameterLogResponseBodyItemsParameterChangeLog& operator=(const DescribeModifyParameterLogResponseBodyItemsParameterChangeLog &) = default ;
    DescribeModifyParameterLogResponseBodyItemsParameterChangeLog& operator=(DescribeModifyParameterLogResponseBodyItemsParameterChangeLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyTime_ == nullptr
        && return this->newParameterValue_ == nullptr && return this->oldParameterValue_ == nullptr && return this->parameterName_ == nullptr && return this->status_ == nullptr; };
    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeModifyParameterLogResponseBodyItemsParameterChangeLog& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // newParameterValue Field Functions 
    bool hasNewParameterValue() const { return this->newParameterValue_ != nullptr;};
    void deleteNewParameterValue() { this->newParameterValue_ = nullptr;};
    inline string newParameterValue() const { DARABONBA_PTR_GET_DEFAULT(newParameterValue_, "") };
    inline DescribeModifyParameterLogResponseBodyItemsParameterChangeLog& setNewParameterValue(string newParameterValue) { DARABONBA_PTR_SET_VALUE(newParameterValue_, newParameterValue) };


    // oldParameterValue Field Functions 
    bool hasOldParameterValue() const { return this->oldParameterValue_ != nullptr;};
    void deleteOldParameterValue() { this->oldParameterValue_ = nullptr;};
    inline string oldParameterValue() const { DARABONBA_PTR_GET_DEFAULT(oldParameterValue_, "") };
    inline DescribeModifyParameterLogResponseBodyItemsParameterChangeLog& setOldParameterValue(string oldParameterValue) { DARABONBA_PTR_SET_VALUE(oldParameterValue_, oldParameterValue) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline DescribeModifyParameterLogResponseBodyItemsParameterChangeLog& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeModifyParameterLogResponseBodyItemsParameterChangeLog& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the parameter was modified. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The new value of the parameter.
    std::shared_ptr<string> newParameterValue_ = nullptr;
    // The original value of the parameter.
    std::shared_ptr<string> oldParameterValue_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The status. Valid values:
    // 
    // *   **Applied:** The new value has taken effect.
    // *   **Syncing:** The new value is being applied and has not taken effect.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

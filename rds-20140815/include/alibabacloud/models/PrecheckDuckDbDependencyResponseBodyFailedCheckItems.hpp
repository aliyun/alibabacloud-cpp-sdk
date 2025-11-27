// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKDUCKDBDEPENDENCYRESPONSEBODYFAILEDCHECKITEMS_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKDUCKDBDEPENDENCYRESPONSEBODYFAILEDCHECKITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class PrecheckDuckDBDependencyResponseBodyFailedCheckItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckDuckDBDependencyResponseBodyFailedCheckItems& obj) { 
      DARABONBA_PTR_TO_JSON(AllowAutoModify, allowAutoModify_);
      DARABONBA_PTR_TO_JSON(CurrentValue, currentValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequiredValue, requiredValue_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckDuckDBDependencyResponseBodyFailedCheckItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowAutoModify, allowAutoModify_);
      DARABONBA_PTR_FROM_JSON(CurrentValue, currentValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequiredValue, requiredValue_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    PrecheckDuckDBDependencyResponseBodyFailedCheckItems() = default ;
    PrecheckDuckDBDependencyResponseBodyFailedCheckItems(const PrecheckDuckDBDependencyResponseBodyFailedCheckItems &) = default ;
    PrecheckDuckDBDependencyResponseBodyFailedCheckItems(PrecheckDuckDBDependencyResponseBodyFailedCheckItems &&) = default ;
    PrecheckDuckDBDependencyResponseBodyFailedCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckDuckDBDependencyResponseBodyFailedCheckItems() = default ;
    PrecheckDuckDBDependencyResponseBodyFailedCheckItems& operator=(const PrecheckDuckDBDependencyResponseBodyFailedCheckItems &) = default ;
    PrecheckDuckDBDependencyResponseBodyFailedCheckItems& operator=(PrecheckDuckDBDependencyResponseBodyFailedCheckItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowAutoModify_ == nullptr
        && return this->currentValue_ == nullptr && return this->name_ == nullptr && return this->requiredValue_ == nullptr && return this->type_ == nullptr; };
    // allowAutoModify Field Functions 
    bool hasAllowAutoModify() const { return this->allowAutoModify_ != nullptr;};
    void deleteAllowAutoModify() { this->allowAutoModify_ = nullptr;};
    inline bool allowAutoModify() const { DARABONBA_PTR_GET_DEFAULT(allowAutoModify_, false) };
    inline PrecheckDuckDBDependencyResponseBodyFailedCheckItems& setAllowAutoModify(bool allowAutoModify) { DARABONBA_PTR_SET_VALUE(allowAutoModify_, allowAutoModify) };


    // currentValue Field Functions 
    bool hasCurrentValue() const { return this->currentValue_ != nullptr;};
    void deleteCurrentValue() { this->currentValue_ = nullptr;};
    inline string currentValue() const { DARABONBA_PTR_GET_DEFAULT(currentValue_, "") };
    inline PrecheckDuckDBDependencyResponseBodyFailedCheckItems& setCurrentValue(string currentValue) { DARABONBA_PTR_SET_VALUE(currentValue_, currentValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PrecheckDuckDBDependencyResponseBodyFailedCheckItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requiredValue Field Functions 
    bool hasRequiredValue() const { return this->requiredValue_ != nullptr;};
    void deleteRequiredValue() { this->requiredValue_ = nullptr;};
    inline string requiredValue() const { DARABONBA_PTR_GET_DEFAULT(requiredValue_, "") };
    inline PrecheckDuckDBDependencyResponseBodyFailedCheckItems& setRequiredValue(string requiredValue) { DARABONBA_PTR_SET_VALUE(requiredValue_, requiredValue) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PrecheckDuckDBDependencyResponseBodyFailedCheckItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the item can be changed with one click to meet the requirements.
    // 
    // *   **true**: Yes. You can call the [ModifyDBInstanceConfig](https://help.aliyun.com/document_detail/2623684.html) operation to change the item with one click.
    // *   **false**: No.
    // 
    // >  If the major engine version of the primary does not meet the requirements, you must manually upgrade it.
    std::shared_ptr<bool> allowAutoModify_ = nullptr;
    // The current value of the check item.
    std::shared_ptr<string> currentValue_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> name_ = nullptr;
    // The value or value range that meets the requirements.
    std::shared_ptr<string> requiredValue_ = nullptr;
    // The check item. Valid values:
    // 
    // *   **Parameter**: The parameters of the primary instance.
    // *   **MinorVersion**: The minor engine version of the primary instance.
    // *   **MajorVersion**: The major engine version of the primary instance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

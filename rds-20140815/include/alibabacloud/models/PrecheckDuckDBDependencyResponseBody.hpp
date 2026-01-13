// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKDUCKDBDEPENDENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKDUCKDBDEPENDENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class PrecheckDuckDBDependencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckDuckDBDependencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCheckItems, failedCheckItems_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckDuckDBDependencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCheckItems, failedCheckItems_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    PrecheckDuckDBDependencyResponseBody() = default ;
    PrecheckDuckDBDependencyResponseBody(const PrecheckDuckDBDependencyResponseBody &) = default ;
    PrecheckDuckDBDependencyResponseBody(PrecheckDuckDBDependencyResponseBody &&) = default ;
    PrecheckDuckDBDependencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckDuckDBDependencyResponseBody() = default ;
    PrecheckDuckDBDependencyResponseBody& operator=(const PrecheckDuckDBDependencyResponseBody &) = default ;
    PrecheckDuckDBDependencyResponseBody& operator=(PrecheckDuckDBDependencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailedCheckItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedCheckItems& obj) { 
        DARABONBA_PTR_TO_JSON(AllowAutoModify, allowAutoModify_);
        DARABONBA_PTR_TO_JSON(CurrentValue, currentValue_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RequiredValue, requiredValue_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, FailedCheckItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowAutoModify, allowAutoModify_);
        DARABONBA_PTR_FROM_JSON(CurrentValue, currentValue_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RequiredValue, requiredValue_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      FailedCheckItems() = default ;
      FailedCheckItems(const FailedCheckItems &) = default ;
      FailedCheckItems(FailedCheckItems &&) = default ;
      FailedCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedCheckItems() = default ;
      FailedCheckItems& operator=(const FailedCheckItems &) = default ;
      FailedCheckItems& operator=(FailedCheckItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowAutoModify_ == nullptr
        && this->currentValue_ == nullptr && this->name_ == nullptr && this->requiredValue_ == nullptr && this->type_ == nullptr; };
      // allowAutoModify Field Functions 
      bool hasAllowAutoModify() const { return this->allowAutoModify_ != nullptr;};
      void deleteAllowAutoModify() { this->allowAutoModify_ = nullptr;};
      inline bool getAllowAutoModify() const { DARABONBA_PTR_GET_DEFAULT(allowAutoModify_, false) };
      inline FailedCheckItems& setAllowAutoModify(bool allowAutoModify) { DARABONBA_PTR_SET_VALUE(allowAutoModify_, allowAutoModify) };


      // currentValue Field Functions 
      bool hasCurrentValue() const { return this->currentValue_ != nullptr;};
      void deleteCurrentValue() { this->currentValue_ = nullptr;};
      inline string getCurrentValue() const { DARABONBA_PTR_GET_DEFAULT(currentValue_, "") };
      inline FailedCheckItems& setCurrentValue(string currentValue) { DARABONBA_PTR_SET_VALUE(currentValue_, currentValue) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FailedCheckItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // requiredValue Field Functions 
      bool hasRequiredValue() const { return this->requiredValue_ != nullptr;};
      void deleteRequiredValue() { this->requiredValue_ = nullptr;};
      inline string getRequiredValue() const { DARABONBA_PTR_GET_DEFAULT(requiredValue_, "") };
      inline FailedCheckItems& setRequiredValue(string requiredValue) { DARABONBA_PTR_SET_VALUE(requiredValue_, requiredValue) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline FailedCheckItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Indicates whether the item can be changed with one click to meet the requirements.
      // 
      // *   **true**: Yes. You can call the [ModifyDBInstanceConfig](https://help.aliyun.com/document_detail/2623684.html) operation to change the item with one click.
      // *   **false**: No.
      // 
      // >  If the major engine version of the primary does not meet the requirements, you must manually upgrade it.
      shared_ptr<bool> allowAutoModify_ {};
      // The current value of the check item.
      shared_ptr<string> currentValue_ {};
      // The name of the check item.
      shared_ptr<string> name_ {};
      // The value or value range that meets the requirements.
      shared_ptr<string> requiredValue_ {};
      // The check item. Valid values:
      // 
      // *   **Parameter**: The parameters of the primary instance.
      // *   **MinorVersion**: The minor engine version of the primary instance.
      // *   **MajorVersion**: The major engine version of the primary instance.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->failedCheckItems_ == nullptr
        && this->result_ == nullptr; };
    // failedCheckItems Field Functions 
    bool hasFailedCheckItems() const { return this->failedCheckItems_ != nullptr;};
    void deleteFailedCheckItems() { this->failedCheckItems_ = nullptr;};
    inline const vector<PrecheckDuckDBDependencyResponseBody::FailedCheckItems> & getFailedCheckItems() const { DARABONBA_PTR_GET_CONST(failedCheckItems_, vector<PrecheckDuckDBDependencyResponseBody::FailedCheckItems>) };
    inline vector<PrecheckDuckDBDependencyResponseBody::FailedCheckItems> getFailedCheckItems() { DARABONBA_PTR_GET(failedCheckItems_, vector<PrecheckDuckDBDependencyResponseBody::FailedCheckItems>) };
    inline PrecheckDuckDBDependencyResponseBody& setFailedCheckItems(const vector<PrecheckDuckDBDependencyResponseBody::FailedCheckItems> & failedCheckItems) { DARABONBA_PTR_SET_VALUE(failedCheckItems_, failedCheckItems) };
    inline PrecheckDuckDBDependencyResponseBody& setFailedCheckItems(vector<PrecheckDuckDBDependencyResponseBody::FailedCheckItems> && failedCheckItems) { DARABONBA_PTR_SET_RVALUE(failedCheckItems_, failedCheckItems) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline PrecheckDuckDBDependencyResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The check items that do not meet the requirements for creating DuckDB-based analytical instances.
    shared_ptr<vector<PrecheckDuckDBDependencyResponseBody::FailedCheckItems>> failedCheckItems_ {};
    // Indicates whether the primary instance meet the requirements for creating DuckDB-based analytical instances. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

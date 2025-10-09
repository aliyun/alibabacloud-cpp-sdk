// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFOALERTRULESTRIGGERCONDITIONEXTENSION_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFOALERTRULESTRIGGERCONDITIONEXTENSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished.hpp>
#include <alibabacloud/models/ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionError.hpp>
#include <alibabacloud/models/ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount.hpp>
#include <alibabacloud/models/ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorPercentage.hpp>
#include <alibabacloud/models/ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceTransferFluctuate.hpp>
#include <alibabacloud/models/ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionTimeout.hpp>
#include <alibabacloud/models/ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionUnFinished.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& obj) { 
      DARABONBA_PTR_TO_JSON(CycleUnfinished, cycleUnfinished_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(InstanceErrorCount, instanceErrorCount_);
      DARABONBA_PTR_TO_JSON(InstanceErrorPercentage, instanceErrorPercentage_);
      DARABONBA_PTR_TO_JSON(InstanceTransferFluctuate, instanceTransferFluctuate_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UnFinished, unFinished_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleUnfinished, cycleUnfinished_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(InstanceErrorCount, instanceErrorCount_);
      DARABONBA_PTR_FROM_JSON(InstanceErrorPercentage, instanceErrorPercentage_);
      DARABONBA_PTR_FROM_JSON(InstanceTransferFluctuate, instanceTransferFluctuate_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UnFinished, unFinished_);
    };
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension() = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension(const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension &) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension(ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension &&) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension() = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& operator=(const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension &) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& operator=(ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycleUnfinished_ != nullptr
        && this->error_ != nullptr && this->instanceErrorCount_ != nullptr && this->instanceErrorPercentage_ != nullptr && this->instanceTransferFluctuate_ != nullptr && this->timeout_ != nullptr
        && this->unFinished_ != nullptr; };
    // cycleUnfinished Field Functions 
    bool hasCycleUnfinished() const { return this->cycleUnfinished_ != nullptr;};
    void deleteCycleUnfinished() { this->cycleUnfinished_ = nullptr;};
    inline const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished & cycleUnfinished() const { DARABONBA_PTR_GET_CONST(cycleUnfinished_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished) };
    inline Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished cycleUnfinished() { DARABONBA_PTR_GET(cycleUnfinished_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setCycleUnfinished(const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished & cycleUnfinished) { DARABONBA_PTR_SET_VALUE(cycleUnfinished_, cycleUnfinished) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setCycleUnfinished(Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished && cycleUnfinished) { DARABONBA_PTR_SET_RVALUE(cycleUnfinished_, cycleUnfinished) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionError & error() const { DARABONBA_PTR_GET_CONST(error_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionError) };
    inline Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionError error() { DARABONBA_PTR_GET(error_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionError) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setError(const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionError & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setError(Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionError && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // instanceErrorCount Field Functions 
    bool hasInstanceErrorCount() const { return this->instanceErrorCount_ != nullptr;};
    void deleteInstanceErrorCount() { this->instanceErrorCount_ = nullptr;};
    inline const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount & instanceErrorCount() const { DARABONBA_PTR_GET_CONST(instanceErrorCount_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount) };
    inline Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount instanceErrorCount() { DARABONBA_PTR_GET(instanceErrorCount_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setInstanceErrorCount(const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount & instanceErrorCount) { DARABONBA_PTR_SET_VALUE(instanceErrorCount_, instanceErrorCount) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setInstanceErrorCount(Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount && instanceErrorCount) { DARABONBA_PTR_SET_RVALUE(instanceErrorCount_, instanceErrorCount) };


    // instanceErrorPercentage Field Functions 
    bool hasInstanceErrorPercentage() const { return this->instanceErrorPercentage_ != nullptr;};
    void deleteInstanceErrorPercentage() { this->instanceErrorPercentage_ = nullptr;};
    inline const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorPercentage & instanceErrorPercentage() const { DARABONBA_PTR_GET_CONST(instanceErrorPercentage_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorPercentage) };
    inline Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorPercentage instanceErrorPercentage() { DARABONBA_PTR_GET(instanceErrorPercentage_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorPercentage) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setInstanceErrorPercentage(const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorPercentage & instanceErrorPercentage) { DARABONBA_PTR_SET_VALUE(instanceErrorPercentage_, instanceErrorPercentage) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setInstanceErrorPercentage(Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorPercentage && instanceErrorPercentage) { DARABONBA_PTR_SET_RVALUE(instanceErrorPercentage_, instanceErrorPercentage) };


    // instanceTransferFluctuate Field Functions 
    bool hasInstanceTransferFluctuate() const { return this->instanceTransferFluctuate_ != nullptr;};
    void deleteInstanceTransferFluctuate() { this->instanceTransferFluctuate_ = nullptr;};
    inline const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceTransferFluctuate & instanceTransferFluctuate() const { DARABONBA_PTR_GET_CONST(instanceTransferFluctuate_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceTransferFluctuate) };
    inline Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceTransferFluctuate instanceTransferFluctuate() { DARABONBA_PTR_GET(instanceTransferFluctuate_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceTransferFluctuate) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setInstanceTransferFluctuate(const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceTransferFluctuate & instanceTransferFluctuate) { DARABONBA_PTR_SET_VALUE(instanceTransferFluctuate_, instanceTransferFluctuate) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setInstanceTransferFluctuate(Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceTransferFluctuate && instanceTransferFluctuate) { DARABONBA_PTR_SET_RVALUE(instanceTransferFluctuate_, instanceTransferFluctuate) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionTimeout & timeout() const { DARABONBA_PTR_GET_CONST(timeout_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionTimeout) };
    inline Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionTimeout timeout() { DARABONBA_PTR_GET(timeout_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionTimeout) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setTimeout(const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionTimeout & timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setTimeout(Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionTimeout && timeout) { DARABONBA_PTR_SET_RVALUE(timeout_, timeout) };


    // unFinished Field Functions 
    bool hasUnFinished() const { return this->unFinished_ != nullptr;};
    void deleteUnFinished() { this->unFinished_ = nullptr;};
    inline const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionUnFinished & unFinished() const { DARABONBA_PTR_GET_CONST(unFinished_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionUnFinished) };
    inline Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionUnFinished unFinished() { DARABONBA_PTR_GET(unFinished_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionUnFinished) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setUnFinished(const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionUnFinished & unFinished) { DARABONBA_PTR_SET_VALUE(unFinished_, unFinished) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtension& setUnFinished(Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionUnFinished && unFinished) { DARABONBA_PTR_SET_RVALUE(unFinished_, unFinished) };


  protected:
    // The configuration for an alert of the CycleUnfinished type.
    std::shared_ptr<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished> cycleUnfinished_ = nullptr;
    // The configuration for an alert of the Error type.
    std::shared_ptr<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionError> error_ = nullptr;
    // The configuration for an alert of the InstanceErrorCount type.
    std::shared_ptr<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount> instanceErrorCount_ = nullptr;
    // The configuration for an alert of the InstanceErrorPercentage type.
    std::shared_ptr<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorPercentage> instanceErrorPercentage_ = nullptr;
    // The configuration for an alert of the InstanceTransferFluctuate type.
    std::shared_ptr<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceTransferFluctuate> instanceTransferFluctuate_ = nullptr;
    // The configuration for an alert of the Timeout type.
    std::shared_ptr<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionTimeout> timeout_ = nullptr;
    // The configuration for an alert of the UnFinished type.
    std::shared_ptr<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionUnFinished> unFinished_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

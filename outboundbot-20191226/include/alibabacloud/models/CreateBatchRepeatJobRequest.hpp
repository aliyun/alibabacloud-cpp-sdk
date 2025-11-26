// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHREPEATJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHREPEATJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateBatchRepeatJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchRepeatJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FilterStatus, filterStatus_);
      DARABONBA_PTR_TO_JSON(FlashSmsExtras, flashSmsExtras_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RecallCallingNumber, recallCallingNumber_);
      DARABONBA_PTR_TO_JSON(RecallStrategyJson, recallStrategyJson_);
      DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SourceGroupId, sourceGroupId_);
      DARABONBA_PTR_TO_JSON(StrategyJson, strategyJson_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchRepeatJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FilterStatus, filterStatus_);
      DARABONBA_PTR_FROM_JSON(FlashSmsExtras, flashSmsExtras_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RecallCallingNumber, recallCallingNumber_);
      DARABONBA_PTR_FROM_JSON(RecallStrategyJson, recallStrategyJson_);
      DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SourceGroupId, sourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StrategyJson, strategyJson_);
    };
    CreateBatchRepeatJobRequest() = default ;
    CreateBatchRepeatJobRequest(const CreateBatchRepeatJobRequest &) = default ;
    CreateBatchRepeatJobRequest(CreateBatchRepeatJobRequest &&) = default ;
    CreateBatchRepeatJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchRepeatJobRequest() = default ;
    CreateBatchRepeatJobRequest& operator=(const CreateBatchRepeatJobRequest &) = default ;
    CreateBatchRepeatJobRequest& operator=(CreateBatchRepeatJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumber_ == nullptr
        && return this->description_ == nullptr && return this->filterStatus_ == nullptr && return this->flashSmsExtras_ == nullptr && return this->instanceId_ == nullptr && return this->minConcurrency_ == nullptr
        && return this->name_ == nullptr && return this->priority_ == nullptr && return this->recallCallingNumber_ == nullptr && return this->recallStrategyJson_ == nullptr && return this->ringingDuration_ == nullptr
        && return this->scriptId_ == nullptr && return this->sourceGroupId_ == nullptr && return this->strategyJson_ == nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & callingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> callingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline CreateBatchRepeatJobRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline CreateBatchRepeatJobRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBatchRepeatJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // filterStatus Field Functions 
    bool hasFilterStatus() const { return this->filterStatus_ != nullptr;};
    void deleteFilterStatus() { this->filterStatus_ = nullptr;};
    inline string filterStatus() const { DARABONBA_PTR_GET_DEFAULT(filterStatus_, "") };
    inline CreateBatchRepeatJobRequest& setFilterStatus(string filterStatus) { DARABONBA_PTR_SET_VALUE(filterStatus_, filterStatus) };


    // flashSmsExtras Field Functions 
    bool hasFlashSmsExtras() const { return this->flashSmsExtras_ != nullptr;};
    void deleteFlashSmsExtras() { this->flashSmsExtras_ = nullptr;};
    inline string flashSmsExtras() const { DARABONBA_PTR_GET_DEFAULT(flashSmsExtras_, "") };
    inline CreateBatchRepeatJobRequest& setFlashSmsExtras(string flashSmsExtras) { DARABONBA_PTR_SET_VALUE(flashSmsExtras_, flashSmsExtras) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBatchRepeatJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // minConcurrency Field Functions 
    bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
    void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
    inline int64_t minConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0L) };
    inline CreateBatchRepeatJobRequest& setMinConcurrency(int64_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBatchRepeatJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateBatchRepeatJobRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // recallCallingNumber Field Functions 
    bool hasRecallCallingNumber() const { return this->recallCallingNumber_ != nullptr;};
    void deleteRecallCallingNumber() { this->recallCallingNumber_ = nullptr;};
    inline const vector<string> & recallCallingNumber() const { DARABONBA_PTR_GET_CONST(recallCallingNumber_, vector<string>) };
    inline vector<string> recallCallingNumber() { DARABONBA_PTR_GET(recallCallingNumber_, vector<string>) };
    inline CreateBatchRepeatJobRequest& setRecallCallingNumber(const vector<string> & recallCallingNumber) { DARABONBA_PTR_SET_VALUE(recallCallingNumber_, recallCallingNumber) };
    inline CreateBatchRepeatJobRequest& setRecallCallingNumber(vector<string> && recallCallingNumber) { DARABONBA_PTR_SET_RVALUE(recallCallingNumber_, recallCallingNumber) };


    // recallStrategyJson Field Functions 
    bool hasRecallStrategyJson() const { return this->recallStrategyJson_ != nullptr;};
    void deleteRecallStrategyJson() { this->recallStrategyJson_ = nullptr;};
    inline string recallStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(recallStrategyJson_, "") };
    inline CreateBatchRepeatJobRequest& setRecallStrategyJson(string recallStrategyJson) { DARABONBA_PTR_SET_VALUE(recallStrategyJson_, recallStrategyJson) };


    // ringingDuration Field Functions 
    bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
    void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
    inline int64_t ringingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
    inline CreateBatchRepeatJobRequest& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateBatchRepeatJobRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // sourceGroupId Field Functions 
    bool hasSourceGroupId() const { return this->sourceGroupId_ != nullptr;};
    void deleteSourceGroupId() { this->sourceGroupId_ = nullptr;};
    inline string sourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(sourceGroupId_, "") };
    inline CreateBatchRepeatJobRequest& setSourceGroupId(string sourceGroupId) { DARABONBA_PTR_SET_VALUE(sourceGroupId_, sourceGroupId) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string strategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline CreateBatchRepeatJobRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


  protected:
    std::shared_ptr<vector<string>> callingNumber_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> filterStatus_ = nullptr;
    std::shared_ptr<string> flashSmsExtras_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> minConcurrency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<vector<string>> recallCallingNumber_ = nullptr;
    std::shared_ptr<string> recallStrategyJson_ = nullptr;
    std::shared_ptr<int64_t> ringingDuration_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceGroupId_ = nullptr;
    std::shared_ptr<string> strategyJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONERROR_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONERROR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAlertRuleRequestTriggerConditionExtensionError : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRuleRequestTriggerConditionExtensionError& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRerunAlertEnabled, autoRerunAlertEnabled_);
      DARABONBA_PTR_TO_JSON(StreamTaskIds, streamTaskIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRuleRequestTriggerConditionExtensionError& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRerunAlertEnabled, autoRerunAlertEnabled_);
      DARABONBA_PTR_FROM_JSON(StreamTaskIds, streamTaskIds_);
    };
    CreateAlertRuleRequestTriggerConditionExtensionError() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionError(const CreateAlertRuleRequestTriggerConditionExtensionError &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionError(CreateAlertRuleRequestTriggerConditionExtensionError &&) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionError(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRuleRequestTriggerConditionExtensionError() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionError& operator=(const CreateAlertRuleRequestTriggerConditionExtensionError &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionError& operator=(CreateAlertRuleRequestTriggerConditionExtensionError &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRerunAlertEnabled_ != nullptr
        && this->streamTaskIds_ != nullptr; };
    // autoRerunAlertEnabled Field Functions 
    bool hasAutoRerunAlertEnabled() const { return this->autoRerunAlertEnabled_ != nullptr;};
    void deleteAutoRerunAlertEnabled() { this->autoRerunAlertEnabled_ = nullptr;};
    inline bool autoRerunAlertEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRerunAlertEnabled_, false) };
    inline CreateAlertRuleRequestTriggerConditionExtensionError& setAutoRerunAlertEnabled(bool autoRerunAlertEnabled) { DARABONBA_PTR_SET_VALUE(autoRerunAlertEnabled_, autoRerunAlertEnabled) };


    // streamTaskIds Field Functions 
    bool hasStreamTaskIds() const { return this->streamTaskIds_ != nullptr;};
    void deleteStreamTaskIds() { this->streamTaskIds_ = nullptr;};
    inline const vector<int64_t> & streamTaskIds() const { DARABONBA_PTR_GET_CONST(streamTaskIds_, vector<int64_t>) };
    inline vector<int64_t> streamTaskIds() { DARABONBA_PTR_GET(streamTaskIds_, vector<int64_t>) };
    inline CreateAlertRuleRequestTriggerConditionExtensionError& setStreamTaskIds(const vector<int64_t> & streamTaskIds) { DARABONBA_PTR_SET_VALUE(streamTaskIds_, streamTaskIds) };
    inline CreateAlertRuleRequestTriggerConditionExtensionError& setStreamTaskIds(vector<int64_t> && streamTaskIds) { DARABONBA_PTR_SET_RVALUE(streamTaskIds_, streamTaskIds) };


  protected:
    // Specifies whether to trigger an alert if a batch synchronization task is automatically rerun upon a failure.
    std::shared_ptr<bool> autoRerunAlertEnabled_ = nullptr;
    // The IDs of the real-time computing tasks. This parameter is required when you monitor real-time computing tasks.
    std::shared_ptr<vector<int64_t>> streamTaskIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

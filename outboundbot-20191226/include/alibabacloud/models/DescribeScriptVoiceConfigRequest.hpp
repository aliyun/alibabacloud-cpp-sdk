// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCRIPTVOICECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCRIPTVOICECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeScriptVoiceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScriptVoiceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptVoiceConfigId, scriptVoiceConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScriptVoiceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptVoiceConfigId, scriptVoiceConfigId_);
    };
    DescribeScriptVoiceConfigRequest() = default ;
    DescribeScriptVoiceConfigRequest(const DescribeScriptVoiceConfigRequest &) = default ;
    DescribeScriptVoiceConfigRequest(DescribeScriptVoiceConfigRequest &&) = default ;
    DescribeScriptVoiceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScriptVoiceConfigRequest() = default ;
    DescribeScriptVoiceConfigRequest& operator=(const DescribeScriptVoiceConfigRequest &) = default ;
    DescribeScriptVoiceConfigRequest& operator=(DescribeScriptVoiceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->scriptId_ == nullptr && return this->scriptVoiceConfigId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeScriptVoiceConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DescribeScriptVoiceConfigRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptVoiceConfigId Field Functions 
    bool hasScriptVoiceConfigId() const { return this->scriptVoiceConfigId_ != nullptr;};
    void deleteScriptVoiceConfigId() { this->scriptVoiceConfigId_ = nullptr;};
    inline string scriptVoiceConfigId() const { DARABONBA_PTR_GET_DEFAULT(scriptVoiceConfigId_, "") };
    inline DescribeScriptVoiceConfigRequest& setScriptVoiceConfigId(string scriptVoiceConfigId) { DARABONBA_PTR_SET_VALUE(scriptVoiceConfigId_, scriptVoiceConfigId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptVoiceConfigId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

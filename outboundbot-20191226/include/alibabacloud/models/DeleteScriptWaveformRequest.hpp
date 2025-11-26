// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCRIPTWAVEFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCRIPTWAVEFORMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteScriptWaveformRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScriptWaveformRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptWaveformId, scriptWaveformId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScriptWaveformRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptWaveformId, scriptWaveformId_);
    };
    DeleteScriptWaveformRequest() = default ;
    DeleteScriptWaveformRequest(const DeleteScriptWaveformRequest &) = default ;
    DeleteScriptWaveformRequest(DeleteScriptWaveformRequest &&) = default ;
    DeleteScriptWaveformRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScriptWaveformRequest() = default ;
    DeleteScriptWaveformRequest& operator=(const DeleteScriptWaveformRequest &) = default ;
    DeleteScriptWaveformRequest& operator=(DeleteScriptWaveformRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->scriptId_ == nullptr && return this->scriptWaveformId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteScriptWaveformRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DeleteScriptWaveformRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptWaveformId Field Functions 
    bool hasScriptWaveformId() const { return this->scriptWaveformId_ != nullptr;};
    void deleteScriptWaveformId() { this->scriptWaveformId_ = nullptr;};
    inline string scriptWaveformId() const { DARABONBA_PTR_GET_DEFAULT(scriptWaveformId_, "") };
    inline DeleteScriptWaveformRequest& setScriptWaveformId(string scriptWaveformId) { DARABONBA_PTR_SET_VALUE(scriptWaveformId_, scriptWaveformId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptWaveformId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKSCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKSCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class RollbackScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RollbackVersion, rollbackVersion_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RollbackVersion, rollbackVersion_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    RollbackScriptRequest() = default ;
    RollbackScriptRequest(const RollbackScriptRequest &) = default ;
    RollbackScriptRequest(RollbackScriptRequest &&) = default ;
    RollbackScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackScriptRequest() = default ;
    RollbackScriptRequest& operator=(const RollbackScriptRequest &) = default ;
    RollbackScriptRequest& operator=(RollbackScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->rollbackVersion_ == nullptr && return this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RollbackScriptRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // rollbackVersion Field Functions 
    bool hasRollbackVersion() const { return this->rollbackVersion_ != nullptr;};
    void deleteRollbackVersion() { this->rollbackVersion_ = nullptr;};
    inline string rollbackVersion() const { DARABONBA_PTR_GET_DEFAULT(rollbackVersion_, "") };
    inline RollbackScriptRequest& setRollbackVersion(string rollbackVersion) { DARABONBA_PTR_SET_VALUE(rollbackVersion_, rollbackVersion) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline RollbackScriptRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rollbackVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

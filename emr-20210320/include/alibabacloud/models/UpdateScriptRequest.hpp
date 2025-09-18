// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Script.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class UpdateScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptType, scriptType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptType, scriptType_);
    };
    UpdateScriptRequest() = default ;
    UpdateScriptRequest(const UpdateScriptRequest &) = default ;
    UpdateScriptRequest(UpdateScriptRequest &&) = default ;
    UpdateScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScriptRequest() = default ;
    UpdateScriptRequest& operator=(const UpdateScriptRequest &) = default ;
    UpdateScriptRequest& operator=(UpdateScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr && this->script_ != nullptr && this->scriptId_ != nullptr && this->scriptType_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateScriptRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateScriptRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const Script & script() const { DARABONBA_PTR_GET_CONST(script_, Script) };
    inline Script script() { DARABONBA_PTR_GET(script_, Script) };
    inline UpdateScriptRequest& setScript(const Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline UpdateScriptRequest& setScript(Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline UpdateScriptRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptType Field Functions 
    bool hasScriptType() const { return this->scriptType_ != nullptr;};
    void deleteScriptType() { this->scriptType_ = nullptr;};
    inline string scriptType() const { DARABONBA_PTR_GET_DEFAULT(scriptType_, "") };
    inline UpdateScriptRequest& setScriptType(string scriptType) { DARABONBA_PTR_SET_VALUE(scriptType_, scriptType) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The script.
    // 
    // This parameter is required.
    std::shared_ptr<Script> script_ = nullptr;
    // The script ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
    // The type of the script. Valid values:
    // 
    // *   BOOTSTRAP: indicates a bootstrap action of the Elastic Compute Service (ECS) instance.
    // *   NORMAL: indicates a common script.
    // 
    // This parameter is required.
    std::shared_ptr<string> scriptType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

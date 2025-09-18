// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Script.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class CreateScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScriptType, scriptType_);
      DARABONBA_PTR_TO_JSON(Scripts, scripts_);
      DARABONBA_PTR_TO_JSON(TimeoutSecs, timeoutSecs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScriptType, scriptType_);
      DARABONBA_PTR_FROM_JSON(Scripts, scripts_);
      DARABONBA_PTR_FROM_JSON(TimeoutSecs, timeoutSecs_);
    };
    CreateScriptRequest() = default ;
    CreateScriptRequest(const CreateScriptRequest &) = default ;
    CreateScriptRequest(CreateScriptRequest &&) = default ;
    CreateScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScriptRequest() = default ;
    CreateScriptRequest& operator=(const CreateScriptRequest &) = default ;
    CreateScriptRequest& operator=(CreateScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr && this->scriptType_ != nullptr && this->scripts_ != nullptr && this->timeoutSecs_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateScriptRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateScriptRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scriptType Field Functions 
    bool hasScriptType() const { return this->scriptType_ != nullptr;};
    void deleteScriptType() { this->scriptType_ = nullptr;};
    inline string scriptType() const { DARABONBA_PTR_GET_DEFAULT(scriptType_, "") };
    inline CreateScriptRequest& setScriptType(string scriptType) { DARABONBA_PTR_SET_VALUE(scriptType_, scriptType) };


    // scripts Field Functions 
    bool hasScripts() const { return this->scripts_ != nullptr;};
    void deleteScripts() { this->scripts_ = nullptr;};
    inline const vector<Script> & scripts() const { DARABONBA_PTR_GET_CONST(scripts_, vector<Script>) };
    inline vector<Script> scripts() { DARABONBA_PTR_GET(scripts_, vector<Script>) };
    inline CreateScriptRequest& setScripts(const vector<Script> & scripts) { DARABONBA_PTR_SET_VALUE(scripts_, scripts) };
    inline CreateScriptRequest& setScripts(vector<Script> && scripts) { DARABONBA_PTR_SET_RVALUE(scripts_, scripts) };


    // timeoutSecs Field Functions 
    bool hasTimeoutSecs() const { return this->timeoutSecs_ != nullptr;};
    void deleteTimeoutSecs() { this->timeoutSecs_ = nullptr;};
    inline string timeoutSecs() const { DARABONBA_PTR_GET_DEFAULT(timeoutSecs_, "") };
    inline CreateScriptRequest& setTimeoutSecs(string timeoutSecs) { DARABONBA_PTR_SET_VALUE(timeoutSecs_, timeoutSecs) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the script. Valid values:
    // 
    // *   BOOTSTRAP: indicates a bootstrap action of the Elastic Compute Service (ECS) instance.
    // *   NORMAL: indicates a common script.
    // 
    // This parameter is required.
    std::shared_ptr<string> scriptType_ = nullptr;
    // The list of scripts.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Script>> scripts_ = nullptr;
    // The timeout period for a manual execution script. You cannot specify a timeout period for a bootstrap action.
    std::shared_ptr<string> timeoutSecs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCRIPTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCRIPTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class UpdateScriptShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScriptShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Script, scriptShrink_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptType, scriptType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScriptShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Script, scriptShrink_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptType, scriptType_);
    };
    UpdateScriptShrinkRequest() = default ;
    UpdateScriptShrinkRequest(const UpdateScriptShrinkRequest &) = default ;
    UpdateScriptShrinkRequest(UpdateScriptShrinkRequest &&) = default ;
    UpdateScriptShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScriptShrinkRequest() = default ;
    UpdateScriptShrinkRequest& operator=(const UpdateScriptShrinkRequest &) = default ;
    UpdateScriptShrinkRequest& operator=(UpdateScriptShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->regionId_ == nullptr && return this->scriptShrink_ == nullptr && return this->scriptId_ == nullptr && return this->scriptType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateScriptShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateScriptShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scriptShrink Field Functions 
    bool hasScriptShrink() const { return this->scriptShrink_ != nullptr;};
    void deleteScriptShrink() { this->scriptShrink_ = nullptr;};
    inline string scriptShrink() const { DARABONBA_PTR_GET_DEFAULT(scriptShrink_, "") };
    inline UpdateScriptShrinkRequest& setScriptShrink(string scriptShrink) { DARABONBA_PTR_SET_VALUE(scriptShrink_, scriptShrink) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline UpdateScriptShrinkRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptType Field Functions 
    bool hasScriptType() const { return this->scriptType_ != nullptr;};
    void deleteScriptType() { this->scriptType_ = nullptr;};
    inline string scriptType() const { DARABONBA_PTR_GET_DEFAULT(scriptType_, "") };
    inline UpdateScriptShrinkRequest& setScriptType(string scriptType) { DARABONBA_PTR_SET_VALUE(scriptType_, scriptType) };


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
    std::shared_ptr<string> scriptShrink_ = nullptr;
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

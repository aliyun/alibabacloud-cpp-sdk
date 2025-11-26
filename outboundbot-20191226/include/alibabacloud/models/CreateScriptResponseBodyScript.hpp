// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCRIPTRESPONSEBODYSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_CREATESCRIPTRESPONSEBODYSCRIPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateScriptResponseBodyScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScriptResponseBodyScript& obj) { 
      DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(IsDebugDrafted, isDebugDrafted_);
      DARABONBA_PTR_TO_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_TO_JSON(NluAccessType, nluAccessType_);
      DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScriptResponseBodyScript& obj) { 
      DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(IsDebugDrafted, isDebugDrafted_);
      DARABONBA_PTR_FROM_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_FROM_JSON(NluAccessType, nluAccessType_);
      DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    CreateScriptResponseBodyScript() = default ;
    CreateScriptResponseBodyScript(const CreateScriptResponseBodyScript &) = default ;
    CreateScriptResponseBodyScript(CreateScriptResponseBodyScript &&) = default ;
    CreateScriptResponseBodyScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScriptResponseBodyScript() = default ;
    CreateScriptResponseBodyScript& operator=(const CreateScriptResponseBodyScript &) = default ;
    CreateScriptResponseBodyScript& operator=(CreateScriptResponseBodyScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->debugStatus_ == nullptr
        && return this->industry_ == nullptr && return this->isDebugDrafted_ == nullptr && return this->isDrafted_ == nullptr && return this->nluAccessType_ == nullptr && return this->nluEngine_ == nullptr
        && return this->scene_ == nullptr && return this->scriptDescription_ == nullptr && return this->scriptId_ == nullptr && return this->scriptName_ == nullptr && return this->status_ == nullptr
        && return this->updateTime_ == nullptr; };
    // debugStatus Field Functions 
    bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
    void deleteDebugStatus() { this->debugStatus_ = nullptr;};
    inline string debugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, "") };
    inline CreateScriptResponseBodyScript& setDebugStatus(string debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline CreateScriptResponseBodyScript& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // isDebugDrafted Field Functions 
    bool hasIsDebugDrafted() const { return this->isDebugDrafted_ != nullptr;};
    void deleteIsDebugDrafted() { this->isDebugDrafted_ = nullptr;};
    inline bool isDebugDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDebugDrafted_, false) };
    inline CreateScriptResponseBodyScript& setIsDebugDrafted(bool isDebugDrafted) { DARABONBA_PTR_SET_VALUE(isDebugDrafted_, isDebugDrafted) };


    // isDrafted Field Functions 
    bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
    void deleteIsDrafted() { this->isDrafted_ = nullptr;};
    inline bool isDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
    inline CreateScriptResponseBodyScript& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


    // nluAccessType Field Functions 
    bool hasNluAccessType() const { return this->nluAccessType_ != nullptr;};
    void deleteNluAccessType() { this->nluAccessType_ = nullptr;};
    inline string nluAccessType() const { DARABONBA_PTR_GET_DEFAULT(nluAccessType_, "") };
    inline CreateScriptResponseBodyScript& setNluAccessType(string nluAccessType) { DARABONBA_PTR_SET_VALUE(nluAccessType_, nluAccessType) };


    // nluEngine Field Functions 
    bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
    void deleteNluEngine() { this->nluEngine_ = nullptr;};
    inline string nluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
    inline CreateScriptResponseBodyScript& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreateScriptResponseBodyScript& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // scriptDescription Field Functions 
    bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
    void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
    inline string scriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
    inline CreateScriptResponseBodyScript& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateScriptResponseBodyScript& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline CreateScriptResponseBodyScript& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateScriptResponseBodyScript& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline CreateScriptResponseBodyScript& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> debugStatus_ = nullptr;
    std::shared_ptr<string> industry_ = nullptr;
    std::shared_ptr<bool> isDebugDrafted_ = nullptr;
    std::shared_ptr<bool> isDrafted_ = nullptr;
    std::shared_ptr<string> nluAccessType_ = nullptr;
    std::shared_ptr<string> nluEngine_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> scriptDescription_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

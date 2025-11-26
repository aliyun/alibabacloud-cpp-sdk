// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCRIPTSBYSTATUSRESPONSEBODYSCRIPTSLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCRIPTSBYSTATUSRESPONSEBODYSCRIPTSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryScriptsByStatusResponseBodyScriptsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScriptsByStatusResponseBodyScriptsList& obj) { 
      DARABONBA_PTR_TO_JSON(AppliedVersion, appliedVersion_);
      DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_TO_JSON(DebugVersion, debugVersion_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(IsDebugDrafted, isDebugDrafted_);
      DARABONBA_PTR_TO_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScriptsByStatusResponseBodyScriptsList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppliedVersion, appliedVersion_);
      DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_FROM_JSON(DebugVersion, debugVersion_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(IsDebugDrafted, isDebugDrafted_);
      DARABONBA_PTR_FROM_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    QueryScriptsByStatusResponseBodyScriptsList() = default ;
    QueryScriptsByStatusResponseBodyScriptsList(const QueryScriptsByStatusResponseBodyScriptsList &) = default ;
    QueryScriptsByStatusResponseBodyScriptsList(QueryScriptsByStatusResponseBodyScriptsList &&) = default ;
    QueryScriptsByStatusResponseBodyScriptsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScriptsByStatusResponseBodyScriptsList() = default ;
    QueryScriptsByStatusResponseBodyScriptsList& operator=(const QueryScriptsByStatusResponseBodyScriptsList &) = default ;
    QueryScriptsByStatusResponseBodyScriptsList& operator=(QueryScriptsByStatusResponseBodyScriptsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appliedVersion_ == nullptr
        && return this->debugStatus_ == nullptr && return this->debugVersion_ == nullptr && return this->industry_ == nullptr && return this->isDebugDrafted_ == nullptr && return this->isDrafted_ == nullptr
        && return this->scene_ == nullptr && return this->scriptDescription_ == nullptr && return this->scriptId_ == nullptr && return this->scriptName_ == nullptr && return this->status_ == nullptr
        && return this->updateTime_ == nullptr; };
    // appliedVersion Field Functions 
    bool hasAppliedVersion() const { return this->appliedVersion_ != nullptr;};
    void deleteAppliedVersion() { this->appliedVersion_ = nullptr;};
    inline string appliedVersion() const { DARABONBA_PTR_GET_DEFAULT(appliedVersion_, "") };
    inline QueryScriptsByStatusResponseBodyScriptsList& setAppliedVersion(string appliedVersion) { DARABONBA_PTR_SET_VALUE(appliedVersion_, appliedVersion) };


    // debugStatus Field Functions 
    bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
    void deleteDebugStatus() { this->debugStatus_ = nullptr;};
    inline string debugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, "") };
    inline QueryScriptsByStatusResponseBodyScriptsList& setDebugStatus(string debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


    // debugVersion Field Functions 
    bool hasDebugVersion() const { return this->debugVersion_ != nullptr;};
    void deleteDebugVersion() { this->debugVersion_ = nullptr;};
    inline string debugVersion() const { DARABONBA_PTR_GET_DEFAULT(debugVersion_, "") };
    inline QueryScriptsByStatusResponseBodyScriptsList& setDebugVersion(string debugVersion) { DARABONBA_PTR_SET_VALUE(debugVersion_, debugVersion) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline QueryScriptsByStatusResponseBodyScriptsList& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // isDebugDrafted Field Functions 
    bool hasIsDebugDrafted() const { return this->isDebugDrafted_ != nullptr;};
    void deleteIsDebugDrafted() { this->isDebugDrafted_ = nullptr;};
    inline bool isDebugDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDebugDrafted_, false) };
    inline QueryScriptsByStatusResponseBodyScriptsList& setIsDebugDrafted(bool isDebugDrafted) { DARABONBA_PTR_SET_VALUE(isDebugDrafted_, isDebugDrafted) };


    // isDrafted Field Functions 
    bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
    void deleteIsDrafted() { this->isDrafted_ = nullptr;};
    inline bool isDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
    inline QueryScriptsByStatusResponseBodyScriptsList& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline QueryScriptsByStatusResponseBodyScriptsList& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // scriptDescription Field Functions 
    bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
    void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
    inline string scriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
    inline QueryScriptsByStatusResponseBodyScriptsList& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline QueryScriptsByStatusResponseBodyScriptsList& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline QueryScriptsByStatusResponseBodyScriptsList& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryScriptsByStatusResponseBodyScriptsList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline QueryScriptsByStatusResponseBodyScriptsList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> appliedVersion_ = nullptr;
    std::shared_ptr<string> debugStatus_ = nullptr;
    std::shared_ptr<string> debugVersion_ = nullptr;
    std::shared_ptr<string> industry_ = nullptr;
    std::shared_ptr<bool> isDebugDrafted_ = nullptr;
    std::shared_ptr<bool> isDrafted_ = nullptr;
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

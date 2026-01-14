// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOW_HPP_
#define ALIBABACLOUD_MODELS_FLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class Flow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Flow& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(CodeModeRunInfo, codeModeRunInfo_);
      DARABONBA_PTR_TO_JSON(CreateFrom, createFrom_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(FlowStoragePath, flowStoragePath_);
      DARABONBA_PTR_TO_JSON(FlowTemplateId, flowTemplateId_);
      DARABONBA_PTR_TO_JSON(FlowType, flowType_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
      DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_TO_JSON(SourceUri, sourceUri_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, Flow& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(CodeModeRunInfo, codeModeRunInfo_);
      DARABONBA_PTR_FROM_JSON(CreateFrom, createFrom_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(FlowStoragePath, flowStoragePath_);
      DARABONBA_PTR_FROM_JSON(FlowTemplateId, flowTemplateId_);
      DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_FROM_JSON(SourceUri, sourceUri_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    Flow() = default ;
    Flow(const Flow &) = default ;
    Flow(Flow &&) = default ;
    Flow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Flow() = default ;
    Flow& operator=(const Flow &) = default ;
    Flow& operator=(Flow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Runtime : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
        DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
        DARABONBA_PTR_TO_JSON(RuntimeName, runtimeName_);
        DARABONBA_PTR_TO_JSON(RuntimeStatus, runtimeStatus_);
        DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
        DARABONBA_PTR_TO_JSON(SupportSSEStream, supportSSEStream_);
      };
      friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
        DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
        DARABONBA_PTR_FROM_JSON(RuntimeName, runtimeName_);
        DARABONBA_PTR_FROM_JSON(RuntimeStatus, runtimeStatus_);
        DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
        DARABONBA_PTR_FROM_JSON(SupportSSEStream, supportSSEStream_);
      };
      Runtime() = default ;
      Runtime(const Runtime &) = default ;
      Runtime(Runtime &&) = default ;
      Runtime(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Runtime() = default ;
      Runtime& operator=(const Runtime &) = default ;
      Runtime& operator=(Runtime &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->runtimeId_ == nullptr
        && this->runtimeName_ == nullptr && this->runtimeStatus_ == nullptr && this->runtimeType_ == nullptr && this->supportSSEStream_ == nullptr; };
      // runtimeId Field Functions 
      bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
      void deleteRuntimeId() { this->runtimeId_ = nullptr;};
      inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
      inline Runtime& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


      // runtimeName Field Functions 
      bool hasRuntimeName() const { return this->runtimeName_ != nullptr;};
      void deleteRuntimeName() { this->runtimeName_ = nullptr;};
      inline string getRuntimeName() const { DARABONBA_PTR_GET_DEFAULT(runtimeName_, "") };
      inline Runtime& setRuntimeName(string runtimeName) { DARABONBA_PTR_SET_VALUE(runtimeName_, runtimeName) };


      // runtimeStatus Field Functions 
      bool hasRuntimeStatus() const { return this->runtimeStatus_ != nullptr;};
      void deleteRuntimeStatus() { this->runtimeStatus_ = nullptr;};
      inline string getRuntimeStatus() const { DARABONBA_PTR_GET_DEFAULT(runtimeStatus_, "") };
      inline Runtime& setRuntimeStatus(string runtimeStatus) { DARABONBA_PTR_SET_VALUE(runtimeStatus_, runtimeStatus) };


      // runtimeType Field Functions 
      bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
      void deleteRuntimeType() { this->runtimeType_ = nullptr;};
      inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
      inline Runtime& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


      // supportSSEStream Field Functions 
      bool hasSupportSSEStream() const { return this->supportSSEStream_ != nullptr;};
      void deleteSupportSSEStream() { this->supportSSEStream_ = nullptr;};
      inline bool getSupportSSEStream() const { DARABONBA_PTR_GET_DEFAULT(supportSSEStream_, false) };
      inline Runtime& setSupportSSEStream(bool supportSSEStream) { DARABONBA_PTR_SET_VALUE(supportSSEStream_, supportSSEStream) };


    protected:
      // 运行时ID
      shared_ptr<string> runtimeId_ {};
      // 运行时名称
      shared_ptr<string> runtimeName_ {};
      // 运行时状态
      shared_ptr<string> runtimeStatus_ {};
      // 运行时类型
      shared_ptr<string> runtimeType_ {};
      // 是否支持SSE
      shared_ptr<bool> supportSSEStream_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->codeModeRunInfo_ == nullptr && this->createFrom_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->flowId_ == nullptr
        && this->flowName_ == nullptr && this->flowStoragePath_ == nullptr && this->flowTemplateId_ == nullptr && this->flowType_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->runtime_ == nullptr && this->runtimeId_ == nullptr && this->sourceUri_ == nullptr && this->version_ == nullptr
        && this->workDir_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline Flow& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // codeModeRunInfo Field Functions 
    bool hasCodeModeRunInfo() const { return this->codeModeRunInfo_ != nullptr;};
    void deleteCodeModeRunInfo() { this->codeModeRunInfo_ = nullptr;};
    inline string getCodeModeRunInfo() const { DARABONBA_PTR_GET_DEFAULT(codeModeRunInfo_, "") };
    inline Flow& setCodeModeRunInfo(string codeModeRunInfo) { DARABONBA_PTR_SET_VALUE(codeModeRunInfo_, codeModeRunInfo) };


    // createFrom Field Functions 
    bool hasCreateFrom() const { return this->createFrom_ != nullptr;};
    void deleteCreateFrom() { this->createFrom_ = nullptr;};
    inline string getCreateFrom() const { DARABONBA_PTR_GET_DEFAULT(createFrom_, "") };
    inline Flow& setCreateFrom(string createFrom) { DARABONBA_PTR_SET_VALUE(createFrom_, createFrom) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Flow& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Flow& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline Flow& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline Flow& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // flowStoragePath Field Functions 
    bool hasFlowStoragePath() const { return this->flowStoragePath_ != nullptr;};
    void deleteFlowStoragePath() { this->flowStoragePath_ = nullptr;};
    inline string getFlowStoragePath() const { DARABONBA_PTR_GET_DEFAULT(flowStoragePath_, "") };
    inline Flow& setFlowStoragePath(string flowStoragePath) { DARABONBA_PTR_SET_VALUE(flowStoragePath_, flowStoragePath) };


    // flowTemplateId Field Functions 
    bool hasFlowTemplateId() const { return this->flowTemplateId_ != nullptr;};
    void deleteFlowTemplateId() { this->flowTemplateId_ = nullptr;};
    inline string getFlowTemplateId() const { DARABONBA_PTR_GET_DEFAULT(flowTemplateId_, "") };
    inline Flow& setFlowTemplateId(string flowTemplateId) { DARABONBA_PTR_SET_VALUE(flowTemplateId_, flowTemplateId) };


    // flowType Field Functions 
    bool hasFlowType() const { return this->flowType_ != nullptr;};
    void deleteFlowType() { this->flowType_ = nullptr;};
    inline string getFlowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
    inline Flow& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Flow& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline Flow& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Flow::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, Flow::Runtime) };
    inline Flow::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, Flow::Runtime) };
    inline Flow& setRuntime(const Flow::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline Flow& setRuntime(Flow::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline Flow& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // sourceUri Field Functions 
    bool hasSourceUri() const { return this->sourceUri_ != nullptr;};
    void deleteSourceUri() { this->sourceUri_ = nullptr;};
    inline string getSourceUri() const { DARABONBA_PTR_GET_DEFAULT(sourceUri_, "") };
    inline Flow& setSourceUri(string sourceUri) { DARABONBA_PTR_SET_VALUE(sourceUri_, sourceUri) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline Flow& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline Flow& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Flow& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> codeModeRunInfo_ {};
    shared_ptr<string> createFrom_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> flowId_ {};
    shared_ptr<string> flowName_ {};
    shared_ptr<string> flowStoragePath_ {};
    shared_ptr<string> flowTemplateId_ {};
    shared_ptr<string> flowType_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<Flow::Runtime> runtime_ {};
    shared_ptr<string> runtimeId_ {};
    shared_ptr<string> sourceUri_ {};
    shared_ptr<string> version_ {};
    shared_ptr<string> workDir_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif

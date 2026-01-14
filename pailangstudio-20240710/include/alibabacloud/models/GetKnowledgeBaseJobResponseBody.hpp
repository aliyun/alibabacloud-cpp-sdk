// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class GetKnowledgeBaseJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBaseJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_TO_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(JobAction, jobAction_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseJobId, knowledgeBaseJobId_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseJobResult, knowledgeBaseJobResult_);
      DARABONBA_PTR_TO_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(PipelineRunInfo, pipelineRunInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBaseJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_FROM_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(JobAction, jobAction_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseJobId, knowledgeBaseJobId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseJobResult, knowledgeBaseJobResult_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(PipelineRunInfo, pipelineRunInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetKnowledgeBaseJobResponseBody() = default ;
    GetKnowledgeBaseJobResponseBody(const GetKnowledgeBaseJobResponseBody &) = default ;
    GetKnowledgeBaseJobResponseBody(GetKnowledgeBaseJobResponseBody &&) = default ;
    GetKnowledgeBaseJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBaseJobResponseBody() = default ;
    GetKnowledgeBaseJobResponseBody& operator=(const GetKnowledgeBaseJobResponseBody &) = default ;
    GetKnowledgeBaseJobResponseBody& operator=(GetKnowledgeBaseJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      UserVpc() = default ;
      UserVpc(const UserVpc &) = default ;
      UserVpc(UserVpc &&) = default ;
      UserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserVpc() = default ;
      UserVpc& operator=(const UserVpc &) = default ;
      UserVpc& operator=(UserVpc &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline UserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline UserVpc& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline UserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // 安全组ID
      shared_ptr<string> securityGroupId_ {};
      // 交换机ID
      shared_ptr<string> vSwitchId_ {};
      // VPC ID。
      shared_ptr<string> vpcId_ {};
    };

    class PipelineRunInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PipelineRunInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PipelineRunId, pipelineRunId_);
      };
      friend void from_json(const Darabonba::Json& j, PipelineRunInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PipelineRunId, pipelineRunId_);
      };
      PipelineRunInfo() = default ;
      PipelineRunInfo(const PipelineRunInfo &) = default ;
      PipelineRunInfo(PipelineRunInfo &&) = default ;
      PipelineRunInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PipelineRunInfo() = default ;
      PipelineRunInfo& operator=(const PipelineRunInfo &) = default ;
      PipelineRunInfo& operator=(PipelineRunInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pipelineRunId_ == nullptr; };
      // pipelineRunId Field Functions 
      bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
      void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
      inline string getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
      inline PipelineRunInfo& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    protected:
      // PaiFlow工作流运行ID
      shared_ptr<string> pipelineRunId_ {};
    };

    class KnowledgeBaseJobResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KnowledgeBaseJobResult& obj) { 
        DARABONBA_PTR_TO_JSON(AddChunkCount, addChunkCount_);
        DARABONBA_PTR_TO_JSON(DeleteChunkCount, deleteChunkCount_);
        DARABONBA_PTR_TO_JSON(TotalFileCount, totalFileCount_);
      };
      friend void from_json(const Darabonba::Json& j, KnowledgeBaseJobResult& obj) { 
        DARABONBA_PTR_FROM_JSON(AddChunkCount, addChunkCount_);
        DARABONBA_PTR_FROM_JSON(DeleteChunkCount, deleteChunkCount_);
        DARABONBA_PTR_FROM_JSON(TotalFileCount, totalFileCount_);
      };
      KnowledgeBaseJobResult() = default ;
      KnowledgeBaseJobResult(const KnowledgeBaseJobResult &) = default ;
      KnowledgeBaseJobResult(KnowledgeBaseJobResult &&) = default ;
      KnowledgeBaseJobResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KnowledgeBaseJobResult() = default ;
      KnowledgeBaseJobResult& operator=(const KnowledgeBaseJobResult &) = default ;
      KnowledgeBaseJobResult& operator=(KnowledgeBaseJobResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addChunkCount_ == nullptr
        && this->deleteChunkCount_ == nullptr && this->totalFileCount_ == nullptr; };
      // addChunkCount Field Functions 
      bool hasAddChunkCount() const { return this->addChunkCount_ != nullptr;};
      void deleteAddChunkCount() { this->addChunkCount_ = nullptr;};
      inline int32_t getAddChunkCount() const { DARABONBA_PTR_GET_DEFAULT(addChunkCount_, 0) };
      inline KnowledgeBaseJobResult& setAddChunkCount(int32_t addChunkCount) { DARABONBA_PTR_SET_VALUE(addChunkCount_, addChunkCount) };


      // deleteChunkCount Field Functions 
      bool hasDeleteChunkCount() const { return this->deleteChunkCount_ != nullptr;};
      void deleteDeleteChunkCount() { this->deleteChunkCount_ = nullptr;};
      inline int32_t getDeleteChunkCount() const { DARABONBA_PTR_GET_DEFAULT(deleteChunkCount_, 0) };
      inline KnowledgeBaseJobResult& setDeleteChunkCount(int32_t deleteChunkCount) { DARABONBA_PTR_SET_VALUE(deleteChunkCount_, deleteChunkCount) };


      // totalFileCount Field Functions 
      bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
      void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
      inline int32_t getTotalFileCount() const { DARABONBA_PTR_GET_DEFAULT(totalFileCount_, 0) };
      inline KnowledgeBaseJobResult& setTotalFileCount(int32_t totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };


    protected:
      // 增加Chunk数量
      shared_ptr<int32_t> addChunkCount_ {};
      // 删除Chunk数量
      shared_ptr<int32_t> deleteChunkCount_ {};
      // 总处理文件数
      shared_ptr<int32_t> totalFileCount_ {};
    };

    class EmbeddingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EmbeddingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
        DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      };
      friend void from_json(const Darabonba::Json& j, EmbeddingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
        DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      };
      EmbeddingConfig() = default ;
      EmbeddingConfig(const EmbeddingConfig &) = default ;
      EmbeddingConfig(EmbeddingConfig &&) = default ;
      EmbeddingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EmbeddingConfig() = default ;
      EmbeddingConfig& operator=(const EmbeddingConfig &) = default ;
      EmbeddingConfig& operator=(EmbeddingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->batchSize_ == nullptr
        && this->concurrency_ == nullptr; };
      // batchSize Field Functions 
      bool hasBatchSize() const { return this->batchSize_ != nullptr;};
      void deleteBatchSize() { this->batchSize_ = nullptr;};
      inline int32_t getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
      inline EmbeddingConfig& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


      // concurrency Field Functions 
      bool hasConcurrency() const { return this->concurrency_ != nullptr;};
      void deleteConcurrency() { this->concurrency_ = nullptr;};
      inline int32_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
      inline EmbeddingConfig& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    protected:
      // Embedding分批大小
      shared_ptr<int32_t> batchSize_ {};
      // Embedding并发数
      shared_ptr<int32_t> concurrency_ {};
    };

    class EcsSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcsSpecs& obj) { 
        DARABONBA_PTR_TO_JSON(CPU, CPU_);
        DARABONBA_PTR_TO_JSON(Driver, driver_);
        DARABONBA_PTR_TO_JSON(GPU, GPU_);
        DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(PodCount, podCount_);
        DARABONBA_PTR_TO_JSON(SharedMemory, sharedMemory_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, EcsSpecs& obj) { 
        DARABONBA_PTR_FROM_JSON(CPU, CPU_);
        DARABONBA_PTR_FROM_JSON(Driver, driver_);
        DARABONBA_PTR_FROM_JSON(GPU, GPU_);
        DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(PodCount, podCount_);
        DARABONBA_PTR_FROM_JSON(SharedMemory, sharedMemory_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      EcsSpecs() = default ;
      EcsSpecs(const EcsSpecs &) = default ;
      EcsSpecs(EcsSpecs &&) = default ;
      EcsSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcsSpecs() = default ;
      EcsSpecs& operator=(const EcsSpecs &) = default ;
      EcsSpecs& operator=(EcsSpecs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CPU_ == nullptr
        && this->driver_ == nullptr && this->GPU_ == nullptr && this->GPUType_ == nullptr && this->instanceType_ == nullptr && this->memory_ == nullptr
        && this->podCount_ == nullptr && this->sharedMemory_ == nullptr && this->type_ == nullptr; };
      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline int32_t getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
      inline EcsSpecs& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // driver Field Functions 
      bool hasDriver() const { return this->driver_ != nullptr;};
      void deleteDriver() { this->driver_ = nullptr;};
      inline string getDriver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
      inline EcsSpecs& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


      // GPU Field Functions 
      bool hasGPU() const { return this->GPU_ != nullptr;};
      void deleteGPU() { this->GPU_ = nullptr;};
      inline int32_t getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, 0) };
      inline EcsSpecs& setGPU(int32_t GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


      // GPUType Field Functions 
      bool hasGPUType() const { return this->GPUType_ != nullptr;};
      void deleteGPUType() { this->GPUType_ = nullptr;};
      inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
      inline EcsSpecs& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline EcsSpecs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline EcsSpecs& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // podCount Field Functions 
      bool hasPodCount() const { return this->podCount_ != nullptr;};
      void deletePodCount() { this->podCount_ = nullptr;};
      inline int32_t getPodCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
      inline EcsSpecs& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


      // sharedMemory Field Functions 
      bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
      void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
      inline int32_t getSharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, 0) };
      inline EcsSpecs& setSharedMemory(int32_t sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EcsSpecs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // CPU核数
      shared_ptr<int32_t> CPU_ {};
      // 驱动版本
      shared_ptr<string> driver_ {};
      // GPU卡数
      shared_ptr<int32_t> GPU_ {};
      // GPU类型
      shared_ptr<string> GPUType_ {};
      // 机型名称
      shared_ptr<string> instanceType_ {};
      // 内存大小
      shared_ptr<int32_t> memory_ {};
      // 副本数量
      shared_ptr<int32_t> podCount_ {};
      // 共享内存容量
      shared_ptr<int32_t> sharedMemory_ {};
      // 节点类型
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->creator_ == nullptr && this->description_ == nullptr && this->ecsSpecs_ == nullptr && this->embeddingConfig_ == nullptr && this->errorMessage_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtFinishTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->jobAction_ == nullptr && this->knowledgeBaseId_ == nullptr
        && this->knowledgeBaseJobId_ == nullptr && this->knowledgeBaseJobResult_ == nullptr && this->maxRunningTimeInSeconds_ == nullptr && this->pipelineRunInfo_ == nullptr && this->requestId_ == nullptr
        && this->resourceId_ == nullptr && this->status_ == nullptr && this->userVpc_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetKnowledgeBaseJobResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetKnowledgeBaseJobResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetKnowledgeBaseJobResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsSpecs Field Functions 
    bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
    void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
    inline const vector<GetKnowledgeBaseJobResponseBody::EcsSpecs> & getEcsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<GetKnowledgeBaseJobResponseBody::EcsSpecs>) };
    inline vector<GetKnowledgeBaseJobResponseBody::EcsSpecs> getEcsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<GetKnowledgeBaseJobResponseBody::EcsSpecs>) };
    inline GetKnowledgeBaseJobResponseBody& setEcsSpecs(const vector<GetKnowledgeBaseJobResponseBody::EcsSpecs> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
    inline GetKnowledgeBaseJobResponseBody& setEcsSpecs(vector<GetKnowledgeBaseJobResponseBody::EcsSpecs> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const GetKnowledgeBaseJobResponseBody::EmbeddingConfig & getEmbeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, GetKnowledgeBaseJobResponseBody::EmbeddingConfig) };
    inline GetKnowledgeBaseJobResponseBody::EmbeddingConfig getEmbeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, GetKnowledgeBaseJobResponseBody::EmbeddingConfig) };
    inline GetKnowledgeBaseJobResponseBody& setEmbeddingConfig(const GetKnowledgeBaseJobResponseBody::EmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline GetKnowledgeBaseJobResponseBody& setEmbeddingConfig(GetKnowledgeBaseJobResponseBody::EmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetKnowledgeBaseJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetKnowledgeBaseJobResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string getGmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline GetKnowledgeBaseJobResponseBody& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetKnowledgeBaseJobResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // jobAction Field Functions 
    bool hasJobAction() const { return this->jobAction_ != nullptr;};
    void deleteJobAction() { this->jobAction_ = nullptr;};
    inline string getJobAction() const { DARABONBA_PTR_GET_DEFAULT(jobAction_, "") };
    inline GetKnowledgeBaseJobResponseBody& setJobAction(string jobAction) { DARABONBA_PTR_SET_VALUE(jobAction_, jobAction) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline GetKnowledgeBaseJobResponseBody& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeBaseJobId Field Functions 
    bool hasKnowledgeBaseJobId() const { return this->knowledgeBaseJobId_ != nullptr;};
    void deleteKnowledgeBaseJobId() { this->knowledgeBaseJobId_ = nullptr;};
    inline string getKnowledgeBaseJobId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseJobId_, "") };
    inline GetKnowledgeBaseJobResponseBody& setKnowledgeBaseJobId(string knowledgeBaseJobId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseJobId_, knowledgeBaseJobId) };


    // knowledgeBaseJobResult Field Functions 
    bool hasKnowledgeBaseJobResult() const { return this->knowledgeBaseJobResult_ != nullptr;};
    void deleteKnowledgeBaseJobResult() { this->knowledgeBaseJobResult_ = nullptr;};
    inline const GetKnowledgeBaseJobResponseBody::KnowledgeBaseJobResult & getKnowledgeBaseJobResult() const { DARABONBA_PTR_GET_CONST(knowledgeBaseJobResult_, GetKnowledgeBaseJobResponseBody::KnowledgeBaseJobResult) };
    inline GetKnowledgeBaseJobResponseBody::KnowledgeBaseJobResult getKnowledgeBaseJobResult() { DARABONBA_PTR_GET(knowledgeBaseJobResult_, GetKnowledgeBaseJobResponseBody::KnowledgeBaseJobResult) };
    inline GetKnowledgeBaseJobResponseBody& setKnowledgeBaseJobResult(const GetKnowledgeBaseJobResponseBody::KnowledgeBaseJobResult & knowledgeBaseJobResult) { DARABONBA_PTR_SET_VALUE(knowledgeBaseJobResult_, knowledgeBaseJobResult) };
    inline GetKnowledgeBaseJobResponseBody& setKnowledgeBaseJobResult(GetKnowledgeBaseJobResponseBody::KnowledgeBaseJobResult && knowledgeBaseJobResult) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseJobResult_, knowledgeBaseJobResult) };


    // maxRunningTimeInSeconds Field Functions 
    bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
    void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
    inline int32_t getMaxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, 0) };
    inline GetKnowledgeBaseJobResponseBody& setMaxRunningTimeInSeconds(int32_t maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


    // pipelineRunInfo Field Functions 
    bool hasPipelineRunInfo() const { return this->pipelineRunInfo_ != nullptr;};
    void deletePipelineRunInfo() { this->pipelineRunInfo_ = nullptr;};
    inline const GetKnowledgeBaseJobResponseBody::PipelineRunInfo & getPipelineRunInfo() const { DARABONBA_PTR_GET_CONST(pipelineRunInfo_, GetKnowledgeBaseJobResponseBody::PipelineRunInfo) };
    inline GetKnowledgeBaseJobResponseBody::PipelineRunInfo getPipelineRunInfo() { DARABONBA_PTR_GET(pipelineRunInfo_, GetKnowledgeBaseJobResponseBody::PipelineRunInfo) };
    inline GetKnowledgeBaseJobResponseBody& setPipelineRunInfo(const GetKnowledgeBaseJobResponseBody::PipelineRunInfo & pipelineRunInfo) { DARABONBA_PTR_SET_VALUE(pipelineRunInfo_, pipelineRunInfo) };
    inline GetKnowledgeBaseJobResponseBody& setPipelineRunInfo(GetKnowledgeBaseJobResponseBody::PipelineRunInfo && pipelineRunInfo) { DARABONBA_PTR_SET_RVALUE(pipelineRunInfo_, pipelineRunInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKnowledgeBaseJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetKnowledgeBaseJobResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetKnowledgeBaseJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const GetKnowledgeBaseJobResponseBody::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, GetKnowledgeBaseJobResponseBody::UserVpc) };
    inline GetKnowledgeBaseJobResponseBody::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, GetKnowledgeBaseJobResponseBody::UserVpc) };
    inline GetKnowledgeBaseJobResponseBody& setUserVpc(const GetKnowledgeBaseJobResponseBody::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline GetKnowledgeBaseJobResponseBody& setUserVpc(GetKnowledgeBaseJobResponseBody::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetKnowledgeBaseJobResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<string> description_ {};
    shared_ptr<vector<GetKnowledgeBaseJobResponseBody::EcsSpecs>> ecsSpecs_ {};
    shared_ptr<GetKnowledgeBaseJobResponseBody::EmbeddingConfig> embeddingConfig_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtFinishTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<string> jobAction_ {};
    shared_ptr<string> knowledgeBaseId_ {};
    shared_ptr<string> knowledgeBaseJobId_ {};
    shared_ptr<GetKnowledgeBaseJobResponseBody::KnowledgeBaseJobResult> knowledgeBaseJobResult_ {};
    shared_ptr<int32_t> maxRunningTimeInSeconds_ {};
    shared_ptr<GetKnowledgeBaseJobResponseBody::PipelineRunInfo> pipelineRunInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<GetKnowledgeBaseJobResponseBody::UserVpc> userVpc_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif

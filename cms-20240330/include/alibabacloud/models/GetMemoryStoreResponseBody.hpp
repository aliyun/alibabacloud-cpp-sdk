// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYSTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYSTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CustomExtractionStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetMemoryStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(customExtractionStrategies, customExtractionStrategies_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(extractionStrategies, extractionStrategies_);
      DARABONBA_PTR_TO_JSON(memoryStoreName, memoryStoreName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(shortTermStorage, shortTermStorage_);
      DARABONBA_PTR_TO_JSON(shortTermTtl, shortTermTtl_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(traceSourceConfig, traceSourceConfig_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(customExtractionStrategies, customExtractionStrategies_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(extractionStrategies, extractionStrategies_);
      DARABONBA_PTR_FROM_JSON(memoryStoreName, memoryStoreName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(shortTermStorage, shortTermStorage_);
      DARABONBA_PTR_FROM_JSON(shortTermTtl, shortTermTtl_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(traceSourceConfig, traceSourceConfig_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetMemoryStoreResponseBody() = default ;
    GetMemoryStoreResponseBody(const GetMemoryStoreResponseBody &) = default ;
    GetMemoryStoreResponseBody(GetMemoryStoreResponseBody &&) = default ;
    GetMemoryStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryStoreResponseBody() = default ;
    GetMemoryStoreResponseBody& operator=(const GetMemoryStoreResponseBody &) = default ;
    GetMemoryStoreResponseBody& operator=(GetMemoryStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TraceSourceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TraceSourceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(includeOutput, includeOutput_);
        DARABONBA_PTR_TO_JSON(query, query_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, TraceSourceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(includeOutput, includeOutput_);
        DARABONBA_PTR_FROM_JSON(query, query_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      TraceSourceConfig() = default ;
      TraceSourceConfig(const TraceSourceConfig &) = default ;
      TraceSourceConfig(TraceSourceConfig &&) = default ;
      TraceSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TraceSourceConfig() = default ;
      TraceSourceConfig& operator=(const TraceSourceConfig &) = default ;
      TraceSourceConfig& operator=(TraceSourceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->includeOutput_ == nullptr
        && this->query_ == nullptr && this->workspace_ == nullptr; };
      // includeOutput Field Functions 
      bool hasIncludeOutput() const { return this->includeOutput_ != nullptr;};
      void deleteIncludeOutput() { this->includeOutput_ = nullptr;};
      inline bool getIncludeOutput() const { DARABONBA_PTR_GET_DEFAULT(includeOutput_, false) };
      inline TraceSourceConfig& setIncludeOutput(bool includeOutput) { DARABONBA_PTR_SET_VALUE(includeOutput_, includeOutput) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline TraceSourceConfig& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline TraceSourceConfig& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      shared_ptr<bool> includeOutput_ {};
      shared_ptr<string> query_ {};
      shared_ptr<string> workspace_ {};
    };

    class ShortTermStorage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ShortTermStorage& obj) { 
        DARABONBA_PTR_TO_JSON(logstore, logstore_);
        DARABONBA_PTR_TO_JSON(project, project_);
      };
      friend void from_json(const Darabonba::Json& j, ShortTermStorage& obj) { 
        DARABONBA_PTR_FROM_JSON(logstore, logstore_);
        DARABONBA_PTR_FROM_JSON(project, project_);
      };
      ShortTermStorage() = default ;
      ShortTermStorage(const ShortTermStorage &) = default ;
      ShortTermStorage(ShortTermStorage &&) = default ;
      ShortTermStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ShortTermStorage() = default ;
      ShortTermStorage& operator=(const ShortTermStorage &) = default ;
      ShortTermStorage& operator=(ShortTermStorage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr; };
      // logstore Field Functions 
      bool hasLogstore() const { return this->logstore_ != nullptr;};
      void deleteLogstore() { this->logstore_ = nullptr;};
      inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
      inline ShortTermStorage& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline ShortTermStorage& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    protected:
      shared_ptr<string> logstore_ {};
      shared_ptr<string> project_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->customExtractionStrategies_ == nullptr && this->description_ == nullptr && this->extractionStrategies_ == nullptr && this->memoryStoreName_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->shortTermStorage_ == nullptr && this->shortTermTtl_ == nullptr && this->sourceType_ == nullptr && this->traceSourceConfig_ == nullptr
        && this->updateTime_ == nullptr && this->workspace_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMemoryStoreResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customExtractionStrategies Field Functions 
    bool hasCustomExtractionStrategies() const { return this->customExtractionStrategies_ != nullptr;};
    void deleteCustomExtractionStrategies() { this->customExtractionStrategies_ = nullptr;};
    inline const vector<CustomExtractionStrategy> & getCustomExtractionStrategies() const { DARABONBA_PTR_GET_CONST(customExtractionStrategies_, vector<CustomExtractionStrategy>) };
    inline vector<CustomExtractionStrategy> getCustomExtractionStrategies() { DARABONBA_PTR_GET(customExtractionStrategies_, vector<CustomExtractionStrategy>) };
    inline GetMemoryStoreResponseBody& setCustomExtractionStrategies(const vector<CustomExtractionStrategy> & customExtractionStrategies) { DARABONBA_PTR_SET_VALUE(customExtractionStrategies_, customExtractionStrategies) };
    inline GetMemoryStoreResponseBody& setCustomExtractionStrategies(vector<CustomExtractionStrategy> && customExtractionStrategies) { DARABONBA_PTR_SET_RVALUE(customExtractionStrategies_, customExtractionStrategies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMemoryStoreResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extractionStrategies Field Functions 
    bool hasExtractionStrategies() const { return this->extractionStrategies_ != nullptr;};
    void deleteExtractionStrategies() { this->extractionStrategies_ = nullptr;};
    inline const vector<string> & getExtractionStrategies() const { DARABONBA_PTR_GET_CONST(extractionStrategies_, vector<string>) };
    inline vector<string> getExtractionStrategies() { DARABONBA_PTR_GET(extractionStrategies_, vector<string>) };
    inline GetMemoryStoreResponseBody& setExtractionStrategies(const vector<string> & extractionStrategies) { DARABONBA_PTR_SET_VALUE(extractionStrategies_, extractionStrategies) };
    inline GetMemoryStoreResponseBody& setExtractionStrategies(vector<string> && extractionStrategies) { DARABONBA_PTR_SET_RVALUE(extractionStrategies_, extractionStrategies) };


    // memoryStoreName Field Functions 
    bool hasMemoryStoreName() const { return this->memoryStoreName_ != nullptr;};
    void deleteMemoryStoreName() { this->memoryStoreName_ = nullptr;};
    inline string getMemoryStoreName() const { DARABONBA_PTR_GET_DEFAULT(memoryStoreName_, "") };
    inline GetMemoryStoreResponseBody& setMemoryStoreName(string memoryStoreName) { DARABONBA_PTR_SET_VALUE(memoryStoreName_, memoryStoreName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetMemoryStoreResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMemoryStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shortTermStorage Field Functions 
    bool hasShortTermStorage() const { return this->shortTermStorage_ != nullptr;};
    void deleteShortTermStorage() { this->shortTermStorage_ = nullptr;};
    inline const GetMemoryStoreResponseBody::ShortTermStorage & getShortTermStorage() const { DARABONBA_PTR_GET_CONST(shortTermStorage_, GetMemoryStoreResponseBody::ShortTermStorage) };
    inline GetMemoryStoreResponseBody::ShortTermStorage getShortTermStorage() { DARABONBA_PTR_GET(shortTermStorage_, GetMemoryStoreResponseBody::ShortTermStorage) };
    inline GetMemoryStoreResponseBody& setShortTermStorage(const GetMemoryStoreResponseBody::ShortTermStorage & shortTermStorage) { DARABONBA_PTR_SET_VALUE(shortTermStorage_, shortTermStorage) };
    inline GetMemoryStoreResponseBody& setShortTermStorage(GetMemoryStoreResponseBody::ShortTermStorage && shortTermStorage) { DARABONBA_PTR_SET_RVALUE(shortTermStorage_, shortTermStorage) };


    // shortTermTtl Field Functions 
    bool hasShortTermTtl() const { return this->shortTermTtl_ != nullptr;};
    void deleteShortTermTtl() { this->shortTermTtl_ = nullptr;};
    inline int32_t getShortTermTtl() const { DARABONBA_PTR_GET_DEFAULT(shortTermTtl_, 0) };
    inline GetMemoryStoreResponseBody& setShortTermTtl(int32_t shortTermTtl) { DARABONBA_PTR_SET_VALUE(shortTermTtl_, shortTermTtl) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetMemoryStoreResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // traceSourceConfig Field Functions 
    bool hasTraceSourceConfig() const { return this->traceSourceConfig_ != nullptr;};
    void deleteTraceSourceConfig() { this->traceSourceConfig_ = nullptr;};
    inline const GetMemoryStoreResponseBody::TraceSourceConfig & getTraceSourceConfig() const { DARABONBA_PTR_GET_CONST(traceSourceConfig_, GetMemoryStoreResponseBody::TraceSourceConfig) };
    inline GetMemoryStoreResponseBody::TraceSourceConfig getTraceSourceConfig() { DARABONBA_PTR_GET(traceSourceConfig_, GetMemoryStoreResponseBody::TraceSourceConfig) };
    inline GetMemoryStoreResponseBody& setTraceSourceConfig(const GetMemoryStoreResponseBody::TraceSourceConfig & traceSourceConfig) { DARABONBA_PTR_SET_VALUE(traceSourceConfig_, traceSourceConfig) };
    inline GetMemoryStoreResponseBody& setTraceSourceConfig(GetMemoryStoreResponseBody::TraceSourceConfig && traceSourceConfig) { DARABONBA_PTR_SET_RVALUE(traceSourceConfig_, traceSourceConfig) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetMemoryStoreResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetMemoryStoreResponseBody& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> createTime_ {};
    shared_ptr<vector<CustomExtractionStrategy>> customExtractionStrategies_ {};
    shared_ptr<string> description_ {};
    shared_ptr<vector<string>> extractionStrategies_ {};
    shared_ptr<string> memoryStoreName_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetMemoryStoreResponseBody::ShortTermStorage> shortTermStorage_ {};
    shared_ptr<int32_t> shortTermTtl_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<GetMemoryStoreResponseBody::TraceSourceConfig> traceSourceConfig_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

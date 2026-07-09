// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTSTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTSTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetContextStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(contextStoreName, contextStoreName_);
      DARABONBA_PTR_TO_JSON(contextType, contextType_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(contextStoreName, contextStoreName_);
      DARABONBA_PTR_FROM_JSON(contextType, contextType_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetContextStoreResponseBody() = default ;
    GetContextStoreResponseBody(const GetContextStoreResponseBody &) = default ;
    GetContextStoreResponseBody(GetContextStoreResponseBody &&) = default ;
    GetContextStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextStoreResponseBody() = default ;
    GetContextStoreResponseBody& operator=(const GetContextStoreResponseBody &) = default ;
    GetContextStoreResponseBody& operator=(GetContextStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(metadataField, metadataField_);
        DARABONBA_PTR_TO_JSON(miningInterval, miningInterval_);
        DARABONBA_PTR_TO_JSON(serviceNames, serviceNames_);
        DARABONBA_PTR_TO_JSON(source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(metadataField, metadataField_);
        DARABONBA_PTR_FROM_JSON(miningInterval, miningInterval_);
        DARABONBA_PTR_FROM_JSON(serviceNames, serviceNames_);
        DARABONBA_PTR_FROM_JSON(source, source_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
          DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        Source() = default ;
        Source(const Source &) = default ;
        Source(Source &&) = default ;
        Source(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Source() = default ;
        Source& operator=(const Source &) = default ;
        Source& operator=(Source &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->startTime_ == nullptr; };
        // agentSpace Field Functions 
        bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
        void deleteAgentSpace() { this->agentSpace_ = nullptr;};
        inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
        inline Source& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Source& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The AgentSpace where the trace data source resides. This is the same as the AgentSpace specified during creation.
        shared_ptr<string> agentSpace_ {};
        // The start time for data backfill, in ISO 8601 UTC format.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->metadataField_ == nullptr
        && this->miningInterval_ == nullptr && this->serviceNames_ == nullptr && this->source_ == nullptr; };
      // metadataField Field Functions 
      bool hasMetadataField() const { return this->metadataField_ != nullptr;};
      void deleteMetadataField() { this->metadataField_ = nullptr;};
      inline const map<string, string> & getMetadataField() const { DARABONBA_PTR_GET_CONST(metadataField_, map<string, string>) };
      inline map<string, string> getMetadataField() { DARABONBA_PTR_GET(metadataField_, map<string, string>) };
      inline Config& setMetadataField(const map<string, string> & metadataField) { DARABONBA_PTR_SET_VALUE(metadataField_, metadataField) };
      inline Config& setMetadataField(map<string, string> && metadataField) { DARABONBA_PTR_SET_RVALUE(metadataField_, metadataField) };


      // miningInterval Field Functions 
      bool hasMiningInterval() const { return this->miningInterval_ != nullptr;};
      void deleteMiningInterval() { this->miningInterval_ = nullptr;};
      inline string getMiningInterval() const { DARABONBA_PTR_GET_DEFAULT(miningInterval_, "") };
      inline Config& setMiningInterval(string miningInterval) { DARABONBA_PTR_SET_VALUE(miningInterval_, miningInterval) };


      // serviceNames Field Functions 
      bool hasServiceNames() const { return this->serviceNames_ != nullptr;};
      void deleteServiceNames() { this->serviceNames_ = nullptr;};
      inline const vector<string> & getServiceNames() const { DARABONBA_PTR_GET_CONST(serviceNames_, vector<string>) };
      inline vector<string> getServiceNames() { DARABONBA_PTR_GET(serviceNames_, vector<string>) };
      inline Config& setServiceNames(const vector<string> & serviceNames) { DARABONBA_PTR_SET_VALUE(serviceNames_, serviceNames) };
      inline Config& setServiceNames(vector<string> && serviceNames) { DARABONBA_PTR_SET_RVALUE(serviceNames_, serviceNames) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const Config::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Config::Source) };
      inline Config::Source getSource() { DARABONBA_PTR_GET(source_, Config::Source) };
      inline Config& setSource(const Config::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline Config& setSource(Config::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    protected:
      // The metadata field mapping. The key is the business field and the value is the storage field.
      shared_ptr<map<string, string>> metadataField_ {};
      // The experience mining interval. Valid values: 1h, 6h, 12h, and 1d. Default value: 1d.
      shared_ptr<string> miningInterval_ {};
      // The list of service names. This works together with source.agentSpace to locate the trace data source. This value cannot be changed in the current version.
      shared_ptr<vector<string>> serviceNames_ {};
      // The datasource config passed in by the user. This serves only as the root identifier of the data source.
      shared_ptr<Config::Source> source_ {};
    };

    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->config_ == nullptr && this->contextStoreName_ == nullptr && this->contextType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline GetContextStoreResponseBody& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const GetContextStoreResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, GetContextStoreResponseBody::Config) };
    inline GetContextStoreResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, GetContextStoreResponseBody::Config) };
    inline GetContextStoreResponseBody& setConfig(const GetContextStoreResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetContextStoreResponseBody& setConfig(GetContextStoreResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // contextStoreName Field Functions 
    bool hasContextStoreName() const { return this->contextStoreName_ != nullptr;};
    void deleteContextStoreName() { this->contextStoreName_ = nullptr;};
    inline string getContextStoreName() const { DARABONBA_PTR_GET_DEFAULT(contextStoreName_, "") };
    inline GetContextStoreResponseBody& setContextStoreName(string contextStoreName) { DARABONBA_PTR_SET_VALUE(contextStoreName_, contextStoreName) };


    // contextType Field Functions 
    bool hasContextType() const { return this->contextType_ != nullptr;};
    void deleteContextType() { this->contextType_ = nullptr;};
    inline string getContextType() const { DARABONBA_PTR_GET_DEFAULT(contextType_, "") };
    inline GetContextStoreResponseBody& setContextType(string contextType) { DARABONBA_PTR_SET_VALUE(contextType_, contextType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetContextStoreResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetContextStoreResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetContextStoreResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContextStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetContextStoreResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetContextStoreResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The name of the AgentSpace to which the context store belongs.
    shared_ptr<string> agentSpace_ {};
    // The configuration of the context store.
    shared_ptr<GetContextStoreResponseBody::Config> config_ {};
    // The context store name.
    shared_ptr<string> contextStoreName_ {};
    // The type of the context store, such as experience or memory.
    shared_ptr<string> contextType_ {};
    // The time when the context store was created, in ISO 8601 UTC format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> createTime_ {};
    // The description of the context store.
    shared_ptr<string> description_ {};
    // The region ID of the context store.
    shared_ptr<string> regionId_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The status of the context store. Valid values:
    // - ACTIVE
    // - INITIALIZING
    // - FAILED
    shared_ptr<string> status_ {};
    // The time when the context store was last updated, in ISO 8601 UTC format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTSTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTSTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetContextStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(contextStoreName, contextStoreName_);
      DARABONBA_PTR_TO_JSON(contextType, contextType_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dataset, dataset_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(contextStoreName, contextStoreName_);
      DARABONBA_PTR_FROM_JSON(contextType, contextType_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dataset, dataset_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
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
    class Dataset : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dataset& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Dataset() = default ;
      Dataset(const Dataset &) = default ;
      Dataset(Dataset &&) = default ;
      Dataset(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dataset() = default ;
      Dataset& operator=(const Dataset &) = default ;
      Dataset& operator=(Dataset &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Dataset& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The name of the dataset.
      shared_ptr<string> name_ {};
    };

    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(innerSource, innerSource_);
        DARABONBA_PTR_TO_JSON(metadataField, metadataField_);
        DARABONBA_PTR_TO_JSON(source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(innerSource, innerSource_);
        DARABONBA_PTR_FROM_JSON(metadataField, metadataField_);
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
          DARABONBA_PTR_TO_JSON(logstore, logstore_);
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
          DARABONBA_PTR_FROM_JSON(logstore, logstore_);
          DARABONBA_PTR_FROM_JSON(project, project_);
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
        virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr && this->startTime_ == nullptr; };
        // logstore Field Functions 
        bool hasLogstore() const { return this->logstore_ != nullptr;};
        void deleteLogstore() { this->logstore_ = nullptr;};
        inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
        inline Source& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline Source& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Source& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The name of the Log Service logstore.
        shared_ptr<string> logstore_ {};
        // The name of the Log Service project.
        shared_ptr<string> project_ {};
        // The time when the configuration takes effect. This value is a Unix timestamp in milliseconds.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
        shared_ptr<string> startTime_ {};
      };

      class InnerSource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InnerSource& obj) { 
          DARABONBA_PTR_TO_JSON(logstore, logstore_);
          DARABONBA_PTR_TO_JSON(project, project_);
        };
        friend void from_json(const Darabonba::Json& j, InnerSource& obj) { 
          DARABONBA_PTR_FROM_JSON(logstore, logstore_);
          DARABONBA_PTR_FROM_JSON(project, project_);
        };
        InnerSource() = default ;
        InnerSource(const InnerSource &) = default ;
        InnerSource(InnerSource &&) = default ;
        InnerSource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InnerSource() = default ;
        InnerSource& operator=(const InnerSource &) = default ;
        InnerSource& operator=(InnerSource &&) = default ;
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
        inline InnerSource& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline InnerSource& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      protected:
        // The name of the Log Service logstore.
        shared_ptr<string> logstore_ {};
        // The name of the Log Service project.
        shared_ptr<string> project_ {};
      };

      virtual bool empty() const override { return this->innerSource_ == nullptr
        && this->metadataField_ == nullptr && this->source_ == nullptr; };
      // innerSource Field Functions 
      bool hasInnerSource() const { return this->innerSource_ != nullptr;};
      void deleteInnerSource() { this->innerSource_ = nullptr;};
      inline const Config::InnerSource & getInnerSource() const { DARABONBA_PTR_GET_CONST(innerSource_, Config::InnerSource) };
      inline Config::InnerSource getInnerSource() { DARABONBA_PTR_GET(innerSource_, Config::InnerSource) };
      inline Config& setInnerSource(const Config::InnerSource & innerSource) { DARABONBA_PTR_SET_VALUE(innerSource_, innerSource) };
      inline Config& setInnerSource(Config::InnerSource && innerSource) { DARABONBA_PTR_SET_RVALUE(innerSource_, innerSource) };


      // metadataField Field Functions 
      bool hasMetadataField() const { return this->metadataField_ != nullptr;};
      void deleteMetadataField() { this->metadataField_ = nullptr;};
      inline const map<string, string> & getMetadataField() const { DARABONBA_PTR_GET_CONST(metadataField_, map<string, string>) };
      inline map<string, string> getMetadataField() { DARABONBA_PTR_GET(metadataField_, map<string, string>) };
      inline Config& setMetadataField(const map<string, string> & metadataField) { DARABONBA_PTR_SET_VALUE(metadataField_, metadataField) };
      inline Config& setMetadataField(map<string, string> && metadataField) { DARABONBA_PTR_SET_RVALUE(metadataField_, metadataField) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const Config::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, Config::Source) };
      inline Config::Source getSource() { DARABONBA_PTR_GET(source_, Config::Source) };
      inline Config& setSource(const Config::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline Config& setSource(Config::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    protected:
      // The internal source.
      shared_ptr<Config::InnerSource> innerSource_ {};
      // The metadata fields.
      shared_ptr<map<string, string>> metadataField_ {};
      // The configuration source.
      shared_ptr<Config::Source> source_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->contextStoreName_ == nullptr && this->contextType_ == nullptr && this->createTime_ == nullptr && this->dataset_ == nullptr && this->description_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr && this->workspace_ == nullptr; };
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


    // dataset Field Functions 
    bool hasDataset() const { return this->dataset_ != nullptr;};
    void deleteDataset() { this->dataset_ = nullptr;};
    inline const GetContextStoreResponseBody::Dataset & getDataset() const { DARABONBA_PTR_GET_CONST(dataset_, GetContextStoreResponseBody::Dataset) };
    inline GetContextStoreResponseBody::Dataset getDataset() { DARABONBA_PTR_GET(dataset_, GetContextStoreResponseBody::Dataset) };
    inline GetContextStoreResponseBody& setDataset(const GetContextStoreResponseBody::Dataset & dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };
    inline GetContextStoreResponseBody& setDataset(GetContextStoreResponseBody::Dataset && dataset) { DARABONBA_PTR_SET_RVALUE(dataset_, dataset) };


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


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetContextStoreResponseBody& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The configuration of the context store.
    shared_ptr<GetContextStoreResponseBody::Config> config_ {};
    // The context store name.
    shared_ptr<string> contextStoreName_ {};
    // The type of the context store.
    shared_ptr<string> contextType_ {};
    // The creation time of the context store. This value is a Unix timestamp in seconds.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> createTime_ {};
    // Information about the associated dataset.
    shared_ptr<GetContextStoreResponseBody::Dataset> dataset_ {};
    // The description of the context store.
    shared_ptr<string> description_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the context store.
    shared_ptr<string> status_ {};
    // The last update time of the context store. This value is a Unix timestamp in seconds.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> updateTime_ {};
    // The workspace ID.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

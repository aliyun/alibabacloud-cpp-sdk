// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVALUATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEVALUATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetEvaluatorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEvaluatorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(evaluator, evaluator_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEvaluatorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(evaluator, evaluator_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetEvaluatorResponseBody() = default ;
    GetEvaluatorResponseBody(const GetEvaluatorResponseBody &) = default ;
    GetEvaluatorResponseBody(GetEvaluatorResponseBody &&) = default ;
    GetEvaluatorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEvaluatorResponseBody() = default ;
    GetEvaluatorResponseBody& operator=(const GetEvaluatorResponseBody &) = default ;
    GetEvaluatorResponseBody& operator=(GetEvaluatorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Evaluator : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Evaluator& obj) { 
        DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
        DARABONBA_PTR_TO_JSON(annotations, annotations_);
        DARABONBA_ANY_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(currentVersion, currentVersion_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(metricName, metricName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_ANY_TO_JSON(properties, properties_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(versions, versions_);
      };
      friend void from_json(const Darabonba::Json& j, Evaluator& obj) { 
        DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
        DARABONBA_PTR_FROM_JSON(annotations, annotations_);
        DARABONBA_ANY_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(currentVersion, currentVersion_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(metricName, metricName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_ANY_FROM_JSON(properties, properties_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(versions, versions_);
      };
      Evaluator() = default ;
      Evaluator(const Evaluator &) = default ;
      Evaluator(Evaluator &&) = default ;
      Evaluator(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Evaluator() = default ;
      Evaluator& operator=(const Evaluator &) = default ;
      Evaluator& operator=(Evaluator &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Versions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Versions& obj) { 
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(versionDescription, versionDescription_);
        };
        friend void from_json(const Darabonba::Json& j, Versions& obj) { 
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(version, version_);
          DARABONBA_PTR_FROM_JSON(versionDescription, versionDescription_);
        };
        Versions() = default ;
        Versions(const Versions &) = default ;
        Versions(Versions &&) = default ;
        Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Versions() = default ;
        Versions& operator=(const Versions &) = default ;
        Versions& operator=(Versions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->version_ == nullptr && this->versionDescription_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
        inline Versions& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Versions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // versionDescription Field Functions 
        bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
        void deleteVersionDescription() { this->versionDescription_ = nullptr;};
        inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
        inline Versions& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


      protected:
        // The time when the version was created. The value is a UNIX timestamp in seconds.
        shared_ptr<int64_t> createdAt_ {};
        // The version number.
        shared_ptr<string> version_ {};
        // The version description.
        shared_ptr<string> versionDescription_ {};
      };

      virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->annotations_ == nullptr && this->config_ == nullptr && this->createdAt_ == nullptr && this->currentVersion_ == nullptr && this->description_ == nullptr
        && this->displayName_ == nullptr && this->latestVersion_ == nullptr && this->metricName_ == nullptr && this->name_ == nullptr && this->properties_ == nullptr
        && this->type_ == nullptr && this->updatedAt_ == nullptr && this->versions_ == nullptr; };
      // agentSpace Field Functions 
      bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
      void deleteAgentSpace() { this->agentSpace_ = nullptr;};
      inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
      inline Evaluator& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


      // annotations Field Functions 
      bool hasAnnotations() const { return this->annotations_ != nullptr;};
      void deleteAnnotations() { this->annotations_ = nullptr;};
      inline const vector<string> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<string>) };
      inline vector<string> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<string>) };
      inline Evaluator& setAnnotations(const vector<string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
      inline Evaluator& setAnnotations(vector<string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline       const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
      Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
      inline Evaluator& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
      inline Evaluator& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline Evaluator& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // currentVersion Field Functions 
      bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
      void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
      inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
      inline Evaluator& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Evaluator& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Evaluator& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline Evaluator& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline Evaluator& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Evaluator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline       const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
      Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
      inline Evaluator& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
      inline Evaluator& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Evaluator& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline Evaluator& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<Evaluator::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Evaluator::Versions>) };
      inline vector<Evaluator::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<Evaluator::Versions>) };
      inline Evaluator& setVersions(const vector<Evaluator::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline Evaluator& setVersions(vector<Evaluator::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    protected:
      // The AgentSpace name.
      shared_ptr<string> agentSpace_ {};
      // The list of annotations.
      shared_ptr<vector<string>> annotations_ {};
      // The configuration of the current version.
      Darabonba::Json config_ {};
      // The time when the evaluator was created. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> createdAt_ {};
      // The version number returned in the current response.
      shared_ptr<string> currentVersion_ {};
      // The evaluator description.
      shared_ptr<string> description_ {};
      // The display name.
      shared_ptr<string> displayName_ {};
      // The latest version number.
      shared_ptr<string> latestVersion_ {};
      // The evaluation metric name.
      shared_ptr<string> metricName_ {};
      // The evaluator name.
      shared_ptr<string> name_ {};
      // The evaluator properties.
      Darabonba::Json properties_ {};
      // The evaluator type.
      shared_ptr<string> type_ {};
      // The time when the evaluator was last updated. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> updatedAt_ {};
      // The list of versions.
      shared_ptr<vector<Evaluator::Versions>> versions_ {};
    };

    virtual bool empty() const override { return this->evaluator_ == nullptr
        && this->requestId_ == nullptr; };
    // evaluator Field Functions 
    bool hasEvaluator() const { return this->evaluator_ != nullptr;};
    void deleteEvaluator() { this->evaluator_ = nullptr;};
    inline const GetEvaluatorResponseBody::Evaluator & getEvaluator() const { DARABONBA_PTR_GET_CONST(evaluator_, GetEvaluatorResponseBody::Evaluator) };
    inline GetEvaluatorResponseBody::Evaluator getEvaluator() { DARABONBA_PTR_GET(evaluator_, GetEvaluatorResponseBody::Evaluator) };
    inline GetEvaluatorResponseBody& setEvaluator(const GetEvaluatorResponseBody::Evaluator & evaluator) { DARABONBA_PTR_SET_VALUE(evaluator_, evaluator) };
    inline GetEvaluatorResponseBody& setEvaluator(GetEvaluatorResponseBody::Evaluator && evaluator) { DARABONBA_PTR_SET_RVALUE(evaluator_, evaluator) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEvaluatorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The evaluator details.
    shared_ptr<GetEvaluatorResponseBody::Evaluator> evaluator_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif

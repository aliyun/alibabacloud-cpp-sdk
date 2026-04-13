// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTERRAFORMSTATEDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTERRAFORMSTATEDETECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetTerraformStateDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTerraformStateDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(job, job_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTerraformStateDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(job, job_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetTerraformStateDetectionResponseBody() = default ;
    GetTerraformStateDetectionResponseBody(const GetTerraformStateDetectionResponseBody &) = default ;
    GetTerraformStateDetectionResponseBody(GetTerraformStateDetectionResponseBody &&) = default ;
    GetTerraformStateDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTerraformStateDetectionResponseBody() = default ;
    GetTerraformStateDetectionResponseBody& operator=(const GetTerraformStateDetectionResponseBody &) = default ;
    GetTerraformStateDetectionResponseBody& operator=(GetTerraformStateDetectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(changedResources, changedResources_);
        DARABONBA_PTR_TO_JSON(driftedResources, driftedResources_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(identifier, identifier_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(changedResources, changedResources_);
        DARABONBA_PTR_FROM_JSON(driftedResources, driftedResources_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(identifier, identifier_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Job() = default ;
      Job(const Job &) = default ;
      Job(Job &&) = default ;
      Job(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Job() = default ;
      Job& operator=(const Job &) = default ;
      Job& operator=(Job &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DriftedResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DriftedResources& obj) { 
          DARABONBA_PTR_TO_JSON(attributeDrifts, attributeDrifts_);
          DARABONBA_PTR_TO_JSON(driftedType, driftedType_);
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resourceIdentifier, resourceIdentifier_);
        };
        friend void from_json(const Darabonba::Json& j, DriftedResources& obj) { 
          DARABONBA_PTR_FROM_JSON(attributeDrifts, attributeDrifts_);
          DARABONBA_PTR_FROM_JSON(driftedType, driftedType_);
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resourceIdentifier, resourceIdentifier_);
        };
        DriftedResources() = default ;
        DriftedResources(const DriftedResources &) = default ;
        DriftedResources(DriftedResources &&) = default ;
        DriftedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DriftedResources() = default ;
        DriftedResources& operator=(const DriftedResources &) = default ;
        DriftedResources& operator=(DriftedResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AttributeDrifts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeDrifts& obj) { 
            DARABONBA_PTR_TO_JSON(attributePath, attributePath_);
            DARABONBA_PTR_TO_JSON(remoteValue, remoteValue_);
            DARABONBA_PTR_TO_JSON(stateValue, stateValue_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeDrifts& obj) { 
            DARABONBA_PTR_FROM_JSON(attributePath, attributePath_);
            DARABONBA_PTR_FROM_JSON(remoteValue, remoteValue_);
            DARABONBA_PTR_FROM_JSON(stateValue, stateValue_);
          };
          AttributeDrifts() = default ;
          AttributeDrifts(const AttributeDrifts &) = default ;
          AttributeDrifts(AttributeDrifts &&) = default ;
          AttributeDrifts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeDrifts() = default ;
          AttributeDrifts& operator=(const AttributeDrifts &) = default ;
          AttributeDrifts& operator=(AttributeDrifts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attributePath_ == nullptr
        && this->remoteValue_ == nullptr && this->stateValue_ == nullptr; };
          // attributePath Field Functions 
          bool hasAttributePath() const { return this->attributePath_ != nullptr;};
          void deleteAttributePath() { this->attributePath_ = nullptr;};
          inline string getAttributePath() const { DARABONBA_PTR_GET_DEFAULT(attributePath_, "") };
          inline AttributeDrifts& setAttributePath(string attributePath) { DARABONBA_PTR_SET_VALUE(attributePath_, attributePath) };


          // remoteValue Field Functions 
          bool hasRemoteValue() const { return this->remoteValue_ != nullptr;};
          void deleteRemoteValue() { this->remoteValue_ = nullptr;};
          inline string getRemoteValue() const { DARABONBA_PTR_GET_DEFAULT(remoteValue_, "") };
          inline AttributeDrifts& setRemoteValue(string remoteValue) { DARABONBA_PTR_SET_VALUE(remoteValue_, remoteValue) };


          // stateValue Field Functions 
          bool hasStateValue() const { return this->stateValue_ != nullptr;};
          void deleteStateValue() { this->stateValue_ = nullptr;};
          inline string getStateValue() const { DARABONBA_PTR_GET_DEFAULT(stateValue_, "") };
          inline AttributeDrifts& setStateValue(string stateValue) { DARABONBA_PTR_SET_VALUE(stateValue_, stateValue) };


        protected:
          shared_ptr<string> attributePath_ {};
          shared_ptr<string> remoteValue_ {};
          shared_ptr<string> stateValue_ {};
        };

        virtual bool empty() const override { return this->attributeDrifts_ == nullptr
        && this->driftedType_ == nullptr && this->resourceId_ == nullptr && this->resourceIdentifier_ == nullptr; };
        // attributeDrifts Field Functions 
        bool hasAttributeDrifts() const { return this->attributeDrifts_ != nullptr;};
        void deleteAttributeDrifts() { this->attributeDrifts_ = nullptr;};
        inline const vector<DriftedResources::AttributeDrifts> & getAttributeDrifts() const { DARABONBA_PTR_GET_CONST(attributeDrifts_, vector<DriftedResources::AttributeDrifts>) };
        inline vector<DriftedResources::AttributeDrifts> getAttributeDrifts() { DARABONBA_PTR_GET(attributeDrifts_, vector<DriftedResources::AttributeDrifts>) };
        inline DriftedResources& setAttributeDrifts(const vector<DriftedResources::AttributeDrifts> & attributeDrifts) { DARABONBA_PTR_SET_VALUE(attributeDrifts_, attributeDrifts) };
        inline DriftedResources& setAttributeDrifts(vector<DriftedResources::AttributeDrifts> && attributeDrifts) { DARABONBA_PTR_SET_RVALUE(attributeDrifts_, attributeDrifts) };


        // driftedType Field Functions 
        bool hasDriftedType() const { return this->driftedType_ != nullptr;};
        void deleteDriftedType() { this->driftedType_ = nullptr;};
        inline string getDriftedType() const { DARABONBA_PTR_GET_DEFAULT(driftedType_, "") };
        inline DriftedResources& setDriftedType(string driftedType) { DARABONBA_PTR_SET_VALUE(driftedType_, driftedType) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline DriftedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceIdentifier Field Functions 
        bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
        void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
        inline string getResourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceIdentifier_, "") };
        inline DriftedResources& setResourceIdentifier(string resourceIdentifier) { DARABONBA_PTR_SET_VALUE(resourceIdentifier_, resourceIdentifier) };


      protected:
        shared_ptr<vector<DriftedResources::AttributeDrifts>> attributeDrifts_ {};
        shared_ptr<string> driftedType_ {};
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceIdentifier_ {};
      };

      class ChangedResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangedResources& obj) { 
          DARABONBA_PTR_TO_JSON(attributeChanges, attributeChanges_);
          DARABONBA_PTR_TO_JSON(changedType, changedType_);
          DARABONBA_PTR_TO_JSON(hasDrift, hasDrift_);
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resourceIdentifier, resourceIdentifier_);
        };
        friend void from_json(const Darabonba::Json& j, ChangedResources& obj) { 
          DARABONBA_PTR_FROM_JSON(attributeChanges, attributeChanges_);
          DARABONBA_PTR_FROM_JSON(changedType, changedType_);
          DARABONBA_PTR_FROM_JSON(hasDrift, hasDrift_);
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resourceIdentifier, resourceIdentifier_);
        };
        ChangedResources() = default ;
        ChangedResources(const ChangedResources &) = default ;
        ChangedResources(ChangedResources &&) = default ;
        ChangedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangedResources() = default ;
        ChangedResources& operator=(const ChangedResources &) = default ;
        ChangedResources& operator=(ChangedResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AttributeChanges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeChanges& obj) { 
            DARABONBA_PTR_TO_JSON(attributePath, attributePath_);
            DARABONBA_PTR_TO_JSON(remoteValue, remoteValue_);
            DARABONBA_PTR_TO_JSON(templateValue, templateValue_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeChanges& obj) { 
            DARABONBA_PTR_FROM_JSON(attributePath, attributePath_);
            DARABONBA_PTR_FROM_JSON(remoteValue, remoteValue_);
            DARABONBA_PTR_FROM_JSON(templateValue, templateValue_);
          };
          AttributeChanges() = default ;
          AttributeChanges(const AttributeChanges &) = default ;
          AttributeChanges(AttributeChanges &&) = default ;
          AttributeChanges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeChanges() = default ;
          AttributeChanges& operator=(const AttributeChanges &) = default ;
          AttributeChanges& operator=(AttributeChanges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attributePath_ == nullptr
        && this->remoteValue_ == nullptr && this->templateValue_ == nullptr; };
          // attributePath Field Functions 
          bool hasAttributePath() const { return this->attributePath_ != nullptr;};
          void deleteAttributePath() { this->attributePath_ = nullptr;};
          inline string getAttributePath() const { DARABONBA_PTR_GET_DEFAULT(attributePath_, "") };
          inline AttributeChanges& setAttributePath(string attributePath) { DARABONBA_PTR_SET_VALUE(attributePath_, attributePath) };


          // remoteValue Field Functions 
          bool hasRemoteValue() const { return this->remoteValue_ != nullptr;};
          void deleteRemoteValue() { this->remoteValue_ = nullptr;};
          inline string getRemoteValue() const { DARABONBA_PTR_GET_DEFAULT(remoteValue_, "") };
          inline AttributeChanges& setRemoteValue(string remoteValue) { DARABONBA_PTR_SET_VALUE(remoteValue_, remoteValue) };


          // templateValue Field Functions 
          bool hasTemplateValue() const { return this->templateValue_ != nullptr;};
          void deleteTemplateValue() { this->templateValue_ = nullptr;};
          inline string getTemplateValue() const { DARABONBA_PTR_GET_DEFAULT(templateValue_, "") };
          inline AttributeChanges& setTemplateValue(string templateValue) { DARABONBA_PTR_SET_VALUE(templateValue_, templateValue) };


        protected:
          shared_ptr<string> attributePath_ {};
          shared_ptr<string> remoteValue_ {};
          shared_ptr<string> templateValue_ {};
        };

        virtual bool empty() const override { return this->attributeChanges_ == nullptr
        && this->changedType_ == nullptr && this->hasDrift_ == nullptr && this->resourceId_ == nullptr && this->resourceIdentifier_ == nullptr; };
        // attributeChanges Field Functions 
        bool hasAttributeChanges() const { return this->attributeChanges_ != nullptr;};
        void deleteAttributeChanges() { this->attributeChanges_ = nullptr;};
        inline const vector<ChangedResources::AttributeChanges> & getAttributeChanges() const { DARABONBA_PTR_GET_CONST(attributeChanges_, vector<ChangedResources::AttributeChanges>) };
        inline vector<ChangedResources::AttributeChanges> getAttributeChanges() { DARABONBA_PTR_GET(attributeChanges_, vector<ChangedResources::AttributeChanges>) };
        inline ChangedResources& setAttributeChanges(const vector<ChangedResources::AttributeChanges> & attributeChanges) { DARABONBA_PTR_SET_VALUE(attributeChanges_, attributeChanges) };
        inline ChangedResources& setAttributeChanges(vector<ChangedResources::AttributeChanges> && attributeChanges) { DARABONBA_PTR_SET_RVALUE(attributeChanges_, attributeChanges) };


        // changedType Field Functions 
        bool hasChangedType() const { return this->changedType_ != nullptr;};
        void deleteChangedType() { this->changedType_ = nullptr;};
        inline string getChangedType() const { DARABONBA_PTR_GET_DEFAULT(changedType_, "") };
        inline ChangedResources& setChangedType(string changedType) { DARABONBA_PTR_SET_VALUE(changedType_, changedType) };


        // hasDrift Field Functions 
        bool hasHasDrift() const { return this->hasDrift_ != nullptr;};
        void deleteHasDrift() { this->hasDrift_ = nullptr;};
        inline bool getHasDrift() const { DARABONBA_PTR_GET_DEFAULT(hasDrift_, false) };
        inline ChangedResources& setHasDrift(bool hasDrift) { DARABONBA_PTR_SET_VALUE(hasDrift_, hasDrift) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline ChangedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceIdentifier Field Functions 
        bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
        void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
        inline string getResourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceIdentifier_, "") };
        inline ChangedResources& setResourceIdentifier(string resourceIdentifier) { DARABONBA_PTR_SET_VALUE(resourceIdentifier_, resourceIdentifier) };


      protected:
        shared_ptr<vector<ChangedResources::AttributeChanges>> attributeChanges_ {};
        shared_ptr<string> changedType_ {};
        shared_ptr<bool> hasDrift_ {};
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceIdentifier_ {};
      };

      virtual bool empty() const override { return this->changedResources_ == nullptr
        && this->driftedResources_ == nullptr && this->errorMessage_ == nullptr && this->identifier_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // changedResources Field Functions 
      bool hasChangedResources() const { return this->changedResources_ != nullptr;};
      void deleteChangedResources() { this->changedResources_ = nullptr;};
      inline const vector<Job::ChangedResources> & getChangedResources() const { DARABONBA_PTR_GET_CONST(changedResources_, vector<Job::ChangedResources>) };
      inline vector<Job::ChangedResources> getChangedResources() { DARABONBA_PTR_GET(changedResources_, vector<Job::ChangedResources>) };
      inline Job& setChangedResources(const vector<Job::ChangedResources> & changedResources) { DARABONBA_PTR_SET_VALUE(changedResources_, changedResources) };
      inline Job& setChangedResources(vector<Job::ChangedResources> && changedResources) { DARABONBA_PTR_SET_RVALUE(changedResources_, changedResources) };


      // driftedResources Field Functions 
      bool hasDriftedResources() const { return this->driftedResources_ != nullptr;};
      void deleteDriftedResources() { this->driftedResources_ = nullptr;};
      inline const vector<Job::DriftedResources> & getDriftedResources() const { DARABONBA_PTR_GET_CONST(driftedResources_, vector<Job::DriftedResources>) };
      inline vector<Job::DriftedResources> getDriftedResources() { DARABONBA_PTR_GET(driftedResources_, vector<Job::DriftedResources>) };
      inline Job& setDriftedResources(const vector<Job::DriftedResources> & driftedResources) { DARABONBA_PTR_SET_VALUE(driftedResources_, driftedResources) };
      inline Job& setDriftedResources(vector<Job::DriftedResources> && driftedResources) { DARABONBA_PTR_SET_RVALUE(driftedResources_, driftedResources) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Job& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline Job& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Job& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Job& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<Job::ChangedResources>> changedResources_ {};
      shared_ptr<vector<Job::DriftedResources>> driftedResources_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> identifier_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->job_ == nullptr
        && this->requestId_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetTerraformStateDetectionResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, GetTerraformStateDetectionResponseBody::Job) };
    inline GetTerraformStateDetectionResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, GetTerraformStateDetectionResponseBody::Job) };
    inline GetTerraformStateDetectionResponseBody& setJob(const GetTerraformStateDetectionResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetTerraformStateDetectionResponseBody& setJob(GetTerraformStateDetectionResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTerraformStateDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetTerraformStateDetectionResponseBody::Job> job_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif

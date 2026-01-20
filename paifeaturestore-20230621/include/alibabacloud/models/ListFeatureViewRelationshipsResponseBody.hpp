// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWRELATIONSHIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWRELATIONSHIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureViewRelationshipsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Relationships, relationships_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Relationships, relationships_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFeatureViewRelationshipsResponseBody() = default ;
    ListFeatureViewRelationshipsResponseBody(const ListFeatureViewRelationshipsResponseBody &) = default ;
    ListFeatureViewRelationshipsResponseBody(ListFeatureViewRelationshipsResponseBody &&) = default ;
    ListFeatureViewRelationshipsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewRelationshipsResponseBody() = default ;
    ListFeatureViewRelationshipsResponseBody& operator=(const ListFeatureViewRelationshipsResponseBody &) = default ;
    ListFeatureViewRelationshipsResponseBody& operator=(ListFeatureViewRelationshipsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Relationships : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Relationships& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureViewName, featureViewName_);
        DARABONBA_PTR_TO_JSON(Models, models_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      };
      friend void from_json(const Darabonba::Json& j, Relationships& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureViewName, featureViewName_);
        DARABONBA_PTR_FROM_JSON(Models, models_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      };
      Relationships() = default ;
      Relationships(const Relationships &) = default ;
      Relationships(Relationships &&) = default ;
      Relationships(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Relationships() = default ;
      Relationships& operator=(const Relationships &) = default ;
      Relationships& operator=(Relationships &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Models : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Models& obj) { 
          DARABONBA_PTR_TO_JSON(ModelId, modelId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        };
        friend void from_json(const Darabonba::Json& j, Models& obj) { 
          DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        };
        Models() = default ;
        Models(const Models &) = default ;
        Models(Models &&) = default ;
        Models(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Models() = default ;
        Models& operator=(const Models &) = default ;
        Models& operator=(Models &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->modelId_ == nullptr
        && this->modelName_ == nullptr; };
        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
        inline Models& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline Models& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      protected:
        shared_ptr<string> modelId_ {};
        shared_ptr<string> modelName_ {};
      };

      virtual bool empty() const override { return this->featureViewName_ == nullptr
        && this->models_ == nullptr && this->projectName_ == nullptr; };
      // featureViewName Field Functions 
      bool hasFeatureViewName() const { return this->featureViewName_ != nullptr;};
      void deleteFeatureViewName() { this->featureViewName_ = nullptr;};
      inline string getFeatureViewName() const { DARABONBA_PTR_GET_DEFAULT(featureViewName_, "") };
      inline Relationships& setFeatureViewName(string featureViewName) { DARABONBA_PTR_SET_VALUE(featureViewName_, featureViewName) };


      // models Field Functions 
      bool hasModels() const { return this->models_ != nullptr;};
      void deleteModels() { this->models_ = nullptr;};
      inline const vector<Relationships::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<Relationships::Models>) };
      inline vector<Relationships::Models> getModels() { DARABONBA_PTR_GET(models_, vector<Relationships::Models>) };
      inline Relationships& setModels(const vector<Relationships::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
      inline Relationships& setModels(vector<Relationships::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Relationships& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    protected:
      shared_ptr<string> featureViewName_ {};
      shared_ptr<vector<Relationships::Models>> models_ {};
      shared_ptr<string> projectName_ {};
    };

    virtual bool empty() const override { return this->relationships_ == nullptr
        && this->requestId_ == nullptr; };
    // relationships Field Functions 
    bool hasRelationships() const { return this->relationships_ != nullptr;};
    void deleteRelationships() { this->relationships_ = nullptr;};
    inline const vector<ListFeatureViewRelationshipsResponseBody::Relationships> & getRelationships() const { DARABONBA_PTR_GET_CONST(relationships_, vector<ListFeatureViewRelationshipsResponseBody::Relationships>) };
    inline vector<ListFeatureViewRelationshipsResponseBody::Relationships> getRelationships() { DARABONBA_PTR_GET(relationships_, vector<ListFeatureViewRelationshipsResponseBody::Relationships>) };
    inline ListFeatureViewRelationshipsResponseBody& setRelationships(const vector<ListFeatureViewRelationshipsResponseBody::Relationships> & relationships) { DARABONBA_PTR_SET_VALUE(relationships_, relationships) };
    inline ListFeatureViewRelationshipsResponseBody& setRelationships(vector<ListFeatureViewRelationshipsResponseBody::Relationships> && relationships) { DARABONBA_PTR_SET_RVALUE(relationships_, relationships) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureViewRelationshipsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListFeatureViewRelationshipsResponseBody::Relationships>> relationships_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif

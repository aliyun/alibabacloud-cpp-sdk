// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWFIELDRELATIONSHIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWFIELDRELATIONSHIPSRESPONSEBODY_HPP_
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
  class ListFeatureViewFieldRelationshipsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewFieldRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Relationships, relationships_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewFieldRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Relationships, relationships_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFeatureViewFieldRelationshipsResponseBody() = default ;
    ListFeatureViewFieldRelationshipsResponseBody(const ListFeatureViewFieldRelationshipsResponseBody &) = default ;
    ListFeatureViewFieldRelationshipsResponseBody(ListFeatureViewFieldRelationshipsResponseBody &&) = default ;
    ListFeatureViewFieldRelationshipsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewFieldRelationshipsResponseBody() = default ;
    ListFeatureViewFieldRelationshipsResponseBody& operator=(const ListFeatureViewFieldRelationshipsResponseBody &) = default ;
    ListFeatureViewFieldRelationshipsResponseBody& operator=(ListFeatureViewFieldRelationshipsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Relationships : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Relationships& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
        DARABONBA_PTR_TO_JSON(Models, models_);
        DARABONBA_PTR_TO_JSON(OfflineTableName, offlineTableName_);
        DARABONBA_PTR_TO_JSON(OnlineTableName, onlineTableName_);
      };
      friend void from_json(const Darabonba::Json& j, Relationships& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
        DARABONBA_PTR_FROM_JSON(Models, models_);
        DARABONBA_PTR_FROM_JSON(OfflineTableName, offlineTableName_);
        DARABONBA_PTR_FROM_JSON(OnlineTableName, onlineTableName_);
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
          DARABONBA_PTR_TO_JSON(FeatureAliasName, featureAliasName_);
          DARABONBA_PTR_TO_JSON(ModelId, modelId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        };
        friend void from_json(const Darabonba::Json& j, Models& obj) { 
          DARABONBA_PTR_FROM_JSON(FeatureAliasName, featureAliasName_);
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
        virtual bool empty() const override { return this->featureAliasName_ == nullptr
        && this->modelId_ == nullptr && this->modelName_ == nullptr; };
        // featureAliasName Field Functions 
        bool hasFeatureAliasName() const { return this->featureAliasName_ != nullptr;};
        void deleteFeatureAliasName() { this->featureAliasName_ = nullptr;};
        inline string getFeatureAliasName() const { DARABONBA_PTR_GET_DEFAULT(featureAliasName_, "") };
        inline Models& setFeatureAliasName(string featureAliasName) { DARABONBA_PTR_SET_VALUE(featureAliasName_, featureAliasName) };


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
        shared_ptr<string> featureAliasName_ {};
        shared_ptr<string> modelId_ {};
        shared_ptr<string> modelName_ {};
      };

      virtual bool empty() const override { return this->featureName_ == nullptr
        && this->models_ == nullptr && this->offlineTableName_ == nullptr && this->onlineTableName_ == nullptr; };
      // featureName Field Functions 
      bool hasFeatureName() const { return this->featureName_ != nullptr;};
      void deleteFeatureName() { this->featureName_ = nullptr;};
      inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
      inline Relationships& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


      // models Field Functions 
      bool hasModels() const { return this->models_ != nullptr;};
      void deleteModels() { this->models_ = nullptr;};
      inline const vector<Relationships::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<Relationships::Models>) };
      inline vector<Relationships::Models> getModels() { DARABONBA_PTR_GET(models_, vector<Relationships::Models>) };
      inline Relationships& setModels(const vector<Relationships::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
      inline Relationships& setModels(vector<Relationships::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


      // offlineTableName Field Functions 
      bool hasOfflineTableName() const { return this->offlineTableName_ != nullptr;};
      void deleteOfflineTableName() { this->offlineTableName_ = nullptr;};
      inline string getOfflineTableName() const { DARABONBA_PTR_GET_DEFAULT(offlineTableName_, "") };
      inline Relationships& setOfflineTableName(string offlineTableName) { DARABONBA_PTR_SET_VALUE(offlineTableName_, offlineTableName) };


      // onlineTableName Field Functions 
      bool hasOnlineTableName() const { return this->onlineTableName_ != nullptr;};
      void deleteOnlineTableName() { this->onlineTableName_ = nullptr;};
      inline string getOnlineTableName() const { DARABONBA_PTR_GET_DEFAULT(onlineTableName_, "") };
      inline Relationships& setOnlineTableName(string onlineTableName) { DARABONBA_PTR_SET_VALUE(onlineTableName_, onlineTableName) };


    protected:
      shared_ptr<string> featureName_ {};
      shared_ptr<vector<Relationships::Models>> models_ {};
      shared_ptr<string> offlineTableName_ {};
      shared_ptr<string> onlineTableName_ {};
    };

    virtual bool empty() const override { return this->relationships_ == nullptr
        && this->requestId_ == nullptr; };
    // relationships Field Functions 
    bool hasRelationships() const { return this->relationships_ != nullptr;};
    void deleteRelationships() { this->relationships_ = nullptr;};
    inline const vector<ListFeatureViewFieldRelationshipsResponseBody::Relationships> & getRelationships() const { DARABONBA_PTR_GET_CONST(relationships_, vector<ListFeatureViewFieldRelationshipsResponseBody::Relationships>) };
    inline vector<ListFeatureViewFieldRelationshipsResponseBody::Relationships> getRelationships() { DARABONBA_PTR_GET(relationships_, vector<ListFeatureViewFieldRelationshipsResponseBody::Relationships>) };
    inline ListFeatureViewFieldRelationshipsResponseBody& setRelationships(const vector<ListFeatureViewFieldRelationshipsResponseBody::Relationships> & relationships) { DARABONBA_PTR_SET_VALUE(relationships_, relationships) };
    inline ListFeatureViewFieldRelationshipsResponseBody& setRelationships(vector<ListFeatureViewFieldRelationshipsResponseBody::Relationships> && relationships) { DARABONBA_PTR_SET_RVALUE(relationships_, relationships) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureViewFieldRelationshipsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListFeatureViewFieldRelationshipsResponseBody::Relationships>> relationships_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif

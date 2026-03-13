// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationMetadata, evaluationMetadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationMetadata, evaluationMetadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEvaluationMetadataResponseBody() = default ;
    ListEvaluationMetadataResponseBody(const ListEvaluationMetadataResponseBody &) = default ;
    ListEvaluationMetadataResponseBody(ListEvaluationMetadataResponseBody &&) = default ;
    ListEvaluationMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataResponseBody() = default ;
    ListEvaluationMetadataResponseBody& operator=(const ListEvaluationMetadataResponseBody &) = default ;
    ListEvaluationMetadataResponseBody& operator=(ListEvaluationMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EvaluationMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EvaluationMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, EvaluationMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      EvaluationMetadata() = default ;
      EvaluationMetadata(const EvaluationMetadata &) = default ;
      EvaluationMetadata(EvaluationMetadata &&) = default ;
      EvaluationMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EvaluationMetadata() = default ;
      EvaluationMetadata& operator=(const EvaluationMetadata &) = default ;
      EvaluationMetadata& operator=(EvaluationMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(RecommendationLevel, recommendationLevel_);
          DARABONBA_PTR_TO_JSON(RemediationMetadata, remediationMetadata_);
          DARABONBA_PTR_TO_JSON(ResourceMetadata, resourceMetadata_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(Stage, stage_);
          DARABONBA_PTR_TO_JSON(TopicCode, topicCode_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(RecommendationLevel, recommendationLevel_);
          DARABONBA_PTR_FROM_JSON(RemediationMetadata, remediationMetadata_);
          DARABONBA_PTR_FROM_JSON(ResourceMetadata, resourceMetadata_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(Stage, stage_);
          DARABONBA_PTR_FROM_JSON(TopicCode, topicCode_);
        };
        Metadata() = default ;
        Metadata(const Metadata &) = default ;
        Metadata(Metadata &&) = default ;
        Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metadata() = default ;
        Metadata& operator=(const Metadata &) = default ;
        Metadata& operator=(Metadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceMetadata : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceMetadata& obj) { 
            DARABONBA_PTR_TO_JSON(ResourcePropertyMetadata, resourcePropertyMetadata_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceMetadata& obj) { 
            DARABONBA_PTR_FROM_JSON(ResourcePropertyMetadata, resourcePropertyMetadata_);
          };
          ResourceMetadata() = default ;
          ResourceMetadata(const ResourceMetadata &) = default ;
          ResourceMetadata(ResourceMetadata &&) = default ;
          ResourceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceMetadata() = default ;
          ResourceMetadata& operator=(const ResourceMetadata &) = default ;
          ResourceMetadata& operator=(ResourceMetadata &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ResourcePropertyMetadata : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ResourcePropertyMetadata& obj) { 
              DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
              DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
              DARABONBA_PTR_TO_JSON(PropertyType, propertyType_);
            };
            friend void from_json(const Darabonba::Json& j, ResourcePropertyMetadata& obj) { 
              DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
              DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
              DARABONBA_PTR_FROM_JSON(PropertyType, propertyType_);
            };
            ResourcePropertyMetadata() = default ;
            ResourcePropertyMetadata(const ResourcePropertyMetadata &) = default ;
            ResourcePropertyMetadata(ResourcePropertyMetadata &&) = default ;
            ResourcePropertyMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ResourcePropertyMetadata() = default ;
            ResourcePropertyMetadata& operator=(const ResourcePropertyMetadata &) = default ;
            ResourcePropertyMetadata& operator=(ResourcePropertyMetadata &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->displayName_ == nullptr
        && this->propertyName_ == nullptr && this->propertyType_ == nullptr; };
            // displayName Field Functions 
            bool hasDisplayName() const { return this->displayName_ != nullptr;};
            void deleteDisplayName() { this->displayName_ = nullptr;};
            inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
            inline ResourcePropertyMetadata& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


            // propertyName Field Functions 
            bool hasPropertyName() const { return this->propertyName_ != nullptr;};
            void deletePropertyName() { this->propertyName_ = nullptr;};
            inline string getPropertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
            inline ResourcePropertyMetadata& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


            // propertyType Field Functions 
            bool hasPropertyType() const { return this->propertyType_ != nullptr;};
            void deletePropertyType() { this->propertyType_ = nullptr;};
            inline string getPropertyType() const { DARABONBA_PTR_GET_DEFAULT(propertyType_, "") };
            inline ResourcePropertyMetadata& setPropertyType(string propertyType) { DARABONBA_PTR_SET_VALUE(propertyType_, propertyType) };


          protected:
            // The display name of the resource property.
            shared_ptr<string> displayName_ {};
            // The name of the resource property.
            shared_ptr<string> propertyName_ {};
            // The type of the resource property.
            shared_ptr<string> propertyType_ {};
          };

          virtual bool empty() const override { return this->resourcePropertyMetadata_ == nullptr; };
          // resourcePropertyMetadata Field Functions 
          bool hasResourcePropertyMetadata() const { return this->resourcePropertyMetadata_ != nullptr;};
          void deleteResourcePropertyMetadata() { this->resourcePropertyMetadata_ = nullptr;};
          inline const vector<ResourceMetadata::ResourcePropertyMetadata> & getResourcePropertyMetadata() const { DARABONBA_PTR_GET_CONST(resourcePropertyMetadata_, vector<ResourceMetadata::ResourcePropertyMetadata>) };
          inline vector<ResourceMetadata::ResourcePropertyMetadata> getResourcePropertyMetadata() { DARABONBA_PTR_GET(resourcePropertyMetadata_, vector<ResourceMetadata::ResourcePropertyMetadata>) };
          inline ResourceMetadata& setResourcePropertyMetadata(const vector<ResourceMetadata::ResourcePropertyMetadata> & resourcePropertyMetadata) { DARABONBA_PTR_SET_VALUE(resourcePropertyMetadata_, resourcePropertyMetadata) };
          inline ResourceMetadata& setResourcePropertyMetadata(vector<ResourceMetadata::ResourcePropertyMetadata> && resourcePropertyMetadata) { DARABONBA_PTR_SET_RVALUE(resourcePropertyMetadata_, resourcePropertyMetadata) };


        protected:
          // The metadata of the resource properties.
          shared_ptr<vector<ResourceMetadata::ResourcePropertyMetadata>> resourcePropertyMetadata_ {};
        };

        class RemediationMetadata : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RemediationMetadata& obj) { 
            DARABONBA_PTR_TO_JSON(Remediation, remediation_);
          };
          friend void from_json(const Darabonba::Json& j, RemediationMetadata& obj) { 
            DARABONBA_PTR_FROM_JSON(Remediation, remediation_);
          };
          RemediationMetadata() = default ;
          RemediationMetadata(const RemediationMetadata &) = default ;
          RemediationMetadata(RemediationMetadata &&) = default ;
          RemediationMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RemediationMetadata() = default ;
          RemediationMetadata& operator=(const RemediationMetadata &) = default ;
          RemediationMetadata& operator=(RemediationMetadata &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Remediation : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Remediation& obj) { 
              DARABONBA_PTR_TO_JSON(Actions, actions_);
              DARABONBA_PTR_TO_JSON(RemediationType, remediationType_);
            };
            friend void from_json(const Darabonba::Json& j, Remediation& obj) { 
              DARABONBA_PTR_FROM_JSON(Actions, actions_);
              DARABONBA_PTR_FROM_JSON(RemediationType, remediationType_);
            };
            Remediation() = default ;
            Remediation(const Remediation &) = default ;
            Remediation(Remediation &&) = default ;
            Remediation(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Remediation() = default ;
            Remediation& operator=(const Remediation &) = default ;
            Remediation& operator=(Remediation &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Actions : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Actions& obj) { 
                DARABONBA_PTR_TO_JSON(Classification, classification_);
                DARABONBA_PTR_TO_JSON(CostDescription, costDescription_);
                DARABONBA_PTR_TO_JSON(Description, description_);
                DARABONBA_PTR_TO_JSON(Guidance, guidance_);
                DARABONBA_PTR_TO_JSON(Notice, notice_);
                DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
              };
              friend void from_json(const Darabonba::Json& j, Actions& obj) { 
                DARABONBA_PTR_FROM_JSON(Classification, classification_);
                DARABONBA_PTR_FROM_JSON(CostDescription, costDescription_);
                DARABONBA_PTR_FROM_JSON(Description, description_);
                DARABONBA_PTR_FROM_JSON(Guidance, guidance_);
                DARABONBA_PTR_FROM_JSON(Notice, notice_);
                DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
              };
              Actions() = default ;
              Actions(const Actions &) = default ;
              Actions(Actions &&) = default ;
              Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Actions() = default ;
              Actions& operator=(const Actions &) = default ;
              Actions& operator=(Actions &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Guidance : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Guidance& obj) { 
                  DARABONBA_PTR_TO_JSON(ButtonName, buttonName_);
                  DARABONBA_PTR_TO_JSON(ButtonRef, buttonRef_);
                  DARABONBA_PTR_TO_JSON(Content, content_);
                  DARABONBA_PTR_TO_JSON(Title, title_);
                };
                friend void from_json(const Darabonba::Json& j, Guidance& obj) { 
                  DARABONBA_PTR_FROM_JSON(ButtonName, buttonName_);
                  DARABONBA_PTR_FROM_JSON(ButtonRef, buttonRef_);
                  DARABONBA_PTR_FROM_JSON(Content, content_);
                  DARABONBA_PTR_FROM_JSON(Title, title_);
                };
                Guidance() = default ;
                Guidance(const Guidance &) = default ;
                Guidance(Guidance &&) = default ;
                Guidance(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Guidance() = default ;
                Guidance& operator=(const Guidance &) = default ;
                Guidance& operator=(Guidance &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->buttonName_ == nullptr
        && this->buttonRef_ == nullptr && this->content_ == nullptr && this->title_ == nullptr; };
                // buttonName Field Functions 
                bool hasButtonName() const { return this->buttonName_ != nullptr;};
                void deleteButtonName() { this->buttonName_ = nullptr;};
                inline string getButtonName() const { DARABONBA_PTR_GET_DEFAULT(buttonName_, "") };
                inline Guidance& setButtonName(string buttonName) { DARABONBA_PTR_SET_VALUE(buttonName_, buttonName) };


                // buttonRef Field Functions 
                bool hasButtonRef() const { return this->buttonRef_ != nullptr;};
                void deleteButtonRef() { this->buttonRef_ = nullptr;};
                inline string getButtonRef() const { DARABONBA_PTR_GET_DEFAULT(buttonRef_, "") };
                inline Guidance& setButtonRef(string buttonRef) { DARABONBA_PTR_SET_VALUE(buttonRef_, buttonRef) };


                // content Field Functions 
                bool hasContent() const { return this->content_ != nullptr;};
                void deleteContent() { this->content_ = nullptr;};
                inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
                inline Guidance& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline Guidance& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                // The display name of the fixing button.
                shared_ptr<string> buttonName_ {};
                // The navigation URL of the fixing button.
                shared_ptr<string> buttonRef_ {};
                // The fixing procedure.
                shared_ptr<string> content_ {};
                // The title of the fixing procedure.
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->classification_ == nullptr
        && this->costDescription_ == nullptr && this->description_ == nullptr && this->guidance_ == nullptr && this->notice_ == nullptr && this->suggestion_ == nullptr; };
              // classification Field Functions 
              bool hasClassification() const { return this->classification_ != nullptr;};
              void deleteClassification() { this->classification_ = nullptr;};
              inline string getClassification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
              inline Actions& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


              // costDescription Field Functions 
              bool hasCostDescription() const { return this->costDescription_ != nullptr;};
              void deleteCostDescription() { this->costDescription_ = nullptr;};
              inline string getCostDescription() const { DARABONBA_PTR_GET_DEFAULT(costDescription_, "") };
              inline Actions& setCostDescription(string costDescription) { DARABONBA_PTR_SET_VALUE(costDescription_, costDescription) };


              // description Field Functions 
              bool hasDescription() const { return this->description_ != nullptr;};
              void deleteDescription() { this->description_ = nullptr;};
              inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
              inline Actions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


              // guidance Field Functions 
              bool hasGuidance() const { return this->guidance_ != nullptr;};
              void deleteGuidance() { this->guidance_ = nullptr;};
              inline const vector<Actions::Guidance> & getGuidance() const { DARABONBA_PTR_GET_CONST(guidance_, vector<Actions::Guidance>) };
              inline vector<Actions::Guidance> getGuidance() { DARABONBA_PTR_GET(guidance_, vector<Actions::Guidance>) };
              inline Actions& setGuidance(const vector<Actions::Guidance> & guidance) { DARABONBA_PTR_SET_VALUE(guidance_, guidance) };
              inline Actions& setGuidance(vector<Actions::Guidance> && guidance) { DARABONBA_PTR_SET_RVALUE(guidance_, guidance) };


              // notice Field Functions 
              bool hasNotice() const { return this->notice_ != nullptr;};
              void deleteNotice() { this->notice_ = nullptr;};
              inline string getNotice() const { DARABONBA_PTR_GET_DEFAULT(notice_, "") };
              inline Actions& setNotice(string notice) { DARABONBA_PTR_SET_VALUE(notice_, notice) };


              // suggestion Field Functions 
              bool hasSuggestion() const { return this->suggestion_ != nullptr;};
              void deleteSuggestion() { this->suggestion_ = nullptr;};
              inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
              inline Actions& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


            protected:
              // The fixing method.
              // 
              // >  This parameter is returned only if the value of `RemediationType` is `Analysis`.
              shared_ptr<string> classification_ {};
              // The fixing cost.
              shared_ptr<string> costDescription_ {};
              // The description of the fixing item.
              // 
              // >  This parameter is returned only if the value of `RemediationType` is `Analysis`.
              shared_ptr<string> description_ {};
              // The content of the fixing items.
              shared_ptr<vector<Actions::Guidance>> guidance_ {};
              // The usage notes of the fixing item.
              shared_ptr<string> notice_ {};
              // The fixing suggestion.
              // 
              // >  This parameter is returned only if the value of `RemediationType` is `Analysis`.
              shared_ptr<string> suggestion_ {};
            };

            virtual bool empty() const override { return this->actions_ == nullptr
        && this->remediationType_ == nullptr; };
            // actions Field Functions 
            bool hasActions() const { return this->actions_ != nullptr;};
            void deleteActions() { this->actions_ = nullptr;};
            inline const vector<Remediation::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Remediation::Actions>) };
            inline vector<Remediation::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<Remediation::Actions>) };
            inline Remediation& setActions(const vector<Remediation::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
            inline Remediation& setActions(vector<Remediation::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


            // remediationType Field Functions 
            bool hasRemediationType() const { return this->remediationType_ != nullptr;};
            void deleteRemediationType() { this->remediationType_ = nullptr;};
            inline string getRemediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
            inline Remediation& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


          protected:
            // The fixing operations.
            shared_ptr<vector<Remediation::Actions>> actions_ {};
            // The type of the fixing method. Valid values:
            // 
            // *   Manual: manual fixing
            // *   QuickFix: quick fixing
            // *   Analysis: auxiliary decision-making
            shared_ptr<string> remediationType_ {};
          };

          virtual bool empty() const override { return this->remediation_ == nullptr; };
          // remediation Field Functions 
          bool hasRemediation() const { return this->remediation_ != nullptr;};
          void deleteRemediation() { this->remediation_ = nullptr;};
          inline const vector<RemediationMetadata::Remediation> & getRemediation() const { DARABONBA_PTR_GET_CONST(remediation_, vector<RemediationMetadata::Remediation>) };
          inline vector<RemediationMetadata::Remediation> getRemediation() { DARABONBA_PTR_GET(remediation_, vector<RemediationMetadata::Remediation>) };
          inline RemediationMetadata& setRemediation(const vector<RemediationMetadata::Remediation> & remediation) { DARABONBA_PTR_SET_VALUE(remediation_, remediation) };
          inline RemediationMetadata& setRemediation(vector<RemediationMetadata::Remediation> && remediation) { DARABONBA_PTR_SET_RVALUE(remediation_, remediation) };


        protected:
          // The fixing items.
          shared_ptr<vector<RemediationMetadata::Remediation>> remediation_ {};
        };

        virtual bool empty() const override { return this->category_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr && this->recommendationLevel_ == nullptr && this->remediationMetadata_ == nullptr
        && this->resourceMetadata_ == nullptr && this->scope_ == nullptr && this->stage_ == nullptr && this->topicCode_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Metadata& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Metadata& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Metadata& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Metadata& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // recommendationLevel Field Functions 
        bool hasRecommendationLevel() const { return this->recommendationLevel_ != nullptr;};
        void deleteRecommendationLevel() { this->recommendationLevel_ = nullptr;};
        inline string getRecommendationLevel() const { DARABONBA_PTR_GET_DEFAULT(recommendationLevel_, "") };
        inline Metadata& setRecommendationLevel(string recommendationLevel) { DARABONBA_PTR_SET_VALUE(recommendationLevel_, recommendationLevel) };


        // remediationMetadata Field Functions 
        bool hasRemediationMetadata() const { return this->remediationMetadata_ != nullptr;};
        void deleteRemediationMetadata() { this->remediationMetadata_ = nullptr;};
        inline const Metadata::RemediationMetadata & getRemediationMetadata() const { DARABONBA_PTR_GET_CONST(remediationMetadata_, Metadata::RemediationMetadata) };
        inline Metadata::RemediationMetadata getRemediationMetadata() { DARABONBA_PTR_GET(remediationMetadata_, Metadata::RemediationMetadata) };
        inline Metadata& setRemediationMetadata(const Metadata::RemediationMetadata & remediationMetadata) { DARABONBA_PTR_SET_VALUE(remediationMetadata_, remediationMetadata) };
        inline Metadata& setRemediationMetadata(Metadata::RemediationMetadata && remediationMetadata) { DARABONBA_PTR_SET_RVALUE(remediationMetadata_, remediationMetadata) };


        // resourceMetadata Field Functions 
        bool hasResourceMetadata() const { return this->resourceMetadata_ != nullptr;};
        void deleteResourceMetadata() { this->resourceMetadata_ = nullptr;};
        inline const Metadata::ResourceMetadata & getResourceMetadata() const { DARABONBA_PTR_GET_CONST(resourceMetadata_, Metadata::ResourceMetadata) };
        inline Metadata::ResourceMetadata getResourceMetadata() { DARABONBA_PTR_GET(resourceMetadata_, Metadata::ResourceMetadata) };
        inline Metadata& setResourceMetadata(const Metadata::ResourceMetadata & resourceMetadata) { DARABONBA_PTR_SET_VALUE(resourceMetadata_, resourceMetadata) };
        inline Metadata& setResourceMetadata(Metadata::ResourceMetadata && resourceMetadata) { DARABONBA_PTR_SET_RVALUE(resourceMetadata_, resourceMetadata) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
        inline Metadata& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


        // stage Field Functions 
        bool hasStage() const { return this->stage_ != nullptr;};
        void deleteStage() { this->stage_ = nullptr;};
        inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
        inline Metadata& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


        // topicCode Field Functions 
        bool hasTopicCode() const { return this->topicCode_ != nullptr;};
        void deleteTopicCode() { this->topicCode_ = nullptr;};
        inline string getTopicCode() const { DARABONBA_PTR_GET_DEFAULT(topicCode_, "") };
        inline Metadata& setTopicCode(string topicCode) { DARABONBA_PTR_SET_VALUE(topicCode_, topicCode) };


      protected:
        // The category of the check item.
        shared_ptr<string> category_ {};
        // The description of the check item.
        shared_ptr<string> description_ {};
        // The display name of the check item.
        shared_ptr<string> displayName_ {};
        // The ID of the metadata.
        shared_ptr<string> id_ {};
        // The governance level of the check item.
        shared_ptr<string> recommendationLevel_ {};
        // The metadata of the fixing task.
        shared_ptr<Metadata::RemediationMetadata> remediationMetadata_ {};
        // The metadata of the checked resources.
        shared_ptr<Metadata::ResourceMetadata> resourceMetadata_ {};
        // The scope of the check item. Valid values:
        // 
        // *   Account: the check item in a single-account governance maturity check
        // *   ResourceDirectory: the check item in a multi-account governance maturity check
        shared_ptr<string> scope_ {};
        // The status of the check item. Valid values:
        // 
        // *   Released: The check item is released.
        // *   Beta: The check item is pre-released.
        shared_ptr<string> stage_ {};
        shared_ptr<string> topicCode_ {};
      };

      virtual bool empty() const override { return this->metadata_ == nullptr
        && this->type_ == nullptr; };
      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const vector<EvaluationMetadata::Metadata> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, vector<EvaluationMetadata::Metadata>) };
      inline vector<EvaluationMetadata::Metadata> getMetadata() { DARABONBA_PTR_GET(metadata_, vector<EvaluationMetadata::Metadata>) };
      inline EvaluationMetadata& setMetadata(const vector<EvaluationMetadata::Metadata> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline EvaluationMetadata& setMetadata(vector<EvaluationMetadata::Metadata> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EvaluationMetadata& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The metadata objects of a specific metadata type.
      shared_ptr<vector<EvaluationMetadata::Metadata>> metadata_ {};
      // The type of the metadata. Valid values:
      // 
      // *   Metric: the check item
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->evaluationMetadata_ == nullptr
        && this->requestId_ == nullptr; };
    // evaluationMetadata Field Functions 
    bool hasEvaluationMetadata() const { return this->evaluationMetadata_ != nullptr;};
    void deleteEvaluationMetadata() { this->evaluationMetadata_ = nullptr;};
    inline const vector<ListEvaluationMetadataResponseBody::EvaluationMetadata> & getEvaluationMetadata() const { DARABONBA_PTR_GET_CONST(evaluationMetadata_, vector<ListEvaluationMetadataResponseBody::EvaluationMetadata>) };
    inline vector<ListEvaluationMetadataResponseBody::EvaluationMetadata> getEvaluationMetadata() { DARABONBA_PTR_GET(evaluationMetadata_, vector<ListEvaluationMetadataResponseBody::EvaluationMetadata>) };
    inline ListEvaluationMetadataResponseBody& setEvaluationMetadata(const vector<ListEvaluationMetadataResponseBody::EvaluationMetadata> & evaluationMetadata) { DARABONBA_PTR_SET_VALUE(evaluationMetadata_, evaluationMetadata) };
    inline ListEvaluationMetadataResponseBody& setEvaluationMetadata(vector<ListEvaluationMetadataResponseBody::EvaluationMetadata> && evaluationMetadata) { DARABONBA_PTR_SET_RVALUE(evaluationMetadata_, evaluationMetadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluationMetadataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of a governance maturity check.
    shared_ptr<vector<ListEvaluationMetadataResponseBody::EvaluationMetadata>> evaluationMetadata_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif

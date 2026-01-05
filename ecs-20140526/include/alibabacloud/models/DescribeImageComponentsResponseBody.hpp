// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGECOMPONENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageComponent, imageComponent_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageComponent, imageComponent_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImageComponentsResponseBody() = default ;
    DescribeImageComponentsResponseBody(const DescribeImageComponentsResponseBody &) = default ;
    DescribeImageComponentsResponseBody(DescribeImageComponentsResponseBody &&) = default ;
    DescribeImageComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageComponentsResponseBody() = default ;
    DescribeImageComponentsResponseBody& operator=(const DescribeImageComponentsResponseBody &) = default ;
    DescribeImageComponentsResponseBody& operator=(DescribeImageComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageComponent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageComponent& obj) { 
        DARABONBA_PTR_TO_JSON(ImageComponentSet, imageComponentSet_);
      };
      friend void from_json(const Darabonba::Json& j, ImageComponent& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageComponentSet, imageComponentSet_);
      };
      ImageComponent() = default ;
      ImageComponent(const ImageComponent &) = default ;
      ImageComponent(ImageComponent &&) = default ;
      ImageComponent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageComponent() = default ;
      ImageComponent& operator=(const ImageComponent &) = default ;
      ImageComponent& operator=(ImageComponent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ImageComponentSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageComponentSet& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
          DARABONBA_PTR_TO_JSON(ComponentVersion, componentVersion_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ImageComponentId, imageComponentId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SystemType, systemType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ImageComponentSet& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
          DARABONBA_PTR_FROM_JSON(ComponentVersion, componentVersion_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ImageComponentId, imageComponentId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        ImageComponentSet() = default ;
        ImageComponentSet(const ImageComponentSet &) = default ;
        ImageComponentSet(ImageComponentSet &&) = default ;
        ImageComponentSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageComponentSet() = default ;
        ImageComponentSet& operator=(const ImageComponentSet &) = default ;
        ImageComponentSet& operator=(ImageComponentSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The key of the tag.
            shared_ptr<string> tagKey_ {};
            // The value of the tag.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_PTR_TO_JSON(Parameter, parameter_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
          };
          Parameters() = default ;
          Parameters(const Parameters &) = default ;
          Parameters(Parameters &&) = default ;
          Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parameters() = default ;
          Parameters& operator=(const Parameters &) = default ;
          Parameters& operator=(Parameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Parameter : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
              DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
              DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Parameter() = default ;
            Parameter(const Parameter &) = default ;
            Parameter(Parameter &&) = default ;
            Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Parameter() = default ;
            Parameter& operator=(const Parameter &) = default ;
            Parameter& operator=(Parameter &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
            // defaultValue Field Functions 
            bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
            void deleteDefaultValue() { this->defaultValue_ = nullptr;};
            inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
            inline Parameter& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Parameter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Parameter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The default value of the parameter.
            shared_ptr<string> defaultValue_ {};
            // The name of the parameter.
            shared_ptr<string> name_ {};
            // The type of the parameter.
            // 
            // Valid values:
            // 
            // *   String
            // *   Number
            // *   Boolean
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->parameter_ == nullptr; };
          // parameter Field Functions 
          bool hasParameter() const { return this->parameter_ != nullptr;};
          void deleteParameter() { this->parameter_ = nullptr;};
          inline const vector<Parameters::Parameter> & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, vector<Parameters::Parameter>) };
          inline vector<Parameters::Parameter> getParameter() { DARABONBA_PTR_GET(parameter_, vector<Parameters::Parameter>) };
          inline Parameters& setParameter(const vector<Parameters::Parameter> & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
          inline Parameters& setParameter(vector<Parameters::Parameter> && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


        protected:
          shared_ptr<vector<Parameters::Parameter>> parameter_ {};
        };

        virtual bool empty() const override { return this->componentType_ == nullptr
        && this->componentVersion_ == nullptr && this->content_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->imageComponentId_ == nullptr
        && this->name_ == nullptr && this->owner_ == nullptr && this->parameters_ == nullptr && this->resourceGroupId_ == nullptr && this->systemType_ == nullptr
        && this->tags_ == nullptr; };
        // componentType Field Functions 
        bool hasComponentType() const { return this->componentType_ != nullptr;};
        void deleteComponentType() { this->componentType_ = nullptr;};
        inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
        inline ImageComponentSet& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


        // componentVersion Field Functions 
        bool hasComponentVersion() const { return this->componentVersion_ != nullptr;};
        void deleteComponentVersion() { this->componentVersion_ = nullptr;};
        inline string getComponentVersion() const { DARABONBA_PTR_GET_DEFAULT(componentVersion_, "") };
        inline ImageComponentSet& setComponentVersion(string componentVersion) { DARABONBA_PTR_SET_VALUE(componentVersion_, componentVersion) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline ImageComponentSet& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline ImageComponentSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ImageComponentSet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // imageComponentId Field Functions 
        bool hasImageComponentId() const { return this->imageComponentId_ != nullptr;};
        void deleteImageComponentId() { this->imageComponentId_ = nullptr;};
        inline string getImageComponentId() const { DARABONBA_PTR_GET_DEFAULT(imageComponentId_, "") };
        inline ImageComponentSet& setImageComponentId(string imageComponentId) { DARABONBA_PTR_SET_VALUE(imageComponentId_, imageComponentId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ImageComponentSet& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline ImageComponentSet& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const ImageComponentSet::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, ImageComponentSet::Parameters) };
        inline ImageComponentSet::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, ImageComponentSet::Parameters) };
        inline ImageComponentSet& setParameters(const ImageComponentSet::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline ImageComponentSet& setParameters(ImageComponentSet::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ImageComponentSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // systemType Field Functions 
        bool hasSystemType() const { return this->systemType_ != nullptr;};
        void deleteSystemType() { this->systemType_ = nullptr;};
        inline string getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
        inline ImageComponentSet& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const ImageComponentSet::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ImageComponentSet::Tags) };
        inline ImageComponentSet::Tags getTags() { DARABONBA_PTR_GET(tags_, ImageComponentSet::Tags) };
        inline ImageComponentSet& setTags(const ImageComponentSet::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ImageComponentSet& setTags(ImageComponentSet::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The type of the image component.
        shared_ptr<string> componentType_ {};
        // The version number of the image component.
        shared_ptr<string> componentVersion_ {};
        // The content of the image component.
        shared_ptr<string> content_ {};
        // The time when the image component was created.
        shared_ptr<string> creationTime_ {};
        // The description of the image component.
        shared_ptr<string> description_ {};
        // The ID of the image component.
        shared_ptr<string> imageComponentId_ {};
        // The name of the image component.
        shared_ptr<string> name_ {};
        // The type of the image component. Valid values:
        // 
        // *   SELF: the custom component that you created.
        // *   ALIYUN: the system component provided by Alibaba Cloud.
        shared_ptr<string> owner_ {};
        // The parameters contained in the image component.
        shared_ptr<ImageComponentSet::Parameters> parameters_ {};
        // The ID of the resource group to which the image component belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The type of the operating system supported by the image component.
        shared_ptr<string> systemType_ {};
        // The tags of the image component.
        shared_ptr<ImageComponentSet::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->imageComponentSet_ == nullptr; };
      // imageComponentSet Field Functions 
      bool hasImageComponentSet() const { return this->imageComponentSet_ != nullptr;};
      void deleteImageComponentSet() { this->imageComponentSet_ = nullptr;};
      inline const vector<ImageComponent::ImageComponentSet> & getImageComponentSet() const { DARABONBA_PTR_GET_CONST(imageComponentSet_, vector<ImageComponent::ImageComponentSet>) };
      inline vector<ImageComponent::ImageComponentSet> getImageComponentSet() { DARABONBA_PTR_GET(imageComponentSet_, vector<ImageComponent::ImageComponentSet>) };
      inline ImageComponent& setImageComponentSet(const vector<ImageComponent::ImageComponentSet> & imageComponentSet) { DARABONBA_PTR_SET_VALUE(imageComponentSet_, imageComponentSet) };
      inline ImageComponent& setImageComponentSet(vector<ImageComponent::ImageComponentSet> && imageComponentSet) { DARABONBA_PTR_SET_RVALUE(imageComponentSet_, imageComponentSet) };


    protected:
      shared_ptr<vector<ImageComponent::ImageComponentSet>> imageComponentSet_ {};
    };

    virtual bool empty() const override { return this->imageComponent_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // imageComponent Field Functions 
    bool hasImageComponent() const { return this->imageComponent_ != nullptr;};
    void deleteImageComponent() { this->imageComponent_ = nullptr;};
    inline const DescribeImageComponentsResponseBody::ImageComponent & getImageComponent() const { DARABONBA_PTR_GET_CONST(imageComponent_, DescribeImageComponentsResponseBody::ImageComponent) };
    inline DescribeImageComponentsResponseBody::ImageComponent getImageComponent() { DARABONBA_PTR_GET(imageComponent_, DescribeImageComponentsResponseBody::ImageComponent) };
    inline DescribeImageComponentsResponseBody& setImageComponent(const DescribeImageComponentsResponseBody::ImageComponent & imageComponent) { DARABONBA_PTR_SET_VALUE(imageComponent_, imageComponent) };
    inline DescribeImageComponentsResponseBody& setImageComponent(DescribeImageComponentsResponseBody::ImageComponent && imageComponent) { DARABONBA_PTR_SET_RVALUE(imageComponent_, imageComponent) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeImageComponentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImageComponentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageComponentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImageComponentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the image components.
    shared_ptr<DescribeImageComponentsResponseBody::ImageComponent> imageComponent_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. For information about how to use the returned value, see the "Usage notes" section of this topic.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of image components returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

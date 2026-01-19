// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelDetails, modelDetails_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelDetails, modelDetails_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeModelsResponseBody() = default ;
    DescribeModelsResponseBody(const DescribeModelsResponseBody &) = default ;
    DescribeModelsResponseBody(DescribeModelsResponseBody &&) = default ;
    DescribeModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelsResponseBody() = default ;
    DescribeModelsResponseBody& operator=(const DescribeModelsResponseBody &) = default ;
    DescribeModelsResponseBody& operator=(DescribeModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelDetails& obj) { 
        DARABONBA_PTR_TO_JSON(ModelDetail, modelDetail_);
      };
      friend void from_json(const Darabonba::Json& j, ModelDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(ModelDetail, modelDetail_);
      };
      ModelDetails() = default ;
      ModelDetails(const ModelDetails &) = default ;
      ModelDetails(ModelDetails &&) = default ;
      ModelDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelDetails() = default ;
      ModelDetails& operator=(const ModelDetails &) = default ;
      ModelDetails& operator=(ModelDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ModelDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelDetail& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ModelId, modelId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
          DARABONBA_PTR_TO_JSON(ModelRef, modelRef_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(Schema, schema_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ModelDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
          DARABONBA_PTR_FROM_JSON(ModelRef, modelRef_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(Schema, schema_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        ModelDetail() = default ;
        ModelDetail(const ModelDetail &) = default ;
        ModelDetail(ModelDetail &&) = default ;
        ModelDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelDetail() = default ;
        ModelDetail& operator=(const ModelDetail &) = default ;
        ModelDetail& operator=(ModelDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
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
          class TagInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagInfo() = default ;
            TagInfo(const TagInfo &) = default ;
            TagInfo(TagInfo &&) = default ;
            TagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagInfo() = default ;
            TagInfo& operator=(const TagInfo &) = default ;
            TagInfo& operator=(TagInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline TagInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tagInfo_ == nullptr; };
          // tagInfo Field Functions 
          bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
          void deleteTagInfo() { this->tagInfo_ = nullptr;};
          inline const vector<Tags::TagInfo> & getTagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Tags::TagInfo>) };
          inline vector<Tags::TagInfo> getTagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Tags::TagInfo>) };
          inline Tags& setTagInfo(const vector<Tags::TagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
          inline Tags& setTagInfo(vector<Tags::TagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


        protected:
          shared_ptr<vector<Tags::TagInfo>> tagInfo_ {};
        };

        virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr && this->modelRef_ == nullptr
        && this->modifiedTime_ == nullptr && this->schema_ == nullptr && this->tags_ == nullptr; };
        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline ModelDetail& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ModelDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ModelDetail& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
        inline ModelDetail& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline ModelDetail& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // modelRef Field Functions 
        bool hasModelRef() const { return this->modelRef_ != nullptr;};
        void deleteModelRef() { this->modelRef_ = nullptr;};
        inline string getModelRef() const { DARABONBA_PTR_GET_DEFAULT(modelRef_, "") };
        inline ModelDetail& setModelRef(string modelRef) { DARABONBA_PTR_SET_VALUE(modelRef_, modelRef) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline ModelDetail& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline ModelDetail& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const ModelDetail::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ModelDetail::Tags) };
        inline ModelDetail::Tags getTags() { DARABONBA_PTR_GET(tags_, ModelDetail::Tags) };
        inline ModelDetail& setTags(const ModelDetail::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ModelDetail& setTags(ModelDetail::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The time when the model was created.
        shared_ptr<string> createdTime_ {};
        // The description of the model definition.
        shared_ptr<string> description_ {};
        // The ID of the API group to which the model belongs.
        shared_ptr<string> groupId_ {};
        // The ID of the model.
        shared_ptr<string> modelId_ {};
        // The name of the model.
        shared_ptr<string> modelName_ {};
        // The URI of the model.
        shared_ptr<string> modelRef_ {};
        // The time when the model was last modified.
        shared_ptr<string> modifiedTime_ {};
        // The definition of the model.
        shared_ptr<string> schema_ {};
        // The tags of the model.
        shared_ptr<ModelDetail::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->modelDetail_ == nullptr; };
      // modelDetail Field Functions 
      bool hasModelDetail() const { return this->modelDetail_ != nullptr;};
      void deleteModelDetail() { this->modelDetail_ = nullptr;};
      inline const vector<ModelDetails::ModelDetail> & getModelDetail() const { DARABONBA_PTR_GET_CONST(modelDetail_, vector<ModelDetails::ModelDetail>) };
      inline vector<ModelDetails::ModelDetail> getModelDetail() { DARABONBA_PTR_GET(modelDetail_, vector<ModelDetails::ModelDetail>) };
      inline ModelDetails& setModelDetail(const vector<ModelDetails::ModelDetail> & modelDetail) { DARABONBA_PTR_SET_VALUE(modelDetail_, modelDetail) };
      inline ModelDetails& setModelDetail(vector<ModelDetails::ModelDetail> && modelDetail) { DARABONBA_PTR_SET_RVALUE(modelDetail_, modelDetail) };


    protected:
      shared_ptr<vector<ModelDetails::ModelDetail>> modelDetail_ {};
    };

    virtual bool empty() const override { return this->modelDetails_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // modelDetails Field Functions 
    bool hasModelDetails() const { return this->modelDetails_ != nullptr;};
    void deleteModelDetails() { this->modelDetails_ = nullptr;};
    inline const DescribeModelsResponseBody::ModelDetails & getModelDetails() const { DARABONBA_PTR_GET_CONST(modelDetails_, DescribeModelsResponseBody::ModelDetails) };
    inline DescribeModelsResponseBody::ModelDetails getModelDetails() { DARABONBA_PTR_GET(modelDetails_, DescribeModelsResponseBody::ModelDetails) };
    inline DescribeModelsResponseBody& setModelDetails(const DescribeModelsResponseBody::ModelDetails & modelDetails) { DARABONBA_PTR_SET_VALUE(modelDetails_, modelDetails) };
    inline DescribeModelsResponseBody& setModelDetails(DescribeModelsResponseBody::ModelDetails && modelDetails) { DARABONBA_PTR_SET_RVALUE(modelDetails_, modelDetails) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeModelsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeModelsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeModelsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned information about models. It is an array consisting of ModelDetail data.
    shared_ptr<DescribeModelsResponseBody::ModelDetails> modelDetails_ {};
    // The page number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

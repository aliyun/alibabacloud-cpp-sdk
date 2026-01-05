// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINEEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINEEXECUTIONSRESPONSEBODY_HPP_
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
  class DescribeImagePipelineExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelineExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImagePipelineExecution, imagePipelineExecution_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelineExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImagePipelineExecution, imagePipelineExecution_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImagePipelineExecutionsResponseBody() = default ;
    DescribeImagePipelineExecutionsResponseBody(const DescribeImagePipelineExecutionsResponseBody &) = default ;
    DescribeImagePipelineExecutionsResponseBody(DescribeImagePipelineExecutionsResponseBody &&) = default ;
    DescribeImagePipelineExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelineExecutionsResponseBody() = default ;
    DescribeImagePipelineExecutionsResponseBody& operator=(const DescribeImagePipelineExecutionsResponseBody &) = default ;
    DescribeImagePipelineExecutionsResponseBody& operator=(DescribeImagePipelineExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImagePipelineExecution : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImagePipelineExecution& obj) { 
        DARABONBA_PTR_TO_JSON(ImagePipelineExecutionSet, imagePipelineExecutionSet_);
      };
      friend void from_json(const Darabonba::Json& j, ImagePipelineExecution& obj) { 
        DARABONBA_PTR_FROM_JSON(ImagePipelineExecutionSet, imagePipelineExecutionSet_);
      };
      ImagePipelineExecution() = default ;
      ImagePipelineExecution(const ImagePipelineExecution &) = default ;
      ImagePipelineExecution(ImagePipelineExecution &&) = default ;
      ImagePipelineExecution(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImagePipelineExecution() = default ;
      ImagePipelineExecution& operator=(const ImagePipelineExecution &) = default ;
      ImagePipelineExecution& operator=(ImagePipelineExecution &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ImagePipelineExecutionSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImagePipelineExecutionSet& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(ImagePipelineId, imagePipelineId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ImagePipelineExecutionSet& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(ImagePipelineId, imagePipelineId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        ImagePipelineExecutionSet() = default ;
        ImagePipelineExecutionSet(const ImagePipelineExecutionSet &) = default ;
        ImagePipelineExecutionSet(ImagePipelineExecutionSet &&) = default ;
        ImagePipelineExecutionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImagePipelineExecutionSet() = default ;
        ImagePipelineExecutionSet& operator=(const ImagePipelineExecutionSet &) = default ;
        ImagePipelineExecutionSet& operator=(ImagePipelineExecutionSet &&) = default ;
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
            // The tag of the image creation task.
            shared_ptr<string> tagKey_ {};
            // The tags of the image creation task.
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

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->executionId_ == nullptr && this->imageId_ == nullptr && this->imagePipelineId_ == nullptr && this->message_ == nullptr && this->modifiedTime_ == nullptr
        && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline ImagePipelineExecutionSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // executionId Field Functions 
        bool hasExecutionId() const { return this->executionId_ != nullptr;};
        void deleteExecutionId() { this->executionId_ = nullptr;};
        inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
        inline ImagePipelineExecutionSet& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline ImagePipelineExecutionSet& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // imagePipelineId Field Functions 
        bool hasImagePipelineId() const { return this->imagePipelineId_ != nullptr;};
        void deleteImagePipelineId() { this->imagePipelineId_ = nullptr;};
        inline string getImagePipelineId() const { DARABONBA_PTR_GET_DEFAULT(imagePipelineId_, "") };
        inline ImagePipelineExecutionSet& setImagePipelineId(string imagePipelineId) { DARABONBA_PTR_SET_VALUE(imagePipelineId_, imagePipelineId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ImagePipelineExecutionSet& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline ImagePipelineExecutionSet& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ImagePipelineExecutionSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ImagePipelineExecutionSet& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const ImagePipelineExecutionSet::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ImagePipelineExecutionSet::Tags) };
        inline ImagePipelineExecutionSet::Tags getTags() { DARABONBA_PTR_GET(tags_, ImagePipelineExecutionSet::Tags) };
        inline ImagePipelineExecutionSet& setTags(const ImagePipelineExecutionSet::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ImagePipelineExecutionSet& setTags(ImagePipelineExecutionSet::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // Details of the image creation tasks.
        shared_ptr<string> creationTime_ {};
        // The data returned.
        shared_ptr<string> executionId_ {};
        // The ID of the resource group.
        shared_ptr<string> imageId_ {};
        // Details of the image creation task.
        shared_ptr<string> imagePipelineId_ {};
        // The last modification time of the image creation task.
        shared_ptr<string> message_ {};
        // The ID of the image template.
        shared_ptr<string> modifiedTime_ {};
        // The status of the image creation task. Valid values:
        // 
        // *   PREPARING: Resources, such as intermediate instances, are being created.
        // *   REPAIRING: The source image is being repaired.
        // *   BUILDING: The user-defined commands are being run and an image is being created.
        // *   TESTING: The user-defined test commands are being run.
        // *   DISTRIBUTING: The created image is being copied and shared.
        // *   RELEASING: The temporary resources generated during the image creation process are being released.
        // *   SUCCESS The image creation task is completed.
        // *   PARTITION_SUCCESS: The image creation task is partially completed. The image is created, but exceptions may occur when the image was copied or shared or when temporary resources were released.
        // *   FAILED: The image creation task fails.
        // *   TEST_FAILED: The image is created, but the test fails.
        // *   CANCELLING: The image creation task is being canceled.
        // *   CANCELLED: The image creation task is canceled.
        shared_ptr<string> resourceGroupId_ {};
        // The time when the image creation task was created.
        shared_ptr<string> status_ {};
        // The ID of the image.
        shared_ptr<ImagePipelineExecutionSet::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->imagePipelineExecutionSet_ == nullptr; };
      // imagePipelineExecutionSet Field Functions 
      bool hasImagePipelineExecutionSet() const { return this->imagePipelineExecutionSet_ != nullptr;};
      void deleteImagePipelineExecutionSet() { this->imagePipelineExecutionSet_ = nullptr;};
      inline const vector<ImagePipelineExecution::ImagePipelineExecutionSet> & getImagePipelineExecutionSet() const { DARABONBA_PTR_GET_CONST(imagePipelineExecutionSet_, vector<ImagePipelineExecution::ImagePipelineExecutionSet>) };
      inline vector<ImagePipelineExecution::ImagePipelineExecutionSet> getImagePipelineExecutionSet() { DARABONBA_PTR_GET(imagePipelineExecutionSet_, vector<ImagePipelineExecution::ImagePipelineExecutionSet>) };
      inline ImagePipelineExecution& setImagePipelineExecutionSet(const vector<ImagePipelineExecution::ImagePipelineExecutionSet> & imagePipelineExecutionSet) { DARABONBA_PTR_SET_VALUE(imagePipelineExecutionSet_, imagePipelineExecutionSet) };
      inline ImagePipelineExecution& setImagePipelineExecutionSet(vector<ImagePipelineExecution::ImagePipelineExecutionSet> && imagePipelineExecutionSet) { DARABONBA_PTR_SET_RVALUE(imagePipelineExecutionSet_, imagePipelineExecutionSet) };


    protected:
      shared_ptr<vector<ImagePipelineExecution::ImagePipelineExecutionSet>> imagePipelineExecutionSet_ {};
    };

    virtual bool empty() const override { return this->imagePipelineExecution_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // imagePipelineExecution Field Functions 
    bool hasImagePipelineExecution() const { return this->imagePipelineExecution_ != nullptr;};
    void deleteImagePipelineExecution() { this->imagePipelineExecution_ = nullptr;};
    inline const DescribeImagePipelineExecutionsResponseBody::ImagePipelineExecution & getImagePipelineExecution() const { DARABONBA_PTR_GET_CONST(imagePipelineExecution_, DescribeImagePipelineExecutionsResponseBody::ImagePipelineExecution) };
    inline DescribeImagePipelineExecutionsResponseBody::ImagePipelineExecution getImagePipelineExecution() { DARABONBA_PTR_GET(imagePipelineExecution_, DescribeImagePipelineExecutionsResponseBody::ImagePipelineExecution) };
    inline DescribeImagePipelineExecutionsResponseBody& setImagePipelineExecution(const DescribeImagePipelineExecutionsResponseBody::ImagePipelineExecution & imagePipelineExecution) { DARABONBA_PTR_SET_VALUE(imagePipelineExecution_, imagePipelineExecution) };
    inline DescribeImagePipelineExecutionsResponseBody& setImagePipelineExecution(DescribeImagePipelineExecutionsResponseBody::ImagePipelineExecution && imagePipelineExecution) { DARABONBA_PTR_SET_RVALUE(imagePipelineExecution_, imagePipelineExecution) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeImagePipelineExecutionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImagePipelineExecutionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImagePipelineExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImagePipelineExecutionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The total number of returned image components.
    shared_ptr<DescribeImagePipelineExecutionsResponseBody::ImagePipelineExecution> imagePipelineExecution_ {};
    // The request ID.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    shared_ptr<string> nextToken_ {};
    // The maximum number of entries per page. Valid values: 1 to 500
    // 
    // Default value: 50.
    shared_ptr<string> requestId_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists. For information about how to use the returned value, see the "Usage notes" section in this topic.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

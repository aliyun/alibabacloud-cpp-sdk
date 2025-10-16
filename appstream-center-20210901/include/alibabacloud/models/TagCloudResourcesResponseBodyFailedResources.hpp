// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGCLOUDRESOURCESRESPONSEBODYFAILEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_TAGCLOUDRESOURCESRESPONSEBODYFAILEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TagCloudResourcesResponseBodyFailedResourcesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class TagCloudResourcesResponseBodyFailedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagCloudResourcesResponseBodyFailedResources& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, TagCloudResourcesResponseBodyFailedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    TagCloudResourcesResponseBodyFailedResources() = default ;
    TagCloudResourcesResponseBodyFailedResources(const TagCloudResourcesResponseBodyFailedResources &) = default ;
    TagCloudResourcesResponseBodyFailedResources(TagCloudResourcesResponseBodyFailedResources &&) = default ;
    TagCloudResourcesResponseBodyFailedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagCloudResourcesResponseBodyFailedResources() = default ;
    TagCloudResourcesResponseBodyFailedResources& operator=(const TagCloudResourcesResponseBodyFailedResources &) = default ;
    TagCloudResourcesResponseBodyFailedResources& operator=(TagCloudResourcesResponseBodyFailedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->tags_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TagCloudResourcesResponseBodyFailedResources& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TagCloudResourcesResponseBodyFailedResources& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline TagCloudResourcesResponseBodyFailedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagCloudResourcesResponseBodyFailedResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::TagCloudResourcesResponseBodyFailedResourcesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::TagCloudResourcesResponseBodyFailedResourcesTags>) };
    inline vector<Models::TagCloudResourcesResponseBodyFailedResourcesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::TagCloudResourcesResponseBodyFailedResourcesTags>) };
    inline TagCloudResourcesResponseBodyFailedResources& setTags(const vector<Models::TagCloudResourcesResponseBodyFailedResourcesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TagCloudResourcesResponseBodyFailedResources& setTags(vector<Models::TagCloudResourcesResponseBodyFailedResourcesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<vector<Models::TagCloudResourcesResponseBodyFailedResourcesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

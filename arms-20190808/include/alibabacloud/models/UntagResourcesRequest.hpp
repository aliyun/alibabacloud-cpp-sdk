// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UntagResourcesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UntagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    UntagResourcesRequest() = default ;
    UntagResourcesRequest(const UntagResourcesRequest &) = default ;
    UntagResourcesRequest(UntagResourcesRequest &&) = default ;
    UntagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagResourcesRequest() = default ;
    UntagResourcesRequest& operator=(const UntagResourcesRequest &) = default ;
    UntagResourcesRequest& operator=(UntagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->all_ != nullptr
        && this->resourceId_ != nullptr && this->resourceType_ != nullptr && this->tagKey_ != nullptr && this->tags_ != nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool all() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UntagResourcesRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline UntagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline UntagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline const vector<string> & tagKey() const { DARABONBA_PTR_GET_CONST(tagKey_, vector<string>) };
    inline vector<string> tagKey() { DARABONBA_PTR_GET(tagKey_, vector<string>) };
    inline UntagResourcesRequest& setTagKey(const vector<string> & tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };
    inline UntagResourcesRequest& setTagKey(vector<string> && tagKey) { DARABONBA_PTR_SET_RVALUE(tagKey_, tagKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UntagResourcesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UntagResourcesRequestTags>) };
    inline vector<UntagResourcesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<UntagResourcesRequestTags>) };
    inline UntagResourcesRequest& setTags(const vector<UntagResourcesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UntagResourcesRequest& setTags(vector<UntagResourcesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // Specifies whether to delete all tags. This parameter takes effect only when the TagKey.N parameter is not specified. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> all_ = nullptr;
    // The resource IDs. You can specify a maximum of 50 resource IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // The type of the ARMS resources for which you want to modify tags. Valid values:
    // 
    // *   WEB: Browser Monitoring
    // *   APPLICATION: Application Monitoring
    // *   PROMETHEUS: Managed Service for Prometheus
    // *   SYNTHETICTASK: Synthetic Monitoring
    // *   ALERTRULE: Application Monitoring alert rule
    // *   PROMETHEUSALERTRULE: Managed Service for Prometheus alert rule
    // *   XTRACEAPP: Managed Service for OpenTelemetry
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tag keys. You can specify a maximum of 20 tag keys.
    std::shared_ptr<vector<string>> tagKey_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<UntagResourcesRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

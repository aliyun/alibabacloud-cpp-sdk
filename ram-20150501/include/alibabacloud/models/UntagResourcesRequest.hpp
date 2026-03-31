// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class UntagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(ResourceNames, resourceNames_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(ResourceNames, resourceNames_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
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
    virtual bool empty() const override { return this->all_ == nullptr
        && this->resourceNames_ == nullptr && this->resourceType_ == nullptr && this->tagKeys_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UntagResourcesRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // resourceNames Field Functions 
    bool hasResourceNames() const { return this->resourceNames_ != nullptr;};
    void deleteResourceNames() { this->resourceNames_ = nullptr;};
    inline const vector<string> & getResourceNames() const { DARABONBA_PTR_GET_CONST(resourceNames_, vector<string>) };
    inline vector<string> getResourceNames() { DARABONBA_PTR_GET(resourceNames_, vector<string>) };
    inline UntagResourcesRequest& setResourceNames(const vector<string> & resourceNames) { DARABONBA_PTR_SET_VALUE(resourceNames_, resourceNames) };
    inline UntagResourcesRequest& setResourceNames(vector<string> && resourceNames) { DARABONBA_PTR_SET_RVALUE(resourceNames_, resourceNames) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const vector<string> & getTagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<string>) };
    inline vector<string> getTagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<string>) };
    inline UntagResourcesRequest& setTagKeys(const vector<string> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline UntagResourcesRequest& setTagKeys(vector<string> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


  protected:
    // Specifies whether to remove all tags from the resources.
    // 
    // Enumerated values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> all_ {};
    // The names of the resources. You can specify up to 50 resource names.
    shared_ptr<vector<string>> resourceNames_ {};
    // The resource type.
    // 
    // Enumerated values:
    // 
    // *   role: RAM roles.
    // *   policy: policies.
    shared_ptr<string> resourceType_ {};
    // The keys of the tags. You can specify up to 20 tag keys.
    shared_ptr<vector<string>> tagKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif

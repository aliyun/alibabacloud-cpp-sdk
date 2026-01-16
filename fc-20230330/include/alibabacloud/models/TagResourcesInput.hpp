// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESINPUT_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class TagResourcesInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesInput& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesInput& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    TagResourcesInput() = default ;
    TagResourcesInput(const TagResourcesInput &) = default ;
    TagResourcesInput(TagResourcesInput &&) = default ;
    TagResourcesInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesInput() = default ;
    TagResourcesInput& operator=(const TagResourcesInput &) = default ;
    TagResourcesInput& operator=(TagResourcesInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->tag_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & getResourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> getResourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline TagResourcesInput& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline TagResourcesInput& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagResourcesInput& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tag>) };
    inline vector<Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tag>) };
    inline TagResourcesInput& setTag(const vector<Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline TagResourcesInput& setTag(vector<Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> resourceId_ {};
    shared_ptr<string> resourceType_ {};
    // This parameter is required.
    shared_ptr<vector<Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEBYTAGRESPONSEBODYTAGRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEBYTAGRESPONSEBODYTAGRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryInstanceByTagResponseBodyTagResourceTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInstanceByTagResponseBodyTagResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceByTagResponseBodyTagResource& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceByTagResponseBodyTagResource& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    QueryInstanceByTagResponseBodyTagResource() = default ;
    QueryInstanceByTagResponseBodyTagResource(const QueryInstanceByTagResponseBodyTagResource &) = default ;
    QueryInstanceByTagResponseBodyTagResource(QueryInstanceByTagResponseBodyTagResource &&) = default ;
    QueryInstanceByTagResponseBodyTagResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceByTagResponseBodyTagResource() = default ;
    QueryInstanceByTagResponseBodyTagResource& operator=(const QueryInstanceByTagResponseBodyTagResource &) = default ;
    QueryInstanceByTagResponseBodyTagResource& operator=(QueryInstanceByTagResponseBodyTagResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->resourceType_ != nullptr && this->tag_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline QueryInstanceByTagResponseBodyTagResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QueryInstanceByTagResponseBodyTagResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::QueryInstanceByTagResponseBodyTagResourceTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::QueryInstanceByTagResponseBodyTagResourceTag>) };
    inline vector<Models::QueryInstanceByTagResponseBodyTagResourceTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::QueryInstanceByTagResponseBodyTagResourceTag>) };
    inline QueryInstanceByTagResponseBodyTagResource& setTag(const vector<Models::QueryInstanceByTagResponseBodyTagResourceTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryInstanceByTagResponseBodyTagResource& setTag(vector<Models::QueryInstanceByTagResponseBodyTagResourceTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource. The returned resource type indicates a savings plan instance.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::QueryInstanceByTagResponseBodyTagResourceTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

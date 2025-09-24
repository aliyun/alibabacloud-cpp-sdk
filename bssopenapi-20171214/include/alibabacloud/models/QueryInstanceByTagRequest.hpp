// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEBYTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEBYTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryInstanceByTagRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInstanceByTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceByTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceByTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    QueryInstanceByTagRequest() = default ;
    QueryInstanceByTagRequest(const QueryInstanceByTagRequest &) = default ;
    QueryInstanceByTagRequest(QueryInstanceByTagRequest &&) = default ;
    QueryInstanceByTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceByTagRequest() = default ;
    QueryInstanceByTagRequest& operator=(const QueryInstanceByTagRequest &) = default ;
    QueryInstanceByTagRequest& operator=(QueryInstanceByTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->resourceType_ != nullptr && this->tag_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline QueryInstanceByTagRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline QueryInstanceByTagRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QueryInstanceByTagRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<QueryInstanceByTagRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<QueryInstanceByTagRequestTag>) };
    inline vector<QueryInstanceByTagRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<QueryInstanceByTagRequestTag>) };
    inline QueryInstanceByTagRequest& setTag(const vector<QueryInstanceByTagRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryInstanceByTagRequest& setTag(vector<QueryInstanceByTagRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of resources.
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // The type of the resource. Specify the savings plan instance as the type of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags.
    std::shared_ptr<vector<QueryInstanceByTagRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

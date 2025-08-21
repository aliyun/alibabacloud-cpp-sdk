// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagResourcesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeTagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeTagResourcesRequest() = default ;
    DescribeTagResourcesRequest(const DescribeTagResourcesRequest &) = default ;
    DescribeTagResourcesRequest(DescribeTagResourcesRequest &&) = default ;
    DescribeTagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagResourcesRequest() = default ;
    DescribeTagResourcesRequest& operator=(const DescribeTagResourcesRequest &) = default ;
    DescribeTagResourcesRequest& operator=(DescribeTagResourcesRequest &&) = default ;
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
    inline DescribeTagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline DescribeTagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeTagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeTagResourcesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeTagResourcesRequestTag>) };
    inline vector<DescribeTagResourcesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeTagResourcesRequestTag>) };
    inline DescribeTagResourcesRequest& setTag(const vector<DescribeTagResourcesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeTagResourcesRequest& setTag(vector<DescribeTagResourcesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of the resources. You can specify up to 50 IDs in each request.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // The resource type. Set the value to **DOMAIN**.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags. You can specify up to 20 tags in each request.
    std::shared_ptr<vector<DescribeTagResourcesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

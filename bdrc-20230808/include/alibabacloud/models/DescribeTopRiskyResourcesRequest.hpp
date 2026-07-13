// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPRISKYRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPRISKYRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeTopRiskyResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopRiskyResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerIds, resourceOwnerIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopRiskyResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerIds, resourceOwnerIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeTopRiskyResourcesRequest() = default ;
    DescribeTopRiskyResourcesRequest(const DescribeTopRiskyResourcesRequest &) = default ;
    DescribeTopRiskyResourcesRequest(DescribeTopRiskyResourcesRequest &&) = default ;
    DescribeTopRiskyResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopRiskyResourcesRequest() = default ;
    DescribeTopRiskyResourcesRequest& operator=(const DescribeTopRiskyResourcesRequest &) = default ;
    DescribeTopRiskyResourcesRequest& operator=(DescribeTopRiskyResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCategoryId_ == nullptr
        && this->resourceOwnerIds_ == nullptr && this->resourceType_ == nullptr; };
    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline DescribeTopRiskyResourcesRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


    // resourceOwnerIds Field Functions 
    bool hasResourceOwnerIds() const { return this->resourceOwnerIds_ != nullptr;};
    void deleteResourceOwnerIds() { this->resourceOwnerIds_ = nullptr;};
    inline const vector<int64_t> & getResourceOwnerIds() const { DARABONBA_PTR_GET_CONST(resourceOwnerIds_, vector<int64_t>) };
    inline vector<int64_t> getResourceOwnerIds() { DARABONBA_PTR_GET(resourceOwnerIds_, vector<int64_t>) };
    inline DescribeTopRiskyResourcesRequest& setResourceOwnerIds(const vector<int64_t> & resourceOwnerIds) { DARABONBA_PTR_SET_VALUE(resourceOwnerIds_, resourceOwnerIds) };
    inline DescribeTopRiskyResourcesRequest& setResourceOwnerIds(vector<int64_t> && resourceOwnerIds) { DARABONBA_PTR_SET_RVALUE(resourceOwnerIds_, resourceOwnerIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeTopRiskyResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the resource category.
    shared_ptr<string> resourceCategoryId_ {};
    shared_ptr<vector<int64_t>> resourceOwnerIds_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif

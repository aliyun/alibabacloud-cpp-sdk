// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERTAGGREGATEEVALUATIONRESULTSREQUESTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_REVERTAGGREGATEEVALUATIONRESULTSREQUESTRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class RevertAggregateEvaluationResultsRequestResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevertAggregateEvaluationResultsRequestResources& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, RevertAggregateEvaluationResultsRequestResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    RevertAggregateEvaluationResultsRequestResources() = default ;
    RevertAggregateEvaluationResultsRequestResources(const RevertAggregateEvaluationResultsRequestResources &) = default ;
    RevertAggregateEvaluationResultsRequestResources(RevertAggregateEvaluationResultsRequestResources &&) = default ;
    RevertAggregateEvaluationResultsRequestResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevertAggregateEvaluationResultsRequestResources() = default ;
    RevertAggregateEvaluationResultsRequestResources& operator=(const RevertAggregateEvaluationResultsRequestResources &) = default ;
    RevertAggregateEvaluationResultsRequestResources& operator=(RevertAggregateEvaluationResultsRequestResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->region_ == nullptr
        && return this->resourceAccountId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline RevertAggregateEvaluationResultsRequestResources& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceAccountId Field Functions 
    bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
    void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
    inline int64_t resourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, 0L) };
    inline RevertAggregateEvaluationResultsRequestResources& setResourceAccountId(int64_t resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline RevertAggregateEvaluationResultsRequestResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline RevertAggregateEvaluationResultsRequestResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the region in which your resources reside.
    // 
    // For more information about how to obtain the ID of the region in which your resources reside, see [ListAggregateDiscoveredResources](https://help.aliyun.com/document_detail/265983.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource belongs.
    // 
    // >  You must specify the ID of the current management account or a member in the account group of the management account.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> resourceAccountId_ = nullptr;
    // The resource ID.
    // 
    // For more information about how to obtain the ID of a resource, see [ListAggregateDiscoveredResources](https://help.aliyun.com/document_detail/265983.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource.
    // 
    // For more information about how to obtain the type of a resource, see [ListAggregateDiscoveredResources](https://help.aliyun.com/document_detail/265983.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

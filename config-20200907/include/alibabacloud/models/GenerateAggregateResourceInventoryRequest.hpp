// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEAGGREGATERESOURCEINVENTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEAGGREGATERESOURCEINVENTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GenerateAggregateResourceInventoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAggregateResourceInventoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAggregateResourceInventoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    GenerateAggregateResourceInventoryRequest() = default ;
    GenerateAggregateResourceInventoryRequest(const GenerateAggregateResourceInventoryRequest &) = default ;
    GenerateAggregateResourceInventoryRequest(GenerateAggregateResourceInventoryRequest &&) = default ;
    GenerateAggregateResourceInventoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAggregateResourceInventoryRequest() = default ;
    GenerateAggregateResourceInventoryRequest& operator=(const GenerateAggregateResourceInventoryRequest &) = default ;
    GenerateAggregateResourceInventoryRequest& operator=(GenerateAggregateResourceInventoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && return this->aggregatorId_ == nullptr && return this->regions_ == nullptr && return this->resourceDeleted_ == nullptr && return this->resourceTypes_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline string accountIds() const { DARABONBA_PTR_GET_DEFAULT(accountIds_, "") };
    inline GenerateAggregateResourceInventoryRequest& setAccountIds(string accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };


    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GenerateAggregateResourceInventoryRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline string regions() const { DARABONBA_PTR_GET_DEFAULT(regions_, "") };
    inline GenerateAggregateResourceInventoryRequest& setRegions(string regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };


    // resourceDeleted Field Functions 
    bool hasResourceDeleted() const { return this->resourceDeleted_ != nullptr;};
    void deleteResourceDeleted() { this->resourceDeleted_ = nullptr;};
    inline int32_t resourceDeleted() const { DARABONBA_PTR_GET_DEFAULT(resourceDeleted_, 0) };
    inline GenerateAggregateResourceInventoryRequest& setResourceDeleted(int32_t resourceDeleted) { DARABONBA_PTR_SET_VALUE(resourceDeleted_, resourceDeleted) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string resourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline GenerateAggregateResourceInventoryRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


  protected:
    // The IDs of member accounts in the account group. Separate multiple member account IDs with commas (,).
    std::shared_ptr<string> accountIds_ = nullptr;
    // The ID of the account group.
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The IDs of the regions to which the resources belong. Separate multiple region IDs with commas (,).
    std::shared_ptr<string> regions_ = nullptr;
    // Indicates whether the resource is deleted. Valid values:
    // 
    // *   1 (default): The resource is retained.
    // *   0: The resource is deleted.
    std::shared_ptr<int32_t> resourceDeleted_ = nullptr;
    // The resource types. Separate multiple resource types with commas (,).
    std::shared_ptr<string> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

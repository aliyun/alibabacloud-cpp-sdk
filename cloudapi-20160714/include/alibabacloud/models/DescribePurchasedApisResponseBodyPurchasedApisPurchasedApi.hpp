// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPISRESPONSEBODYPURCHASEDAPISPURCHASEDAPI_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPISRESPONSEBODYPURCHASEDAPISPURCHASEDAPI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(PurchasedTime, purchasedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(PurchasedTime, purchasedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi() = default ;
    DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi(const DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi &) = default ;
    DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi(DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi &&) = default ;
    DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi() = default ;
    DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& operator=(const DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi &) = default ;
    DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& operator=(DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->deployedTime_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->purchasedTime_ == nullptr && return this->regionId_ == nullptr && return this->stageName_ == nullptr && return this->visibility_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // deployedTime Field Functions 
    bool hasDeployedTime() const { return this->deployedTime_ != nullptr;};
    void deleteDeployedTime() { this->deployedTime_ = nullptr;};
    inline string deployedTime() const { DARABONBA_PTR_GET_DEFAULT(deployedTime_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setDeployedTime(string deployedTime) { DARABONBA_PTR_SET_VALUE(deployedTime_, deployedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // purchasedTime Field Functions 
    bool hasPurchasedTime() const { return this->purchasedTime_ != nullptr;};
    void deletePurchasedTime() { this->purchasedTime_ = nullptr;};
    inline string purchasedTime() const { DARABONBA_PTR_GET_DEFAULT(purchasedTime_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setPurchasedTime(string purchasedTime) { DARABONBA_PTR_SET_VALUE(purchasedTime_, purchasedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline DescribePurchasedApisResponseBodyPurchasedApisPurchasedApi& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API.
    std::shared_ptr<string> apiName_ = nullptr;
    // The deployment time. Format: yyyy-mm-ddhh:mm:ss.
    std::shared_ptr<string> deployedTime_ = nullptr;
    // The description of the API.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group to which the API belongs. This ID is generated by the system and globally unique.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The last modification time (UTC) of the API.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The time when the API was purchased.
    std::shared_ptr<string> purchasedTime_ = nullptr;
    // The ID of the region in which the API is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **PRE**
    // *   **TEST**
    std::shared_ptr<string> stageName_ = nullptr;
    // Indicates whether the API is public. Valid values:
    // 
    // *   **PUBLIC**
    // *   **PRIVATE**
    std::shared_ptr<string> visibility_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

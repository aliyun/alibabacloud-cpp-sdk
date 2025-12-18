// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONSAMPLERESPONSEBODYSAMPLE_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONSAMPLERESPONSEBODYSAMPLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceConfigurationSampleResponseBodySample : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceConfigurationSampleResponseBodySample& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceCreationTime, resourceCreationTime_);
      DARABONBA_PTR_TO_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceConfigurationSampleResponseBodySample& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceCreationTime, resourceCreationTime_);
      DARABONBA_PTR_FROM_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetResourceConfigurationSampleResponseBodySample() = default ;
    GetResourceConfigurationSampleResponseBodySample(const GetResourceConfigurationSampleResponseBodySample &) = default ;
    GetResourceConfigurationSampleResponseBodySample(GetResourceConfigurationSampleResponseBodySample &&) = default ;
    GetResourceConfigurationSampleResponseBodySample(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceConfigurationSampleResponseBodySample() = default ;
    GetResourceConfigurationSampleResponseBodySample& operator=(const GetResourceConfigurationSampleResponseBodySample &) = default ;
    GetResourceConfigurationSampleResponseBodySample& operator=(GetResourceConfigurationSampleResponseBodySample &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->availabilityZone_ == nullptr && return this->configuration_ == nullptr && return this->region_ == nullptr && return this->resourceCreationTime_ == nullptr && return this->resourceDeleted_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceStatus_ == nullptr && return this->resourceType_ == nullptr && return this->tags_ == nullptr
        && return this->version_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // availabilityZone Field Functions 
    bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
    void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
    inline string availabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string configuration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceCreationTime Field Functions 
    bool hasResourceCreationTime() const { return this->resourceCreationTime_ != nullptr;};
    void deleteResourceCreationTime() { this->resourceCreationTime_ = nullptr;};
    inline string resourceCreationTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreationTime_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setResourceCreationTime(string resourceCreationTime) { DARABONBA_PTR_SET_VALUE(resourceCreationTime_, resourceCreationTime) };


    // resourceDeleted Field Functions 
    bool hasResourceDeleted() const { return this->resourceDeleted_ != nullptr;};
    void deleteResourceDeleted() { this->resourceDeleted_ = nullptr;};
    inline string resourceDeleted() const { DARABONBA_PTR_GET_DEFAULT(resourceDeleted_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setResourceDeleted(string resourceDeleted) { DARABONBA_PTR_SET_VALUE(resourceDeleted_, resourceDeleted) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetResourceConfigurationSampleResponseBodySample& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> availabilityZone_ = nullptr;
    std::shared_ptr<string> configuration_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceCreationTime_ = nullptr;
    std::shared_ptr<string> resourceDeleted_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceStatus_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

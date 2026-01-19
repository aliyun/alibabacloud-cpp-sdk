// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONSAMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONSAMPLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceConfigurationSampleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceConfigurationSampleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceConfigurationSampleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
    };
    GetResourceConfigurationSampleResponseBody() = default ;
    GetResourceConfigurationSampleResponseBody(const GetResourceConfigurationSampleResponseBody &) = default ;
    GetResourceConfigurationSampleResponseBody(GetResourceConfigurationSampleResponseBody &&) = default ;
    GetResourceConfigurationSampleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceConfigurationSampleResponseBody() = default ;
    GetResourceConfigurationSampleResponseBody& operator=(const GetResourceConfigurationSampleResponseBody &) = default ;
    GetResourceConfigurationSampleResponseBody& operator=(GetResourceConfigurationSampleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sample : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sample& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Sample& obj) { 
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
      Sample() = default ;
      Sample(const Sample &) = default ;
      Sample(Sample &&) = default ;
      Sample(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sample() = default ;
      Sample& operator=(const Sample &) = default ;
      Sample& operator=(Sample &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->availabilityZone_ == nullptr && this->configuration_ == nullptr && this->region_ == nullptr && this->resourceCreationTime_ == nullptr && this->resourceDeleted_ == nullptr
        && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceStatus_ == nullptr && this->resourceType_ == nullptr && this->tags_ == nullptr
        && this->version_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Sample& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // availabilityZone Field Functions 
      bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
      void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
      inline string getAvailabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
      inline Sample& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
      inline Sample& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Sample& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceCreationTime Field Functions 
      bool hasResourceCreationTime() const { return this->resourceCreationTime_ != nullptr;};
      void deleteResourceCreationTime() { this->resourceCreationTime_ = nullptr;};
      inline string getResourceCreationTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreationTime_, "") };
      inline Sample& setResourceCreationTime(string resourceCreationTime) { DARABONBA_PTR_SET_VALUE(resourceCreationTime_, resourceCreationTime) };


      // resourceDeleted Field Functions 
      bool hasResourceDeleted() const { return this->resourceDeleted_ != nullptr;};
      void deleteResourceDeleted() { this->resourceDeleted_ = nullptr;};
      inline string getResourceDeleted() const { DARABONBA_PTR_GET_DEFAULT(resourceDeleted_, "") };
      inline Sample& setResourceDeleted(string resourceDeleted) { DARABONBA_PTR_SET_VALUE(resourceDeleted_, resourceDeleted) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Sample& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline Sample& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceStatus Field Functions 
      bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
      void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
      inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
      inline Sample& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Sample& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline Sample& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Sample& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<string> availabilityZone_ {};
      shared_ptr<string> configuration_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> resourceCreationTime_ {};
      shared_ptr<string> resourceDeleted_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceName_ {};
      shared_ptr<string> resourceStatus_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> tags_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sample_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceConfigurationSampleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline const GetResourceConfigurationSampleResponseBody::Sample & getSample() const { DARABONBA_PTR_GET_CONST(sample_, GetResourceConfigurationSampleResponseBody::Sample) };
    inline GetResourceConfigurationSampleResponseBody::Sample getSample() { DARABONBA_PTR_GET(sample_, GetResourceConfigurationSampleResponseBody::Sample) };
    inline GetResourceConfigurationSampleResponseBody& setSample(const GetResourceConfigurationSampleResponseBody::Sample & sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };
    inline GetResourceConfigurationSampleResponseBody& setSample(GetResourceConfigurationSampleResponseBody::Sample && sample) { DARABONBA_PTR_SET_RVALUE(sample_, sample) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<GetResourceConfigurationSampleResponseBody::Sample> sample_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

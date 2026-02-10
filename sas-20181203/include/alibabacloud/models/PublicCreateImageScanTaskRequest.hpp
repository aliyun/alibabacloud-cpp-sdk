// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICCREATEIMAGESCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLICCREATEIMAGESCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class PublicCreateImageScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicCreateImageScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Digests, digests_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(RegistryTypes, registryTypes_);
      DARABONBA_PTR_TO_JSON(RepoIds, repoIds_);
      DARABONBA_PTR_TO_JSON(RepoNames, repoNames_);
      DARABONBA_PTR_TO_JSON(RepoNamespaces, repoNamespaces_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, PublicCreateImageScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Digests, digests_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(RegistryTypes, registryTypes_);
      DARABONBA_PTR_FROM_JSON(RepoIds, repoIds_);
      DARABONBA_PTR_FROM_JSON(RepoNames, repoNames_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaces, repoNamespaces_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    PublicCreateImageScanTaskRequest() = default ;
    PublicCreateImageScanTaskRequest(const PublicCreateImageScanTaskRequest &) = default ;
    PublicCreateImageScanTaskRequest(PublicCreateImageScanTaskRequest &&) = default ;
    PublicCreateImageScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicCreateImageScanTaskRequest() = default ;
    PublicCreateImageScanTaskRequest& operator=(const PublicCreateImageScanTaskRequest &) = default ;
    PublicCreateImageScanTaskRequest& operator=(PublicCreateImageScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digests_ == nullptr
        && this->instanceIds_ == nullptr && this->regionIds_ == nullptr && this->registryTypes_ == nullptr && this->repoIds_ == nullptr && this->repoNames_ == nullptr
        && this->repoNamespaces_ == nullptr && this->sourceIp_ == nullptr && this->tags_ == nullptr; };
    // digests Field Functions 
    bool hasDigests() const { return this->digests_ != nullptr;};
    void deleteDigests() { this->digests_ = nullptr;};
    inline string getDigests() const { DARABONBA_PTR_GET_DEFAULT(digests_, "") };
    inline PublicCreateImageScanTaskRequest& setDigests(string digests) { DARABONBA_PTR_SET_VALUE(digests_, digests) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline PublicCreateImageScanTaskRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline string getRegionIds() const { DARABONBA_PTR_GET_DEFAULT(regionIds_, "") };
    inline PublicCreateImageScanTaskRequest& setRegionIds(string regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };


    // registryTypes Field Functions 
    bool hasRegistryTypes() const { return this->registryTypes_ != nullptr;};
    void deleteRegistryTypes() { this->registryTypes_ = nullptr;};
    inline string getRegistryTypes() const { DARABONBA_PTR_GET_DEFAULT(registryTypes_, "") };
    inline PublicCreateImageScanTaskRequest& setRegistryTypes(string registryTypes) { DARABONBA_PTR_SET_VALUE(registryTypes_, registryTypes) };


    // repoIds Field Functions 
    bool hasRepoIds() const { return this->repoIds_ != nullptr;};
    void deleteRepoIds() { this->repoIds_ = nullptr;};
    inline string getRepoIds() const { DARABONBA_PTR_GET_DEFAULT(repoIds_, "") };
    inline PublicCreateImageScanTaskRequest& setRepoIds(string repoIds) { DARABONBA_PTR_SET_VALUE(repoIds_, repoIds) };


    // repoNames Field Functions 
    bool hasRepoNames() const { return this->repoNames_ != nullptr;};
    void deleteRepoNames() { this->repoNames_ = nullptr;};
    inline string getRepoNames() const { DARABONBA_PTR_GET_DEFAULT(repoNames_, "") };
    inline PublicCreateImageScanTaskRequest& setRepoNames(string repoNames) { DARABONBA_PTR_SET_VALUE(repoNames_, repoNames) };


    // repoNamespaces Field Functions 
    bool hasRepoNamespaces() const { return this->repoNamespaces_ != nullptr;};
    void deleteRepoNamespaces() { this->repoNamespaces_ = nullptr;};
    inline string getRepoNamespaces() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaces_, "") };
    inline PublicCreateImageScanTaskRequest& setRepoNamespaces(string repoNamespaces) { DARABONBA_PTR_SET_VALUE(repoNamespaces_, repoNamespaces) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline PublicCreateImageScanTaskRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline PublicCreateImageScanTaskRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The SHA-256 value of the image digest. Separate multiple SHA-256 values with commas (,).
    shared_ptr<string> digests_ {};
    // The ID of the Container Registry instance in which the image repository is created. Separate multiple IDs with commas (,).
    shared_ptr<string> instanceIds_ {};
    // The region ID of the image. Separate multiple IDs with commas (,).
    shared_ptr<string> regionIds_ {};
    // The type of the image repository. Separate multiple types with commas (,). Valid values:
    // 
    // *   **acr**
    // *   **harbor**
    // *   **quay**
    shared_ptr<string> registryTypes_ {};
    // The ID of the image repository. Separate multiple IDs with commas (,).
    shared_ptr<string> repoIds_ {};
    // The name of the image repository. Separate multiple names with commas (,).
    shared_ptr<string> repoNames_ {};
    // The namespace to which the image repository belongs. Separate multiple namespaces with commas (,).
    shared_ptr<string> repoNamespaces_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The tag that is added to the image. Separate multiple tags with commas (,).
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

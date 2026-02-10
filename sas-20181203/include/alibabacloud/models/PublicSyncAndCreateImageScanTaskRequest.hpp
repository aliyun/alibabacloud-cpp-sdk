// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICSYNCANDCREATEIMAGESCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLICSYNCANDCREATEIMAGESCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class PublicSyncAndCreateImageScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicSyncAndCreateImageScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, PublicSyncAndCreateImageScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    PublicSyncAndCreateImageScanTaskRequest() = default ;
    PublicSyncAndCreateImageScanTaskRequest(const PublicSyncAndCreateImageScanTaskRequest &) = default ;
    PublicSyncAndCreateImageScanTaskRequest(PublicSyncAndCreateImageScanTaskRequest &&) = default ;
    PublicSyncAndCreateImageScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicSyncAndCreateImageScanTaskRequest() = default ;
    PublicSyncAndCreateImageScanTaskRequest& operator=(const PublicSyncAndCreateImageScanTaskRequest &) = default ;
    PublicSyncAndCreateImageScanTaskRequest& operator=(PublicSyncAndCreateImageScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->images_ == nullptr
        && this->sourceIp_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline string getImages() const { DARABONBA_PTR_GET_DEFAULT(images_, "") };
    inline PublicSyncAndCreateImageScanTaskRequest& setImages(string images) { DARABONBA_PTR_SET_VALUE(images_, images) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline PublicSyncAndCreateImageScanTaskRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The information about the images. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **RegistryType**: the type of the image repository. Valid values:
    // 
    //     *   acr
    //     *   harbor
    //     *   quay
    // 
    // *   **RepoId**: the ID of the image repository.
    // 
    // *   **InstanceId**: the ID of the Container Registry instance to which the image repository belongs.
    // 
    // *   **RepoNamespace**: the namespace to which the image repository belongs.
    // 
    // *   **RegionId**: the region ID of the image.
    // 
    // *   **RepoName**: the name of the image repository.
    // 
    // *   **Digest**: the digest of the image.
    // 
    // *   **Tag**: the tag that is added to the image.
    // 
    // *   **CreateTime**: the timestamp when the image was created. Unit: milliseconds.
    // 
    // *   **UpdateTime**: the timestamp when the image was updated. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<string> images_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

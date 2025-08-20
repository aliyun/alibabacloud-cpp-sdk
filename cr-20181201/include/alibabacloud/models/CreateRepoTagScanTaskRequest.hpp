// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOTAGSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOTAGSCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateRepoTagScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepoTagScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(ScanService, scanService_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepoTagScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(ScanService, scanService_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateRepoTagScanTaskRequest() = default ;
    CreateRepoTagScanTaskRequest(const CreateRepoTagScanTaskRequest &) = default ;
    CreateRepoTagScanTaskRequest(CreateRepoTagScanTaskRequest &&) = default ;
    CreateRepoTagScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepoTagScanTaskRequest() = default ;
    CreateRepoTagScanTaskRequest& operator=(const CreateRepoTagScanTaskRequest &) = default ;
    CreateRepoTagScanTaskRequest& operator=(CreateRepoTagScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->digest_ != nullptr
        && this->instanceId_ != nullptr && this->repoId_ != nullptr && this->scanService_ != nullptr && this->scanType_ != nullptr && this->tag_ != nullptr; };
    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline CreateRepoTagScanTaskRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRepoTagScanTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline CreateRepoTagScanTaskRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // scanService Field Functions 
    bool hasScanService() const { return this->scanService_ != nullptr;};
    void deleteScanService() { this->scanService_ = nullptr;};
    inline string scanService() const { DARABONBA_PTR_GET_DEFAULT(scanService_, "") };
    inline CreateRepoTagScanTaskRequest& setScanService(string scanService) { DARABONBA_PTR_SET_VALUE(scanService_, scanService) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string scanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline CreateRepoTagScanTaskRequest& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline CreateRepoTagScanTaskRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The digest of the image.
    std::shared_ptr<string> digest_ = nullptr;
    // The ID of the Container Registry instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoId_ = nullptr;
    // The type of the scanning engine.
    // 
    // *   `SAS_SCAN_SERVICE`: Security Center scan engine (paid service)
    // *   `ACR_SCAN_SERVICE`: Container Registry scan engine
    std::shared_ptr<string> scanService_ = nullptr;
    std::shared_ptr<string> scanType_ = nullptr;
    // The image version.
    // 
    // This parameter is required.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif

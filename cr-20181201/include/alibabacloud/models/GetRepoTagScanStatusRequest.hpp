// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOTAGSCANSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPOTAGSCANSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoTagScanStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoTagScanStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoTagScanStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetRepoTagScanStatusRequest() = default ;
    GetRepoTagScanStatusRequest(const GetRepoTagScanStatusRequest &) = default ;
    GetRepoTagScanStatusRequest(GetRepoTagScanStatusRequest &&) = default ;
    GetRepoTagScanStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoTagScanStatusRequest() = default ;
    GetRepoTagScanStatusRequest& operator=(const GetRepoTagScanStatusRequest &) = default ;
    GetRepoTagScanStatusRequest& operator=(GetRepoTagScanStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digest_ == nullptr
        && this->instanceId_ == nullptr && this->repoId_ == nullptr && this->scanTaskId_ == nullptr && this->scanType_ == nullptr && this->tag_ == nullptr; };
    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline GetRepoTagScanStatusRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRepoTagScanStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline GetRepoTagScanStatusRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // scanTaskId Field Functions 
    bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
    void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
    inline string getScanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, "") };
    inline GetRepoTagScanStatusRequest& setScanTaskId(string scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline GetRepoTagScanStatusRequest& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetRepoTagScanStatusRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The image digest.
    shared_ptr<string> digest_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the image repository.
    shared_ptr<string> repoId_ {};
    // The ID of the image scan task.
    shared_ptr<string> scanTaskId_ {};
    shared_ptr<string> scanType_ {};
    // The image tag.
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif

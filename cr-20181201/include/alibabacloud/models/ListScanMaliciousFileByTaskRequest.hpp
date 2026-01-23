// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCANMALICIOUSFILEBYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCANMALICIOUSFILEBYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListScanMaliciousFileByTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScanMaliciousFileByTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListScanMaliciousFileByTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(ScanTaskId, scanTaskId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListScanMaliciousFileByTaskRequest() = default ;
    ListScanMaliciousFileByTaskRequest(const ListScanMaliciousFileByTaskRequest &) = default ;
    ListScanMaliciousFileByTaskRequest(ListScanMaliciousFileByTaskRequest &&) = default ;
    ListScanMaliciousFileByTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScanMaliciousFileByTaskRequest() = default ;
    ListScanMaliciousFileByTaskRequest& operator=(const ListScanMaliciousFileByTaskRequest &) = default ;
    ListScanMaliciousFileByTaskRequest& operator=(ListScanMaliciousFileByTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digest_ == nullptr
        && this->instanceId_ == nullptr && this->level_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->repoId_ == nullptr
        && this->scanTaskId_ == nullptr && this->tag_ == nullptr; };
    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline ListScanMaliciousFileByTaskRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScanMaliciousFileByTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListScanMaliciousFileByTaskRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListScanMaliciousFileByTaskRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScanMaliciousFileByTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline ListScanMaliciousFileByTaskRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // scanTaskId Field Functions 
    bool hasScanTaskId() const { return this->scanTaskId_ != nullptr;};
    void deleteScanTaskId() { this->scanTaskId_ = nullptr;};
    inline string getScanTaskId() const { DARABONBA_PTR_GET_DEFAULT(scanTaskId_, "") };
    inline ListScanMaliciousFileByTaskRequest& setScanTaskId(string scanTaskId) { DARABONBA_PTR_SET_VALUE(scanTaskId_, scanTaskId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListScanMaliciousFileByTaskRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The image digest.
    shared_ptr<string> digest_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The severity of the malicious file.
    shared_ptr<string> level_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Maximum value: 100. If you specify a value greater than 100 for this parameter, the system reports a parameter error or uses 100 as the maximum value.
    shared_ptr<int32_t> pageSize_ {};
    // The image repository ID.
    shared_ptr<string> repoId_ {};
    // The ID of the image scan task.
    shared_ptr<string> scanTaskId_ {};
    // The image tag.
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif

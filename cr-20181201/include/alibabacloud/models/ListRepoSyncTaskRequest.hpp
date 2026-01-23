// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoSyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoSyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_TO_JSON(SyncRecordId, syncRecordId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoSyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_FROM_JSON(SyncRecordId, syncRecordId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListRepoSyncTaskRequest() = default ;
    ListRepoSyncTaskRequest(const ListRepoSyncTaskRequest &) = default ;
    ListRepoSyncTaskRequest(ListRepoSyncTaskRequest &&) = default ;
    ListRepoSyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoSyncTaskRequest() = default ;
    ListRepoSyncTaskRequest& operator=(const ListRepoSyncTaskRequest &) = default ;
    ListRepoSyncTaskRequest& operator=(ListRepoSyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->repoName_ == nullptr && this->repoNamespaceName_ == nullptr && this->syncRecordId_ == nullptr
        && this->tag_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRepoSyncTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListRepoSyncTaskRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRepoSyncTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListRepoSyncTaskRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string getRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline ListRepoSyncTaskRequest& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


    // syncRecordId Field Functions 
    bool hasSyncRecordId() const { return this->syncRecordId_ != nullptr;};
    void deleteSyncRecordId() { this->syncRecordId_ = nullptr;};
    inline string getSyncRecordId() const { DARABONBA_PTR_GET_DEFAULT(syncRecordId_, "") };
    inline ListRepoSyncTaskRequest& setSyncRecordId(string syncRecordId) { DARABONBA_PTR_SET_VALUE(syncRecordId_, syncRecordId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListRepoSyncTaskRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The repository name.
    shared_ptr<string> repoName_ {};
    // The name of the namespace to which the repository belongs.
    shared_ptr<string> repoNamespaceName_ {};
    // The ID of the synchronization task record, which is the same as SyncBatchTaskId in the response.
    // 
    // >  If an image meets multiple synchronization rules and multiple synchronization tasks are generated for the image, these synchronization tasks use the same SyncBatchTaskId.
    shared_ptr<string> syncRecordId_ {};
    // The image tag.
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif

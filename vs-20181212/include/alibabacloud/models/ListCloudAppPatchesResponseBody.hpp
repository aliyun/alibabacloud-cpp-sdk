// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDAPPPATCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDAPPPATCHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListCloudAppPatchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAppPatchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Patches, patches_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAppPatchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Patches, patches_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCloudAppPatchesResponseBody() = default ;
    ListCloudAppPatchesResponseBody(const ListCloudAppPatchesResponseBody &) = default ;
    ListCloudAppPatchesResponseBody(ListCloudAppPatchesResponseBody &&) = default ;
    ListCloudAppPatchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAppPatchesResponseBody() = default ;
    ListCloudAppPatchesResponseBody& operator=(const ListCloudAppPatchesResponseBody &) = default ;
    ListCloudAppPatchesResponseBody& operator=(ListCloudAppPatchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Patches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Patches& obj) { 
        DARABONBA_PTR_TO_JSON(PatchId, patchId_);
        DARABONBA_PTR_TO_JSON(PatchName, patchName_);
        DARABONBA_PTR_TO_JSON(PostCommandPath, postCommandPath_);
        DARABONBA_PTR_TO_JSON(PostCommandTimeoutSec, postCommandTimeoutSec_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
      };
      friend void from_json(const Darabonba::Json& j, Patches& obj) { 
        DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
        DARABONBA_PTR_FROM_JSON(PatchName, patchName_);
        DARABONBA_PTR_FROM_JSON(PostCommandPath, postCommandPath_);
        DARABONBA_PTR_FROM_JSON(PostCommandTimeoutSec, postCommandTimeoutSec_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
      };
      Patches() = default ;
      Patches(const Patches &) = default ;
      Patches(Patches &&) = default ;
      Patches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Patches() = default ;
      Patches& operator=(const Patches &) = default ;
      Patches& operator=(Patches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->patchId_ == nullptr
        && this->patchName_ == nullptr && this->postCommandPath_ == nullptr && this->postCommandTimeoutSec_ == nullptr && this->status_ == nullptr && this->statusDescription_ == nullptr
        && this->updateTime_ == nullptr && this->uploadTime_ == nullptr; };
      // patchId Field Functions 
      bool hasPatchId() const { return this->patchId_ != nullptr;};
      void deletePatchId() { this->patchId_ = nullptr;};
      inline string getPatchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
      inline Patches& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


      // patchName Field Functions 
      bool hasPatchName() const { return this->patchName_ != nullptr;};
      void deletePatchName() { this->patchName_ = nullptr;};
      inline string getPatchName() const { DARABONBA_PTR_GET_DEFAULT(patchName_, "") };
      inline Patches& setPatchName(string patchName) { DARABONBA_PTR_SET_VALUE(patchName_, patchName) };


      // postCommandPath Field Functions 
      bool hasPostCommandPath() const { return this->postCommandPath_ != nullptr;};
      void deletePostCommandPath() { this->postCommandPath_ = nullptr;};
      inline string getPostCommandPath() const { DARABONBA_PTR_GET_DEFAULT(postCommandPath_, "") };
      inline Patches& setPostCommandPath(string postCommandPath) { DARABONBA_PTR_SET_VALUE(postCommandPath_, postCommandPath) };


      // postCommandTimeoutSec Field Functions 
      bool hasPostCommandTimeoutSec() const { return this->postCommandTimeoutSec_ != nullptr;};
      void deletePostCommandTimeoutSec() { this->postCommandTimeoutSec_ = nullptr;};
      inline int32_t getPostCommandTimeoutSec() const { DARABONBA_PTR_GET_DEFAULT(postCommandTimeoutSec_, 0) };
      inline Patches& setPostCommandTimeoutSec(int32_t postCommandTimeoutSec) { DARABONBA_PTR_SET_VALUE(postCommandTimeoutSec_, postCommandTimeoutSec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Patches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDescription Field Functions 
      bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
      void deleteStatusDescription() { this->statusDescription_ = nullptr;};
      inline string getStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
      inline Patches& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Patches& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
      inline Patches& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    protected:
      // The ID of the patch package.
      shared_ptr<string> patchId_ {};
      // The name of the patch package.
      shared_ptr<string> patchName_ {};
      // The relative path of the post-command within the application package. Only Windows-type applications are supported.
      shared_ptr<string> postCommandPath_ {};
      // The timeout period for the post-command execution, in seconds. Only Windows-type applications are supported.
      shared_ptr<int32_t> postCommandTimeoutSec_ {};
      // The application upload status. Valid values:
      // 1. Created
      // 2. Doing
      // 3. Success: desired state.
      // 4. Failed: desired state.
      // 5. Deleting
      // 6. DeleteFailed: desired state.
      shared_ptr<string> status_ {};
      // The status description.
      shared_ptr<string> statusDescription_ {};
      // The most recent time when the status was updated.
      shared_ptr<string> updateTime_ {};
      // The time when the patch was uploaded.
      shared_ptr<string> uploadTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->patches_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListCloudAppPatchesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCloudAppPatchesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // patches Field Functions 
    bool hasPatches() const { return this->patches_ != nullptr;};
    void deletePatches() { this->patches_ = nullptr;};
    inline const vector<ListCloudAppPatchesResponseBody::Patches> & getPatches() const { DARABONBA_PTR_GET_CONST(patches_, vector<ListCloudAppPatchesResponseBody::Patches>) };
    inline vector<ListCloudAppPatchesResponseBody::Patches> getPatches() { DARABONBA_PTR_GET(patches_, vector<ListCloudAppPatchesResponseBody::Patches>) };
    inline ListCloudAppPatchesResponseBody& setPatches(const vector<ListCloudAppPatchesResponseBody::Patches> & patches) { DARABONBA_PTR_SET_VALUE(patches_, patches) };
    inline ListCloudAppPatchesResponseBody& setPatches(vector<ListCloudAppPatchesResponseBody::Patches> && patches) { DARABONBA_PTR_SET_RVALUE(patches_, patches) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAppPatchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCloudAppPatchesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the query list.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page for the paged query.
    shared_ptr<int64_t> pageSize_ {};
    // The list of patches for the cloud application.
    shared_ptr<vector<ListCloudAppPatchesResponseBody::Patches>> patches_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif

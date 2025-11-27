// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDAPPPATCHESRESPONSEBODYPATCHES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDAPPPATCHESRESPONSEBODYPATCHES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListCloudAppPatchesResponseBodyPatches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAppPatchesResponseBodyPatches& obj) { 
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(PatchName, patchName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAppPatchesResponseBodyPatches& obj) { 
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(PatchName, patchName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
    };
    ListCloudAppPatchesResponseBodyPatches() = default ;
    ListCloudAppPatchesResponseBodyPatches(const ListCloudAppPatchesResponseBodyPatches &) = default ;
    ListCloudAppPatchesResponseBodyPatches(ListCloudAppPatchesResponseBodyPatches &&) = default ;
    ListCloudAppPatchesResponseBodyPatches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAppPatchesResponseBodyPatches() = default ;
    ListCloudAppPatchesResponseBodyPatches& operator=(const ListCloudAppPatchesResponseBodyPatches &) = default ;
    ListCloudAppPatchesResponseBodyPatches& operator=(ListCloudAppPatchesResponseBodyPatches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->patchId_ == nullptr
        && return this->patchName_ == nullptr && return this->status_ == nullptr && return this->statusDescription_ == nullptr && return this->updateTime_ == nullptr && return this->uploadTime_ == nullptr; };
    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string patchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline ListCloudAppPatchesResponseBodyPatches& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // patchName Field Functions 
    bool hasPatchName() const { return this->patchName_ != nullptr;};
    void deletePatchName() { this->patchName_ = nullptr;};
    inline string patchName() const { DARABONBA_PTR_GET_DEFAULT(patchName_, "") };
    inline ListCloudAppPatchesResponseBodyPatches& setPatchName(string patchName) { DARABONBA_PTR_SET_VALUE(patchName_, patchName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCloudAppPatchesResponseBodyPatches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDescription Field Functions 
    bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
    void deleteStatusDescription() { this->statusDescription_ = nullptr;};
    inline string statusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
    inline ListCloudAppPatchesResponseBodyPatches& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListCloudAppPatchesResponseBodyPatches& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline ListCloudAppPatchesResponseBodyPatches& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


  protected:
    std::shared_ptr<string> patchId_ = nullptr;
    std::shared_ptr<string> patchName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusDescription_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> uploadTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif

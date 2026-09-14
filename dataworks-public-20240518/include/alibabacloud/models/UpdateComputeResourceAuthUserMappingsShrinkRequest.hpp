// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTERESOURCEAUTHUSERMAPPINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTERESOURCEAUTHUSERMAPPINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateComputeResourceAuthUserMappingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeResourceAuthUserMappingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResourceId, computeResourceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RemoveUserIds, removeUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(Upserts, upsertsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeResourceAuthUserMappingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResourceId, computeResourceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RemoveUserIds, removeUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Upserts, upsertsShrink_);
    };
    UpdateComputeResourceAuthUserMappingsShrinkRequest() = default ;
    UpdateComputeResourceAuthUserMappingsShrinkRequest(const UpdateComputeResourceAuthUserMappingsShrinkRequest &) = default ;
    UpdateComputeResourceAuthUserMappingsShrinkRequest(UpdateComputeResourceAuthUserMappingsShrinkRequest &&) = default ;
    UpdateComputeResourceAuthUserMappingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeResourceAuthUserMappingsShrinkRequest() = default ;
    UpdateComputeResourceAuthUserMappingsShrinkRequest& operator=(const UpdateComputeResourceAuthUserMappingsShrinkRequest &) = default ;
    UpdateComputeResourceAuthUserMappingsShrinkRequest& operator=(UpdateComputeResourceAuthUserMappingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResourceId_ == nullptr
        && this->projectId_ == nullptr && this->removeUserIdsShrink_ == nullptr && this->upsertsShrink_ == nullptr; };
    // computeResourceId Field Functions 
    bool hasComputeResourceId() const { return this->computeResourceId_ != nullptr;};
    void deleteComputeResourceId() { this->computeResourceId_ = nullptr;};
    inline int64_t getComputeResourceId() const { DARABONBA_PTR_GET_DEFAULT(computeResourceId_, 0L) };
    inline UpdateComputeResourceAuthUserMappingsShrinkRequest& setComputeResourceId(int64_t computeResourceId) { DARABONBA_PTR_SET_VALUE(computeResourceId_, computeResourceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateComputeResourceAuthUserMappingsShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // removeUserIdsShrink Field Functions 
    bool hasRemoveUserIdsShrink() const { return this->removeUserIdsShrink_ != nullptr;};
    void deleteRemoveUserIdsShrink() { this->removeUserIdsShrink_ = nullptr;};
    inline string getRemoveUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(removeUserIdsShrink_, "") };
    inline UpdateComputeResourceAuthUserMappingsShrinkRequest& setRemoveUserIdsShrink(string removeUserIdsShrink) { DARABONBA_PTR_SET_VALUE(removeUserIdsShrink_, removeUserIdsShrink) };


    // upsertsShrink Field Functions 
    bool hasUpsertsShrink() const { return this->upsertsShrink_ != nullptr;};
    void deleteUpsertsShrink() { this->upsertsShrink_ = nullptr;};
    inline string getUpsertsShrink() const { DARABONBA_PTR_GET_DEFAULT(upsertsShrink_, "") };
    inline UpdateComputeResourceAuthUserMappingsShrinkRequest& setUpsertsShrink(string upsertsShrink) { DARABONBA_PTR_SET_VALUE(upsertsShrink_, upsertsShrink) };


  protected:
    // The compute resource ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> computeResourceId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The list of user mappings to remove.
    shared_ptr<string> removeUserIdsShrink_ {};
    // The list of objects to update.
    shared_ptr<string> upsertsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

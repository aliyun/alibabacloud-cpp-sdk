// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class UpdateSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateSnapshotRequest() = default ;
    UpdateSnapshotRequest(const UpdateSnapshotRequest &) = default ;
    UpdateSnapshotRequest(UpdateSnapshotRequest &&) = default ;
    UpdateSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSnapshotRequest() = default ;
    UpdateSnapshotRequest& operator=(const UpdateSnapshotRequest &) = default ;
    UpdateSnapshotRequest& operator=(UpdateSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->snapshotName_ == nullptr && this->workspaceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSnapshotRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline UpdateSnapshotRequest& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateSnapshotRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> snapshotName_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif

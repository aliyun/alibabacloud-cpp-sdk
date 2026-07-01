// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateDatasetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommandShrink_);
    };
    UpdateDatasetShrinkRequest() = default ;
    UpdateDatasetShrinkRequest(const UpdateDatasetShrinkRequest &) = default ;
    UpdateDatasetShrinkRequest(UpdateDatasetShrinkRequest &&) = default ;
    UpdateDatasetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetShrinkRequest() = default ;
    UpdateDatasetShrinkRequest& operator=(const UpdateDatasetShrinkRequest &) = default ;
    UpdateDatasetShrinkRequest& operator=(UpdateDatasetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->projectId_ == nullptr && this->updateCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateDatasetShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UpdateDatasetShrinkRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // updateCommandShrink Field Functions 
    bool hasUpdateCommandShrink() const { return this->updateCommandShrink_ != nullptr;};
    void deleteUpdateCommandShrink() { this->updateCommandShrink_ = nullptr;};
    inline string getUpdateCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(updateCommandShrink_, "") };
    inline UpdateDatasetShrinkRequest& setUpdateCommandShrink(string updateCommandShrink) { DARABONBA_PTR_SET_VALUE(updateCommandShrink_, updateCommandShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // This parameter is required.
    shared_ptr<string> updateCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

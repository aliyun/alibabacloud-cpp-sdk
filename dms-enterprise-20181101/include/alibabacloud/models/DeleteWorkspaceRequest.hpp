// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteWorkspaceRequest() = default ;
    DeleteWorkspaceRequest(const DeleteWorkspaceRequest &) = default ;
    DeleteWorkspaceRequest(DeleteWorkspaceRequest &&) = default ;
    DeleteWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkspaceRequest() = default ;
    DeleteWorkspaceRequest& operator=(const DeleteWorkspaceRequest &) = default ;
    DeleteWorkspaceRequest& operator=(DeleteWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline DeleteWorkspaceRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The ID of the DMS workspace.
    // 
    // This parameter is required.
    shared_ptr<int64_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

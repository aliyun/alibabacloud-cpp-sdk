// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUDITNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUDITNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DeleteAuditNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAuditNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAuditNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteAuditNoteRequest() = default ;
    DeleteAuditNoteRequest(const DeleteAuditNoteRequest &) = default ;
    DeleteAuditNoteRequest(DeleteAuditNoteRequest &&) = default ;
    DeleteAuditNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAuditNoteRequest() = default ;
    DeleteAuditNoteRequest& operator=(const DeleteAuditNoteRequest &) = default ;
    DeleteAuditNoteRequest& operator=(DeleteAuditNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->workspaceId_ != nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteAuditNoteRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

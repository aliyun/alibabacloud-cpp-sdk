// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUDITTERMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUDITTERMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DeleteAuditTermsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAuditTermsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdList, idListShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAuditTermsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdList, idListShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteAuditTermsShrinkRequest() = default ;
    DeleteAuditTermsShrinkRequest(const DeleteAuditTermsShrinkRequest &) = default ;
    DeleteAuditTermsShrinkRequest(DeleteAuditTermsShrinkRequest &&) = default ;
    DeleteAuditTermsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAuditTermsShrinkRequest() = default ;
    DeleteAuditTermsShrinkRequest& operator=(const DeleteAuditTermsShrinkRequest &) = default ;
    DeleteAuditTermsShrinkRequest& operator=(DeleteAuditTermsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->idListShrink_ != nullptr
        && this->workspaceId_ != nullptr; };
    // idListShrink Field Functions 
    bool hasIdListShrink() const { return this->idListShrink_ != nullptr;};
    void deleteIdListShrink() { this->idListShrink_ = nullptr;};
    inline string idListShrink() const { DARABONBA_PTR_GET_DEFAULT(idListShrink_, "") };
    inline DeleteAuditTermsShrinkRequest& setIdListShrink(string idListShrink) { DARABONBA_PTR_SET_VALUE(idListShrink_, idListShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteAuditTermsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> idListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

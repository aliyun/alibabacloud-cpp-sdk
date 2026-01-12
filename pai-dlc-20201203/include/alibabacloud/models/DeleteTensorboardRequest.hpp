// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETENSORBOARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETENSORBOARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class DeleteTensorboardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTensorboardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTensorboardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteTensorboardRequest() = default ;
    DeleteTensorboardRequest(const DeleteTensorboardRequest &) = default ;
    DeleteTensorboardRequest(DeleteTensorboardRequest &&) = default ;
    DeleteTensorboardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTensorboardRequest() = default ;
    DeleteTensorboardRequest& operator=(const DeleteTensorboardRequest &) = default ;
    DeleteTensorboardRequest& operator=(DeleteTensorboardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteTensorboardRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

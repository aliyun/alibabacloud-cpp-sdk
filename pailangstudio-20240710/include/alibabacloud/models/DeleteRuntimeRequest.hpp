// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERUNTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERUNTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class DeleteRuntimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRuntimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRuntimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteRuntimeRequest() = default ;
    DeleteRuntimeRequest(const DeleteRuntimeRequest &) = default ;
    DeleteRuntimeRequest(DeleteRuntimeRequest &&) = default ;
    DeleteRuntimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRuntimeRequest() = default ;
    DeleteRuntimeRequest& operator=(const DeleteRuntimeRequest &) = default ;
    DeleteRuntimeRequest& operator=(DeleteRuntimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteRuntimeRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The ID of the DataWorks workspace. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif

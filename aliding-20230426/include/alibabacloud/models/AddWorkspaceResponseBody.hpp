// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddWorkspaceResponseBodyWorkspace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    AddWorkspaceResponseBody() = default ;
    AddWorkspaceResponseBody(const AddWorkspaceResponseBody &) = default ;
    AddWorkspaceResponseBody(AddWorkspaceResponseBody &&) = default ;
    AddWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceResponseBody() = default ;
    AddWorkspaceResponseBody& operator=(const AddWorkspaceResponseBody &) = default ;
    AddWorkspaceResponseBody& operator=(AddWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->workspace_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline const AddWorkspaceResponseBodyWorkspace & workspace() const { DARABONBA_PTR_GET_CONST(workspace_, AddWorkspaceResponseBodyWorkspace) };
    inline AddWorkspaceResponseBodyWorkspace workspace() { DARABONBA_PTR_GET(workspace_, AddWorkspaceResponseBodyWorkspace) };
    inline AddWorkspaceResponseBody& setWorkspace(const AddWorkspaceResponseBodyWorkspace & workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };
    inline AddWorkspaceResponseBody& setWorkspace(AddWorkspaceResponseBodyWorkspace && workspace) { DARABONBA_PTR_SET_RVALUE(workspace_, workspace) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<AddWorkspaceResponseBodyWorkspace> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

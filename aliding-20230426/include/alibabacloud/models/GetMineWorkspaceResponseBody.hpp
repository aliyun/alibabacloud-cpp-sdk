// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMINEWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMINEWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMineWorkspaceResponseBodyWorkspace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMineWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMineWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetMineWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetMineWorkspaceResponseBody() = default ;
    GetMineWorkspaceResponseBody(const GetMineWorkspaceResponseBody &) = default ;
    GetMineWorkspaceResponseBody(GetMineWorkspaceResponseBody &&) = default ;
    GetMineWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMineWorkspaceResponseBody() = default ;
    GetMineWorkspaceResponseBody& operator=(const GetMineWorkspaceResponseBody &) = default ;
    GetMineWorkspaceResponseBody& operator=(GetMineWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->workspace_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMineWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline const GetMineWorkspaceResponseBodyWorkspace & workspace() const { DARABONBA_PTR_GET_CONST(workspace_, GetMineWorkspaceResponseBodyWorkspace) };
    inline GetMineWorkspaceResponseBodyWorkspace workspace() { DARABONBA_PTR_GET(workspace_, GetMineWorkspaceResponseBodyWorkspace) };
    inline GetMineWorkspaceResponseBody& setWorkspace(const GetMineWorkspaceResponseBodyWorkspace & workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };
    inline GetMineWorkspaceResponseBody& setWorkspace(GetMineWorkspaceResponseBodyWorkspace && workspace) { DARABONBA_PTR_SET_RVALUE(workspace_, workspace) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetMineWorkspaceResponseBodyWorkspace> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

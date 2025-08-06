// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkspacesResponseBodyWorkspace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetWorkspacesResponseBody() = default ;
    GetWorkspacesResponseBody(const GetWorkspacesResponseBody &) = default ;
    GetWorkspacesResponseBody(GetWorkspacesResponseBody &&) = default ;
    GetWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspacesResponseBody() = default ;
    GetWorkspacesResponseBody& operator=(const GetWorkspacesResponseBody &) = default ;
    GetWorkspacesResponseBody& operator=(GetWorkspacesResponseBody &&) = default ;
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
    inline GetWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline const vector<GetWorkspacesResponseBodyWorkspace> & workspace() const { DARABONBA_PTR_GET_CONST(workspace_, vector<GetWorkspacesResponseBodyWorkspace>) };
    inline vector<GetWorkspacesResponseBodyWorkspace> workspace() { DARABONBA_PTR_GET(workspace_, vector<GetWorkspacesResponseBodyWorkspace>) };
    inline GetWorkspacesResponseBody& setWorkspace(const vector<GetWorkspacesResponseBodyWorkspace> & workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };
    inline GetWorkspacesResponseBody& setWorkspace(vector<GetWorkspacesResponseBodyWorkspace> && workspace) { DARABONBA_PTR_SET_RVALUE(workspace_, workspace) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetWorkspacesResponseBodyWorkspace>> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

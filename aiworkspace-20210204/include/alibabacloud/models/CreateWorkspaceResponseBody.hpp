// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateWorkspaceResponseBody() = default ;
    CreateWorkspaceResponseBody(const CreateWorkspaceResponseBody &) = default ;
    CreateWorkspaceResponseBody(CreateWorkspaceResponseBody &&) = default ;
    CreateWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceResponseBody() = default ;
    CreateWorkspaceResponseBody& operator=(const CreateWorkspaceResponseBody &) = default ;
    CreateWorkspaceResponseBody& operator=(CreateWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateWorkspaceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

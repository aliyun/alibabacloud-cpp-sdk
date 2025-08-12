// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PutWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, PutWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
    };
    PutWorkspaceResponseBody() = default ;
    PutWorkspaceResponseBody(const PutWorkspaceResponseBody &) = default ;
    PutWorkspaceResponseBody(PutWorkspaceResponseBody &&) = default ;
    PutWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutWorkspaceResponseBody() = default ;
    PutWorkspaceResponseBody& operator=(const PutWorkspaceResponseBody &) = default ;
    PutWorkspaceResponseBody& operator=(PutWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->workspaceName_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline PutWorkspaceResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

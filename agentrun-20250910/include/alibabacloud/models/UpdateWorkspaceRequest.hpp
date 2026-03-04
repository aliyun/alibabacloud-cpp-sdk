// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWorkspaceInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateWorkspaceRequest() = default ;
    UpdateWorkspaceRequest(const UpdateWorkspaceRequest &) = default ;
    UpdateWorkspaceRequest(UpdateWorkspaceRequest &&) = default ;
    UpdateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceRequest() = default ;
    UpdateWorkspaceRequest& operator=(const UpdateWorkspaceRequest &) = default ;
    UpdateWorkspaceRequest& operator=(UpdateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateWorkspaceInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateWorkspaceInput) };
    inline UpdateWorkspaceInput getBody() { DARABONBA_PTR_GET(body_, UpdateWorkspaceInput) };
    inline UpdateWorkspaceRequest& setBody(const UpdateWorkspaceInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateWorkspaceRequest& setBody(UpdateWorkspaceInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<UpdateWorkspaceInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif

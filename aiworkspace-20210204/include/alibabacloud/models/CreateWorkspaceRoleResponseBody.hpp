// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACEROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACEROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateWorkspaceRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceJobId, instanceJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceJobId, instanceJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateWorkspaceRoleResponseBody() = default ;
    CreateWorkspaceRoleResponseBody(const CreateWorkspaceRoleResponseBody &) = default ;
    CreateWorkspaceRoleResponseBody(CreateWorkspaceRoleResponseBody &&) = default ;
    CreateWorkspaceRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceRoleResponseBody() = default ;
    CreateWorkspaceRoleResponseBody& operator=(const CreateWorkspaceRoleResponseBody &) = default ;
    CreateWorkspaceRoleResponseBody& operator=(CreateWorkspaceRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceJobId_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceJobId Field Functions 
    bool hasInstanceJobId() const { return this->instanceJobId_ != nullptr;};
    void deleteInstanceJobId() { this->instanceJobId_ = nullptr;};
    inline string getInstanceJobId() const { DARABONBA_PTR_GET_DEFAULT(instanceJobId_, "") };
    inline CreateWorkspaceRoleResponseBody& setInstanceJobId(string instanceJobId) { DARABONBA_PTR_SET_VALUE(instanceJobId_, instanceJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkspaceRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The job ID for the request.
    shared_ptr<string> instanceJobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

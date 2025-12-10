// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateServiceLinkedRoleResponseBodyRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateServiceLinkedRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceLinkedRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceLinkedRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    CreateServiceLinkedRoleResponseBody() = default ;
    CreateServiceLinkedRoleResponseBody(const CreateServiceLinkedRoleResponseBody &) = default ;
    CreateServiceLinkedRoleResponseBody(CreateServiceLinkedRoleResponseBody &&) = default ;
    CreateServiceLinkedRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceLinkedRoleResponseBody() = default ;
    CreateServiceLinkedRoleResponseBody& operator=(const CreateServiceLinkedRoleResponseBody &) = default ;
    CreateServiceLinkedRoleResponseBody& operator=(CreateServiceLinkedRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->role_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateServiceLinkedRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const CreateServiceLinkedRoleResponseBodyRole & role() const { DARABONBA_PTR_GET_CONST(role_, CreateServiceLinkedRoleResponseBodyRole) };
    inline CreateServiceLinkedRoleResponseBodyRole role() { DARABONBA_PTR_GET(role_, CreateServiceLinkedRoleResponseBodyRole) };
    inline CreateServiceLinkedRoleResponseBody& setRole(const CreateServiceLinkedRoleResponseBodyRole & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline CreateServiceLinkedRoleResponseBody& setRole(CreateServiceLinkedRoleResponseBodyRole && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the role.
    std::shared_ptr<CreateServiceLinkedRoleResponseBodyRole> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif

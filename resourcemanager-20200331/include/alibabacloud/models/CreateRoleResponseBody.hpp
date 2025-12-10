// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRoleResponseBodyRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    CreateRoleResponseBody() = default ;
    CreateRoleResponseBody(const CreateRoleResponseBody &) = default ;
    CreateRoleResponseBody(CreateRoleResponseBody &&) = default ;
    CreateRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoleResponseBody() = default ;
    CreateRoleResponseBody& operator=(const CreateRoleResponseBody &) = default ;
    CreateRoleResponseBody& operator=(CreateRoleResponseBody &&) = default ;
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
    inline CreateRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const CreateRoleResponseBodyRole & role() const { DARABONBA_PTR_GET_CONST(role_, CreateRoleResponseBodyRole) };
    inline CreateRoleResponseBodyRole role() { DARABONBA_PTR_GET(role_, CreateRoleResponseBodyRole) };
    inline CreateRoleResponseBody& setRole(const CreateRoleResponseBodyRole & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline CreateRoleResponseBody& setRole(CreateRoleResponseBodyRole && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the role.
    std::shared_ptr<CreateRoleResponseBodyRole> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif

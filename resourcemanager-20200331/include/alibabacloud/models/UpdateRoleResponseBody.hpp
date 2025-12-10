// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRoleResponseBodyRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    UpdateRoleResponseBody() = default ;
    UpdateRoleResponseBody(const UpdateRoleResponseBody &) = default ;
    UpdateRoleResponseBody(UpdateRoleResponseBody &&) = default ;
    UpdateRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRoleResponseBody() = default ;
    UpdateRoleResponseBody& operator=(const UpdateRoleResponseBody &) = default ;
    UpdateRoleResponseBody& operator=(UpdateRoleResponseBody &&) = default ;
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
    inline UpdateRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const UpdateRoleResponseBodyRole & role() const { DARABONBA_PTR_GET_CONST(role_, UpdateRoleResponseBodyRole) };
    inline UpdateRoleResponseBodyRole role() { DARABONBA_PTR_GET(role_, UpdateRoleResponseBodyRole) };
    inline UpdateRoleResponseBody& setRole(const UpdateRoleResponseBodyRole & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline UpdateRoleResponseBody& setRole(UpdateRoleResponseBodyRole && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the RAM role.
    std::shared_ptr<UpdateRoleResponseBodyRole> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif

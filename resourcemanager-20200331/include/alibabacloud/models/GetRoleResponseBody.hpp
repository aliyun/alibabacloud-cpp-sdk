// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRoleResponseBodyRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    GetRoleResponseBody() = default ;
    GetRoleResponseBody(const GetRoleResponseBody &) = default ;
    GetRoleResponseBody(GetRoleResponseBody &&) = default ;
    GetRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleResponseBody() = default ;
    GetRoleResponseBody& operator=(const GetRoleResponseBody &) = default ;
    GetRoleResponseBody& operator=(GetRoleResponseBody &&) = default ;
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
    inline GetRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const GetRoleResponseBodyRole & role() const { DARABONBA_PTR_GET_CONST(role_, GetRoleResponseBodyRole) };
    inline GetRoleResponseBodyRole role() { DARABONBA_PTR_GET(role_, GetRoleResponseBodyRole) };
    inline GetRoleResponseBody& setRole(const GetRoleResponseBodyRole & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline GetRoleResponseBody& setRole(GetRoleResponseBodyRole && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the role.
    std::shared_ptr<GetRoleResponseBodyRole> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif

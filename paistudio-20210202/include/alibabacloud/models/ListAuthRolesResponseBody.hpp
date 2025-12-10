// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthRolesResponseBodyRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListAuthRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
    };
    ListAuthRolesResponseBody() = default ;
    ListAuthRolesResponseBody(const ListAuthRolesResponseBody &) = default ;
    ListAuthRolesResponseBody(ListAuthRolesResponseBody &&) = default ;
    ListAuthRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthRolesResponseBody() = default ;
    ListAuthRolesResponseBody& operator=(const ListAuthRolesResponseBody &) = default ;
    ListAuthRolesResponseBody& operator=(ListAuthRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->roles_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<ListAuthRolesResponseBodyRoles> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<ListAuthRolesResponseBodyRoles>) };
    inline vector<ListAuthRolesResponseBodyRoles> roles() { DARABONBA_PTR_GET(roles_, vector<ListAuthRolesResponseBodyRoles>) };
    inline ListAuthRolesResponseBody& setRoles(const vector<ListAuthRolesResponseBodyRoles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline ListAuthRolesResponseBody& setRoles(vector<ListAuthRolesResponseBodyRoles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListAuthRolesResponseBodyRoles>> roles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif

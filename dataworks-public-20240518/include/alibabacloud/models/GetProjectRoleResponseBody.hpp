// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProjectRoleResponseBodyProjectRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProjectRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectRole, projectRole_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectRole, projectRole_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectRoleResponseBody() = default ;
    GetProjectRoleResponseBody(const GetProjectRoleResponseBody &) = default ;
    GetProjectRoleResponseBody(GetProjectRoleResponseBody &&) = default ;
    GetProjectRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectRoleResponseBody() = default ;
    GetProjectRoleResponseBody& operator=(const GetProjectRoleResponseBody &) = default ;
    GetProjectRoleResponseBody& operator=(GetProjectRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectRole_ != nullptr
        && this->requestId_ != nullptr; };
    // projectRole Field Functions 
    bool hasProjectRole() const { return this->projectRole_ != nullptr;};
    void deleteProjectRole() { this->projectRole_ = nullptr;};
    inline const GetProjectRoleResponseBodyProjectRole & projectRole() const { DARABONBA_PTR_GET_CONST(projectRole_, GetProjectRoleResponseBodyProjectRole) };
    inline GetProjectRoleResponseBodyProjectRole projectRole() { DARABONBA_PTR_GET(projectRole_, GetProjectRoleResponseBodyProjectRole) };
    inline GetProjectRoleResponseBody& setProjectRole(const GetProjectRoleResponseBodyProjectRole & projectRole) { DARABONBA_PTR_SET_VALUE(projectRole_, projectRole) };
    inline GetProjectRoleResponseBody& setProjectRole(GetProjectRoleResponseBodyProjectRole && projectRole) { DARABONBA_PTR_SET_RVALUE(projectRole_, projectRole) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The role in the DataWorks workspace.
    std::shared_ptr<GetProjectRoleResponseBodyProjectRole> projectRole_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

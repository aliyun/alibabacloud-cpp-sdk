// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTMEMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProjectMemberResponseBodyProjectMember.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProjectMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectMember, projectMember_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectMember, projectMember_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectMemberResponseBody() = default ;
    GetProjectMemberResponseBody(const GetProjectMemberResponseBody &) = default ;
    GetProjectMemberResponseBody(GetProjectMemberResponseBody &&) = default ;
    GetProjectMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectMemberResponseBody() = default ;
    GetProjectMemberResponseBody& operator=(const GetProjectMemberResponseBody &) = default ;
    GetProjectMemberResponseBody& operator=(GetProjectMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectMember_ == nullptr
        && return this->requestId_ == nullptr; };
    // projectMember Field Functions 
    bool hasProjectMember() const { return this->projectMember_ != nullptr;};
    void deleteProjectMember() { this->projectMember_ = nullptr;};
    inline const GetProjectMemberResponseBodyProjectMember & projectMember() const { DARABONBA_PTR_GET_CONST(projectMember_, GetProjectMemberResponseBodyProjectMember) };
    inline GetProjectMemberResponseBodyProjectMember projectMember() { DARABONBA_PTR_GET(projectMember_, GetProjectMemberResponseBodyProjectMember) };
    inline GetProjectMemberResponseBody& setProjectMember(const GetProjectMemberResponseBodyProjectMember & projectMember) { DARABONBA_PTR_SET_VALUE(projectMember_, projectMember) };
    inline GetProjectMemberResponseBody& setProjectMember(GetProjectMemberResponseBodyProjectMember && projectMember) { DARABONBA_PTR_SET_RVALUE(projectMember_, projectMember) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the member in the workspace.
    std::shared_ptr<GetProjectMemberResponseBodyProjectMember> projectMember_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

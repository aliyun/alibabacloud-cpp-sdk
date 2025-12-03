// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateProjectMemberResponseBodyMember.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProjectMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(member, member_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(member, member_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateProjectMemberResponseBody() = default ;
    UpdateProjectMemberResponseBody(const UpdateProjectMemberResponseBody &) = default ;
    UpdateProjectMemberResponseBody(UpdateProjectMemberResponseBody &&) = default ;
    UpdateProjectMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectMemberResponseBody() = default ;
    UpdateProjectMemberResponseBody& operator=(const UpdateProjectMemberResponseBody &) = default ;
    UpdateProjectMemberResponseBody& operator=(UpdateProjectMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMsg_ == nullptr && return this->member_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateProjectMemberResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline UpdateProjectMemberResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // member Field Functions 
    bool hasMember() const { return this->member_ != nullptr;};
    void deleteMember() { this->member_ = nullptr;};
    inline const UpdateProjectMemberResponseBodyMember & member() const { DARABONBA_PTR_GET_CONST(member_, UpdateProjectMemberResponseBodyMember) };
    inline UpdateProjectMemberResponseBodyMember member() { DARABONBA_PTR_GET(member_, UpdateProjectMemberResponseBodyMember) };
    inline UpdateProjectMemberResponseBody& setMember(const UpdateProjectMemberResponseBodyMember & member) { DARABONBA_PTR_SET_VALUE(member_, member) };
    inline UpdateProjectMemberResponseBody& setMember(UpdateProjectMemberResponseBodyMember && member) { DARABONBA_PTR_SET_RVALUE(member_, member) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateProjectMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateProjectMemberResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<UpdateProjectMemberResponseBodyMember> member_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

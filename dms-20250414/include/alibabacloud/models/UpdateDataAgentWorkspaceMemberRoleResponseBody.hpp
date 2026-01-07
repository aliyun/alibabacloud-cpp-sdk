// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAAGENTWORKSPACEMEMBERROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAAGENTWORKSPACEMEMBERROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateDataAgentWorkspaceMemberRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataAgentWorkspaceMemberRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataAgentWorkspaceMemberRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateDataAgentWorkspaceMemberRoleResponseBody() = default ;
    UpdateDataAgentWorkspaceMemberRoleResponseBody(const UpdateDataAgentWorkspaceMemberRoleResponseBody &) = default ;
    UpdateDataAgentWorkspaceMemberRoleResponseBody(UpdateDataAgentWorkspaceMemberRoleResponseBody &&) = default ;
    UpdateDataAgentWorkspaceMemberRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataAgentWorkspaceMemberRoleResponseBody() = default ;
    UpdateDataAgentWorkspaceMemberRoleResponseBody& operator=(const UpdateDataAgentWorkspaceMemberRoleResponseBody &) = default ;
    UpdateDataAgentWorkspaceMemberRoleResponseBody& operator=(UpdateDataAgentWorkspaceMemberRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(JoinTime, joinTime_);
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(RunningTaskNumber, runningTaskNumber_);
        DARABONBA_PTR_TO_JSON(TotalTaskNumber, totalTaskNumber_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(JoinTime, joinTime_);
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(RunningTaskNumber, runningTaskNumber_);
        DARABONBA_PTR_FROM_JSON(TotalTaskNumber, totalTaskNumber_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->joinTime_ == nullptr
        && this->memberId_ == nullptr && this->roleName_ == nullptr && this->runningTaskNumber_ == nullptr && this->totalTaskNumber_ == nullptr && this->userName_ == nullptr; };
      // joinTime Field Functions 
      bool hasJoinTime() const { return this->joinTime_ != nullptr;};
      void deleteJoinTime() { this->joinTime_ = nullptr;};
      inline int64_t getJoinTime() const { DARABONBA_PTR_GET_DEFAULT(joinTime_, 0L) };
      inline Data& setJoinTime(int64_t joinTime) { DARABONBA_PTR_SET_VALUE(joinTime_, joinTime) };


      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
      inline Data& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Data& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // runningTaskNumber Field Functions 
      bool hasRunningTaskNumber() const { return this->runningTaskNumber_ != nullptr;};
      void deleteRunningTaskNumber() { this->runningTaskNumber_ = nullptr;};
      inline int64_t getRunningTaskNumber() const { DARABONBA_PTR_GET_DEFAULT(runningTaskNumber_, 0L) };
      inline Data& setRunningTaskNumber(int64_t runningTaskNumber) { DARABONBA_PTR_SET_VALUE(runningTaskNumber_, runningTaskNumber) };


      // totalTaskNumber Field Functions 
      bool hasTotalTaskNumber() const { return this->totalTaskNumber_ != nullptr;};
      void deleteTotalTaskNumber() { this->totalTaskNumber_ = nullptr;};
      inline int64_t getTotalTaskNumber() const { DARABONBA_PTR_GET_DEFAULT(totalTaskNumber_, 0L) };
      inline Data& setTotalTaskNumber(int64_t totalTaskNumber) { DARABONBA_PTR_SET_VALUE(totalTaskNumber_, totalTaskNumber) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Data& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<int64_t> joinTime_ {};
      shared_ptr<string> memberId_ {};
      shared_ptr<string> roleName_ {};
      shared_ptr<int64_t> runningTaskNumber_ {};
      shared_ptr<int64_t> totalTaskNumber_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateDataAgentWorkspaceMemberRoleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateDataAgentWorkspaceMemberRoleResponseBody::Data) };
    inline UpdateDataAgentWorkspaceMemberRoleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateDataAgentWorkspaceMemberRoleResponseBody::Data) };
    inline UpdateDataAgentWorkspaceMemberRoleResponseBody& setData(const UpdateDataAgentWorkspaceMemberRoleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateDataAgentWorkspaceMemberRoleResponseBody& setData(UpdateDataAgentWorkspaceMemberRoleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateDataAgentWorkspaceMemberRoleResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdateDataAgentWorkspaceMemberRoleResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDataAgentWorkspaceMemberRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateDataAgentWorkspaceMemberRoleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<UpdateDataAgentWorkspaceMemberRoleResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

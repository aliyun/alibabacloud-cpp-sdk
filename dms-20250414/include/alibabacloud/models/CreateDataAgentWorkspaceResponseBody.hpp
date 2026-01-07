// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateDataAgentWorkspaceResponseBody() = default ;
    CreateDataAgentWorkspaceResponseBody(const CreateDataAgentWorkspaceResponseBody &) = default ;
    CreateDataAgentWorkspaceResponseBody(CreateDataAgentWorkspaceResponseBody &&) = default ;
    CreateDataAgentWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentWorkspaceResponseBody() = default ;
    CreateDataAgentWorkspaceResponseBody& operator=(const CreateDataAgentWorkspaceResponseBody &) = default ;
    CreateDataAgentWorkspaceResponseBody& operator=(CreateDataAgentWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(TotalMember, totalMember_);
        DARABONBA_PTR_TO_JSON(WorkspaceDesc, workspaceDesc_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
        DARABONBA_PTR_TO_JSON(WorkspaceStatus, workspaceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(TotalMember, totalMember_);
        DARABONBA_PTR_FROM_JSON(WorkspaceDesc, workspaceDesc_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
        DARABONBA_PTR_FROM_JSON(WorkspaceStatus, workspaceStatus_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->modifyTime_ == nullptr && this->roleName_ == nullptr && this->totalMember_ == nullptr && this->workspaceDesc_ == nullptr
        && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr && this->workspaceStatus_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Data& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Data& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // totalMember Field Functions 
      bool hasTotalMember() const { return this->totalMember_ != nullptr;};
      void deleteTotalMember() { this->totalMember_ = nullptr;};
      inline int64_t getTotalMember() const { DARABONBA_PTR_GET_DEFAULT(totalMember_, 0L) };
      inline Data& setTotalMember(int64_t totalMember) { DARABONBA_PTR_SET_VALUE(totalMember_, totalMember) };


      // workspaceDesc Field Functions 
      bool hasWorkspaceDesc() const { return this->workspaceDesc_ != nullptr;};
      void deleteWorkspaceDesc() { this->workspaceDesc_ = nullptr;};
      inline string getWorkspaceDesc() const { DARABONBA_PTR_GET_DEFAULT(workspaceDesc_, "") };
      inline Data& setWorkspaceDesc(string workspaceDesc) { DARABONBA_PTR_SET_VALUE(workspaceDesc_, workspaceDesc) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Data& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


      // workspaceStatus Field Functions 
      bool hasWorkspaceStatus() const { return this->workspaceStatus_ != nullptr;};
      void deleteWorkspaceStatus() { this->workspaceStatus_ = nullptr;};
      inline string getWorkspaceStatus() const { DARABONBA_PTR_GET_DEFAULT(workspaceStatus_, "") };
      inline Data& setWorkspaceStatus(string workspaceStatus) { DARABONBA_PTR_SET_VALUE(workspaceStatus_, workspaceStatus) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<int64_t> modifyTime_ {};
      shared_ptr<string> roleName_ {};
      shared_ptr<int64_t> totalMember_ {};
      shared_ptr<string> workspaceDesc_ {};
      shared_ptr<string> workspaceId_ {};
      shared_ptr<string> workspaceName_ {};
      shared_ptr<string> workspaceStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateDataAgentWorkspaceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateDataAgentWorkspaceResponseBody::Data) };
    inline CreateDataAgentWorkspaceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateDataAgentWorkspaceResponseBody::Data) };
    inline CreateDataAgentWorkspaceResponseBody& setData(const CreateDataAgentWorkspaceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateDataAgentWorkspaceResponseBody& setData(CreateDataAgentWorkspaceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateDataAgentWorkspaceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateDataAgentWorkspaceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataAgentWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateDataAgentWorkspaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<CreateDataAgentWorkspaceResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

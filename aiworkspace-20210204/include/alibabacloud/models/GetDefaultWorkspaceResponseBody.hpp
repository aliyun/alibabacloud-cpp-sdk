// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFAULTWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEFAULTWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDefaultWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefaultWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EnvTypes, envTypes_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefaultWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EnvTypes, envTypes_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    GetDefaultWorkspaceResponseBody() = default ;
    GetDefaultWorkspaceResponseBody(const GetDefaultWorkspaceResponseBody &) = default ;
    GetDefaultWorkspaceResponseBody(GetDefaultWorkspaceResponseBody &&) = default ;
    GetDefaultWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefaultWorkspaceResponseBody() = default ;
    GetDefaultWorkspaceResponseBody& operator=(const GetDefaultWorkspaceResponseBody &) = default ;
    GetDefaultWorkspaceResponseBody& operator=(GetDefaultWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Owner : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Owner& obj) { 
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserKp, userKp_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Owner& obj) { 
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserKp, userKp_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      Owner() = default ;
      Owner(const Owner &) = default ;
      Owner(Owner &&) = default ;
      Owner(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Owner() = default ;
      Owner& operator=(const Owner &) = default ;
      Owner& operator=(Owner &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userId_ == nullptr
        && this->userKp_ == nullptr && this->userName_ == nullptr; };
      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Owner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userKp Field Functions 
      bool hasUserKp() const { return this->userKp_ != nullptr;};
      void deleteUserKp() { this->userKp_ = nullptr;};
      inline string getUserKp() const { DARABONBA_PTR_GET_DEFAULT(userKp_, "") };
      inline Owner& setUserKp(string userKp) { DARABONBA_PTR_SET_VALUE(userKp_, userKp) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Owner& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The user ID.
      shared_ptr<string> userId_ {};
      // The user ID.
      shared_ptr<string> userKp_ {};
      // The username.
      shared_ptr<string> userName_ {};
    };

    class Conditions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Conditions() = default ;
      Conditions(const Conditions &) = default ;
      Conditions(Conditions &&) = default ;
      Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Conditions() = default ;
      Conditions& operator=(const Conditions &) = default ;
      Conditions& operator=(Conditions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->type_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
      inline Conditions& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Conditions& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Conditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The returned status code. HTTP status code 200 indicates that the request was successful. Other HTTP status codes indicate that the request failed.
      shared_ptr<int64_t> code_ {};
      // The error message. If the returned status code is 200, this parameter is empty.
      shared_ptr<string> message_ {};
      // The task type. Valid values:
      // 
      // *   CREATING: The workspace is being created.
      // *   WORKSPACE_CREATED: The workspace is created.
      // *   MEMBERS_ADDED: The member is added.
      // *   ENABLED: The workspace is created and the member is added.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->creator_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->envTypes_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->owner_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->workspaceId_ == nullptr
        && this->workspaceName_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<GetDefaultWorkspaceResponseBody::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<GetDefaultWorkspaceResponseBody::Conditions>) };
    inline vector<GetDefaultWorkspaceResponseBody::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<GetDefaultWorkspaceResponseBody::Conditions>) };
    inline GetDefaultWorkspaceResponseBody& setConditions(const vector<GetDefaultWorkspaceResponseBody::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline GetDefaultWorkspaceResponseBody& setConditions(vector<GetDefaultWorkspaceResponseBody::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetDefaultWorkspaceResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDefaultWorkspaceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetDefaultWorkspaceResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // envTypes Field Functions 
    bool hasEnvTypes() const { return this->envTypes_ != nullptr;};
    void deleteEnvTypes() { this->envTypes_ = nullptr;};
    inline const vector<string> & getEnvTypes() const { DARABONBA_PTR_GET_CONST(envTypes_, vector<string>) };
    inline vector<string> getEnvTypes() { DARABONBA_PTR_GET(envTypes_, vector<string>) };
    inline GetDefaultWorkspaceResponseBody& setEnvTypes(const vector<string> & envTypes) { DARABONBA_PTR_SET_VALUE(envTypes_, envTypes) };
    inline GetDefaultWorkspaceResponseBody& setEnvTypes(vector<string> && envTypes) { DARABONBA_PTR_SET_RVALUE(envTypes_, envTypes) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetDefaultWorkspaceResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetDefaultWorkspaceResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const GetDefaultWorkspaceResponseBody::Owner & getOwner() const { DARABONBA_PTR_GET_CONST(owner_, GetDefaultWorkspaceResponseBody::Owner) };
    inline GetDefaultWorkspaceResponseBody::Owner getOwner() { DARABONBA_PTR_GET(owner_, GetDefaultWorkspaceResponseBody::Owner) };
    inline GetDefaultWorkspaceResponseBody& setOwner(const GetDefaultWorkspaceResponseBody::Owner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline GetDefaultWorkspaceResponseBody& setOwner(GetDefaultWorkspaceResponseBody::Owner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDefaultWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDefaultWorkspaceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetDefaultWorkspaceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline GetDefaultWorkspaceResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The conditions of the default workspace in the creation process.
    shared_ptr<vector<GetDefaultWorkspaceResponseBody::Conditions>> conditions_ {};
    // The UID of the Alibaba Cloud account.
    shared_ptr<string> creator_ {};
    // The workspace description.
    shared_ptr<string> description_ {};
    // The display name of the workspace.
    shared_ptr<string> displayName_ {};
    // The environments of the workspace. Valid values:
    // 
    // *   Workspaces in basic mode can run only in the production environment.
    // *   Workspaces in standard mode can run in both the development and production environments.
    shared_ptr<vector<string>> envTypes_ {};
    // The time when the workspace was created, in UTC. The time follows the ISO 8601 standard.
    shared_ptr<string> gmtCreateTime_ {};
    // The time when the workspace was modified, in UTC. The time follows the ISO 8601 standard.
    shared_ptr<string> gmtModifiedTime_ {};
    // The UID of the Alibaba Cloud account.
    shared_ptr<GetDefaultWorkspaceResponseBody::Owner> owner_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The workspace status. Valid values:
    // 
    // *   ENABLED
    // *   INITIALIZING
    // *   FAILURE
    // *   DISABLED
    // *   FROZEN
    // *   UPDATING
    shared_ptr<string> status_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
    // The workspace name, which is unique in a region.
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

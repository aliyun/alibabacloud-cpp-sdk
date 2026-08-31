// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKGAUTHORIZEDWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKGAUTHORIZEDWORKSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetKgAuthorizedWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKgAuthorizedWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetKgAuthorizedWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetKgAuthorizedWorkspacesResponseBody() = default ;
    GetKgAuthorizedWorkspacesResponseBody(const GetKgAuthorizedWorkspacesResponseBody &) = default ;
    GetKgAuthorizedWorkspacesResponseBody(GetKgAuthorizedWorkspacesResponseBody &&) = default ;
    GetKgAuthorizedWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKgAuthorizedWorkspacesResponseBody() = default ;
    GetKgAuthorizedWorkspacesResponseBody& operator=(const GetKgAuthorizedWorkspacesResponseBody &) = default ;
    GetKgAuthorizedWorkspacesResponseBody& operator=(GetKgAuthorizedWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(WorkspaceList, workspaceList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(WorkspaceList, workspaceList_);
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
      class WorkspaceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkspaceList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(LastPublishTime, lastPublishTime_);
          DARABONBA_PTR_TO_JSON(LastPublishVersion, lastPublishVersion_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RoleList, roleList_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, WorkspaceList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(LastPublishTime, lastPublishTime_);
          DARABONBA_PTR_FROM_JSON(LastPublishVersion, lastPublishVersion_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        };
        WorkspaceList() = default ;
        WorkspaceList(const WorkspaceList &) = default ;
        WorkspaceList(WorkspaceList &&) = default ;
        WorkspaceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkspaceList() = default ;
        WorkspaceList& operator=(const WorkspaceList &) = default ;
        WorkspaceList& operator=(WorkspaceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RoleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoleList& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, RoleList& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          RoleList() = default ;
          RoleList(const RoleList &) = default ;
          RoleList(RoleList &&) = default ;
          RoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoleList() = default ;
          RoleList& operator=(const RoleList &) = default ;
          RoleList& operator=(RoleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline RoleList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RoleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The code of the workspace role.
          shared_ptr<string> code_ {};
          // The name of the workspace role.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->gmtCreate_ == nullptr && this->lastPublishTime_ == nullptr && this->lastPublishVersion_ == nullptr && this->name_ == nullptr && this->roleList_ == nullptr
        && this->workspaceId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline WorkspaceList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline WorkspaceList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // lastPublishTime Field Functions 
        bool hasLastPublishTime() const { return this->lastPublishTime_ != nullptr;};
        void deleteLastPublishTime() { this->lastPublishTime_ = nullptr;};
        inline string getLastPublishTime() const { DARABONBA_PTR_GET_DEFAULT(lastPublishTime_, "") };
        inline WorkspaceList& setLastPublishTime(string lastPublishTime) { DARABONBA_PTR_SET_VALUE(lastPublishTime_, lastPublishTime) };


        // lastPublishVersion Field Functions 
        bool hasLastPublishVersion() const { return this->lastPublishVersion_ != nullptr;};
        void deleteLastPublishVersion() { this->lastPublishVersion_ = nullptr;};
        inline int32_t getLastPublishVersion() const { DARABONBA_PTR_GET_DEFAULT(lastPublishVersion_, 0) };
        inline WorkspaceList& setLastPublishVersion(int32_t lastPublishVersion) { DARABONBA_PTR_SET_VALUE(lastPublishVersion_, lastPublishVersion) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline WorkspaceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // roleList Field Functions 
        bool hasRoleList() const { return this->roleList_ != nullptr;};
        void deleteRoleList() { this->roleList_ = nullptr;};
        inline const vector<WorkspaceList::RoleList> & getRoleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<WorkspaceList::RoleList>) };
        inline vector<WorkspaceList::RoleList> getRoleList() { DARABONBA_PTR_GET(roleList_, vector<WorkspaceList::RoleList>) };
        inline WorkspaceList& setRoleList(const vector<WorkspaceList::RoleList> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
        inline WorkspaceList& setRoleList(vector<WorkspaceList::RoleList> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline WorkspaceList& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        // The description of the knowledge graph workspace.
        shared_ptr<string> description_ {};
        // The creation time of the knowledge graph workspace.
        shared_ptr<string> gmtCreate_ {};
        // The latest publish time of the knowledge graph workspace. This value is empty if the workspace has never been published successfully.
        shared_ptr<string> lastPublishTime_ {};
        // The latest publish version number of the knowledge graph workspace. This value is empty if the workspace has never been published successfully.
        shared_ptr<int32_t> lastPublishVersion_ {};
        // The name of the knowledge graph workspace.
        shared_ptr<string> name_ {};
        // The list of roles assigned to the specified user in the workspace. This is an empty list if the user is not a member of the workspace.
        shared_ptr<vector<WorkspaceList::RoleList>> roleList_ {};
        // The ID of the knowledge graph workspace.
        shared_ptr<string> workspaceId_ {};
      };

      virtual bool empty() const override { return this->totalCount_ == nullptr
        && this->workspaceList_ == nullptr; };
      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // workspaceList Field Functions 
      bool hasWorkspaceList() const { return this->workspaceList_ != nullptr;};
      void deleteWorkspaceList() { this->workspaceList_ = nullptr;};
      inline const vector<Data::WorkspaceList> & getWorkspaceList() const { DARABONBA_PTR_GET_CONST(workspaceList_, vector<Data::WorkspaceList>) };
      inline vector<Data::WorkspaceList> getWorkspaceList() { DARABONBA_PTR_GET(workspaceList_, vector<Data::WorkspaceList>) };
      inline Data& setWorkspaceList(const vector<Data::WorkspaceList> & workspaceList) { DARABONBA_PTR_SET_VALUE(workspaceList_, workspaceList) };
      inline Data& setWorkspaceList(vector<Data::WorkspaceList> && workspaceList) { DARABONBA_PTR_SET_RVALUE(workspaceList_, workspaceList) };


    protected:
      // The total number of knowledge graph workspaces that the user has permissions on.
      shared_ptr<int32_t> totalCount_ {};
      // The list of knowledge graph workspaces that the user has permissions on.
      shared_ptr<vector<Data::WorkspaceList>> workspaceList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetKgAuthorizedWorkspacesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetKgAuthorizedWorkspacesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetKgAuthorizedWorkspacesResponseBody::Data) };
    inline GetKgAuthorizedWorkspacesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetKgAuthorizedWorkspacesResponseBody::Data) };
    inline GetKgAuthorizedWorkspacesResponseBody& setData(const GetKgAuthorizedWorkspacesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKgAuthorizedWorkspacesResponseBody& setData(GetKgAuthorizedWorkspacesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetKgAuthorizedWorkspacesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKgAuthorizedWorkspacesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKgAuthorizedWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetKgAuthorizedWorkspacesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The request result.
    shared_ptr<GetKgAuthorizedWorkspacesResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

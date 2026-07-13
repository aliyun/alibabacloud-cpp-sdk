// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class UpdateTeamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTeamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTeamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateTeamResponseBody() = default ;
    UpdateTeamResponseBody(const UpdateTeamResponseBody &) = default ;
    UpdateTeamResponseBody(UpdateTeamResponseBody &&) = default ;
    UpdateTeamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTeamResponseBody() = default ;
    UpdateTeamResponseBody& operator=(const UpdateTeamResponseBody &) = default ;
    UpdateTeamResponseBody& operator=(UpdateTeamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AdminName, adminName_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LeaderName, leaderName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TeamMembers, teamMembers_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(WorkerNames, workerNames_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AdminName, adminName_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LeaderName, leaderName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TeamMembers, teamMembers_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(WorkerNames, workerNames_);
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
      class TeamMembers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TeamMembers& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, TeamMembers& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        TeamMembers() = default ;
        TeamMembers(const TeamMembers &) = default ;
        TeamMembers(TeamMembers &&) = default ;
        TeamMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TeamMembers() = default ;
        TeamMembers& operator=(const TeamMembers &) = default ;
        TeamMembers& operator=(TeamMembers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TeamMembers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->adminName_ == nullptr
        && this->createdAt_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->leaderName_ == nullptr && this->name_ == nullptr
        && this->teamMembers_ == nullptr && this->updatedAt_ == nullptr && this->workerNames_ == nullptr; };
      // adminName Field Functions 
      bool hasAdminName() const { return this->adminName_ != nullptr;};
      void deleteAdminName() { this->adminName_ = nullptr;};
      inline string getAdminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
      inline Data& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // leaderName Field Functions 
      bool hasLeaderName() const { return this->leaderName_ != nullptr;};
      void deleteLeaderName() { this->leaderName_ = nullptr;};
      inline string getLeaderName() const { DARABONBA_PTR_GET_DEFAULT(leaderName_, "") };
      inline Data& setLeaderName(string leaderName) { DARABONBA_PTR_SET_VALUE(leaderName_, leaderName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // teamMembers Field Functions 
      bool hasTeamMembers() const { return this->teamMembers_ != nullptr;};
      void deleteTeamMembers() { this->teamMembers_ = nullptr;};
      inline const vector<Data::TeamMembers> & getTeamMembers() const { DARABONBA_PTR_GET_CONST(teamMembers_, vector<Data::TeamMembers>) };
      inline vector<Data::TeamMembers> getTeamMembers() { DARABONBA_PTR_GET(teamMembers_, vector<Data::TeamMembers>) };
      inline Data& setTeamMembers(const vector<Data::TeamMembers> & teamMembers) { DARABONBA_PTR_SET_VALUE(teamMembers_, teamMembers) };
      inline Data& setTeamMembers(vector<Data::TeamMembers> && teamMembers) { DARABONBA_PTR_SET_RVALUE(teamMembers_, teamMembers) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workerNames Field Functions 
      bool hasWorkerNames() const { return this->workerNames_ != nullptr;};
      void deleteWorkerNames() { this->workerNames_ = nullptr;};
      inline const vector<string> & getWorkerNames() const { DARABONBA_PTR_GET_CONST(workerNames_, vector<string>) };
      inline vector<string> getWorkerNames() { DARABONBA_PTR_GET(workerNames_, vector<string>) };
      inline Data& setWorkerNames(const vector<string> & workerNames) { DARABONBA_PTR_SET_VALUE(workerNames_, workerNames) };
      inline Data& setWorkerNames(vector<string> && workerNames) { DARABONBA_PTR_SET_RVALUE(workerNames_, workerNames) };


    protected:
      shared_ptr<string> adminName_ {};
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> leaderName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Data::TeamMembers>> teamMembers_ {};
      shared_ptr<string> updatedAt_ {};
      shared_ptr<vector<string>> workerNames_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateTeamResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateTeamResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateTeamResponseBody::Data) };
    inline UpdateTeamResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateTeamResponseBody::Data) };
    inline UpdateTeamResponseBody& setData(const UpdateTeamResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateTeamResponseBody& setData(UpdateTeamResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateTeamResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateTeamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateTeamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateTeamResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<UpdateTeamResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif

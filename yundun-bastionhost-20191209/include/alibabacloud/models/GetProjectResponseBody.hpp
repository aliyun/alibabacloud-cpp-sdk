// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectResponseBody() = default ;
    GetProjectResponseBody(const GetProjectResponseBody &) = default ;
    GetProjectResponseBody(GetProjectResponseBody &&) = default ;
    GetProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBody() = default ;
    GetProjectResponseBody& operator=(const GetProjectResponseBody &) = default ;
    GetProjectResponseBody& operator=(GetProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Project : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Project& obj) { 
        DARABONBA_PTR_TO_JSON(AppCount, appCount_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(DatabaseCount, databaseCount_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HostCount, hostCount_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(MemberIds, memberIds_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NotifyReceivers, notifyReceivers_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Project& obj) { 
        DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(DatabaseCount, databaseCount_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HostCount, hostCount_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(MemberIds, memberIds_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NotifyReceivers, notifyReceivers_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
      };
      Project() = default ;
      Project(const Project &) = default ;
      Project(Project &&) = default ;
      Project(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Project() = default ;
      Project& operator=(const Project &) = default ;
      Project& operator=(Project &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NotifyReceivers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NotifyReceivers& obj) { 
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
          DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
        };
        friend void from_json(const Darabonba::Json& j, NotifyReceivers& obj) { 
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
          DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
        };
        NotifyReceivers() = default ;
        NotifyReceivers(const NotifyReceivers &) = default ;
        NotifyReceivers(NotifyReceivers &&) = default ;
        NotifyReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NotifyReceivers() = default ;
        NotifyReceivers& operator=(const NotifyReceivers &) = default ;
        NotifyReceivers& operator=(NotifyReceivers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->email_ == nullptr
        && this->name_ == nullptr && this->phone_ == nullptr && this->receiverId_ == nullptr; };
        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline NotifyReceivers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NotifyReceivers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline NotifyReceivers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // receiverId Field Functions 
        bool hasReceiverId() const { return this->receiverId_ != nullptr;};
        void deleteReceiverId() { this->receiverId_ = nullptr;};
        inline string getReceiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
        inline NotifyReceivers& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


      protected:
        // The email address of the notification recipient configured for the project.
        shared_ptr<string> email_ {};
        // The name of the notification recipient configured for the project.
        shared_ptr<string> name_ {};
        // The phone number of the notification recipient configured for the project.
        shared_ptr<string> phone_ {};
        // The ID of the notification recipient configured for the project.
        shared_ptr<string> receiverId_ {};
      };

      virtual bool empty() const override { return this->appCount_ == nullptr
        && this->createdAt_ == nullptr && this->databaseCount_ == nullptr && this->description_ == nullptr && this->hostCount_ == nullptr && this->isDefault_ == nullptr
        && this->memberIds_ == nullptr && this->name_ == nullptr && this->notifyReceivers_ == nullptr && this->projectId_ == nullptr && this->updatedAt_ == nullptr; };
      // appCount Field Functions 
      bool hasAppCount() const { return this->appCount_ != nullptr;};
      void deleteAppCount() { this->appCount_ = nullptr;};
      inline int32_t getAppCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0) };
      inline Project& setAppCount(int32_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline Project& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // databaseCount Field Functions 
      bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
      void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
      inline int32_t getDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(databaseCount_, 0) };
      inline Project& setDatabaseCount(int32_t databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Project& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hostCount Field Functions 
      bool hasHostCount() const { return this->hostCount_ != nullptr;};
      void deleteHostCount() { this->hostCount_ = nullptr;};
      inline int32_t getHostCount() const { DARABONBA_PTR_GET_DEFAULT(hostCount_, 0) };
      inline Project& setHostCount(int32_t hostCount) { DARABONBA_PTR_SET_VALUE(hostCount_, hostCount) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Project& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // memberIds Field Functions 
      bool hasMemberIds() const { return this->memberIds_ != nullptr;};
      void deleteMemberIds() { this->memberIds_ = nullptr;};
      inline const vector<string> & getMemberIds() const { DARABONBA_PTR_GET_CONST(memberIds_, vector<string>) };
      inline vector<string> getMemberIds() { DARABONBA_PTR_GET(memberIds_, vector<string>) };
      inline Project& setMemberIds(const vector<string> & memberIds) { DARABONBA_PTR_SET_VALUE(memberIds_, memberIds) };
      inline Project& setMemberIds(vector<string> && memberIds) { DARABONBA_PTR_SET_RVALUE(memberIds_, memberIds) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Project& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notifyReceivers Field Functions 
      bool hasNotifyReceivers() const { return this->notifyReceivers_ != nullptr;};
      void deleteNotifyReceivers() { this->notifyReceivers_ = nullptr;};
      inline const vector<Project::NotifyReceivers> & getNotifyReceivers() const { DARABONBA_PTR_GET_CONST(notifyReceivers_, vector<Project::NotifyReceivers>) };
      inline vector<Project::NotifyReceivers> getNotifyReceivers() { DARABONBA_PTR_GET(notifyReceivers_, vector<Project::NotifyReceivers>) };
      inline Project& setNotifyReceivers(const vector<Project::NotifyReceivers> & notifyReceivers) { DARABONBA_PTR_SET_VALUE(notifyReceivers_, notifyReceivers) };
      inline Project& setNotifyReceivers(vector<Project::NotifyReceivers> && notifyReceivers) { DARABONBA_PTR_SET_RVALUE(notifyReceivers_, notifyReceivers) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Project& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline Project& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The number of application assets in the project.
      shared_ptr<int32_t> appCount_ {};
      // The time when the project was created, in seconds (UNIX timestamp format).
      shared_ptr<int64_t> createdAt_ {};
      // The number of database instances in the project.
      shared_ptr<int32_t> databaseCount_ {};
      // The project description.
      shared_ptr<string> description_ {};
      // The number of hosts in the project.
      shared_ptr<int32_t> hostCount_ {};
      // Indicates whether the project is the default project.
      shared_ptr<bool> isDefault_ {};
      // The list of member accounts UIDs associated with the project.
      shared_ptr<vector<string>> memberIds_ {};
      // The project name.
      shared_ptr<string> name_ {};
      // The list of notification recipients configured for the project.
      shared_ptr<vector<Project::NotifyReceivers>> notifyReceivers_ {};
      // The project ID.
      shared_ptr<int64_t> projectId_ {};
      // The time when the project was last updated, in seconds (UNIX timestamp format).
      shared_ptr<int64_t> updatedAt_ {};
    };

    virtual bool empty() const override { return this->project_ == nullptr
        && this->requestId_ == nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const GetProjectResponseBody::Project & getProject() const { DARABONBA_PTR_GET_CONST(project_, GetProjectResponseBody::Project) };
    inline GetProjectResponseBody::Project getProject() { DARABONBA_PTR_GET(project_, GetProjectResponseBody::Project) };
    inline GetProjectResponseBody& setProject(const GetProjectResponseBody::Project & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline GetProjectResponseBody& setProject(GetProjectResponseBody::Project && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A short description of struct
    shared_ptr<GetProjectResponseBody::Project> project_ {};
    // The unique request ID generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELANGFUSEUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELANGFUSEUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeLangfuseUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLangfuseUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLangfuseUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLangfuseUserResponseBody() = default ;
    DescribeLangfuseUserResponseBody(const DescribeLangfuseUserResponseBody &) = default ;
    DescribeLangfuseUserResponseBody(DescribeLangfuseUserResponseBody &&) = default ;
    DescribeLangfuseUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLangfuseUserResponseBody() = default ;
    DescribeLangfuseUserResponseBody& operator=(const DescribeLangfuseUserResponseBody &) = default ;
    DescribeLangfuseUserResponseBody& operator=(DescribeLangfuseUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Memberships, memberships_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Memberships, memberships_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
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
      class Memberships : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Memberships& obj) { 
          DARABONBA_PTR_TO_JSON(OrgRole, orgRole_);
          DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_TO_JSON(OrganizationName, organizationName_);
          DARABONBA_PTR_TO_JSON(Projects, projects_);
        };
        friend void from_json(const Darabonba::Json& j, Memberships& obj) { 
          DARABONBA_PTR_FROM_JSON(OrgRole, orgRole_);
          DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_FROM_JSON(OrganizationName, organizationName_);
          DARABONBA_PTR_FROM_JSON(Projects, projects_);
        };
        Memberships() = default ;
        Memberships(const Memberships &) = default ;
        Memberships(Memberships &&) = default ;
        Memberships(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Memberships() = default ;
        Memberships& operator=(const Memberships &) = default ;
        Memberships& operator=(Memberships &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Projects : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Projects& obj) { 
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
            DARABONBA_PTR_TO_JSON(ProjectRole, projectRole_);
          };
          friend void from_json(const Darabonba::Json& j, Projects& obj) { 
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
            DARABONBA_PTR_FROM_JSON(ProjectRole, projectRole_);
          };
          Projects() = default ;
          Projects(const Projects &) = default ;
          Projects(Projects &&) = default ;
          Projects(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Projects() = default ;
          Projects& operator=(const Projects &) = default ;
          Projects& operator=(Projects &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->projectId_ == nullptr
        && this->projectName_ == nullptr && this->projectRole_ == nullptr; };
          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
          inline Projects& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // projectName Field Functions 
          bool hasProjectName() const { return this->projectName_ != nullptr;};
          void deleteProjectName() { this->projectName_ = nullptr;};
          inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
          inline Projects& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


          // projectRole Field Functions 
          bool hasProjectRole() const { return this->projectRole_ != nullptr;};
          void deleteProjectRole() { this->projectRole_ = nullptr;};
          inline string getProjectRole() const { DARABONBA_PTR_GET_DEFAULT(projectRole_, "") };
          inline Projects& setProjectRole(string projectRole) { DARABONBA_PTR_SET_VALUE(projectRole_, projectRole) };


        protected:
          // The Langfuse project ID.
          shared_ptr<string> projectId_ {};
          // The Langfuse project name.
          shared_ptr<string> projectName_ {};
          // The role of the user within the project.
          shared_ptr<string> projectRole_ {};
        };

        virtual bool empty() const override { return this->orgRole_ == nullptr
        && this->organizationId_ == nullptr && this->organizationName_ == nullptr && this->projects_ == nullptr; };
        // orgRole Field Functions 
        bool hasOrgRole() const { return this->orgRole_ != nullptr;};
        void deleteOrgRole() { this->orgRole_ = nullptr;};
        inline string getOrgRole() const { DARABONBA_PTR_GET_DEFAULT(orgRole_, "") };
        inline Memberships& setOrgRole(string orgRole) { DARABONBA_PTR_SET_VALUE(orgRole_, orgRole) };


        // organizationId Field Functions 
        bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
        void deleteOrganizationId() { this->organizationId_ = nullptr;};
        inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
        inline Memberships& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


        // organizationName Field Functions 
        bool hasOrganizationName() const { return this->organizationName_ != nullptr;};
        void deleteOrganizationName() { this->organizationName_ = nullptr;};
        inline string getOrganizationName() const { DARABONBA_PTR_GET_DEFAULT(organizationName_, "") };
        inline Memberships& setOrganizationName(string organizationName) { DARABONBA_PTR_SET_VALUE(organizationName_, organizationName) };


        // projects Field Functions 
        bool hasProjects() const { return this->projects_ != nullptr;};
        void deleteProjects() { this->projects_ = nullptr;};
        inline const vector<Memberships::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Memberships::Projects>) };
        inline vector<Memberships::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<Memberships::Projects>) };
        inline Memberships& setProjects(const vector<Memberships::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
        inline Memberships& setProjects(vector<Memberships::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


      protected:
        // The role of the user within the organization.
        shared_ptr<string> orgRole_ {};
        // The Langfuse organization ID.
        shared_ptr<string> organizationId_ {};
        // The Langfuse organization name.
        shared_ptr<string> organizationName_ {};
        // The list of Langfuse projects.
        shared_ptr<vector<Memberships::Projects>> projects_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->email_ == nullptr && this->memberships_ == nullptr && this->name_ == nullptr && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // memberships Field Functions 
      bool hasMemberships() const { return this->memberships_ != nullptr;};
      void deleteMemberships() { this->memberships_ = nullptr;};
      inline const vector<Data::Memberships> & getMemberships() const { DARABONBA_PTR_GET_CONST(memberships_, vector<Data::Memberships>) };
      inline vector<Data::Memberships> getMemberships() { DARABONBA_PTR_GET(memberships_, vector<Data::Memberships>) };
      inline Data& setMemberships(const vector<Data::Memberships> & memberships) { DARABONBA_PTR_SET_VALUE(memberships_, memberships) };
      inline Data& setMemberships(vector<Data::Memberships> && memberships) { DARABONBA_PTR_SET_RVALUE(memberships_, memberships) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The time when the user was created.
      shared_ptr<string> createdAt_ {};
      // The email address of the user.
      shared_ptr<string> email_ {};
      // The role information of the user.
      shared_ptr<vector<Data::Memberships>> memberships_ {};
      // The username.
      shared_ptr<string> name_ {};
      // The time when the user was last updated.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeLangfuseUserResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeLangfuseUserResponseBody::Data) };
    inline DescribeLangfuseUserResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeLangfuseUserResponseBody::Data) };
    inline DescribeLangfuseUserResponseBody& setData(const DescribeLangfuseUserResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLangfuseUserResponseBody& setData(DescribeLangfuseUserResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLangfuseUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<DescribeLangfuseUserResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif

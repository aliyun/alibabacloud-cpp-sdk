// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORORGANIZATIONALUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORORGANIZATIONALUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationsForOrganizationalUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForOrganizationalUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationsForOrganizationalUnitResponseBody() = default ;
    ListApplicationsForOrganizationalUnitResponseBody(const ListApplicationsForOrganizationalUnitResponseBody &) = default ;
    ListApplicationsForOrganizationalUnitResponseBody(ListApplicationsForOrganizationalUnitResponseBody &&) = default ;
    ListApplicationsForOrganizationalUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForOrganizationalUnitResponseBody() = default ;
    ListApplicationsForOrganizationalUnitResponseBody& operator=(const ListApplicationsForOrganizationalUnitResponseBody &) = default ;
    ListApplicationsForOrganizationalUnitResponseBody& operator=(ListApplicationsForOrganizationalUnitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplicationRoles, applicationRoles_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplicationRoles, applicationRoles_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApplicationRoles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicationRoles& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationRoleId, applicationRoleId_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicationRoles& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationRoleId, applicationRoleId_);
        };
        ApplicationRoles() = default ;
        ApplicationRoles(const ApplicationRoles &) = default ;
        ApplicationRoles(ApplicationRoles &&) = default ;
        ApplicationRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicationRoles() = default ;
        ApplicationRoles& operator=(const ApplicationRoles &) = default ;
        ApplicationRoles& operator=(ApplicationRoles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicationRoleId_ == nullptr; };
        // applicationRoleId Field Functions 
        bool hasApplicationRoleId() const { return this->applicationRoleId_ != nullptr;};
        void deleteApplicationRoleId() { this->applicationRoleId_ = nullptr;};
        inline string getApplicationRoleId() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleId_, "") };
        inline ApplicationRoles& setApplicationRoleId(string applicationRoleId) { DARABONBA_PTR_SET_VALUE(applicationRoleId_, applicationRoleId) };


      protected:
        // 应用角色标识。
        shared_ptr<string> applicationRoleId_ {};
      };

      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationRoles_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationRoles Field Functions 
      bool hasApplicationRoles() const { return this->applicationRoles_ != nullptr;};
      void deleteApplicationRoles() { this->applicationRoles_ = nullptr;};
      inline const vector<Applications::ApplicationRoles> & getApplicationRoles() const { DARABONBA_PTR_GET_CONST(applicationRoles_, vector<Applications::ApplicationRoles>) };
      inline vector<Applications::ApplicationRoles> getApplicationRoles() { DARABONBA_PTR_GET(applicationRoles_, vector<Applications::ApplicationRoles>) };
      inline Applications& setApplicationRoles(const vector<Applications::ApplicationRoles> & applicationRoles) { DARABONBA_PTR_SET_VALUE(applicationRoles_, applicationRoles) };
      inline Applications& setApplicationRoles(vector<Applications::ApplicationRoles> && applicationRoles) { DARABONBA_PTR_SET_RVALUE(applicationRoles_, applicationRoles) };


    protected:
      // The ID of the application that the EIAM organization can access.
      shared_ptr<string> applicationId_ {};
      // 应用角色列表。
      shared_ptr<vector<Applications::ApplicationRoles>> applicationRoles_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListApplicationsForOrganizationalUnitResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListApplicationsForOrganizationalUnitResponseBody::Applications>) };
    inline vector<ListApplicationsForOrganizationalUnitResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListApplicationsForOrganizationalUnitResponseBody::Applications>) };
    inline ListApplicationsForOrganizationalUnitResponseBody& setApplications(const vector<ListApplicationsForOrganizationalUnitResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsForOrganizationalUnitResponseBody& setApplications(vector<ListApplicationsForOrganizationalUnitResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsForOrganizationalUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationsForOrganizationalUnitResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The applications that the EIAM organization can access.
    shared_ptr<vector<ListApplicationsForOrganizationalUnitResponseBody::Applications>> applications_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of the returned entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

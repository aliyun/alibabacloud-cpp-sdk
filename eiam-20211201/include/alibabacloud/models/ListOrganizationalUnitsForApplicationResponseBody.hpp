// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSFORAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSFORAPPLICATIONRESPONSEBODY_HPP_
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
  class ListOrganizationalUnitsForApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitsForApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationalUnits, organizationalUnits_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitsForApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationalUnits, organizationalUnits_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOrganizationalUnitsForApplicationResponseBody() = default ;
    ListOrganizationalUnitsForApplicationResponseBody(const ListOrganizationalUnitsForApplicationResponseBody &) = default ;
    ListOrganizationalUnitsForApplicationResponseBody(ListOrganizationalUnitsForApplicationResponseBody &&) = default ;
    ListOrganizationalUnitsForApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitsForApplicationResponseBody() = default ;
    ListOrganizationalUnitsForApplicationResponseBody& operator=(const ListOrganizationalUnitsForApplicationResponseBody &) = default ;
    ListOrganizationalUnitsForApplicationResponseBody& operator=(ListOrganizationalUnitsForApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrganizationalUnits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrganizationalUnits& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationRoles, applicationRoles_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
      };
      friend void from_json(const Darabonba::Json& j, OrganizationalUnits& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationRoles, applicationRoles_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
      };
      OrganizationalUnits() = default ;
      OrganizationalUnits(const OrganizationalUnits &) = default ;
      OrganizationalUnits(OrganizationalUnits &&) = default ;
      OrganizationalUnits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrganizationalUnits() = default ;
      OrganizationalUnits& operator=(const OrganizationalUnits &) = default ;
      OrganizationalUnits& operator=(OrganizationalUnits &&) = default ;
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

      virtual bool empty() const override { return this->applicationRoles_ == nullptr
        && this->organizationalUnitId_ == nullptr; };
      // applicationRoles Field Functions 
      bool hasApplicationRoles() const { return this->applicationRoles_ != nullptr;};
      void deleteApplicationRoles() { this->applicationRoles_ = nullptr;};
      inline const vector<OrganizationalUnits::ApplicationRoles> & getApplicationRoles() const { DARABONBA_PTR_GET_CONST(applicationRoles_, vector<OrganizationalUnits::ApplicationRoles>) };
      inline vector<OrganizationalUnits::ApplicationRoles> getApplicationRoles() { DARABONBA_PTR_GET(applicationRoles_, vector<OrganizationalUnits::ApplicationRoles>) };
      inline OrganizationalUnits& setApplicationRoles(const vector<OrganizationalUnits::ApplicationRoles> & applicationRoles) { DARABONBA_PTR_SET_VALUE(applicationRoles_, applicationRoles) };
      inline OrganizationalUnits& setApplicationRoles(vector<OrganizationalUnits::ApplicationRoles> && applicationRoles) { DARABONBA_PTR_SET_RVALUE(applicationRoles_, applicationRoles) };


      // organizationalUnitId Field Functions 
      bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
      void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
      inline string getOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
      inline OrganizationalUnits& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    protected:
      // 应用角色列表。
      shared_ptr<vector<OrganizationalUnits::ApplicationRoles>> applicationRoles_ {};
      // The ID of the organization that is allowed to access the application.
      shared_ptr<string> organizationalUnitId_ {};
    };

    virtual bool empty() const override { return this->organizationalUnits_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // organizationalUnits Field Functions 
    bool hasOrganizationalUnits() const { return this->organizationalUnits_ != nullptr;};
    void deleteOrganizationalUnits() { this->organizationalUnits_ = nullptr;};
    inline const vector<ListOrganizationalUnitsForApplicationResponseBody::OrganizationalUnits> & getOrganizationalUnits() const { DARABONBA_PTR_GET_CONST(organizationalUnits_, vector<ListOrganizationalUnitsForApplicationResponseBody::OrganizationalUnits>) };
    inline vector<ListOrganizationalUnitsForApplicationResponseBody::OrganizationalUnits> getOrganizationalUnits() { DARABONBA_PTR_GET(organizationalUnits_, vector<ListOrganizationalUnitsForApplicationResponseBody::OrganizationalUnits>) };
    inline ListOrganizationalUnitsForApplicationResponseBody& setOrganizationalUnits(const vector<ListOrganizationalUnitsForApplicationResponseBody::OrganizationalUnits> & organizationalUnits) { DARABONBA_PTR_SET_VALUE(organizationalUnits_, organizationalUnits) };
    inline ListOrganizationalUnitsForApplicationResponseBody& setOrganizationalUnits(vector<ListOrganizationalUnitsForApplicationResponseBody::OrganizationalUnits> && organizationalUnits) { DARABONBA_PTR_SET_RVALUE(organizationalUnits_, organizationalUnits) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOrganizationalUnitsForApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOrganizationalUnitsForApplicationResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The IDs of the organizations that are allowed to access the application.
    shared_ptr<vector<ListOrganizationalUnitsForApplicationResponseBody::OrganizationalUnits>> organizationalUnits_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of the returned entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGSCOPERESPONSEBODY_HPP_
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
  class GetApplicationProvisioningScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationProvisioningScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationProvisioningScope, applicationProvisioningScope_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationProvisioningScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationProvisioningScope, applicationProvisioningScope_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationProvisioningScopeResponseBody() = default ;
    GetApplicationProvisioningScopeResponseBody(const GetApplicationProvisioningScopeResponseBody &) = default ;
    GetApplicationProvisioningScopeResponseBody(GetApplicationProvisioningScopeResponseBody &&) = default ;
    GetApplicationProvisioningScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationProvisioningScopeResponseBody() = default ;
    GetApplicationProvisioningScopeResponseBody& operator=(const GetApplicationProvisioningScopeResponseBody &) = default ;
    GetApplicationProvisioningScopeResponseBody& operator=(GetApplicationProvisioningScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationProvisioningScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationProvisioningScope& obj) { 
        DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
        DARABONBA_PTR_TO_JSON(MaxQuota, maxQuota_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitIds, organizationalUnitIds_);
        DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationProvisioningScope& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
        DARABONBA_PTR_FROM_JSON(MaxQuota, maxQuota_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitIds, organizationalUnitIds_);
        DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
      };
      ApplicationProvisioningScope() = default ;
      ApplicationProvisioningScope(const ApplicationProvisioningScope &) = default ;
      ApplicationProvisioningScope(ApplicationProvisioningScope &&) = default ;
      ApplicationProvisioningScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationProvisioningScope() = default ;
      ApplicationProvisioningScope& operator=(const ApplicationProvisioningScope &) = default ;
      ApplicationProvisioningScope& operator=(ApplicationProvisioningScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupIds_ == nullptr
        && this->maxQuota_ == nullptr && this->organizationalUnitIds_ == nullptr && this->usedQuota_ == nullptr; };
      // groupIds Field Functions 
      bool hasGroupIds() const { return this->groupIds_ != nullptr;};
      void deleteGroupIds() { this->groupIds_ = nullptr;};
      inline const vector<string> & getGroupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
      inline vector<string> getGroupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
      inline ApplicationProvisioningScope& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
      inline ApplicationProvisioningScope& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


      // maxQuota Field Functions 
      bool hasMaxQuota() const { return this->maxQuota_ != nullptr;};
      void deleteMaxQuota() { this->maxQuota_ = nullptr;};
      inline int32_t getMaxQuota() const { DARABONBA_PTR_GET_DEFAULT(maxQuota_, 0) };
      inline ApplicationProvisioningScope& setMaxQuota(int32_t maxQuota) { DARABONBA_PTR_SET_VALUE(maxQuota_, maxQuota) };


      // organizationalUnitIds Field Functions 
      bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
      void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
      inline const vector<string> & getOrganizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
      inline vector<string> getOrganizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
      inline ApplicationProvisioningScope& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
      inline ApplicationProvisioningScope& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


      // usedQuota Field Functions 
      bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
      void deleteUsedQuota() { this->usedQuota_ = nullptr;};
      inline int32_t getUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, 0) };
      inline ApplicationProvisioningScope& setUsedQuota(int32_t usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


    protected:
      // Synchronize the list of authorized groups.
      shared_ptr<vector<string>> groupIds_ {};
      // Instance Indicates the maximum quota number of authorized agents.
      shared_ptr<int32_t> maxQuota_ {};
      // The list of organizational units that are authorized for account synchronization.
      shared_ptr<vector<string>> organizationalUnitIds_ {};
      // Indicates the quota number of used authorized agents.
      shared_ptr<int32_t> usedQuota_ {};
    };

    virtual bool empty() const override { return this->applicationProvisioningScope_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationProvisioningScope Field Functions 
    bool hasApplicationProvisioningScope() const { return this->applicationProvisioningScope_ != nullptr;};
    void deleteApplicationProvisioningScope() { this->applicationProvisioningScope_ = nullptr;};
    inline const GetApplicationProvisioningScopeResponseBody::ApplicationProvisioningScope & getApplicationProvisioningScope() const { DARABONBA_PTR_GET_CONST(applicationProvisioningScope_, GetApplicationProvisioningScopeResponseBody::ApplicationProvisioningScope) };
    inline GetApplicationProvisioningScopeResponseBody::ApplicationProvisioningScope getApplicationProvisioningScope() { DARABONBA_PTR_GET(applicationProvisioningScope_, GetApplicationProvisioningScopeResponseBody::ApplicationProvisioningScope) };
    inline GetApplicationProvisioningScopeResponseBody& setApplicationProvisioningScope(const GetApplicationProvisioningScopeResponseBody::ApplicationProvisioningScope & applicationProvisioningScope) { DARABONBA_PTR_SET_VALUE(applicationProvisioningScope_, applicationProvisioningScope) };
    inline GetApplicationProvisioningScopeResponseBody& setApplicationProvisioningScope(GetApplicationProvisioningScopeResponseBody::ApplicationProvisioningScope && applicationProvisioningScope) { DARABONBA_PTR_SET_RVALUE(applicationProvisioningScope_, applicationProvisioningScope) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationProvisioningScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The scope of account synchronization.
    shared_ptr<GetApplicationProvisioningScopeResponseBody::ApplicationProvisioningScope> applicationProvisioningScope_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

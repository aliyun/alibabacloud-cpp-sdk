// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSFORAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSFORAPPLICATIONREQUEST_HPP_
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
  class ListOrganizationalUnitsForApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitsForApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationRoleId, applicationRoleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitsForApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationRoleId, applicationRoleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListOrganizationalUnitsForApplicationRequest() = default ;
    ListOrganizationalUnitsForApplicationRequest(const ListOrganizationalUnitsForApplicationRequest &) = default ;
    ListOrganizationalUnitsForApplicationRequest(ListOrganizationalUnitsForApplicationRequest &&) = default ;
    ListOrganizationalUnitsForApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitsForApplicationRequest() = default ;
    ListOrganizationalUnitsForApplicationRequest& operator=(const ListOrganizationalUnitsForApplicationRequest &) = default ;
    ListOrganizationalUnitsForApplicationRequest& operator=(ListOrganizationalUnitsForApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationRoleId_ == nullptr && this->instanceId_ == nullptr && this->organizationalUnitIds_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListOrganizationalUnitsForApplicationRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationRoleId Field Functions 
    bool hasApplicationRoleId() const { return this->applicationRoleId_ != nullptr;};
    void deleteApplicationRoleId() { this->applicationRoleId_ = nullptr;};
    inline string getApplicationRoleId() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleId_, "") };
    inline ListOrganizationalUnitsForApplicationRequest& setApplicationRoleId(string applicationRoleId) { DARABONBA_PTR_SET_VALUE(applicationRoleId_, applicationRoleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOrganizationalUnitsForApplicationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitIds Field Functions 
    bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
    void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
    inline const vector<string> & getOrganizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
    inline vector<string> getOrganizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
    inline ListOrganizationalUnitsForApplicationRequest& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
    inline ListOrganizationalUnitsForApplicationRequest& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListOrganizationalUnitsForApplicationRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListOrganizationalUnitsForApplicationRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the application that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // 应用角色ID。
    shared_ptr<string> applicationRoleId_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The IDs of the organizations that are allowed to access the application. You can query a maximum of 100 organization IDs at a time.
    shared_ptr<vector<string>> organizationalUnitIds_ {};
    // The number of the page to return.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<int64_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSREQUEST_HPP_
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
  class ListOrganizationalUnitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitNameStartsWith, organizationalUnitNameStartsWith_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitNameStartsWith, organizationalUnitNameStartsWith_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    ListOrganizationalUnitsRequest() = default ;
    ListOrganizationalUnitsRequest(const ListOrganizationalUnitsRequest &) = default ;
    ListOrganizationalUnitsRequest(ListOrganizationalUnitsRequest &&) = default ;
    ListOrganizationalUnitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitsRequest() = default ;
    ListOrganizationalUnitsRequest& operator=(const ListOrganizationalUnitsRequest &) = default ;
    ListOrganizationalUnitsRequest& operator=(ListOrganizationalUnitsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->organizationalUnitIds_ == nullptr && return this->organizationalUnitName_ == nullptr && return this->organizationalUnitNameStartsWith_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->parentId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListOrganizationalUnitsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitIds Field Functions 
    bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
    void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
    inline const vector<string> & organizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
    inline vector<string> organizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
    inline ListOrganizationalUnitsRequest& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
    inline ListOrganizationalUnitsRequest& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


    // organizationalUnitName Field Functions 
    bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
    void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
    inline string organizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
    inline ListOrganizationalUnitsRequest& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


    // organizationalUnitNameStartsWith Field Functions 
    bool hasOrganizationalUnitNameStartsWith() const { return this->organizationalUnitNameStartsWith_ != nullptr;};
    void deleteOrganizationalUnitNameStartsWith() { this->organizationalUnitNameStartsWith_ = nullptr;};
    inline string organizationalUnitNameStartsWith() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitNameStartsWith_, "") };
    inline ListOrganizationalUnitsRequest& setOrganizationalUnitNameStartsWith(string organizationalUnitNameStartsWith) { DARABONBA_PTR_SET_VALUE(organizationalUnitNameStartsWith_, organizationalUnitNameStartsWith) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListOrganizationalUnitsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListOrganizationalUnitsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline ListOrganizationalUnitsRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IDs of organizational units.
    std::shared_ptr<vector<string>> organizationalUnitIds_ = nullptr;
    // The name of the organizational unit.
    std::shared_ptr<string> organizationalUnitName_ = nullptr;
    // Organization name, matching left
    std::shared_ptr<string> organizationalUnitNameStartsWith_ = nullptr;
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: 20.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the parent organizational unit.
    std::shared_ptr<string> parentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

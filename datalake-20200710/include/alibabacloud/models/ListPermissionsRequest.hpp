// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MetaResource.hpp>
#include <alibabacloud/models/Principal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(IsListUserRolePermissions, isListUserRolePermissions_);
      DARABONBA_PTR_TO_JSON(MetaResource, metaResource_);
      DARABONBA_PTR_TO_JSON(MetaResourceType, metaResourceType_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Principal, principal_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(IsListUserRolePermissions, isListUserRolePermissions_);
      DARABONBA_PTR_FROM_JSON(MetaResource, metaResource_);
      DARABONBA_PTR_FROM_JSON(MetaResourceType, metaResourceType_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Principal, principal_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListPermissionsRequest() = default ;
    ListPermissionsRequest(const ListPermissionsRequest &) = default ;
    ListPermissionsRequest(ListPermissionsRequest &&) = default ;
    ListPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionsRequest() = default ;
    ListPermissionsRequest& operator=(const ListPermissionsRequest &) = default ;
    ListPermissionsRequest& operator=(ListPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->isListUserRolePermissions_ == nullptr && return this->metaResource_ == nullptr && return this->metaResourceType_ == nullptr && return this->nextPageToken_ == nullptr && return this->pageSize_ == nullptr
        && return this->principal_ == nullptr && return this->type_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline ListPermissionsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // isListUserRolePermissions Field Functions 
    bool hasIsListUserRolePermissions() const { return this->isListUserRolePermissions_ != nullptr;};
    void deleteIsListUserRolePermissions() { this->isListUserRolePermissions_ = nullptr;};
    inline bool isListUserRolePermissions() const { DARABONBA_PTR_GET_DEFAULT(isListUserRolePermissions_, false) };
    inline ListPermissionsRequest& setIsListUserRolePermissions(bool isListUserRolePermissions) { DARABONBA_PTR_SET_VALUE(isListUserRolePermissions_, isListUserRolePermissions) };


    // metaResource Field Functions 
    bool hasMetaResource() const { return this->metaResource_ != nullptr;};
    void deleteMetaResource() { this->metaResource_ = nullptr;};
    inline const MetaResource & metaResource() const { DARABONBA_PTR_GET_CONST(metaResource_, MetaResource) };
    inline MetaResource metaResource() { DARABONBA_PTR_GET(metaResource_, MetaResource) };
    inline ListPermissionsRequest& setMetaResource(const MetaResource & metaResource) { DARABONBA_PTR_SET_VALUE(metaResource_, metaResource) };
    inline ListPermissionsRequest& setMetaResource(MetaResource && metaResource) { DARABONBA_PTR_SET_RVALUE(metaResource_, metaResource) };


    // metaResourceType Field Functions 
    bool hasMetaResourceType() const { return this->metaResourceType_ != nullptr;};
    void deleteMetaResourceType() { this->metaResourceType_ = nullptr;};
    inline string metaResourceType() const { DARABONBA_PTR_GET_DEFAULT(metaResourceType_, "") };
    inline ListPermissionsRequest& setMetaResourceType(string metaResourceType) { DARABONBA_PTR_SET_VALUE(metaResourceType_, metaResourceType) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListPermissionsRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPermissionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // principal Field Functions 
    bool hasPrincipal() const { return this->principal_ != nullptr;};
    void deletePrincipal() { this->principal_ = nullptr;};
    inline const Principal & principal() const { DARABONBA_PTR_GET_CONST(principal_, Principal) };
    inline Principal principal() { DARABONBA_PTR_GET(principal_, Principal) };
    inline ListPermissionsRequest& setPrincipal(const Principal & principal) { DARABONBA_PTR_SET_VALUE(principal_, principal) };
    inline ListPermissionsRequest& setPrincipal(Principal && principal) { DARABONBA_PTR_SET_RVALUE(principal_, principal) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPermissionsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // Specifies whether to obtain the permissions of the role to which the user belongs. This parameter takes effect only when you specify a specific resource object.
    std::shared_ptr<bool> isListUserRolePermissions_ = nullptr;
    // The resource based on which permission information is filtered.
    std::shared_ptr<MetaResource> metaResource_ = nullptr;
    // The type of the resource based on which permission information is filtered, such as database or table. If you do not specify this parameter, permission information is filtered based on both databases and tables.
    std::shared_ptr<string> metaResourceType_ = nullptr;
    // A pagination token, which is used to obtain data on the next page. If no pagination token is returned in the response, set this parameter to an empty string ("") or an empty character (\\"\\").
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The number of entries to return on each page. Maximum value: 1000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The principle based on which permission information is filtered.
    std::shared_ptr<Principal> principal_ = nullptr;
    // The type of permission information to be obtained. Only Hive is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif

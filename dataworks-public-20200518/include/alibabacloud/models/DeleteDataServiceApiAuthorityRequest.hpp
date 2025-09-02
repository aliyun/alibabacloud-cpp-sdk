// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASERVICEAPIAUTHORITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASERVICEAPIAUTHORITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteDataServiceApiAuthorityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataServiceApiAuthorityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(AuthorizedProjectId, authorizedProjectId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataServiceApiAuthorityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(AuthorizedProjectId, authorizedProjectId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DeleteDataServiceApiAuthorityRequest() = default ;
    DeleteDataServiceApiAuthorityRequest(const DeleteDataServiceApiAuthorityRequest &) = default ;
    DeleteDataServiceApiAuthorityRequest(DeleteDataServiceApiAuthorityRequest &&) = default ;
    DeleteDataServiceApiAuthorityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataServiceApiAuthorityRequest() = default ;
    DeleteDataServiceApiAuthorityRequest& operator=(const DeleteDataServiceApiAuthorityRequest &) = default ;
    DeleteDataServiceApiAuthorityRequest& operator=(DeleteDataServiceApiAuthorityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->authorizedProjectId_ != nullptr && this->projectId_ != nullptr && this->tenantId_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline DeleteDataServiceApiAuthorityRequest& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // authorizedProjectId Field Functions 
    bool hasAuthorizedProjectId() const { return this->authorizedProjectId_ != nullptr;};
    void deleteAuthorizedProjectId() { this->authorizedProjectId_ = nullptr;};
    inline int64_t authorizedProjectId() const { DARABONBA_PTR_GET_DEFAULT(authorizedProjectId_, 0L) };
    inline DeleteDataServiceApiAuthorityRequest& setAuthorizedProjectId(int64_t authorizedProjectId) { DARABONBA_PTR_SET_VALUE(authorizedProjectId_, authorizedProjectId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteDataServiceApiAuthorityRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline DeleteDataServiceApiAuthorityRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The API ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // The ID of the workspace from which you want to revoke the access permissions on the API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> authorizedProjectId_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The tenant ID. This parameter is deprecated.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

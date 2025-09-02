// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIAUTHORITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASERVICEAPIAUTHORITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDataServiceApiAuthorityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataServiceApiAuthorityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(AuthorizedProjectId, authorizedProjectId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataServiceApiAuthorityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(AuthorizedProjectId, authorizedProjectId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    CreateDataServiceApiAuthorityRequest() = default ;
    CreateDataServiceApiAuthorityRequest(const CreateDataServiceApiAuthorityRequest &) = default ;
    CreateDataServiceApiAuthorityRequest(CreateDataServiceApiAuthorityRequest &&) = default ;
    CreateDataServiceApiAuthorityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataServiceApiAuthorityRequest() = default ;
    CreateDataServiceApiAuthorityRequest& operator=(const CreateDataServiceApiAuthorityRequest &) = default ;
    CreateDataServiceApiAuthorityRequest& operator=(CreateDataServiceApiAuthorityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->authorizedProjectId_ != nullptr && this->endTime_ != nullptr && this->projectId_ != nullptr && this->tenantId_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline CreateDataServiceApiAuthorityRequest& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // authorizedProjectId Field Functions 
    bool hasAuthorizedProjectId() const { return this->authorizedProjectId_ != nullptr;};
    void deleteAuthorizedProjectId() { this->authorizedProjectId_ = nullptr;};
    inline int64_t authorizedProjectId() const { DARABONBA_PTR_GET_DEFAULT(authorizedProjectId_, 0L) };
    inline CreateDataServiceApiAuthorityRequest& setAuthorizedProjectId(int64_t authorizedProjectId) { DARABONBA_PTR_SET_VALUE(authorizedProjectId_, authorizedProjectId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateDataServiceApiAuthorityRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataServiceApiAuthorityRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline CreateDataServiceApiAuthorityRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // The ID of the workspace to which the access permissions on the API are granted.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> authorizedProjectId_ = nullptr;
    // The end time of the validity period of the access permissions. The time must be a UNIX timestamp. Unit: seconds. Example: 1600531564, which indicates 2020-09-20 00:06:04 (UTC+8).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

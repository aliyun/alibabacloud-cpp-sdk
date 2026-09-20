// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DeleteDataServiceApiRequest() = default ;
    DeleteDataServiceApiRequest(const DeleteDataServiceApiRequest &) = default ;
    DeleteDataServiceApiRequest(DeleteDataServiceApiRequest &&) = default ;
    DeleteDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataServiceApiRequest() = default ;
    DeleteDataServiceApiRequest& operator=(const DeleteDataServiceApiRequest &) = default ;
    DeleteDataServiceApiRequest& operator=(DeleteDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && this->projectId_ == nullptr && this->tenantId_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline DeleteDataServiceApiRequest& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteDataServiceApiRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline DeleteDataServiceApiRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the DataService API.
    // 
    // This parameter is required.
    shared_ptr<int64_t> apiId_ {};
    // The workspace ID.
    // 
    // You can obtain the workspace ID from PageResult.ProjectList[].ProjectId in the response of ListProjects.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The tenant ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console), go to the DataStudio page, click the username in the upper-right corner, and choose Menu > User Info to obtain the tenant ID.
    // 
    // You can also obtain the tenant ID from Data.Apis[].TenantId in the response of ListDataServiceApis.
    shared_ptr<int64_t> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

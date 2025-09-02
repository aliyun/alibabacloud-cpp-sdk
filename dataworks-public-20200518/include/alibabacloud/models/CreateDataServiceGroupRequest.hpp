// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASERVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASERVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDataServiceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataServiceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiGatewayGroupId, apiGatewayGroupId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataServiceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiGatewayGroupId, apiGatewayGroupId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    CreateDataServiceGroupRequest() = default ;
    CreateDataServiceGroupRequest(const CreateDataServiceGroupRequest &) = default ;
    CreateDataServiceGroupRequest(CreateDataServiceGroupRequest &&) = default ;
    CreateDataServiceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataServiceGroupRequest() = default ;
    CreateDataServiceGroupRequest& operator=(const CreateDataServiceGroupRequest &) = default ;
    CreateDataServiceGroupRequest& operator=(CreateDataServiceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiGatewayGroupId_ != nullptr
        && this->description_ != nullptr && this->groupName_ != nullptr && this->projectId_ != nullptr && this->tenantId_ != nullptr; };
    // apiGatewayGroupId Field Functions 
    bool hasApiGatewayGroupId() const { return this->apiGatewayGroupId_ != nullptr;};
    void deleteApiGatewayGroupId() { this->apiGatewayGroupId_ = nullptr;};
    inline string apiGatewayGroupId() const { DARABONBA_PTR_GET_DEFAULT(apiGatewayGroupId_, "") };
    inline CreateDataServiceGroupRequest& setApiGatewayGroupId(string apiGatewayGroupId) { DARABONBA_PTR_SET_VALUE(apiGatewayGroupId_, apiGatewayGroupId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataServiceGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateDataServiceGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataServiceGroupRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline CreateDataServiceGroupRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the API group that is associated with the business process in the API Gateway console. You can log on to the API Gateway console and go to the Group Details page to view the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiGatewayGroupId_ = nullptr;
    // The description of the business process.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the business process.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the workspace.
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

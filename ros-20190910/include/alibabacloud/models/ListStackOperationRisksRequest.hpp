// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKOPERATIONRISKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKOPERATIONRISKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackOperationRisksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackOperationRisksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetainAllResources, retainAllResources_);
      DARABONBA_PTR_TO_JSON(RetainResources, retainResources_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackOperationRisksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetainAllResources, retainAllResources_);
      DARABONBA_PTR_FROM_JSON(RetainResources, retainResources_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    ListStackOperationRisksRequest() = default ;
    ListStackOperationRisksRequest(const ListStackOperationRisksRequest &) = default ;
    ListStackOperationRisksRequest(ListStackOperationRisksRequest &&) = default ;
    ListStackOperationRisksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackOperationRisksRequest() = default ;
    ListStackOperationRisksRequest& operator=(const ListStackOperationRisksRequest &) = default ;
    ListStackOperationRisksRequest& operator=(ListStackOperationRisksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->operationType_ != nullptr && this->ramRoleName_ != nullptr && this->regionId_ != nullptr && this->retainAllResources_ != nullptr && this->retainResources_ != nullptr
        && this->stackId_ != nullptr && this->templateBody_ != nullptr && this->templateId_ != nullptr && this->templateURL_ != nullptr && this->templateVersion_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListStackOperationRisksRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ListStackOperationRisksRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline ListStackOperationRisksRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListStackOperationRisksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retainAllResources Field Functions 
    bool hasRetainAllResources() const { return this->retainAllResources_ != nullptr;};
    void deleteRetainAllResources() { this->retainAllResources_ = nullptr;};
    inline bool retainAllResources() const { DARABONBA_PTR_GET_DEFAULT(retainAllResources_, false) };
    inline ListStackOperationRisksRequest& setRetainAllResources(bool retainAllResources) { DARABONBA_PTR_SET_VALUE(retainAllResources_, retainAllResources) };


    // retainResources Field Functions 
    bool hasRetainResources() const { return this->retainResources_ != nullptr;};
    void deleteRetainResources() { this->retainResources_ = nullptr;};
    inline const vector<string> & retainResources() const { DARABONBA_PTR_GET_CONST(retainResources_, vector<string>) };
    inline vector<string> retainResources() { DARABONBA_PTR_GET(retainResources_, vector<string>) };
    inline ListStackOperationRisksRequest& setRetainResources(const vector<string> & retainResources) { DARABONBA_PTR_SET_VALUE(retainResources_, retainResources) };
    inline ListStackOperationRisksRequest& setRetainResources(vector<string> && retainResources) { DARABONBA_PTR_SET_RVALUE(retainResources_, retainResources) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline ListStackOperationRisksRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline ListStackOperationRisksRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListStackOperationRisksRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline ListStackOperationRisksRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ListStackOperationRisksRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can be up to 64 characters in length, and can contain letters, digits, hyphens (-), and underscores (_). For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The type of the operation of which you want to detect risks. Valid values:
    // 
    // *   DeleteStack: detects high risks that may arise in resources when you delete a stack.
    // *   CreateStack: detects the missing permissions when you fail to create a stack.
    std::shared_ptr<string> operationType_ = nullptr;
    // The name of the RAM role.
    // 
    // *   If you specify a RAM role, ROS creates stacks based on the permissions that are granted to the RAM role and uses the credentials of the RAM role to call the API operations of Alibaba Cloud services.
    // *   If you do not specify a RAM role, ROS creates stacks based on the permissions of your Alibaba Cloud account.
    // 
    // The name of the RAM role can be up to 64 bytes in length.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to retain all resources in the stack. Valid values:
    // 
    // *   true
    // *   false (default)
    // 
    // > This parameter takes effect only if you set OperationType to DeleteStack.
    std::shared_ptr<bool> retainAllResources_ = nullptr;
    // The list of resources to retain.
    // 
    // > This parameter takes effect only if you set OperationType to DeleteStack.
    std::shared_ptr<vector<string>> retainResources_ = nullptr;
    // The ID of the stack.
    std::shared_ptr<string> stackId_ = nullptr;
    std::shared_ptr<string> templateBody_ = nullptr;
    // The ID of the template. This parameter applies to shared and private templates.
    // 
    // > You must specify one of TemplateBody, TemplateURL, TemplateId, and TemplateScratchId.
    std::shared_ptr<string> templateId_ = nullptr;
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/stack-policy/demo and oss://ros/stack-policy/demo?RegionId=cn-hangzhou. The template body can be up to 524,288 bytes in length. If you do not specify RegionId in the URL, the region ID of the stack is used.
    // 
    // > You must specify one of TemplateBody, TemplateURL, TemplateId, and TemplateScratchId.
    std::shared_ptr<string> templateURL_ = nullptr;
    // The version of the template.
    // 
    // > This parameter takes effect only if you specify TemplateId.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

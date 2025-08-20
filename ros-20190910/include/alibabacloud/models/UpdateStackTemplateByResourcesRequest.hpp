// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKTEMPLATEBYRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKTEMPLATEBYRESOURCESREQUEST_HPP_
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
  class UpdateStackTemplateByResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackTemplateByResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(TemplateFormat, templateFormat_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackTemplateByResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(TemplateFormat, templateFormat_);
    };
    UpdateStackTemplateByResourcesRequest() = default ;
    UpdateStackTemplateByResourcesRequest(const UpdateStackTemplateByResourcesRequest &) = default ;
    UpdateStackTemplateByResourcesRequest(UpdateStackTemplateByResourcesRequest &&) = default ;
    UpdateStackTemplateByResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackTemplateByResourcesRequest() = default ;
    UpdateStackTemplateByResourcesRequest& operator=(const UpdateStackTemplateByResourcesRequest &) = default ;
    UpdateStackTemplateByResourcesRequest& operator=(UpdateStackTemplateByResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->logicalResourceId_ != nullptr && this->regionId_ != nullptr && this->stackId_ != nullptr && this->templateFormat_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateStackTemplateByResourcesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateStackTemplateByResourcesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline const vector<string> & logicalResourceId() const { DARABONBA_PTR_GET_CONST(logicalResourceId_, vector<string>) };
    inline vector<string> logicalResourceId() { DARABONBA_PTR_GET(logicalResourceId_, vector<string>) };
    inline UpdateStackTemplateByResourcesRequest& setLogicalResourceId(const vector<string> & logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };
    inline UpdateStackTemplateByResourcesRequest& setLogicalResourceId(vector<string> && logicalResourceId) { DARABONBA_PTR_SET_RVALUE(logicalResourceId_, logicalResourceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateStackTemplateByResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline UpdateStackTemplateByResourcesRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // templateFormat Field Functions 
    bool hasTemplateFormat() const { return this->templateFormat_ != nullptr;};
    void deleteTemplateFormat() { this->templateFormat_ = nullptr;};
    inline string templateFormat() const { DARABONBA_PTR_GET_DEFAULT(templateFormat_, "") };
    inline UpdateStackTemplateByResourcesRequest& setTemplateFormat(string templateFormat) { DARABONBA_PTR_SET_VALUE(templateFormat_, templateFormat) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests.
    // 
    // The token can be up to 64 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to only preview the corrected template in this request. Default value: false. Valid values:
    // 
    // *   true: returns the content of the corrected template and does not correct the template. After Resource Orchestration Service (ROS) compares the corrected template with the original template, ROS determines whether to execute the correction.
    // *   false: corrects the template to eliminate drift.
    // 
    // >  We recommend that you set the DryRun parameter to true to preview the corrected template. If the template content meets expectations, set the DryRun parameter to false to execute the correction.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The logical ID of resource.
    std::shared_ptr<vector<string>> logicalResourceId_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the stack.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
    // The format of the returned template. Default value: JSON. Valid values:
    // 
    // *   JSON
    // *   YAML
    std::shared_ptr<string> templateFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

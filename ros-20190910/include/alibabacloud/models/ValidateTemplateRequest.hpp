// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATEREQUEST_HPP_
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
  class ValidateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(UpdateInfoOptions, updateInfoOptions_);
      DARABONBA_PTR_TO_JSON(ValidationOption, validationOption_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(UpdateInfoOptions, updateInfoOptions_);
      DARABONBA_PTR_FROM_JSON(ValidationOption, validationOption_);
    };
    ValidateTemplateRequest() = default ;
    ValidateTemplateRequest(const ValidateTemplateRequest &) = default ;
    ValidateTemplateRequest(ValidateTemplateRequest &&) = default ;
    ValidateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTemplateRequest() = default ;
    ValidateTemplateRequest& operator=(const ValidateTemplateRequest &) = default ;
    ValidateTemplateRequest& operator=(ValidateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->regionId_ != nullptr && this->templateBody_ != nullptr && this->templateURL_ != nullptr && this->updateInfoOptions_ != nullptr && this->validationOption_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ValidateTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ValidateTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline ValidateTemplateRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline ValidateTemplateRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // updateInfoOptions Field Functions 
    bool hasUpdateInfoOptions() const { return this->updateInfoOptions_ != nullptr;};
    void deleteUpdateInfoOptions() { this->updateInfoOptions_ = nullptr;};
    inline const vector<string> & updateInfoOptions() const { DARABONBA_PTR_GET_CONST(updateInfoOptions_, vector<string>) };
    inline vector<string> updateInfoOptions() { DARABONBA_PTR_GET(updateInfoOptions_, vector<string>) };
    inline ValidateTemplateRequest& setUpdateInfoOptions(const vector<string> & updateInfoOptions) { DARABONBA_PTR_SET_VALUE(updateInfoOptions_, updateInfoOptions) };
    inline ValidateTemplateRequest& setUpdateInfoOptions(vector<string> && updateInfoOptions) { DARABONBA_PTR_SET_RVALUE(updateInfoOptions_, updateInfoOptions) };


    // validationOption Field Functions 
    bool hasValidationOption() const { return this->validationOption_ != nullptr;};
    void deleteValidationOption() { this->validationOption_ = nullptr;};
    inline string validationOption() const { DARABONBA_PTR_GET_DEFAULT(validationOption_, "") };
    inline ValidateTemplateRequest& setValidationOption(string validationOption) { DARABONBA_PTR_SET_VALUE(validationOption_, validationOption) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can be up to 64 characters in length, and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region ID of the template. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> templateBody_ = nullptr;
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP web server or in an Object Storage Service (OSS) bucket, such as oss://ros/template/demo or oss://ros/template/demo?RegionId=cn-hangzhou. The template body can be up to 524,288 bytes in length.
    // 
    // > If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // 
    // You can specify one of TemplateBody and TemplateURL, but not both of them. The URL can be up to 1,024 bytes in length.\\
    std::shared_ptr<string> templateURL_ = nullptr;
    // The options that are used to control the generation of information about the stack update. You can specify up to two options.
    std::shared_ptr<vector<string>> updateInfoOptions_ = nullptr;
    // Specifies whether to enable additional validation for the template. Valid values:
    // 
    // *   None (default): does not enable additional validation.
    // *   EnableTerraformValidation: runs the `terraform validate` command in the Terraform CLI to enable additional validation for a Terraform template.
    // *   EnableFastTerraformValidation: runs a command that is similar to the `terraform validate` command in the Terraform CLI to enable additional validation for a Terraform template.
    // 
    // > Compared with the EnableTerraformValidation method, the EnableFastTerraformValidation method validates a template at a faster speed but a lower integrity level.
    std::shared_ptr<string> validationOption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

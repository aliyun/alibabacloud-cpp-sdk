// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceProvisionsRequestParameters.hpp>
#include <alibabacloud/models/GetServiceProvisionsRequestServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetServiceProvisionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvisionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvisionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    GetServiceProvisionsRequest() = default ;
    GetServiceProvisionsRequest(const GetServiceProvisionsRequest &) = default ;
    GetServiceProvisionsRequest(GetServiceProvisionsRequest &&) = default ;
    GetServiceProvisionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvisionsRequest() = default ;
    GetServiceProvisionsRequest& operator=(const GetServiceProvisionsRequest &) = default ;
    GetServiceProvisionsRequest& operator=(GetServiceProvisionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameters_ != nullptr
        && this->regionId_ != nullptr && this->services_ != nullptr && this->templateBody_ != nullptr && this->templateId_ != nullptr && this->templateURL_ != nullptr
        && this->templateVersion_ != nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetServiceProvisionsRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetServiceProvisionsRequestParameters>) };
    inline vector<GetServiceProvisionsRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<GetServiceProvisionsRequestParameters>) };
    inline GetServiceProvisionsRequest& setParameters(const vector<GetServiceProvisionsRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetServiceProvisionsRequest& setParameters(vector<GetServiceProvisionsRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceProvisionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<GetServiceProvisionsRequestServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<GetServiceProvisionsRequestServices>) };
    inline vector<GetServiceProvisionsRequestServices> services() { DARABONBA_PTR_GET(services_, vector<GetServiceProvisionsRequestServices>) };
    inline GetServiceProvisionsRequest& setServices(const vector<GetServiceProvisionsRequestServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline GetServiceProvisionsRequest& setServices(vector<GetServiceProvisionsRequestServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetServiceProvisionsRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetServiceProvisionsRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline GetServiceProvisionsRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetServiceProvisionsRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The parameters.
    std::shared_ptr<vector<GetServiceProvisionsRequestParameters>> parameters_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The services.
    std::shared_ptr<vector<GetServiceProvisionsRequestServices>> services_ = nullptr;
    std::shared_ptr<string> templateBody_ = nullptr;
    // The template ID. This parameter applies to shared and private templates.
    // 
    // You must and can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, and Services.
    std::shared_ptr<string> templateId_ = nullptr;
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/template/demo or oss://ros/template/demo?RegionId=cn-hangzhou. The template body must be 1 to 524,288 bytes in length. If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // 
    // You must and can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, and Services.
    std::shared_ptr<string> templateURL_ = nullptr;
    // The version of the template. If you do not specify this parameter, the latest version is used.
    // 
    // This parameter takes effect only when TemplateId is specified.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

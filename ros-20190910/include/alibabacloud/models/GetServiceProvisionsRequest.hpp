// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSREQUEST_HPP_
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
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      };
      Services() = default ;
      Services(const Services &) = default ;
      Services(Services &&) = default ;
      Services(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Services() = default ;
      Services& operator=(const Services &) = default ;
      Services& operator=(Services &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->serviceName_ == nullptr; };
      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Services& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    protected:
      // The name of the service or feature. Valid values:
      // 
      // *   AHAS: Application High Availability Service
      // *   ARMS: Application Real-Time Monitoring Service (ARMS)
      // *   ApiGateway: API Gateway
      // *   BatchCompute: Batch Compute
      // *   BrainIndustrial: Industrial Brain
      // *   CloudStorageGateway: Cloud Storage Gateway (CSG)
      // *   CMS: CloudMonitor
      // *   CR: Container Registry
      // *   CS: Container Service for Kubernetes (ACK)
      // *   DCDN: Dynamic Content Delivery Network (DCDN)
      // *   DataHub: DataHub
      // *   DataWorks: DataWorks
      // *   EDAS: Enterprise Distributed Application Service (EDAS)
      // *   EHPC: E-HPC
      // *   EMAS: Enterprise Mobile Application Studio (EMAS)
      // *   FC: Function Compute
      // *   FNF: CloudFlow (SWF)
      // *   MaxCompute: MaxCompute
      // *   MNS: Message Service (MNS)
      // *   HBR: Cloud Backup
      // *   IMM: Intelligent Media Management (IMM)
      // *   IOT: IoT Platform
      // *   KMS: Key Management Service (KMS)
      // *   NAS: File Storage NAS (NAS)
      // *   NLP: Natural Language Processing (NLP)
      // *   OSS: Object Storage Service (OSS)
      // *   OTS: Tablestore
      // *   PrivateLink: PrivateLink
      // *   PrivateZone: Alibaba Cloud DNS PrivateZone
      // *   RocketMQ: ApsaraMQ for RocketMQ
      // *   SAE: Serverless App Engine (SAE)
      // *   SLS: Simple Log Service (SLS)
      // *   TrafficMirror: traffic mirroring
      // *   VS: Video Surveillance System
      // *   Xtrace: Managed Service for OpenTelemetry
      // 
      // This parameter is required.
      shared_ptr<string> serviceName_ {};
    };

    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The name of the parameter. If you do not specify the name and value of a parameter, Resource Orchestration Service (ROS) uses the default name and value that are specified in the template.
      // 
      // > The Parameters parameter is optional. If you specify Parameters, you must specify ParameterKey.
      // 
      // This parameter is required.
      shared_ptr<string> parameterKey_ {};
      // The value of the parameter.
      // 
      // > The Parameters parameter is optional. If you specify Parameters, you must specify ParameterValue.
      // 
      // This parameter is required.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->parameters_ == nullptr
        && this->regionId_ == nullptr && this->services_ == nullptr && this->templateBody_ == nullptr && this->templateId_ == nullptr && this->templateURL_ == nullptr
        && this->templateVersion_ == nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetServiceProvisionsRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetServiceProvisionsRequest::Parameters>) };
    inline vector<GetServiceProvisionsRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<GetServiceProvisionsRequest::Parameters>) };
    inline GetServiceProvisionsRequest& setParameters(const vector<GetServiceProvisionsRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetServiceProvisionsRequest& setParameters(vector<GetServiceProvisionsRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceProvisionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<GetServiceProvisionsRequest::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<GetServiceProvisionsRequest::Services>) };
    inline vector<GetServiceProvisionsRequest::Services> getServices() { DARABONBA_PTR_GET(services_, vector<GetServiceProvisionsRequest::Services>) };
    inline GetServiceProvisionsRequest& setServices(const vector<GetServiceProvisionsRequest::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline GetServiceProvisionsRequest& setServices(vector<GetServiceProvisionsRequest::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetServiceProvisionsRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetServiceProvisionsRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string getTemplateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline GetServiceProvisionsRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetServiceProvisionsRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The parameters.
    shared_ptr<vector<GetServiceProvisionsRequest::Parameters>> parameters_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The services.
    shared_ptr<vector<GetServiceProvisionsRequest::Services>> services_ {};
    // The structure that contains the template body. The template body must be 1 to 524,288 bytes in length. If the length of the template body exceeds the upper limit, we recommend that you add parameters to the HTTP POST request body to prevent request failures caused by excessively long URLs. You must and can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, and TemplateScratchId.
    shared_ptr<string> templateBody_ {};
    // The template ID. This parameter applies to shared and private templates.
    // 
    // You must and can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, and Services.
    shared_ptr<string> templateId_ {};
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/template/demo or oss://ros/template/demo?RegionId=cn-hangzhou. The template body must be 1 to 524,288 bytes in length. If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // 
    // You must and can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, and Services.
    shared_ptr<string> templateURL_ {};
    // The version of the template. If you do not specify this parameter, the latest version is used.
    // 
    // This parameter takes effect only when TemplateId is specified.
    shared_ptr<string> templateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSREQUESTSERVICES_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSREQUESTSERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetServiceProvisionsRequestServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvisionsRequestServices& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvisionsRequestServices& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GetServiceProvisionsRequestServices() = default ;
    GetServiceProvisionsRequestServices(const GetServiceProvisionsRequestServices &) = default ;
    GetServiceProvisionsRequestServices(GetServiceProvisionsRequestServices &&) = default ;
    GetServiceProvisionsRequestServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvisionsRequestServices() = default ;
    GetServiceProvisionsRequestServices& operator=(const GetServiceProvisionsRequestServices &) = default ;
    GetServiceProvisionsRequestServices& operator=(GetServiceProvisionsRequestServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceName_ != nullptr; };
    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceProvisionsRequestServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


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
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNSLSREALTIMELOGDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNSLSREALTIMELOGDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnSLSRealTimeLogDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnSLSRealTimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SLSLogStore, SLSLogStore_);
      DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_TO_JSON(SLSRegion, SLSRegion_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnSLSRealTimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SLSLogStore, SLSLogStore_);
      DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_FROM_JSON(SLSRegion, SLSRegion_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
    };
    CreateDcdnSLSRealTimeLogDeliveryRequest() = default ;
    CreateDcdnSLSRealTimeLogDeliveryRequest(const CreateDcdnSLSRealTimeLogDeliveryRequest &) = default ;
    CreateDcdnSLSRealTimeLogDeliveryRequest(CreateDcdnSLSRealTimeLogDeliveryRequest &&) = default ;
    CreateDcdnSLSRealTimeLogDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnSLSRealTimeLogDeliveryRequest() = default ;
    CreateDcdnSLSRealTimeLogDeliveryRequest& operator=(const CreateDcdnSLSRealTimeLogDeliveryRequest &) = default ;
    CreateDcdnSLSRealTimeLogDeliveryRequest& operator=(CreateDcdnSLSRealTimeLogDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->dataCenter_ != nullptr && this->domainName_ != nullptr && this->projectName_ != nullptr && this->SLSLogStore_ != nullptr && this->SLSProject_ != nullptr
        && this->SLSRegion_ != nullptr && this->samplingRate_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // SLSLogStore Field Functions 
    bool hasSLSLogStore() const { return this->SLSLogStore_ != nullptr;};
    void deleteSLSLogStore() { this->SLSLogStore_ = nullptr;};
    inline string SLSLogStore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogStore_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryRequest& setSLSLogStore(string SLSLogStore) { DARABONBA_PTR_SET_VALUE(SLSLogStore_, SLSLogStore) };


    // SLSProject Field Functions 
    bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
    void deleteSLSProject() { this->SLSProject_ = nullptr;};
    inline string SLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryRequest& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


    // SLSRegion Field Functions 
    bool hasSLSRegion() const { return this->SLSRegion_ != nullptr;};
    void deleteSLSRegion() { this->SLSRegion_ = nullptr;};
    inline string SLSRegion() const { DARABONBA_PTR_GET_DEFAULT(SLSRegion_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryRequest& setSLSRegion(string SLSRegion) { DARABONBA_PTR_SET_VALUE(SLSRegion_, SLSRegion) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline string samplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryRequest& setSamplingRate(string samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


  protected:
    // The type of the collected logs. Default value: cdn_log_access_l1. Valid values:
    // 
    // *   **cdn_log_access_l1**: access logs of Dynamic Content Delivery Network (DCDN) points of presence (POPs)
    // *   **cdn_log_origin**: back-to-origin logs
    // *   **cdn_log_er**: EdgeRoutine logs
    std::shared_ptr<string> businessType_ = nullptr;
    // The data center. Valid values:
    // 
    // *   cn: China
    // *   sg: Singapore
    // *   eu: Europe
    // *   us: United States
    // 
    // This parameter is required.
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The domain names from which logs were collected. You can specify one or more domain names. Separate multiple domain names with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of a real-time log delivery project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the Log Service Logstore.
    // 
    // This parameter is required.
    std::shared_ptr<string> SLSLogStore_ = nullptr;
    // The name of the Log Service project.
    // 
    // This parameter is required.
    std::shared_ptr<string> SLSProject_ = nullptr;
    // The region to which real-time logs are delivered.
    // 
    // This parameter is required.
    std::shared_ptr<string> SLSRegion_ = nullptr;
    // The sampling rate.
    std::shared_ptr<string> samplingRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

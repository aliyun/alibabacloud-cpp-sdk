// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDCDNSLSREALTIMELOGDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDCDNSLSREALTIMELOGDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class UpdateDcdnSLSRealtimeLogDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDcdnSLSRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SLSLogStore, SLSLogStore_);
      DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_TO_JSON(SLSRegion, SLSRegion_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDcdnSLSRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SLSLogStore, SLSLogStore_);
      DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_FROM_JSON(SLSRegion, SLSRegion_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
    };
    UpdateDcdnSLSRealtimeLogDeliveryRequest() = default ;
    UpdateDcdnSLSRealtimeLogDeliveryRequest(const UpdateDcdnSLSRealtimeLogDeliveryRequest &) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryRequest(UpdateDcdnSLSRealtimeLogDeliveryRequest &&) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDcdnSLSRealtimeLogDeliveryRequest() = default ;
    UpdateDcdnSLSRealtimeLogDeliveryRequest& operator=(const UpdateDcdnSLSRealtimeLogDeliveryRequest &) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryRequest& operator=(UpdateDcdnSLSRealtimeLogDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataCenter_ == nullptr
        && this->domainName_ == nullptr && this->projectName_ == nullptr && this->SLSLogStore_ == nullptr && this->SLSProject_ == nullptr && this->SLSRegion_ == nullptr
        && this->samplingRate_ == nullptr; };
    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // SLSLogStore Field Functions 
    bool hasSLSLogStore() const { return this->SLSLogStore_ != nullptr;};
    void deleteSLSLogStore() { this->SLSLogStore_ = nullptr;};
    inline string getSLSLogStore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogStore_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryRequest& setSLSLogStore(string SLSLogStore) { DARABONBA_PTR_SET_VALUE(SLSLogStore_, SLSLogStore) };


    // SLSProject Field Functions 
    bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
    void deleteSLSProject() { this->SLSProject_ = nullptr;};
    inline string getSLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryRequest& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


    // SLSRegion Field Functions 
    bool hasSLSRegion() const { return this->SLSRegion_ != nullptr;};
    void deleteSLSRegion() { this->SLSRegion_ = nullptr;};
    inline string getSLSRegion() const { DARABONBA_PTR_GET_DEFAULT(SLSRegion_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryRequest& setSLSRegion(string SLSRegion) { DARABONBA_PTR_SET_VALUE(SLSRegion_, SLSRegion) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline string getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryRequest& setSamplingRate(string samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


  protected:
    // The region from which logs are collected.
    // 
    // *   **cn**: Chinese mainland
    // *   **sg**: Singapore
    // *   **in**: India
    // *   **eu**: Europe
    // *   **us**: United States
    // 
    // This parameter is required.
    shared_ptr<string> dataCenter_ {};
    // The domain names from which logs were collected. You can specify one or more domain names. Separate multiple domain names with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The name of the project.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The name of the Logstore.
    // 
    // This parameter is required.
    shared_ptr<string> SLSLogStore_ {};
    // The name of the log file.
    // 
    // This parameter is required.
    shared_ptr<string> SLSProject_ {};
    // The region to which logs were delivered.
    // 
    // This parameter is required.
    shared_ptr<string> SLSRegion_ {};
    // The sampling rate.
    shared_ptr<string> samplingRate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

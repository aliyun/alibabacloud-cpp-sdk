// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSLSRealtimeLogDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSLSRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSLSRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnSLSRealtimeLogDeliveryResponseBody() = default ;
    DescribeDcdnSLSRealtimeLogDeliveryResponseBody(const DescribeDcdnSLSRealtimeLogDeliveryResponseBody &) = default ;
    DescribeDcdnSLSRealtimeLogDeliveryResponseBody(DescribeDcdnSLSRealtimeLogDeliveryResponseBody &&) = default ;
    DescribeDcdnSLSRealtimeLogDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSLSRealtimeLogDeliveryResponseBody() = default ;
    DescribeDcdnSLSRealtimeLogDeliveryResponseBody& operator=(const DescribeDcdnSLSRealtimeLogDeliveryResponseBody &) = default ;
    DescribeDcdnSLSRealtimeLogDeliveryResponseBody& operator=(DescribeDcdnSLSRealtimeLogDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
        DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(SLSLogStore, SLSLogStore_);
        DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
        DARABONBA_PTR_TO_JSON(SLSRegion, SLSRegion_);
        DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
        DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(SLSLogStore, SLSLogStore_);
        DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
        DARABONBA_PTR_FROM_JSON(SLSRegion, SLSRegion_);
        DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessType_ == nullptr
        && this->dataCenter_ == nullptr && this->domainName_ == nullptr && this->fieldName_ == nullptr && this->projectName_ == nullptr && this->SLSLogStore_ == nullptr
        && this->SLSProject_ == nullptr && this->SLSRegion_ == nullptr && this->samplingRate_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // businessType Field Functions 
      bool hasBusinessType() const { return this->businessType_ != nullptr;};
      void deleteBusinessType() { this->businessType_ = nullptr;};
      inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
      inline Content& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


      // dataCenter Field Functions 
      bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
      void deleteDataCenter() { this->dataCenter_ = nullptr;};
      inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
      inline Content& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Content& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline Content& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Content& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // SLSLogStore Field Functions 
      bool hasSLSLogStore() const { return this->SLSLogStore_ != nullptr;};
      void deleteSLSLogStore() { this->SLSLogStore_ = nullptr;};
      inline string getSLSLogStore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogStore_, "") };
      inline Content& setSLSLogStore(string SLSLogStore) { DARABONBA_PTR_SET_VALUE(SLSLogStore_, SLSLogStore) };


      // SLSProject Field Functions 
      bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
      void deleteSLSProject() { this->SLSProject_ = nullptr;};
      inline string getSLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
      inline Content& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


      // SLSRegion Field Functions 
      bool hasSLSRegion() const { return this->SLSRegion_ != nullptr;};
      void deleteSLSRegion() { this->SLSRegion_ = nullptr;};
      inline string getSLSRegion() const { DARABONBA_PTR_GET_DEFAULT(SLSRegion_, "") };
      inline Content& setSLSRegion(string SLSRegion) { DARABONBA_PTR_SET_VALUE(SLSRegion_, SLSRegion) };


      // samplingRate Field Functions 
      bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
      void deleteSamplingRate() { this->samplingRate_ = nullptr;};
      inline string getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, "") };
      inline Content& setSamplingRate(string samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Content& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The type of the collected logs. Default value: cdn_log_access_l1. Valid values:
      // 
      // *   **cdn_log_access_l1**: access logs of Dynamic Content Delivery Network (DCDN) points of presence (POPs)
      // *   **cdn_log_origin**: back-to-origin logs
      // *   **cdn_log_er**: EdgeRoutine logs
      shared_ptr<string> businessType_ {};
      // The region from which logs were collected.
      shared_ptr<string> dataCenter_ {};
      // The domain names from which logs were collected. You can specify one or more domain names. Separate multiple domain names with commas (,).
      shared_ptr<string> domainName_ {};
      // The name of the field. For more information about fields in real-time log entries, see [Fields in a real-time log](https://help.aliyun.com/document_detail/324199.html).
      shared_ptr<string> fieldName_ {};
      // The name of the project.
      shared_ptr<string> projectName_ {};
      // The name of the Logstore.
      shared_ptr<string> SLSLogStore_ {};
      // The name of the log file.
      shared_ptr<string> SLSProject_ {};
      // The region to which logs were delivered.
      shared_ptr<string> SLSRegion_ {};
      // The sampling rate.
      shared_ptr<string> samplingRate_ {};
      // The status of real-time logs.
      // 
      // *   **success**
      // *   **fail**
      shared_ptr<string> status_ {};
      // The type of log delivery. Only **SLS_POST** is supported.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeDcdnSLSRealtimeLogDeliveryResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeDcdnSLSRealtimeLogDeliveryResponseBody::Content) };
    inline DescribeDcdnSLSRealtimeLogDeliveryResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeDcdnSLSRealtimeLogDeliveryResponseBody::Content) };
    inline DescribeDcdnSLSRealtimeLogDeliveryResponseBody& setContent(const DescribeDcdnSLSRealtimeLogDeliveryResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnSLSRealtimeLogDeliveryResponseBody& setContent(DescribeDcdnSLSRealtimeLogDeliveryResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnSLSRealtimeLogDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration results of the domain name.
    shared_ptr<DescribeDcdnSLSRealtimeLogDeliveryResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

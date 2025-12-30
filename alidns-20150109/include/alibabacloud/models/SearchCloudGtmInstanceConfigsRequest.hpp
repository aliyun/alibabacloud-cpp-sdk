// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmInstanceConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmInstanceConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ScheduleDomainName, scheduleDomainName_);
      DARABONBA_PTR_TO_JSON(ScheduleZoneName, scheduleZoneName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmInstanceConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ScheduleDomainName, scheduleDomainName_);
      DARABONBA_PTR_FROM_JSON(ScheduleZoneName, scheduleZoneName_);
    };
    SearchCloudGtmInstanceConfigsRequest() = default ;
    SearchCloudGtmInstanceConfigsRequest(const SearchCloudGtmInstanceConfigsRequest &) = default ;
    SearchCloudGtmInstanceConfigsRequest(SearchCloudGtmInstanceConfigsRequest &&) = default ;
    SearchCloudGtmInstanceConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmInstanceConfigsRequest() = default ;
    SearchCloudGtmInstanceConfigsRequest& operator=(const SearchCloudGtmInstanceConfigsRequest &) = default ;
    SearchCloudGtmInstanceConfigsRequest& operator=(SearchCloudGtmInstanceConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->availableStatus_ == nullptr && this->clientToken_ == nullptr && this->enableStatus_ == nullptr && this->healthStatus_ == nullptr && this->instanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->remark_ == nullptr && this->scheduleDomainName_ == nullptr && this->scheduleZoneName_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline SearchCloudGtmInstanceConfigsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string getAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline SearchCloudGtmInstanceConfigsRequest& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SearchCloudGtmInstanceConfigsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline SearchCloudGtmInstanceConfigsRequest& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline SearchCloudGtmInstanceConfigsRequest& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SearchCloudGtmInstanceConfigsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchCloudGtmInstanceConfigsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchCloudGtmInstanceConfigsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline SearchCloudGtmInstanceConfigsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // scheduleDomainName Field Functions 
    bool hasScheduleDomainName() const { return this->scheduleDomainName_ != nullptr;};
    void deleteScheduleDomainName() { this->scheduleDomainName_ = nullptr;};
    inline string getScheduleDomainName() const { DARABONBA_PTR_GET_DEFAULT(scheduleDomainName_, "") };
    inline SearchCloudGtmInstanceConfigsRequest& setScheduleDomainName(string scheduleDomainName) { DARABONBA_PTR_SET_VALUE(scheduleDomainName_, scheduleDomainName) };


    // scheduleZoneName Field Functions 
    bool hasScheduleZoneName() const { return this->scheduleZoneName_ != nullptr;};
    void deleteScheduleZoneName() { this->scheduleZoneName_ = nullptr;};
    inline string getScheduleZoneName() const { DARABONBA_PTR_GET_DEFAULT(scheduleZoneName_, "") };
    inline SearchCloudGtmInstanceConfigsRequest& setScheduleZoneName(string scheduleZoneName) { DARABONBA_PTR_SET_VALUE(scheduleZoneName_, scheduleZoneName) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US (default): English
    shared_ptr<string> acceptLanguage_ {};
    // The availability state of the access domain name. Valid values:
    // 
    // *   available: If the access domain name is **enabled** and the health state is **normal**, the access domain name is deemed **available**.
    // *   unavailable: If the access domain name is **disabled** or the health state is **abnormal**, the access domain name is deemed **unavailable**.
    shared_ptr<string> availableStatus_ {};
    // The client token that is used to ensure the idempotence of the request. You can specify a custom value for this parameter, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The enabling state of the access domain name. Valid values:
    // 
    // *   enable: The access domain name is enabled and the intelligent scheduling policy of the corresponding GTM instance takes effect.
    // *   disable: The access domain name is disabled and the intelligent scheduling policy of the corresponding GTM instance does not take effect.
    shared_ptr<string> enableStatus_ {};
    // The health state of the access domain name. Valid values:
    // 
    // *   ok: The health state of the access domain name is normal and all address pools that are referenced by the access domain name are available.
    // *   ok_alert: The health state of the access domain name is warning and some of the address pools that are referenced by the access domain name are unavailable. In this case, only the available address pools are returned for Domain Name System (DNS) requests.
    // *   exceptional: The health state of the access domain name is abnormal and all address pools that are referenced by the access domain name are unavailable. In this case, addresses in the non-empty address pool with the smallest sequence number are preferentially used for fallback resolution. This returns DNS results for clients as much as possible.
    shared_ptr<string> healthStatus_ {};
    // The ID of the Global Traffic Manager (GTM) 3.0 instance.
    shared_ptr<string> instanceId_ {};
    // Current page number, starting from 1, default is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of rows per page when paginating queries, with a maximum value of **100**, and a default of **20**.
    shared_ptr<int32_t> pageSize_ {};
    // Remarks for the domain instance.
    shared_ptr<string> remark_ {};
    // The access domain name. The value of this parameter is composed of the value of ScheduleHostname and the value of ScheduleZoneName.
    shared_ptr<string> scheduleDomainName_ {};
    // The zone such as example.com or subzone such as a.example.com of the access domain name. In most cases, the zone or subzone is hosted by the Public Authoritative DNS module of Alibaba Cloud DNS. This zone belongs to the account to which the GTM instance belongs.
    shared_ptr<string> scheduleZoneName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

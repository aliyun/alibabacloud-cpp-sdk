// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmAddressesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmAddressesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressId, addressId_);
      DARABONBA_PTR_TO_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(MonitorTemplateName, monitorTemplateName_);
      DARABONBA_PTR_TO_JSON(NameSearchCondition, nameSearchCondition_);
      DARABONBA_PTR_TO_JSON(Names, names_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RemarkSearchCondition, remarkSearchCondition_);
      DARABONBA_PTR_TO_JSON(Remarks, remarks_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmAddressesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressId, addressId_);
      DARABONBA_PTR_FROM_JSON(AvailableStatus, availableStatus_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(MonitorTemplateName, monitorTemplateName_);
      DARABONBA_PTR_FROM_JSON(NameSearchCondition, nameSearchCondition_);
      DARABONBA_PTR_FROM_JSON(Names, names_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RemarkSearchCondition, remarkSearchCondition_);
      DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SearchCloudGtmAddressesRequest() = default ;
    SearchCloudGtmAddressesRequest(const SearchCloudGtmAddressesRequest &) = default ;
    SearchCloudGtmAddressesRequest(SearchCloudGtmAddressesRequest &&) = default ;
    SearchCloudGtmAddressesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmAddressesRequest() = default ;
    SearchCloudGtmAddressesRequest& operator=(const SearchCloudGtmAddressesRequest &) = default ;
    SearchCloudGtmAddressesRequest& operator=(SearchCloudGtmAddressesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->address_ == nullptr && this->addressId_ == nullptr && this->availableStatus_ == nullptr && this->enableStatus_ == nullptr && this->healthStatus_ == nullptr
        && this->monitorTemplateName_ == nullptr && this->nameSearchCondition_ == nullptr && this->names_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->remarkSearchCondition_ == nullptr && this->remarks_ == nullptr && this->type_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline SearchCloudGtmAddressesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline SearchCloudGtmAddressesRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string getAddressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline SearchCloudGtmAddressesRequest& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // availableStatus Field Functions 
    bool hasAvailableStatus() const { return this->availableStatus_ != nullptr;};
    void deleteAvailableStatus() { this->availableStatus_ = nullptr;};
    inline string getAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(availableStatus_, "") };
    inline SearchCloudGtmAddressesRequest& setAvailableStatus(string availableStatus) { DARABONBA_PTR_SET_VALUE(availableStatus_, availableStatus) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline SearchCloudGtmAddressesRequest& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline SearchCloudGtmAddressesRequest& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // monitorTemplateName Field Functions 
    bool hasMonitorTemplateName() const { return this->monitorTemplateName_ != nullptr;};
    void deleteMonitorTemplateName() { this->monitorTemplateName_ = nullptr;};
    inline string getMonitorTemplateName() const { DARABONBA_PTR_GET_DEFAULT(monitorTemplateName_, "") };
    inline SearchCloudGtmAddressesRequest& setMonitorTemplateName(string monitorTemplateName) { DARABONBA_PTR_SET_VALUE(monitorTemplateName_, monitorTemplateName) };


    // nameSearchCondition Field Functions 
    bool hasNameSearchCondition() const { return this->nameSearchCondition_ != nullptr;};
    void deleteNameSearchCondition() { this->nameSearchCondition_ = nullptr;};
    inline string getNameSearchCondition() const { DARABONBA_PTR_GET_DEFAULT(nameSearchCondition_, "") };
    inline SearchCloudGtmAddressesRequest& setNameSearchCondition(string nameSearchCondition) { DARABONBA_PTR_SET_VALUE(nameSearchCondition_, nameSearchCondition) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline const vector<string> & getNames() const { DARABONBA_PTR_GET_CONST(names_, vector<string>) };
    inline vector<string> getNames() { DARABONBA_PTR_GET(names_, vector<string>) };
    inline SearchCloudGtmAddressesRequest& setNames(const vector<string> & names) { DARABONBA_PTR_SET_VALUE(names_, names) };
    inline SearchCloudGtmAddressesRequest& setNames(vector<string> && names) { DARABONBA_PTR_SET_RVALUE(names_, names) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchCloudGtmAddressesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchCloudGtmAddressesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remarkSearchCondition Field Functions 
    bool hasRemarkSearchCondition() const { return this->remarkSearchCondition_ != nullptr;};
    void deleteRemarkSearchCondition() { this->remarkSearchCondition_ = nullptr;};
    inline string getRemarkSearchCondition() const { DARABONBA_PTR_GET_DEFAULT(remarkSearchCondition_, "") };
    inline SearchCloudGtmAddressesRequest& setRemarkSearchCondition(string remarkSearchCondition) { DARABONBA_PTR_SET_VALUE(remarkSearchCondition_, remarkSearchCondition) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline const vector<string> & getRemarks() const { DARABONBA_PTR_GET_CONST(remarks_, vector<string>) };
    inline vector<string> getRemarks() { DARABONBA_PTR_GET(remarks_, vector<string>) };
    inline SearchCloudGtmAddressesRequest& setRemarks(const vector<string> & remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };
    inline SearchCloudGtmAddressesRequest& setRemarks(vector<string> && remarks) { DARABONBA_PTR_SET_RVALUE(remarks_, remarks) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchCloudGtmAddressesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US (default): English
    shared_ptr<string> acceptLanguage_ {};
    // Query by service address with precise conditions, supporting IP addresses or domain names.
    shared_ptr<string> address_ {};
    // The address ID. This ID uniquely identifies the address.
    shared_ptr<string> addressId_ {};
    // Search by address availability status with precise conditions:
    // - available
    // - unavailable
    shared_ptr<string> availableStatus_ {};
    // Query by exact address enable status:
    // - enable: enabled status
    // - disable: disabled status
    shared_ptr<string> enableStatus_ {};
    // The health state of the addresses that you want to query. Valid values:
    // 
    // *   ok: The addresses pass all health checks of the referenced health check templates.
    // *   ok_alert: The addresses fail some health checks of the referenced health check templates, but the addresses are deemed available.
    // *   ok_no_monitor: The addresses do not reference any health check template.
    // *   exceptional: The addresses fail some or all health checks of the referenced health check templates, and the addresses are deemed unavailable.
    shared_ptr<string> healthStatus_ {};
    // Health check template name.
    shared_ptr<string> monitorTemplateName_ {};
    // The logical condition for querying addresses by name. This parameter is required if you want to query addresses by name. Valid values:
    // 
    // *   and: displays the results that match all search conditions.
    // *   or: displays the results that match some or all search conditions.
    shared_ptr<string> nameSearchCondition_ {};
    // Address name, usually for users to distinguish between different addresses.
    shared_ptr<vector<string>> names_ {};
    // Current page number, starting from 1, default is 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of rows per page when paginating queries, with a maximum value of 100 and a default of 20.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The logical condition for querying addresses by additional description. This parameter is required if you want to query addresses by additional description. Valid values:
    // 
    // and: displays the results that match all search conditions.
    // 
    // or: displays the results that match some or all search conditions.
    shared_ptr<string> remarkSearchCondition_ {};
    // Remarks for the address.
    shared_ptr<vector<string>> remarks_ {};
    // Search precisely by address type conditions:
    // - IPv4
    // - IPv6
    // - domain
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

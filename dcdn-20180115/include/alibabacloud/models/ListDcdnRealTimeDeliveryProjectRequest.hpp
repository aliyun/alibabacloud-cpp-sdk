// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDCDNREALTIMEDELIVERYPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDCDNREALTIMEDELIVERYPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ListDcdnRealTimeDeliveryProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDcdnRealTimeDeliveryProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDcdnRealTimeDeliveryProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListDcdnRealTimeDeliveryProjectRequest() = default ;
    ListDcdnRealTimeDeliveryProjectRequest(const ListDcdnRealTimeDeliveryProjectRequest &) = default ;
    ListDcdnRealTimeDeliveryProjectRequest(ListDcdnRealTimeDeliveryProjectRequest &&) = default ;
    ListDcdnRealTimeDeliveryProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDcdnRealTimeDeliveryProjectRequest() = default ;
    ListDcdnRealTimeDeliveryProjectRequest& operator=(const ListDcdnRealTimeDeliveryProjectRequest &) = default ;
    ListDcdnRealTimeDeliveryProjectRequest& operator=(ListDcdnRealTimeDeliveryProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->domainName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListDcdnRealTimeDeliveryProjectRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListDcdnRealTimeDeliveryProjectRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDcdnRealTimeDeliveryProjectRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDcdnRealTimeDeliveryProjectRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The type of the collected logs. Default value: cdn_log_access_l1. Valid values:
    // 
    // *   **cdn_log_access_l1**: access logs of Dynamic Content Delivery Network (DCDN) points of presence (POPs)
    // *   **cdn_log_origin**: back-to-origin logs
    // *   **cdn_log_er**: EdgeRoutine logs
    // *   By default, this parameter is left empty, and all logs are returned.
    shared_ptr<string> businessType_ {};
    // The domain name. You can specify only one domain name in each request. If this parameter is not specified, all domain names are queried.
    shared_ptr<string> domainName_ {};
    // The number of the page to return. Valid values: **1** to **100000**. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. The default value is 20.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

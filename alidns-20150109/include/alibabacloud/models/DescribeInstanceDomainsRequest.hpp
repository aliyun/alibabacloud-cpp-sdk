// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInstanceDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeInstanceDomainsRequest() = default ;
    DescribeInstanceDomainsRequest(const DescribeInstanceDomainsRequest &) = default ;
    DescribeInstanceDomainsRequest(DescribeInstanceDomainsRequest &&) = default ;
    DescribeInstanceDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDomainsRequest() = default ;
    DescribeInstanceDomainsRequest& operator=(const DescribeInstanceDomainsRequest &) = default ;
    DescribeInstanceDomainsRequest& operator=(DescribeInstanceDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lang_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceDomainsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInstanceDomainsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeInstanceDomainsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeInstanceDomainsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the Alibaba Cloud Domain Name System (DNS) instance. You can call the [DescribeDomainInfo](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomaininfo?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: English.
    shared_ptr<string> lang_ {};
    // The number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int64_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

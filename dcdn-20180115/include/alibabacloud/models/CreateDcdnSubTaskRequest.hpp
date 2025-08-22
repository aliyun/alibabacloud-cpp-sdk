// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNSUBTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNSUBTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnSubTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnSubTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ReportIds, reportIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnSubTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ReportIds, reportIds_);
    };
    CreateDcdnSubTaskRequest() = default ;
    CreateDcdnSubTaskRequest(const CreateDcdnSubTaskRequest &) = default ;
    CreateDcdnSubTaskRequest(CreateDcdnSubTaskRequest &&) = default ;
    CreateDcdnSubTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnSubTaskRequest() = default ;
    CreateDcdnSubTaskRequest& operator=(const CreateDcdnSubTaskRequest &) = default ;
    CreateDcdnSubTaskRequest& operator=(CreateDcdnSubTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->reportIds_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateDcdnSubTaskRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // reportIds Field Functions 
    bool hasReportIds() const { return this->reportIds_ != nullptr;};
    void deleteReportIds() { this->reportIds_ = nullptr;};
    inline string reportIds() const { DARABONBA_PTR_GET_DEFAULT(reportIds_, "") };
    inline CreateDcdnSubTaskRequest& setReportIds(string reportIds) { DARABONBA_PTR_SET_VALUE(reportIds_, reportIds) };


  protected:
    // The domain names to be tracked. Separate multiple domain names with commas (,). You can specify up to 500 domain names. If you want to specify more than 500 domain names, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
    // 
    // > If you do not specify a domain name, the tracking task is created for all domain names that belong to your Alibaba Cloud account.
    std::shared_ptr<string> domainName_ = nullptr;
    // The IDs of the metrics that you want to include in the report. Separate multiple IDs with commas (,). Valid values:
    // 
    // *   **2**: Popular URLs by Request
    // *   **4**: Popular URLs by Traffic
    // *   **6**: Popular Referer by Request
    // *   **8**: Popular Referer by Traffic
    // *   **10**: Popular Back-to-origin URLs by Request
    // *   **12**: Popular Back-to-origin URLs by Traffic
    // *   **14**: Top Client IPs by Request
    // *   **16**: Top Client IPs by Traffic
    // *   **18**: Popular Domain Names by Traffic
    // *   **20**: PV/UV
    // *   **22**: Visit Distribution by Region
    // *   **24**: Distribution of ISPs
    // *   **26**: Peak IPv4/IPv6 Bandwidth
    // *   **27**: Back-to-origin bandwidth
    // 
    // This parameter is required.
    std::shared_ptr<string> reportIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

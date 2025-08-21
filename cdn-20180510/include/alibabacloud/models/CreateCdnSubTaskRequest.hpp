// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECDNSUBTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECDNSUBTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class CreateCdnSubTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCdnSubTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ReportIds, reportIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCdnSubTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ReportIds, reportIds_);
    };
    CreateCdnSubTaskRequest() = default ;
    CreateCdnSubTaskRequest(const CreateCdnSubTaskRequest &) = default ;
    CreateCdnSubTaskRequest(CreateCdnSubTaskRequest &&) = default ;
    CreateCdnSubTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCdnSubTaskRequest() = default ;
    CreateCdnSubTaskRequest& operator=(const CreateCdnSubTaskRequest &) = default ;
    CreateCdnSubTaskRequest& operator=(CreateCdnSubTaskRequest &&) = default ;
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
    inline CreateCdnSubTaskRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // reportIds Field Functions 
    bool hasReportIds() const { return this->reportIds_ != nullptr;};
    void deleteReportIds() { this->reportIds_ = nullptr;};
    inline string reportIds() const { DARABONBA_PTR_GET_DEFAULT(reportIds_, "") };
    inline CreateCdnSubTaskRequest& setReportIds(string reportIds) { DARABONBA_PTR_SET_VALUE(reportIds_, reportIds) };


  protected:
    // The domain names to be tracked. Separate multiple domain names with commas (,). You can specify up to 500 domain names. If you want to specify more than 500 domain names, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
    // 
    // > If you do not specify a domain name, the custom operations report is created for all domain names that belong to your Alibaba Cloud account.
    std::shared_ptr<string> domainName_ = nullptr;
    // The IDs of the metrics that you want to include in the report. Separate multiple IDs with commas (,). Valid values:
    // 
    // *   **1**: frequently requested URLs (ranked by the number of requests)
    // *   **3**: frequently requested URLs (ranked by the amount of network traffic)
    // *   **5**: frequently used Referer headers (ranked by the number of requests)
    // *   **7**: frequently used Referer headers (ranked by the amount of network traffic)
    // *   **9**: frequently requested URLs that are redirected to the origin (ranked by the number of requests)
    // *   **11**: frequently requested URLs that are redirected to the origin (ranked by the amount of network traffic)
    // *   **13**: top client IP addresses (ranked by the number of requests)
    // *   **15**: top client IP addresses (ranked by the amount of network traffic)
    // *   **17**: domain names ranked by the amount of network traffic
    // *   **19**: page views and unique visitors
    // *   **21**: regions from which requests are initiated
    // *   **23**: Internet service providers (ISPs)
    // 
    // This parameter is required.
    std::shared_ptr<string> reportIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

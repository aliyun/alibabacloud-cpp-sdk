// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASWITHUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASWITHUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListInstanceQuotasWithUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceQuotasWithUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QuotaNames, quotaNames_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceQuotasWithUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QuotaNames, quotaNames_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListInstanceQuotasWithUsageRequest() = default ;
    ListInstanceQuotasWithUsageRequest(const ListInstanceQuotasWithUsageRequest &) = default ;
    ListInstanceQuotasWithUsageRequest(ListInstanceQuotasWithUsageRequest &&) = default ;
    ListInstanceQuotasWithUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceQuotasWithUsageRequest() = default ;
    ListInstanceQuotasWithUsageRequest& operator=(const ListInstanceQuotasWithUsageRequest &) = default ;
    ListInstanceQuotasWithUsageRequest& operator=(ListInstanceQuotasWithUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->quotaNames_ == nullptr && return this->siteId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceQuotasWithUsageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // quotaNames Field Functions 
    bool hasQuotaNames() const { return this->quotaNames_ != nullptr;};
    void deleteQuotaNames() { this->quotaNames_ = nullptr;};
    inline string quotaNames() const { DARABONBA_PTR_GET_DEFAULT(quotaNames_, "") };
    inline ListInstanceQuotasWithUsageRequest& setQuotaNames(string quotaNames) { DARABONBA_PTR_SET_VALUE(quotaNames_, quotaNames) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListInstanceQuotasWithUsageRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The plan ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The quota names in the plan. Separate the quota names with commas (,). You can query up to 10 quota names at a time. Valid values:
    // 
    // *   **customHttpCert**: the custom certificates.
    // *   **transition_rule**: the transform rules.
    // *   **waiting_room**: the waiting rooms.
    // *   **https|rule_quota**: the SSL/TLS rules.
    // *   **cache_rules|rule_quota**: the cache rules.
    // *   **configuration_rules|rule_quota**: the configuration rules.
    // *   **redirect_rules|rule_quota**: the redirect rules.
    // *   **compression_rules|rule_quota**: the compression rules.
    // *   **origin_rules|rule_quota**: the origin rules.
    // 
    // This parameter is required.
    std::shared_ptr<string> quotaNames_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

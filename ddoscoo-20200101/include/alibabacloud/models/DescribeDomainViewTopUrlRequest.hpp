// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewTopUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewTopUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Inerval, inerval_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Top, top_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewTopUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Inerval, inerval_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
    };
    DescribeDomainViewTopUrlRequest() = default ;
    DescribeDomainViewTopUrlRequest(const DescribeDomainViewTopUrlRequest &) = default ;
    DescribeDomainViewTopUrlRequest(DescribeDomainViewTopUrlRequest &&) = default ;
    DescribeDomainViewTopUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewTopUrlRequest() = default ;
    DescribeDomainViewTopUrlRequest& operator=(const DescribeDomainViewTopUrlRequest &) = default ;
    DescribeDomainViewTopUrlRequest& operator=(DescribeDomainViewTopUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->endTime_ == nullptr && this->inerval_ == nullptr && this->resourceGroupId_ == nullptr && this->startTime_ == nullptr && this->top_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainViewTopUrlRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDomainViewTopUrlRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // inerval Field Functions 
    bool hasInerval() const { return this->inerval_ != nullptr;};
    void deleteInerval() { this->inerval_ = nullptr;};
    inline int64_t getInerval() const { DARABONBA_PTR_GET_DEFAULT(inerval_, 0L) };
    inline DescribeDomainViewTopUrlRequest& setInerval(int64_t inerval) { DARABONBA_PTR_SET_VALUE(inerval_, inerval) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDomainViewTopUrlRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDomainViewTopUrlRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline int32_t getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0) };
    inline DescribeDomainViewTopUrlRequest& setTop(int32_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


  protected:
    // The domain name of the website service.
    // 
    // > The domain name must have a website service forwarding rule configured. You can invoke [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) to query all domain names that are added to Anti-DDoS Pro and Anti-DDoS Premium.
    shared_ptr<string> domain_ {};
    // The end of the time range to query. Specify a UNIX timestamp. Unit: seconds.
    // > The value must be on the exact minute.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The step size for returning data, in seconds. This parameter specifies the interval at which a result is returned. The supported step size varies based on the query time range (determined by **StartTime** and **EndTime**). Recommended settings:
    // 
    // - Query time range of up to 1 hour: minimum step size of 60 seconds, maximum not exceeding the query time range.
    // - Query time range of more than 1 hour but up to 6 hours: minimum step size of 600 seconds, maximum not exceeding the query time range.
    // - Query time range of more than 6 hours but up to 24 hours: minimum step size of 1800 seconds, maximum not exceeding the query time range.
    // - Query time range of more than 24 hours but up to 7 days: minimum step size of 3600 seconds, maximum not exceeding the query time range.
    // - Query time range of more than 7 days but up to 15 days: minimum step size of 14400 seconds, maximum not exceeding the query time range.
    // - Query time range of more than 15 days: minimum step size of 43200 seconds, maximum not exceeding the query time range.
    shared_ptr<int64_t> inerval_ {};
    // The ID of the resource group to which the Anti-DDoS Pro or Anti-DDoS Premium instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The beginning of the time range to query. Specify a UNIX timestamp. Unit: seconds.
    // > The value must be on the exact minute.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The number of URLs to return. Valid values: **1** to **100**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> top_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

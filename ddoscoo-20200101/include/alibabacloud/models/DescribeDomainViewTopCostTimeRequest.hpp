// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPCOSTTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWTOPCOSTTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewTopCostTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewTopCostTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Top, top_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewTopCostTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
    };
    DescribeDomainViewTopCostTimeRequest() = default ;
    DescribeDomainViewTopCostTimeRequest(const DescribeDomainViewTopCostTimeRequest &) = default ;
    DescribeDomainViewTopCostTimeRequest(DescribeDomainViewTopCostTimeRequest &&) = default ;
    DescribeDomainViewTopCostTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewTopCostTimeRequest() = default ;
    DescribeDomainViewTopCostTimeRequest& operator=(const DescribeDomainViewTopCostTimeRequest &) = default ;
    DescribeDomainViewTopCostTimeRequest& operator=(DescribeDomainViewTopCostTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->endTime_ == nullptr && this->resourceGroupId_ == nullptr && this->startTime_ == nullptr && this->top_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainViewTopCostTimeRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDomainViewTopCostTimeRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDomainViewTopCostTimeRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDomainViewTopCostTimeRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline int32_t getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0) };
    inline DescribeDomainViewTopCostTimeRequest& setTop(int32_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


  protected:
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    shared_ptr<string> domain_ {};
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // > This UNIX timestamp must indicate a point in time that is accurate to the minute.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // > This UNIX timestamp must indicate a point in time that is accurate to the minute.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The number of URLs to query. Valid values: **1** to **100**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> top_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

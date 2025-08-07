// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    ListServiceInstanceBillRequest() = default ;
    ListServiceInstanceBillRequest(const ListServiceInstanceBillRequest &) = default ;
    ListServiceInstanceBillRequest(ListServiceInstanceBillRequest &&) = default ;
    ListServiceInstanceBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceBillRequest() = default ;
    ListServiceInstanceBillRequest& operator=(const ListServiceInstanceBillRequest &) = default ;
    ListServiceInstanceBillRequest& operator=(ListServiceInstanceBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billingCycle_ != nullptr
        && this->billingDate_ != nullptr && this->granularity_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->serviceInstanceId_ != nullptr; };
    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline ListServiceInstanceBillRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // billingDate Field Functions 
    bool hasBillingDate() const { return this->billingDate_ != nullptr;};
    void deleteBillingDate() { this->billingDate_ = nullptr;};
    inline string billingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
    inline ListServiceInstanceBillRequest& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string granularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline ListServiceInstanceBillRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceBillRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceBillRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ListServiceInstanceBillRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The billing cycle. Format: YYYY-MM.
    // 
    // This parameter is required.
    std::shared_ptr<string> billingCycle_ = nullptr;
    // The billing date. This parameter is required only if the **Granularity** parameter is set to DAILY. Format: YYYY-MM-DD.
    std::shared_ptr<string> billingDate_ = nullptr;
    // The granularity at which bills are queried. Valid values:
    // 
    // *   MONTHLY: queries bills by month. The data queried is consistent with the data that is displayed for the specified billing cycle on the Billing Details tab of the Bill Details page in User Center.
    // *   DAILY: queries bills by day. The data queried is consistent with the data that is displayed for the specified day on the Billing Details tab of the Bill Details page in User Center.
    // 
    // You must set the **BillingDate** parameter before you can set the Granularity parameter to DAILY.
    std::shared_ptr<string> granularity_ = nullptr;
    // The number of entries page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The service instance ID.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

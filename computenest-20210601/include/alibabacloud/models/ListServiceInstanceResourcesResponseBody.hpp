// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ListServiceInstanceResourcesResponseBody() = default ;
    ListServiceInstanceResourcesResponseBody(const ListServiceInstanceResourcesResponseBody &) = default ;
    ListServiceInstanceResourcesResponseBody(ListServiceInstanceResourcesResponseBody &&) = default ;
    ListServiceInstanceResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceResourcesResponseBody() = default ;
    ListServiceInstanceResourcesResponseBody& operator=(const ListServiceInstanceResourcesResponseBody &) = default ;
    ListServiceInstanceResourcesResponseBody& operator=(ListServiceInstanceResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(RenewStatus, renewStatus_);
        DARABONBA_PTR_TO_JSON(RenewalPeriod, renewalPeriod_);
        DARABONBA_PTR_TO_JSON(RenewalPeriodUnit, renewalPeriodUnit_);
        DARABONBA_PTR_TO_JSON(ResourceARN, resourceARN_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(RenewStatus, renewStatus_);
        DARABONBA_PTR_FROM_JSON(RenewalPeriod, renewalPeriod_);
        DARABONBA_PTR_FROM_JSON(RenewalPeriodUnit, renewalPeriodUnit_);
        DARABONBA_PTR_FROM_JSON(ResourceARN, resourceARN_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->expireTime_ == nullptr && this->payType_ == nullptr && this->productCode_ == nullptr && this->productType_ == nullptr && this->renewStatus_ == nullptr
        && this->renewalPeriod_ == nullptr && this->renewalPeriodUnit_ == nullptr && this->resourceARN_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Resources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Resources& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Resources& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Resources& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Resources& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // renewStatus Field Functions 
      bool hasRenewStatus() const { return this->renewStatus_ != nullptr;};
      void deleteRenewStatus() { this->renewStatus_ = nullptr;};
      inline string getRenewStatus() const { DARABONBA_PTR_GET_DEFAULT(renewStatus_, "") };
      inline Resources& setRenewStatus(string renewStatus) { DARABONBA_PTR_SET_VALUE(renewStatus_, renewStatus) };


      // renewalPeriod Field Functions 
      bool hasRenewalPeriod() const { return this->renewalPeriod_ != nullptr;};
      void deleteRenewalPeriod() { this->renewalPeriod_ = nullptr;};
      inline int32_t getRenewalPeriod() const { DARABONBA_PTR_GET_DEFAULT(renewalPeriod_, 0) };
      inline Resources& setRenewalPeriod(int32_t renewalPeriod) { DARABONBA_PTR_SET_VALUE(renewalPeriod_, renewalPeriod) };


      // renewalPeriodUnit Field Functions 
      bool hasRenewalPeriodUnit() const { return this->renewalPeriodUnit_ != nullptr;};
      void deleteRenewalPeriodUnit() { this->renewalPeriodUnit_ = nullptr;};
      inline string getRenewalPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(renewalPeriodUnit_, "") };
      inline Resources& setRenewalPeriodUnit(string renewalPeriodUnit) { DARABONBA_PTR_SET_VALUE(renewalPeriodUnit_, renewalPeriodUnit) };


      // resourceARN Field Functions 
      bool hasResourceARN() const { return this->resourceARN_ != nullptr;};
      void deleteResourceARN() { this->resourceARN_ = nullptr;};
      inline string getResourceARN() const { DARABONBA_PTR_GET_DEFAULT(resourceARN_, "") };
      inline Resources& setResourceARN(string resourceARN) { DARABONBA_PTR_SET_VALUE(resourceARN_, resourceARN) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Resources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the resource was created.
      shared_ptr<string> createTime_ {};
      // The time when the resource expires.
      shared_ptr<string> expireTime_ {};
      // The billing method. Valid values:
      // 
      // *   Subscription
      // *   PayAsYouGo
      shared_ptr<string> payType_ {};
      // The code of the cloud service.
      shared_ptr<string> productCode_ {};
      // The type of the cloud service.
      shared_ptr<string> productType_ {};
      // The renewal state. Valid values:
      // 
      // *   AutoRenewal
      // *   ManualRenewal
      // *   NotRenewal
      shared_ptr<string> renewStatus_ {};
      // The renewal period.
      shared_ptr<int32_t> renewalPeriod_ {};
      // The unit of the renewal period. Valid values:
      // 
      // *   Month
      // *   Year
      shared_ptr<string> renewalPeriodUnit_ {};
      // The ARN of the resource.
      shared_ptr<string> resourceARN_ {};
      // The state of the resource. Valid values:
      // 
      // *   running
      // *   waiting
      // *   terminated
      // 
      // >  This parameter is returned only for containers.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListServiceInstanceResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListServiceInstanceResourcesResponseBody::Resources>) };
    inline vector<ListServiceInstanceResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<ListServiceInstanceResourcesResponseBody::Resources>) };
    inline ListServiceInstanceResourcesResponseBody& setResources(const vector<ListServiceInstanceResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListServiceInstanceResourcesResponseBody& setResources(vector<ListServiceInstanceResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resources.
    shared_ptr<vector<ListServiceInstanceResourcesResponseBody::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

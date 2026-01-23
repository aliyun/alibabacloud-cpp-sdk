// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(prometheusInstances, prometheusInstances_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(prometheusInstances, prometheusInstances_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListPrometheusInstancesResponseBody() = default ;
    ListPrometheusInstancesResponseBody(const ListPrometheusInstancesResponseBody &) = default ;
    ListPrometheusInstancesResponseBody(ListPrometheusInstancesResponseBody &&) = default ;
    ListPrometheusInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusInstancesResponseBody() = default ;
    ListPrometheusInstancesResponseBody& operator=(const ListPrometheusInstancesResponseBody &) = default ;
    ListPrometheusInstancesResponseBody& operator=(ListPrometheusInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrometheusInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrometheusInstances& obj) { 
        DARABONBA_PTR_TO_JSON(accessType, accessType_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(product, product_);
        DARABONBA_PTR_TO_JSON(prometheusInstanceId, prometheusInstanceId_);
        DARABONBA_PTR_TO_JSON(prometheusInstanceName, prometheusInstanceName_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(supportAuthTypes, supportAuthTypes_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, PrometheusInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(accessType, accessType_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(product, product_);
        DARABONBA_PTR_FROM_JSON(prometheusInstanceId, prometheusInstanceId_);
        DARABONBA_PTR_FROM_JSON(prometheusInstanceName, prometheusInstanceName_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(supportAuthTypes, supportAuthTypes_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      PrometheusInstances() = default ;
      PrometheusInstances(const PrometheusInstances &) = default ;
      PrometheusInstances(PrometheusInstances &&) = default ;
      PrometheusInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrometheusInstances() = default ;
      PrometheusInstances& operator=(const PrometheusInstances &) = default ;
      PrometheusInstances& operator=(PrometheusInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->createTime_ == nullptr && this->instanceType_ == nullptr && this->paymentType_ == nullptr && this->product_ == nullptr && this->prometheusInstanceId_ == nullptr
        && this->prometheusInstanceName_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr && this->supportAuthTypes_ == nullptr
        && this->userId_ == nullptr && this->version_ == nullptr && this->workspace_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline PrometheusInstances& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PrometheusInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline PrometheusInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline PrometheusInstances& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline PrometheusInstances& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // prometheusInstanceId Field Functions 
      bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
      void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
      inline string getPrometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
      inline PrometheusInstances& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


      // prometheusInstanceName Field Functions 
      bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
      void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
      inline string getPrometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
      inline PrometheusInstances& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PrometheusInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline PrometheusInstances& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PrometheusInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportAuthTypes Field Functions 
      bool hasSupportAuthTypes() const { return this->supportAuthTypes_ != nullptr;};
      void deleteSupportAuthTypes() { this->supportAuthTypes_ = nullptr;};
      inline const vector<string> & getSupportAuthTypes() const { DARABONBA_PTR_GET_CONST(supportAuthTypes_, vector<string>) };
      inline vector<string> getSupportAuthTypes() { DARABONBA_PTR_GET(supportAuthTypes_, vector<string>) };
      inline PrometheusInstances& setSupportAuthTypes(const vector<string> & supportAuthTypes) { DARABONBA_PTR_SET_VALUE(supportAuthTypes_, supportAuthTypes) };
      inline PrometheusInstances& setSupportAuthTypes(vector<string> && supportAuthTypes) { DARABONBA_PTR_SET_RVALUE(supportAuthTypes_, supportAuthTypes) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PrometheusInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline PrometheusInstances& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline PrometheusInstances& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Access type:
      // readWrite, readOnly, httpReadOnly
      shared_ptr<string> accessType_ {};
      // Instance creation time, using UTC+0 time, formatted as yyyy-MM-ddTHH:mmZ
      shared_ptr<string> createTime_ {};
      // Instance type.
      shared_ptr<string> instanceType_ {};
      // POSTPAY: Postpaid by metric.
      // POSTPAY_GB: Postpaid by write volume.
      // PREPAY: Prepaid.
      // FREE: Free.
      shared_ptr<string> paymentType_ {};
      // Product to which the prom instance belongs
      shared_ptr<string> product_ {};
      // Instance ID.
      shared_ptr<string> prometheusInstanceId_ {};
      // Instance name.
      shared_ptr<string> prometheusInstanceName_ {};
      // Region ID
      shared_ptr<string> regionId_ {};
      // Resource type.
      shared_ptr<string> resourceType_ {};
      // Backend data storage status
      shared_ptr<string> status_ {};
      // Supported authentication types.
      shared_ptr<vector<string>> supportAuthTypes_ {};
      // User ID.
      shared_ptr<string> userId_ {};
      // Version
      shared_ptr<string> version_ {};
      // Workspace to which the Prometheus instance belongs
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->prometheusInstances_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPrometheusInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPrometheusInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prometheusInstances Field Functions 
    bool hasPrometheusInstances() const { return this->prometheusInstances_ != nullptr;};
    void deletePrometheusInstances() { this->prometheusInstances_ = nullptr;};
    inline const vector<ListPrometheusInstancesResponseBody::PrometheusInstances> & getPrometheusInstances() const { DARABONBA_PTR_GET_CONST(prometheusInstances_, vector<ListPrometheusInstancesResponseBody::PrometheusInstances>) };
    inline vector<ListPrometheusInstancesResponseBody::PrometheusInstances> getPrometheusInstances() { DARABONBA_PTR_GET(prometheusInstances_, vector<ListPrometheusInstancesResponseBody::PrometheusInstances>) };
    inline ListPrometheusInstancesResponseBody& setPrometheusInstances(const vector<ListPrometheusInstancesResponseBody::PrometheusInstances> & prometheusInstances) { DARABONBA_PTR_SET_VALUE(prometheusInstances_, prometheusInstances) };
    inline ListPrometheusInstancesResponseBody& setPrometheusInstances(vector<ListPrometheusInstancesResponseBody::PrometheusInstances> && prometheusInstances) { DARABONBA_PTR_SET_RVALUE(prometheusInstances_, prometheusInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPrometheusInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Maximum number of records to return.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the next query.
    shared_ptr<string> nextToken_ {};
    // List of Prometheus instances.
    shared_ptr<vector<ListPrometheusInstancesResponseBody::PrometheusInstances>> prometheusInstances_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Total number of instances
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSVIEWSRESPONSEBODY_HPP_
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
  class ListPrometheusViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(prometheusViews, prometheusViews_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(prometheusViews, prometheusViews_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListPrometheusViewsResponseBody() = default ;
    ListPrometheusViewsResponseBody(const ListPrometheusViewsResponseBody &) = default ;
    ListPrometheusViewsResponseBody(ListPrometheusViewsResponseBody &&) = default ;
    ListPrometheusViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusViewsResponseBody() = default ;
    ListPrometheusViewsResponseBody& operator=(const ListPrometheusViewsResponseBody &) = default ;
    ListPrometheusViewsResponseBody& operator=(ListPrometheusViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrometheusViews : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrometheusViews& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(product, product_);
        DARABONBA_PTR_TO_JSON(prometheusInstanceCount, prometheusInstanceCount_);
        DARABONBA_PTR_TO_JSON(prometheusViewId, prometheusViewId_);
        DARABONBA_PTR_TO_JSON(prometheusViewName, prometheusViewName_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, PrometheusViews& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(product, product_);
        DARABONBA_PTR_FROM_JSON(prometheusInstanceCount, prometheusInstanceCount_);
        DARABONBA_PTR_FROM_JSON(prometheusViewId, prometheusViewId_);
        DARABONBA_PTR_FROM_JSON(prometheusViewName, prometheusViewName_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      };
      PrometheusViews() = default ;
      PrometheusViews(const PrometheusViews &) = default ;
      PrometheusViews(PrometheusViews &&) = default ;
      PrometheusViews(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrometheusViews() = default ;
      PrometheusViews& operator=(const PrometheusViews &) = default ;
      PrometheusViews& operator=(PrometheusViews &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->instanceType_ == nullptr && this->paymentType_ == nullptr && this->product_ == nullptr && this->prometheusInstanceCount_ == nullptr && this->prometheusViewId_ == nullptr
        && this->prometheusViewName_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr
        && this->version_ == nullptr && this->workspace_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PrometheusViews& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline PrometheusViews& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline PrometheusViews& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline PrometheusViews& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // prometheusInstanceCount Field Functions 
      bool hasPrometheusInstanceCount() const { return this->prometheusInstanceCount_ != nullptr;};
      void deletePrometheusInstanceCount() { this->prometheusInstanceCount_ = nullptr;};
      inline int32_t getPrometheusInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceCount_, 0) };
      inline PrometheusViews& setPrometheusInstanceCount(int32_t prometheusInstanceCount) { DARABONBA_PTR_SET_VALUE(prometheusInstanceCount_, prometheusInstanceCount) };


      // prometheusViewId Field Functions 
      bool hasPrometheusViewId() const { return this->prometheusViewId_ != nullptr;};
      void deletePrometheusViewId() { this->prometheusViewId_ = nullptr;};
      inline string getPrometheusViewId() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewId_, "") };
      inline PrometheusViews& setPrometheusViewId(string prometheusViewId) { DARABONBA_PTR_SET_VALUE(prometheusViewId_, prometheusViewId) };


      // prometheusViewName Field Functions 
      bool hasPrometheusViewName() const { return this->prometheusViewName_ != nullptr;};
      void deletePrometheusViewName() { this->prometheusViewName_ = nullptr;};
      inline string getPrometheusViewName() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewName_, "") };
      inline PrometheusViews& setPrometheusViewName(string prometheusViewName) { DARABONBA_PTR_SET_VALUE(prometheusViewName_, prometheusViewName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PrometheusViews& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline PrometheusViews& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PrometheusViews& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PrometheusViews& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline PrometheusViews& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline PrometheusViews& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Instance creation time, using UTC+0 time, formatted as yyyy-MM-ddTHH:mmZ
      shared_ptr<string> createTime_ {};
      // Instance type:
      // prom-view: new version aggregated view
      // global-view: old version aggregated view
      shared_ptr<string> instanceType_ {};
      // Payment type. Currently, the fixed value is FREE (free).
      shared_ptr<string> paymentType_ {};
      // Product that the prom instance belongs to (arms or cms).
      shared_ptr<string> product_ {};
      // Number of Prometheus instances in the view.
      shared_ptr<int32_t> prometheusInstanceCount_ {};
      // Prometheus view ID.
      shared_ptr<string> prometheusViewId_ {};
      // Prometheus view name.
      shared_ptr<string> prometheusViewName_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // Fixed value: PrometheusView.
      shared_ptr<string> resourceType_ {};
      // Backend data storage status.
      shared_ptr<string> status_ {};
      // User ID.
      shared_ptr<string> userId_ {};
      // Version.
      shared_ptr<string> version_ {};
      // Workspace that the prom instance belongs to.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->prometheusViews_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPrometheusViewsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPrometheusViewsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prometheusViews Field Functions 
    bool hasPrometheusViews() const { return this->prometheusViews_ != nullptr;};
    void deletePrometheusViews() { this->prometheusViews_ = nullptr;};
    inline const vector<ListPrometheusViewsResponseBody::PrometheusViews> & getPrometheusViews() const { DARABONBA_PTR_GET_CONST(prometheusViews_, vector<ListPrometheusViewsResponseBody::PrometheusViews>) };
    inline vector<ListPrometheusViewsResponseBody::PrometheusViews> getPrometheusViews() { DARABONBA_PTR_GET(prometheusViews_, vector<ListPrometheusViewsResponseBody::PrometheusViews>) };
    inline ListPrometheusViewsResponseBody& setPrometheusViews(const vector<ListPrometheusViewsResponseBody::PrometheusViews> & prometheusViews) { DARABONBA_PTR_SET_VALUE(prometheusViews_, prometheusViews) };
    inline ListPrometheusViewsResponseBody& setPrometheusViews(vector<ListPrometheusViewsResponseBody::PrometheusViews> && prometheusViews) { DARABONBA_PTR_SET_RVALUE(prometheusViews_, prometheusViews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPrometheusViewsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Maximum number of records to return.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the next query.
    shared_ptr<string> nextToken_ {};
    // List of Prometheus view instances.
    shared_ptr<vector<ListPrometheusViewsResponseBody::PrometheusViews>> prometheusViews_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Total number of instances
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

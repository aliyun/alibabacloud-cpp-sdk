// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCloudResourceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudResourceList, cloudResourceList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudResourceList, cloudResourceList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudResourceListResponseBody() = default ;
    DescribeCloudResourceListResponseBody(const DescribeCloudResourceListResponseBody &) = default ;
    DescribeCloudResourceListResponseBody(DescribeCloudResourceListResponseBody &&) = default ;
    DescribeCloudResourceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourceListResponseBody() = default ;
    DescribeCloudResourceListResponseBody& operator=(const DescribeCloudResourceListResponseBody &) = default ;
    DescribeCloudResourceListResponseBody& operator=(DescribeCloudResourceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudResourceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudResourceList& obj) { 
        DARABONBA_PTR_TO_JSON(CloudResourceId, cloudResourceId_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
        DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, CloudResourceList& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudResourceId, cloudResourceId_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
        DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      };
      CloudResourceList() = default ;
      CloudResourceList(const CloudResourceList &) = default ;
      CloudResourceList(CloudResourceList &&) = default ;
      CloudResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudResourceList() = default ;
      CloudResourceList& operator=(const CloudResourceList &) = default ;
      CloudResourceList& operator=(CloudResourceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cloudResourceId_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr && this->resourceInstanceId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->resourceProduct_ == nullptr
        && this->resourceRegionId_ == nullptr; };
      // cloudResourceId Field Functions 
      bool hasCloudResourceId() const { return this->cloudResourceId_ != nullptr;};
      void deleteCloudResourceId() { this->cloudResourceId_ = nullptr;};
      inline string getCloudResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudResourceId_, "") };
      inline CloudResourceList& setCloudResourceId(string cloudResourceId) { DARABONBA_PTR_SET_VALUE(cloudResourceId_, cloudResourceId) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline CloudResourceList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline CloudResourceList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // resourceInstanceId Field Functions 
      bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
      void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
      inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
      inline CloudResourceList& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


      // resourceManagerResourceGroupId Field Functions 
      bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
      void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
      inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
      inline CloudResourceList& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


      // resourceProduct Field Functions 
      bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
      void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
      inline string getResourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
      inline CloudResourceList& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline CloudResourceList& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    protected:
      shared_ptr<string> cloudResourceId_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> resourceInstanceId_ {};
      shared_ptr<string> resourceManagerResourceGroupId_ {};
      shared_ptr<string> resourceProduct_ {};
      shared_ptr<string> resourceRegionId_ {};
    };

    virtual bool empty() const override { return this->cloudResourceList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cloudResourceList Field Functions 
    bool hasCloudResourceList() const { return this->cloudResourceList_ != nullptr;};
    void deleteCloudResourceList() { this->cloudResourceList_ = nullptr;};
    inline const vector<DescribeCloudResourceListResponseBody::CloudResourceList> & getCloudResourceList() const { DARABONBA_PTR_GET_CONST(cloudResourceList_, vector<DescribeCloudResourceListResponseBody::CloudResourceList>) };
    inline vector<DescribeCloudResourceListResponseBody::CloudResourceList> getCloudResourceList() { DARABONBA_PTR_GET(cloudResourceList_, vector<DescribeCloudResourceListResponseBody::CloudResourceList>) };
    inline DescribeCloudResourceListResponseBody& setCloudResourceList(const vector<DescribeCloudResourceListResponseBody::CloudResourceList> & cloudResourceList) { DARABONBA_PTR_SET_VALUE(cloudResourceList_, cloudResourceList) };
    inline DescribeCloudResourceListResponseBody& setCloudResourceList(vector<DescribeCloudResourceListResponseBody::CloudResourceList> && cloudResourceList) { DARABONBA_PTR_SET_RVALUE(cloudResourceList_, cloudResourceList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCloudResourceListResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudResourceListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudResourceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCloudResourceListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeCloudResourceListResponseBody::CloudResourceList>> cloudResourceList_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif

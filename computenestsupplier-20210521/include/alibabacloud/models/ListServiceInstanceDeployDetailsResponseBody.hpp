// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEDEPLOYDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEDEPLOYDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceInstanceDeployDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceDeployDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeployDetails, deployDetails_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceDeployDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployDetails, deployDetails_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceInstanceDeployDetailsResponseBody() = default ;
    ListServiceInstanceDeployDetailsResponseBody(const ListServiceInstanceDeployDetailsResponseBody &) = default ;
    ListServiceInstanceDeployDetailsResponseBody(ListServiceInstanceDeployDetailsResponseBody &&) = default ;
    ListServiceInstanceDeployDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceDeployDetailsResponseBody() = default ;
    ListServiceInstanceDeployDetailsResponseBody& operator=(const ListServiceInstanceDeployDetailsResponseBody &) = default ;
    ListServiceInstanceDeployDetailsResponseBody& operator=(ListServiceInstanceDeployDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeployDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeployDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Cycle, cycle_);
        DARABONBA_PTR_TO_JSON(DeploySucceeded, deploySucceeded_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorDetail, errorDetail_);
        DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
        DARABONBA_PTR_TO_JSON(ServiceNameChn, serviceNameChn_);
        DARABONBA_PTR_TO_JSON(ServiceNameEng, serviceNameEng_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, DeployDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
        DARABONBA_PTR_FROM_JSON(DeploySucceeded, deploySucceeded_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorDetail, errorDetail_);
        DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
        DARABONBA_PTR_FROM_JSON(ServiceNameChn, serviceNameChn_);
        DARABONBA_PTR_FROM_JSON(ServiceNameEng, serviceNameEng_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      DeployDetails() = default ;
      DeployDetails(const DeployDetails &) = default ;
      DeployDetails(DeployDetails &&) = default ;
      DeployDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeployDetails() = default ;
      DeployDetails& operator=(const DeployDetails &) = default ;
      DeployDetails& operator=(DeployDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->createTime_ == nullptr && this->cycle_ == nullptr && this->deploySucceeded_ == nullptr && this->errorCode_ == nullptr && this->errorDetail_ == nullptr
        && this->errorType_ == nullptr && this->serviceId_ == nullptr && this->serviceInstanceId_ == nullptr && this->serviceNameChn_ == nullptr && this->serviceNameEng_ == nullptr
        && this->serviceType_ == nullptr && this->serviceVersion_ == nullptr && this->timestamp_ == nullptr && this->userId_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
      inline DeployDetails& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DeployDetails& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // cycle Field Functions 
      bool hasCycle() const { return this->cycle_ != nullptr;};
      void deleteCycle() { this->cycle_ = nullptr;};
      inline string getCycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
      inline DeployDetails& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


      // deploySucceeded Field Functions 
      bool hasDeploySucceeded() const { return this->deploySucceeded_ != nullptr;};
      void deleteDeploySucceeded() { this->deploySucceeded_ = nullptr;};
      inline string getDeploySucceeded() const { DARABONBA_PTR_GET_DEFAULT(deploySucceeded_, "") };
      inline DeployDetails& setDeploySucceeded(string deploySucceeded) { DARABONBA_PTR_SET_VALUE(deploySucceeded_, deploySucceeded) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline DeployDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorDetail Field Functions 
      bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
      void deleteErrorDetail() { this->errorDetail_ = nullptr;};
      inline string getErrorDetail() const { DARABONBA_PTR_GET_DEFAULT(errorDetail_, "") };
      inline DeployDetails& setErrorDetail(string errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };


      // errorType Field Functions 
      bool hasErrorType() const { return this->errorType_ != nullptr;};
      void deleteErrorType() { this->errorType_ = nullptr;};
      inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
      inline DeployDetails& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline DeployDetails& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceInstanceId Field Functions 
      bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
      void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
      inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
      inline DeployDetails& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


      // serviceNameChn Field Functions 
      bool hasServiceNameChn() const { return this->serviceNameChn_ != nullptr;};
      void deleteServiceNameChn() { this->serviceNameChn_ = nullptr;};
      inline string getServiceNameChn() const { DARABONBA_PTR_GET_DEFAULT(serviceNameChn_, "") };
      inline DeployDetails& setServiceNameChn(string serviceNameChn) { DARABONBA_PTR_SET_VALUE(serviceNameChn_, serviceNameChn) };


      // serviceNameEng Field Functions 
      bool hasServiceNameEng() const { return this->serviceNameEng_ != nullptr;};
      void deleteServiceNameEng() { this->serviceNameEng_ = nullptr;};
      inline string getServiceNameEng() const { DARABONBA_PTR_GET_DEFAULT(serviceNameEng_, "") };
      inline DeployDetails& setServiceNameEng(string serviceNameEng) { DARABONBA_PTR_SET_VALUE(serviceNameEng_, serviceNameEng) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline DeployDetails& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // serviceVersion Field Functions 
      bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
      void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
      inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
      inline DeployDetails& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline DeployDetails& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline DeployDetails& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The total number of entries that meet the specified conditions.
      shared_ptr<string> count_ {};
      // The time when the service instance was created.
      shared_ptr<string> createTime_ {};
      // The period over which data is aggregated.
      shared_ptr<string> cycle_ {};
      // The indicates whether the deployment was successful.
      shared_ptr<string> deploySucceeded_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error description.
      shared_ptr<string> errorDetail_ {};
      // The type of error that caused the deployment to fail.
      shared_ptr<string> errorType_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The service instance ID.
      shared_ptr<string> serviceInstanceId_ {};
      // The name of the service in Chinese.
      shared_ptr<string> serviceNameChn_ {};
      // The name of the service in English.
      shared_ptr<string> serviceNameEng_ {};
      // The type of service. 
      // 
      // Possible values:
      // 
      // - private: Deployed under the user\\"s account.
      // - managed: Hosted under the service provider\\"s account.
      // - operation: Managed operation service.
      shared_ptr<string> serviceType_ {};
      // The service version.
      shared_ptr<string> serviceVersion_ {};
      // The timestamp when the response is returned.
      shared_ptr<string> timestamp_ {};
      // The aliuid of user.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->deployDetails_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // deployDetails Field Functions 
    bool hasDeployDetails() const { return this->deployDetails_ != nullptr;};
    void deleteDeployDetails() { this->deployDetails_ = nullptr;};
    inline const vector<ListServiceInstanceDeployDetailsResponseBody::DeployDetails> & getDeployDetails() const { DARABONBA_PTR_GET_CONST(deployDetails_, vector<ListServiceInstanceDeployDetailsResponseBody::DeployDetails>) };
    inline vector<ListServiceInstanceDeployDetailsResponseBody::DeployDetails> getDeployDetails() { DARABONBA_PTR_GET(deployDetails_, vector<ListServiceInstanceDeployDetailsResponseBody::DeployDetails>) };
    inline ListServiceInstanceDeployDetailsResponseBody& setDeployDetails(const vector<ListServiceInstanceDeployDetailsResponseBody::DeployDetails> & deployDetails) { DARABONBA_PTR_SET_VALUE(deployDetails_, deployDetails) };
    inline ListServiceInstanceDeployDetailsResponseBody& setDeployDetails(vector<ListServiceInstanceDeployDetailsResponseBody::DeployDetails> && deployDetails) { DARABONBA_PTR_SET_RVALUE(deployDetails_, deployDetails) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceDeployDetailsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceDeployDetailsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceDeployDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceInstanceDeployDetailsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the service instance deployment.
    shared_ptr<vector<ListServiceInstanceDeployDetailsResponseBody::DeployDetails>> deployDetails_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif

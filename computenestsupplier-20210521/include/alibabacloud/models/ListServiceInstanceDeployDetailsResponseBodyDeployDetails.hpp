// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEDEPLOYDETAILSRESPONSEBODYDEPLOYDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEDEPLOYDETAILSRESPONSEBODYDEPLOYDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceInstanceDeployDetailsResponseBodyDeployDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceDeployDetailsResponseBodyDeployDetails& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceDeployDetailsResponseBodyDeployDetails& obj) { 
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
    ListServiceInstanceDeployDetailsResponseBodyDeployDetails() = default ;
    ListServiceInstanceDeployDetailsResponseBodyDeployDetails(const ListServiceInstanceDeployDetailsResponseBodyDeployDetails &) = default ;
    ListServiceInstanceDeployDetailsResponseBodyDeployDetails(ListServiceInstanceDeployDetailsResponseBodyDeployDetails &&) = default ;
    ListServiceInstanceDeployDetailsResponseBodyDeployDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceDeployDetailsResponseBodyDeployDetails() = default ;
    ListServiceInstanceDeployDetailsResponseBodyDeployDetails& operator=(const ListServiceInstanceDeployDetailsResponseBodyDeployDetails &) = default ;
    ListServiceInstanceDeployDetailsResponseBodyDeployDetails& operator=(ListServiceInstanceDeployDetailsResponseBodyDeployDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->createTime_ != nullptr && this->cycle_ != nullptr && this->deploySucceeded_ != nullptr && this->errorCode_ != nullptr && this->errorDetail_ != nullptr
        && this->errorType_ != nullptr && this->serviceId_ != nullptr && this->serviceInstanceId_ != nullptr && this->serviceNameChn_ != nullptr && this->serviceNameEng_ != nullptr
        && this->serviceType_ != nullptr && this->serviceVersion_ != nullptr && this->timestamp_ != nullptr && this->userId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // cycle Field Functions 
    bool hasCycle() const { return this->cycle_ != nullptr;};
    void deleteCycle() { this->cycle_ = nullptr;};
    inline string cycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


    // deploySucceeded Field Functions 
    bool hasDeploySucceeded() const { return this->deploySucceeded_ != nullptr;};
    void deleteDeploySucceeded() { this->deploySucceeded_ = nullptr;};
    inline string deploySucceeded() const { DARABONBA_PTR_GET_DEFAULT(deploySucceeded_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setDeploySucceeded(string deploySucceeded) { DARABONBA_PTR_SET_VALUE(deploySucceeded_, deploySucceeded) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorDetail Field Functions 
    bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
    void deleteErrorDetail() { this->errorDetail_ = nullptr;};
    inline string errorDetail() const { DARABONBA_PTR_GET_DEFAULT(errorDetail_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setErrorDetail(string errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string errorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceNameChn Field Functions 
    bool hasServiceNameChn() const { return this->serviceNameChn_ != nullptr;};
    void deleteServiceNameChn() { this->serviceNameChn_ = nullptr;};
    inline string serviceNameChn() const { DARABONBA_PTR_GET_DEFAULT(serviceNameChn_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setServiceNameChn(string serviceNameChn) { DARABONBA_PTR_SET_VALUE(serviceNameChn_, serviceNameChn) };


    // serviceNameEng Field Functions 
    bool hasServiceNameEng() const { return this->serviceNameEng_ != nullptr;};
    void deleteServiceNameEng() { this->serviceNameEng_ = nullptr;};
    inline string serviceNameEng() const { DARABONBA_PTR_GET_DEFAULT(serviceNameEng_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setServiceNameEng(string serviceNameEng) { DARABONBA_PTR_SET_VALUE(serviceNameEng_, serviceNameEng) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListServiceInstanceDeployDetailsResponseBodyDeployDetails& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The total number of entries that meet the specified conditions.
    std::shared_ptr<string> count_ = nullptr;
    // The time when the service instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The period over which data is aggregated.
    std::shared_ptr<string> cycle_ = nullptr;
    // The indicates whether the deployment was successful.
    std::shared_ptr<string> deploySucceeded_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error description.
    std::shared_ptr<string> errorDetail_ = nullptr;
    // The type of error that caused the deployment to fail.
    std::shared_ptr<string> errorType_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service instance ID.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The name of the service in Chinese.
    std::shared_ptr<string> serviceNameChn_ = nullptr;
    // The name of the service in English.
    std::shared_ptr<string> serviceNameEng_ = nullptr;
    // The type of service. 
    // 
    // Possible values:
    // 
    // - private: Deployed under the user\\"s account.
    // - managed: Hosted under the service provider\\"s account.
    // - operation: Managed operation service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The service version.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The timestamp when the response is returned.
    std::shared_ptr<string> timestamp_ = nullptr;
    // The aliuid of user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif

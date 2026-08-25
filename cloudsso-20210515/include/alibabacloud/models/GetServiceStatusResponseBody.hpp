// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetServiceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
    };
    GetServiceStatusResponseBody() = default ;
    GetServiceStatusResponseBody(const GetServiceStatusResponseBody &) = default ;
    GetServiceStatusResponseBody(GetServiceStatusResponseBody &&) = default ;
    GetServiceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceStatusResponseBody() = default ;
    GetServiceStatusResponseBody& operator=(const GetServiceStatusResponseBody &) = default ;
    GetServiceStatusResponseBody& operator=(GetServiceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceStatus& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(PrerequisiteCheckResult, prerequisiteCheckResult_);
        DARABONBA_PTR_TO_JSON(RegionsInUse, regionsInUse_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(PrerequisiteCheckResult, prerequisiteCheckResult_);
        DARABONBA_PTR_FROM_JSON(RegionsInUse, regionsInUse_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ServiceStatus() = default ;
      ServiceStatus(const ServiceStatus &) = default ;
      ServiceStatus(ServiceStatus &&) = default ;
      ServiceStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceStatus() = default ;
      ServiceStatus& operator=(const ServiceStatus &) = default ;
      ServiceStatus& operator=(ServiceStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->prerequisiteCheckResult_ == nullptr && this->regionsInUse_ == nullptr && this->status_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline ServiceStatus& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // prerequisiteCheckResult Field Functions 
      bool hasPrerequisiteCheckResult() const { return this->prerequisiteCheckResult_ != nullptr;};
      void deletePrerequisiteCheckResult() { this->prerequisiteCheckResult_ = nullptr;};
      inline string getPrerequisiteCheckResult() const { DARABONBA_PTR_GET_DEFAULT(prerequisiteCheckResult_, "") };
      inline ServiceStatus& setPrerequisiteCheckResult(string prerequisiteCheckResult) { DARABONBA_PTR_SET_VALUE(prerequisiteCheckResult_, prerequisiteCheckResult) };


      // regionsInUse Field Functions 
      bool hasRegionsInUse() const { return this->regionsInUse_ != nullptr;};
      void deleteRegionsInUse() { this->regionsInUse_ = nullptr;};
      inline const vector<string> & getRegionsInUse() const { DARABONBA_PTR_GET_CONST(regionsInUse_, vector<string>) };
      inline vector<string> getRegionsInUse() { DARABONBA_PTR_GET(regionsInUse_, vector<string>) };
      inline ServiceStatus& setRegionsInUse(const vector<string> & regionsInUse) { DARABONBA_PTR_SET_VALUE(regionsInUse_, regionsInUse) };
      inline ServiceStatus& setRegionsInUse(vector<string> && regionsInUse) { DARABONBA_PTR_SET_RVALUE(regionsInUse_, regionsInUse) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of your Alibaba Cloud account.
      shared_ptr<string> accountId_ {};
      // Indicates whether the prerequisites for enabling CloudSSO are met. Valid values:
      // 
      // - Success: The prerequisites are met.
      // 
      // - Failed: The prerequisites are not met.
      // 
      // > The value of this parameter is returned only if the value of `Status` is `Disabled`.
      shared_ptr<string> prerequisiteCheckResult_ {};
      // The IDs of regions where directories are deployed.
      shared_ptr<vector<string>> regionsInUse_ {};
      // The status of CloudSSO. Valid values:
      // 
      // - Enabled
      // 
      // - Disabled
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline const GetServiceStatusResponseBody::ServiceStatus & getServiceStatus() const { DARABONBA_PTR_GET_CONST(serviceStatus_, GetServiceStatusResponseBody::ServiceStatus) };
    inline GetServiceStatusResponseBody::ServiceStatus getServiceStatus() { DARABONBA_PTR_GET(serviceStatus_, GetServiceStatusResponseBody::ServiceStatus) };
    inline GetServiceStatusResponseBody& setServiceStatus(const GetServiceStatusResponseBody::ServiceStatus & serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };
    inline GetServiceStatusResponseBody& setServiceStatus(GetServiceStatusResponseBody::ServiceStatus && serviceStatus) { DARABONBA_PTR_SET_RVALUE(serviceStatus_, serviceStatus) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status information of CloudSSO.
    shared_ptr<GetServiceStatusResponseBody::ServiceStatus> serviceStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADESERVICEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADESERVICEINSTANCERESPONSEBODY_HPP_
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
  class UpgradeServiceInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpgradeRequiredParameters, upgradeRequiredParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpgradeRequiredParameters, upgradeRequiredParameters_);
    };
    UpgradeServiceInstanceResponseBody() = default ;
    UpgradeServiceInstanceResponseBody(const UpgradeServiceInstanceResponseBody &) = default ;
    UpgradeServiceInstanceResponseBody(UpgradeServiceInstanceResponseBody &&) = default ;
    UpgradeServiceInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeServiceInstanceResponseBody() = default ;
    UpgradeServiceInstanceResponseBody& operator=(const UpgradeServiceInstanceResponseBody &) = default ;
    UpgradeServiceInstanceResponseBody& operator=(UpgradeServiceInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->serviceInstanceId_ != nullptr && this->status_ != nullptr && this->upgradeRequiredParameters_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeServiceInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline UpgradeServiceInstanceResponseBody& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpgradeServiceInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // upgradeRequiredParameters Field Functions 
    bool hasUpgradeRequiredParameters() const { return this->upgradeRequiredParameters_ != nullptr;};
    void deleteUpgradeRequiredParameters() { this->upgradeRequiredParameters_ = nullptr;};
    inline const vector<string> & upgradeRequiredParameters() const { DARABONBA_PTR_GET_CONST(upgradeRequiredParameters_, vector<string>) };
    inline vector<string> upgradeRequiredParameters() { DARABONBA_PTR_GET(upgradeRequiredParameters_, vector<string>) };
    inline UpgradeServiceInstanceResponseBody& setUpgradeRequiredParameters(const vector<string> & upgradeRequiredParameters) { DARABONBA_PTR_SET_VALUE(upgradeRequiredParameters_, upgradeRequiredParameters) };
    inline UpgradeServiceInstanceResponseBody& setUpgradeRequiredParameters(vector<string> && upgradeRequiredParameters) { DARABONBA_PTR_SET_RVALUE(upgradeRequiredParameters_, upgradeRequiredParameters) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the service instance.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The deployment state of the service instance. Valid values:
    // 
    // *   Created
    // *   Deploying
    // *   DeployedFailed
    // *   Deployed
    // *   Upgrading
    // *   Deleting
    // *   Deleted
    // *   DeletedFailed
    std::shared_ptr<string> status_ = nullptr;
    // The parameters required for the upgrade.
    std::shared_ptr<vector<string>> upgradeRequiredParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif

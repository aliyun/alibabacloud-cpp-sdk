// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECLOGDELIVERIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECLOGDELIVERIESRESPONSEBODY_HPP_
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
  class DescribeApisecLogDeliveriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecLogDeliveriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryConfigs, deliveryConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecLogDeliveriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryConfigs, deliveryConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApisecLogDeliveriesResponseBody() = default ;
    DescribeApisecLogDeliveriesResponseBody(const DescribeApisecLogDeliveriesResponseBody &) = default ;
    DescribeApisecLogDeliveriesResponseBody(DescribeApisecLogDeliveriesResponseBody &&) = default ;
    DescribeApisecLogDeliveriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecLogDeliveriesResponseBody() = default ;
    DescribeApisecLogDeliveriesResponseBody& operator=(const DescribeApisecLogDeliveriesResponseBody &) = default ;
    DescribeApisecLogDeliveriesResponseBody& operator=(DescribeApisecLogDeliveriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeliveryConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(AssertKey, assertKey_);
        DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
        DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(AssertKey, assertKey_);
        DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
        DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DeliveryConfigs() = default ;
      DeliveryConfigs(const DeliveryConfigs &) = default ;
      DeliveryConfigs(DeliveryConfigs &&) = default ;
      DeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryConfigs() = default ;
      DeliveryConfigs& operator=(const DeliveryConfigs &) = default ;
      DeliveryConfigs& operator=(DeliveryConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assertKey_ == nullptr
        && this->logRegionId_ == nullptr && this->logStoreName_ == nullptr && this->projectName_ == nullptr && this->status_ == nullptr; };
      // assertKey Field Functions 
      bool hasAssertKey() const { return this->assertKey_ != nullptr;};
      void deleteAssertKey() { this->assertKey_ = nullptr;};
      inline string getAssertKey() const { DARABONBA_PTR_GET_DEFAULT(assertKey_, "") };
      inline DeliveryConfigs& setAssertKey(string assertKey) { DARABONBA_PTR_SET_VALUE(assertKey_, assertKey) };


      // logRegionId Field Functions 
      bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
      void deleteLogRegionId() { this->logRegionId_ = nullptr;};
      inline string getLogRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
      inline DeliveryConfigs& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


      // logStoreName Field Functions 
      bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
      void deleteLogStoreName() { this->logStoreName_ = nullptr;};
      inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
      inline DeliveryConfigs& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline DeliveryConfigs& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline DeliveryConfigs& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The type of the log subscription. Valid values:
      // 
      // *   **risk**: risk information.
      // *   **event**: attack event information.
      // *   **asset**: asset information.
      shared_ptr<string> assertKey_ {};
      // The ID of the region where logs are stored.
      shared_ptr<string> logRegionId_ {};
      // The name of the Logstore in Simple Log Service.
      shared_ptr<string> logStoreName_ {};
      // The name of the project in Simple Log Service.
      shared_ptr<string> projectName_ {};
      // The status of API security log subscription. Valid values:
      // 
      // *   **true**: enabled.
      // *   **false**: disabled.
      shared_ptr<bool> status_ {};
    };

    virtual bool empty() const override { return this->deliveryConfigs_ == nullptr
        && this->requestId_ == nullptr; };
    // deliveryConfigs Field Functions 
    bool hasDeliveryConfigs() const { return this->deliveryConfigs_ != nullptr;};
    void deleteDeliveryConfigs() { this->deliveryConfigs_ = nullptr;};
    inline const vector<DescribeApisecLogDeliveriesResponseBody::DeliveryConfigs> & getDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(deliveryConfigs_, vector<DescribeApisecLogDeliveriesResponseBody::DeliveryConfigs>) };
    inline vector<DescribeApisecLogDeliveriesResponseBody::DeliveryConfigs> getDeliveryConfigs() { DARABONBA_PTR_GET(deliveryConfigs_, vector<DescribeApisecLogDeliveriesResponseBody::DeliveryConfigs>) };
    inline DescribeApisecLogDeliveriesResponseBody& setDeliveryConfigs(const vector<DescribeApisecLogDeliveriesResponseBody::DeliveryConfigs> & deliveryConfigs) { DARABONBA_PTR_SET_VALUE(deliveryConfigs_, deliveryConfigs) };
    inline DescribeApisecLogDeliveriesResponseBody& setDeliveryConfigs(vector<DescribeApisecLogDeliveriesResponseBody::DeliveryConfigs> && deliveryConfigs) { DARABONBA_PTR_SET_RVALUE(deliveryConfigs_, deliveryConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecLogDeliveriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of API security log subscription.
    shared_ptr<vector<DescribeApisecLogDeliveriesResponseBody::DeliveryConfigs>> deliveryConfigs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif

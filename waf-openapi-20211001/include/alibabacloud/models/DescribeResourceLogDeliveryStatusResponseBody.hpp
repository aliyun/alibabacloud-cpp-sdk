// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGDELIVERYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGDELIVERYSTATUSRESPONSEBODY_HPP_
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
  class DescribeResourceLogDeliveryStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceLogDeliveryStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogConfigs, logConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceLogDeliveryStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogConfigs, logConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeResourceLogDeliveryStatusResponseBody() = default ;
    DescribeResourceLogDeliveryStatusResponseBody(const DescribeResourceLogDeliveryStatusResponseBody &) = default ;
    DescribeResourceLogDeliveryStatusResponseBody(DescribeResourceLogDeliveryStatusResponseBody &&) = default ;
    DescribeResourceLogDeliveryStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceLogDeliveryStatusResponseBody() = default ;
    DescribeResourceLogDeliveryStatusResponseBody& operator=(const DescribeResourceLogDeliveryStatusResponseBody &) = default ;
    DescribeResourceLogDeliveryStatusResponseBody& operator=(DescribeResourceLogDeliveryStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
        DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, LogConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
        DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      LogConfigs() = default ;
      LogConfigs(const LogConfigs &) = default ;
      LogConfigs(LogConfigs &&) = default ;
      LogConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogConfigs() = default ;
      LogConfigs& operator=(const LogConfigs &) = default ;
      LogConfigs& operator=(LogConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deliveryName_ == nullptr
        && this->deliveryType_ == nullptr && this->resource_ == nullptr && this->status_ == nullptr; };
      // deliveryName Field Functions 
      bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
      void deleteDeliveryName() { this->deliveryName_ = nullptr;};
      inline string getDeliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
      inline LogConfigs& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


      // deliveryType Field Functions 
      bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
      void deleteDeliveryType() { this->deliveryType_ = nullptr;};
      inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
      inline LogConfigs& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline LogConfigs& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline LogConfigs& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> deliveryName_ {};
      shared_ptr<string> deliveryType_ {};
      shared_ptr<string> resource_ {};
      shared_ptr<bool> status_ {};
    };

    virtual bool empty() const override { return this->logConfigs_ == nullptr
        && this->requestId_ == nullptr; };
    // logConfigs Field Functions 
    bool hasLogConfigs() const { return this->logConfigs_ != nullptr;};
    void deleteLogConfigs() { this->logConfigs_ = nullptr;};
    inline const vector<DescribeResourceLogDeliveryStatusResponseBody::LogConfigs> & getLogConfigs() const { DARABONBA_PTR_GET_CONST(logConfigs_, vector<DescribeResourceLogDeliveryStatusResponseBody::LogConfigs>) };
    inline vector<DescribeResourceLogDeliveryStatusResponseBody::LogConfigs> getLogConfigs() { DARABONBA_PTR_GET(logConfigs_, vector<DescribeResourceLogDeliveryStatusResponseBody::LogConfigs>) };
    inline DescribeResourceLogDeliveryStatusResponseBody& setLogConfigs(const vector<DescribeResourceLogDeliveryStatusResponseBody::LogConfigs> & logConfigs) { DARABONBA_PTR_SET_VALUE(logConfigs_, logConfigs) };
    inline DescribeResourceLogDeliveryStatusResponseBody& setLogConfigs(vector<DescribeResourceLogDeliveryStatusResponseBody::LogConfigs> && logConfigs) { DARABONBA_PTR_SET_RVALUE(logConfigs_, logConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceLogDeliveryStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeResourceLogDeliveryStatusResponseBody::LogConfigs>> logConfigs_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif

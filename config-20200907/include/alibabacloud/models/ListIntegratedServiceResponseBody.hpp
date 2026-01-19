// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATEDSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATEDSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListIntegratedServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegratedServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegratedServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIntegratedServiceResponseBody() = default ;
    ListIntegratedServiceResponseBody(const ListIntegratedServiceResponseBody &) = default ;
    ListIntegratedServiceResponseBody(ListIntegratedServiceResponseBody &&) = default ;
    ListIntegratedServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegratedServiceResponseBody() = default ;
    ListIntegratedServiceResponseBody& operator=(const ListIntegratedServiceResponseBody &) = default ;
    ListIntegratedServiceResponseBody& operator=(ListIntegratedServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AggregatorDeliveryDataType, aggregatorDeliveryDataType_);
        DARABONBA_PTR_TO_JSON(IntegratedTypes, integratedTypes_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AggregatorDeliveryDataType, aggregatorDeliveryDataType_);
        DARABONBA_PTR_FROM_JSON(IntegratedTypes, integratedTypes_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aggregatorDeliveryDataType_ == nullptr
        && this->integratedTypes_ == nullptr && this->serviceCode_ == nullptr && this->serviceName_ == nullptr && this->status_ == nullptr; };
      // aggregatorDeliveryDataType Field Functions 
      bool hasAggregatorDeliveryDataType() const { return this->aggregatorDeliveryDataType_ != nullptr;};
      void deleteAggregatorDeliveryDataType() { this->aggregatorDeliveryDataType_ = nullptr;};
      inline string getAggregatorDeliveryDataType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorDeliveryDataType_, "") };
      inline Data& setAggregatorDeliveryDataType(string aggregatorDeliveryDataType) { DARABONBA_PTR_SET_VALUE(aggregatorDeliveryDataType_, aggregatorDeliveryDataType) };


      // integratedTypes Field Functions 
      bool hasIntegratedTypes() const { return this->integratedTypes_ != nullptr;};
      void deleteIntegratedTypes() { this->integratedTypes_ = nullptr;};
      inline string getIntegratedTypes() const { DARABONBA_PTR_GET_DEFAULT(integratedTypes_, "") };
      inline Data& setIntegratedTypes(string integratedTypes) { DARABONBA_PTR_SET_VALUE(integratedTypes_, integratedTypes) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Data& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline Data& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The type of the event that is integrated across accounts. Valid values:
      // 
      // *   NonCompliantNotification: non-compliance event
      shared_ptr<string> aggregatorDeliveryDataType_ {};
      // The types of the integrated events. Separate multiple event types with commas (,). Valid values:
      // 
      // *   ConfigurationItemChangeNotification: resource change event
      // *   NonCompliantNotification: non-compliance event
      shared_ptr<string> integratedTypes_ {};
      // The identifier of the cloud service. Valid values:
      // 
      // *   eventbridge: EventBridge
      // *   cms: CloudMonitor
      // *   bpstudio: Cloud Architect Design Tools
      shared_ptr<string> serviceCode_ {};
      // The name of the cloud service.
      shared_ptr<string> serviceName_ {};
      // The integration status of the cloud service. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListIntegratedServiceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListIntegratedServiceResponseBody::Data>) };
    inline vector<ListIntegratedServiceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListIntegratedServiceResponseBody::Data>) };
    inline ListIntegratedServiceResponseBody& setData(const vector<ListIntegratedServiceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIntegratedServiceResponseBody& setData(vector<ListIntegratedServiceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegratedServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the cloud service that can be integrated.
    shared_ptr<vector<ListIntegratedServiceResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

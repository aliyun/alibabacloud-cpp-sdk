// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATEDSERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATEDSERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetIntegratedServiceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegratedServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorDeliveryDataType, aggregatorDeliveryDataType_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(IntegratedTypes, integratedTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegratedServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorDeliveryDataType, aggregatorDeliveryDataType_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(IntegratedTypes, integratedTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIntegratedServiceStatusResponseBody() = default ;
    GetIntegratedServiceStatusResponseBody(const GetIntegratedServiceStatusResponseBody &) = default ;
    GetIntegratedServiceStatusResponseBody(GetIntegratedServiceStatusResponseBody &&) = default ;
    GetIntegratedServiceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegratedServiceStatusResponseBody() = default ;
    GetIntegratedServiceStatusResponseBody& operator=(const GetIntegratedServiceStatusResponseBody &) = default ;
    GetIntegratedServiceStatusResponseBody& operator=(GetIntegratedServiceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorDeliveryDataType_ == nullptr
        && this->data_ == nullptr && this->integratedTypes_ == nullptr && this->requestId_ == nullptr; };
    // aggregatorDeliveryDataType Field Functions 
    bool hasAggregatorDeliveryDataType() const { return this->aggregatorDeliveryDataType_ != nullptr;};
    void deleteAggregatorDeliveryDataType() { this->aggregatorDeliveryDataType_ = nullptr;};
    inline string getAggregatorDeliveryDataType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorDeliveryDataType_, "") };
    inline GetIntegratedServiceStatusResponseBody& setAggregatorDeliveryDataType(string aggregatorDeliveryDataType) { DARABONBA_PTR_SET_VALUE(aggregatorDeliveryDataType_, aggregatorDeliveryDataType) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool getData() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline GetIntegratedServiceStatusResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // integratedTypes Field Functions 
    bool hasIntegratedTypes() const { return this->integratedTypes_ != nullptr;};
    void deleteIntegratedTypes() { this->integratedTypes_ = nullptr;};
    inline string getIntegratedTypes() const { DARABONBA_PTR_GET_DEFAULT(integratedTypes_, "") };
    inline GetIntegratedServiceStatusResponseBody& setIntegratedTypes(string integratedTypes) { DARABONBA_PTR_SET_VALUE(integratedTypes_, integratedTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIntegratedServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The type of the event that is integrated across accounts. Valid values:
    // 
    // *   NonCompliantNotification: non-compliance event
    shared_ptr<string> aggregatorDeliveryDataType_ {};
    // Indicates whether the product has been integrated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> data_ {};
    // The types of the integrated events. Separate multiple event types with commas (,). Valid values:
    // 
    // *   ConfigurationItemChangeNotification: resource change event
    // *   NonCompliantNotification: non-compliance event
    shared_ptr<string> integratedTypes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

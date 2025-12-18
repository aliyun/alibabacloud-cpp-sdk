// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATEDSERVICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATEDSERVICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListIntegratedServiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegratedServiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorDeliveryDataType, aggregatorDeliveryDataType_);
      DARABONBA_PTR_TO_JSON(IntegratedTypes, integratedTypes_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegratedServiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorDeliveryDataType, aggregatorDeliveryDataType_);
      DARABONBA_PTR_FROM_JSON(IntegratedTypes, integratedTypes_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListIntegratedServiceResponseBodyData() = default ;
    ListIntegratedServiceResponseBodyData(const ListIntegratedServiceResponseBodyData &) = default ;
    ListIntegratedServiceResponseBodyData(ListIntegratedServiceResponseBodyData &&) = default ;
    ListIntegratedServiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegratedServiceResponseBodyData() = default ;
    ListIntegratedServiceResponseBodyData& operator=(const ListIntegratedServiceResponseBodyData &) = default ;
    ListIntegratedServiceResponseBodyData& operator=(ListIntegratedServiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorDeliveryDataType_ == nullptr
        && return this->integratedTypes_ == nullptr && return this->serviceCode_ == nullptr && return this->serviceName_ == nullptr && return this->status_ == nullptr; };
    // aggregatorDeliveryDataType Field Functions 
    bool hasAggregatorDeliveryDataType() const { return this->aggregatorDeliveryDataType_ != nullptr;};
    void deleteAggregatorDeliveryDataType() { this->aggregatorDeliveryDataType_ = nullptr;};
    inline string aggregatorDeliveryDataType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorDeliveryDataType_, "") };
    inline ListIntegratedServiceResponseBodyData& setAggregatorDeliveryDataType(string aggregatorDeliveryDataType) { DARABONBA_PTR_SET_VALUE(aggregatorDeliveryDataType_, aggregatorDeliveryDataType) };


    // integratedTypes Field Functions 
    bool hasIntegratedTypes() const { return this->integratedTypes_ != nullptr;};
    void deleteIntegratedTypes() { this->integratedTypes_ = nullptr;};
    inline string integratedTypes() const { DARABONBA_PTR_GET_DEFAULT(integratedTypes_, "") };
    inline ListIntegratedServiceResponseBodyData& setIntegratedTypes(string integratedTypes) { DARABONBA_PTR_SET_VALUE(integratedTypes_, integratedTypes) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline ListIntegratedServiceResponseBodyData& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListIntegratedServiceResponseBodyData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline ListIntegratedServiceResponseBodyData& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of the event that is integrated across accounts. Valid values:
    // 
    // *   NonCompliantNotification: non-compliance event
    std::shared_ptr<string> aggregatorDeliveryDataType_ = nullptr;
    // The types of the integrated events. Separate multiple event types with commas (,). Valid values:
    // 
    // *   ConfigurationItemChangeNotification: resource change event
    // *   NonCompliantNotification: non-compliance event
    std::shared_ptr<string> integratedTypes_ = nullptr;
    // The identifier of the cloud service. Valid values:
    // 
    // *   eventbridge: EventBridge
    // *   cms: CloudMonitor
    // *   bpstudio: Cloud Architect Design Tools
    std::shared_ptr<string> serviceCode_ = nullptr;
    // The name of the cloud service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The integration status of the cloud service. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

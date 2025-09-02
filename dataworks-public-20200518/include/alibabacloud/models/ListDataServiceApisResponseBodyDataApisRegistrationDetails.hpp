// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPISRESPONSEBODYDATAAPISREGISTRATIONDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPISRESPONSEBODYDATAAPISREGISTRATIONDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationErrorCodes.hpp>
#include <alibabacloud/models/ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationRequestParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApisResponseBodyDataApisRegistrationDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApisResponseBodyDataApisRegistrationDetails& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResultSample, failedResultSample_);
      DARABONBA_PTR_TO_JSON(RegistrationErrorCodes, registrationErrorCodes_);
      DARABONBA_PTR_TO_JSON(RegistrationRequestParameters, registrationRequestParameters_);
      DARABONBA_PTR_TO_JSON(ServiceContentType, serviceContentType_);
      DARABONBA_PTR_TO_JSON(ServiceHost, serviceHost_);
      DARABONBA_PTR_TO_JSON(ServicePath, servicePath_);
      DARABONBA_PTR_TO_JSON(ServiceRequestBodyDescription, serviceRequestBodyDescription_);
      DARABONBA_PTR_TO_JSON(SuccessfulResultSample, successfulResultSample_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApisResponseBodyDataApisRegistrationDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResultSample, failedResultSample_);
      DARABONBA_PTR_FROM_JSON(RegistrationErrorCodes, registrationErrorCodes_);
      DARABONBA_PTR_FROM_JSON(RegistrationRequestParameters, registrationRequestParameters_);
      DARABONBA_PTR_FROM_JSON(ServiceContentType, serviceContentType_);
      DARABONBA_PTR_FROM_JSON(ServiceHost, serviceHost_);
      DARABONBA_PTR_FROM_JSON(ServicePath, servicePath_);
      DARABONBA_PTR_FROM_JSON(ServiceRequestBodyDescription, serviceRequestBodyDescription_);
      DARABONBA_PTR_FROM_JSON(SuccessfulResultSample, successfulResultSample_);
    };
    ListDataServiceApisResponseBodyDataApisRegistrationDetails() = default ;
    ListDataServiceApisResponseBodyDataApisRegistrationDetails(const ListDataServiceApisResponseBodyDataApisRegistrationDetails &) = default ;
    ListDataServiceApisResponseBodyDataApisRegistrationDetails(ListDataServiceApisResponseBodyDataApisRegistrationDetails &&) = default ;
    ListDataServiceApisResponseBodyDataApisRegistrationDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApisResponseBodyDataApisRegistrationDetails() = default ;
    ListDataServiceApisResponseBodyDataApisRegistrationDetails& operator=(const ListDataServiceApisResponseBodyDataApisRegistrationDetails &) = default ;
    ListDataServiceApisResponseBodyDataApisRegistrationDetails& operator=(ListDataServiceApisResponseBodyDataApisRegistrationDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedResultSample_ != nullptr
        && this->registrationErrorCodes_ != nullptr && this->registrationRequestParameters_ != nullptr && this->serviceContentType_ != nullptr && this->serviceHost_ != nullptr && this->servicePath_ != nullptr
        && this->serviceRequestBodyDescription_ != nullptr && this->successfulResultSample_ != nullptr; };
    // failedResultSample Field Functions 
    bool hasFailedResultSample() const { return this->failedResultSample_ != nullptr;};
    void deleteFailedResultSample() { this->failedResultSample_ = nullptr;};
    inline string failedResultSample() const { DARABONBA_PTR_GET_DEFAULT(failedResultSample_, "") };
    inline ListDataServiceApisResponseBodyDataApisRegistrationDetails& setFailedResultSample(string failedResultSample) { DARABONBA_PTR_SET_VALUE(failedResultSample_, failedResultSample) };


    // registrationErrorCodes Field Functions 
    bool hasRegistrationErrorCodes() const { return this->registrationErrorCodes_ != nullptr;};
    void deleteRegistrationErrorCodes() { this->registrationErrorCodes_ = nullptr;};
    inline const vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationErrorCodes> & registrationErrorCodes() const { DARABONBA_PTR_GET_CONST(registrationErrorCodes_, vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationErrorCodes>) };
    inline vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationErrorCodes> registrationErrorCodes() { DARABONBA_PTR_GET(registrationErrorCodes_, vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationErrorCodes>) };
    inline ListDataServiceApisResponseBodyDataApisRegistrationDetails& setRegistrationErrorCodes(const vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationErrorCodes> & registrationErrorCodes) { DARABONBA_PTR_SET_VALUE(registrationErrorCodes_, registrationErrorCodes) };
    inline ListDataServiceApisResponseBodyDataApisRegistrationDetails& setRegistrationErrorCodes(vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationErrorCodes> && registrationErrorCodes) { DARABONBA_PTR_SET_RVALUE(registrationErrorCodes_, registrationErrorCodes) };


    // registrationRequestParameters Field Functions 
    bool hasRegistrationRequestParameters() const { return this->registrationRequestParameters_ != nullptr;};
    void deleteRegistrationRequestParameters() { this->registrationRequestParameters_ = nullptr;};
    inline const vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationRequestParameters> & registrationRequestParameters() const { DARABONBA_PTR_GET_CONST(registrationRequestParameters_, vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationRequestParameters>) };
    inline vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationRequestParameters> registrationRequestParameters() { DARABONBA_PTR_GET(registrationRequestParameters_, vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationRequestParameters>) };
    inline ListDataServiceApisResponseBodyDataApisRegistrationDetails& setRegistrationRequestParameters(const vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationRequestParameters> & registrationRequestParameters) { DARABONBA_PTR_SET_VALUE(registrationRequestParameters_, registrationRequestParameters) };
    inline ListDataServiceApisResponseBodyDataApisRegistrationDetails& setRegistrationRequestParameters(vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationRequestParameters> && registrationRequestParameters) { DARABONBA_PTR_SET_RVALUE(registrationRequestParameters_, registrationRequestParameters) };


    // serviceContentType Field Functions 
    bool hasServiceContentType() const { return this->serviceContentType_ != nullptr;};
    void deleteServiceContentType() { this->serviceContentType_ = nullptr;};
    inline int32_t serviceContentType() const { DARABONBA_PTR_GET_DEFAULT(serviceContentType_, 0) };
    inline ListDataServiceApisResponseBodyDataApisRegistrationDetails& setServiceContentType(int32_t serviceContentType) { DARABONBA_PTR_SET_VALUE(serviceContentType_, serviceContentType) };


    // serviceHost Field Functions 
    bool hasServiceHost() const { return this->serviceHost_ != nullptr;};
    void deleteServiceHost() { this->serviceHost_ = nullptr;};
    inline string serviceHost() const { DARABONBA_PTR_GET_DEFAULT(serviceHost_, "") };
    inline ListDataServiceApisResponseBodyDataApisRegistrationDetails& setServiceHost(string serviceHost) { DARABONBA_PTR_SET_VALUE(serviceHost_, serviceHost) };


    // servicePath Field Functions 
    bool hasServicePath() const { return this->servicePath_ != nullptr;};
    void deleteServicePath() { this->servicePath_ = nullptr;};
    inline string servicePath() const { DARABONBA_PTR_GET_DEFAULT(servicePath_, "") };
    inline ListDataServiceApisResponseBodyDataApisRegistrationDetails& setServicePath(string servicePath) { DARABONBA_PTR_SET_VALUE(servicePath_, servicePath) };


    // serviceRequestBodyDescription Field Functions 
    bool hasServiceRequestBodyDescription() const { return this->serviceRequestBodyDescription_ != nullptr;};
    void deleteServiceRequestBodyDescription() { this->serviceRequestBodyDescription_ = nullptr;};
    inline string serviceRequestBodyDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceRequestBodyDescription_, "") };
    inline ListDataServiceApisResponseBodyDataApisRegistrationDetails& setServiceRequestBodyDescription(string serviceRequestBodyDescription) { DARABONBA_PTR_SET_VALUE(serviceRequestBodyDescription_, serviceRequestBodyDescription) };


    // successfulResultSample Field Functions 
    bool hasSuccessfulResultSample() const { return this->successfulResultSample_ != nullptr;};
    void deleteSuccessfulResultSample() { this->successfulResultSample_ = nullptr;};
    inline string successfulResultSample() const { DARABONBA_PTR_GET_DEFAULT(successfulResultSample_, "") };
    inline ListDataServiceApisResponseBodyDataApisRegistrationDetails& setSuccessfulResultSample(string successfulResultSample) { DARABONBA_PTR_SET_VALUE(successfulResultSample_, successfulResultSample) };


  protected:
    // The sample error response of the API.
    std::shared_ptr<string> failedResultSample_ = nullptr;
    // The error codes returned for the API generated by registration.
    std::shared_ptr<vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationErrorCodes>> registrationErrorCodes_ = nullptr;
    // The request parameters of the API generated by registration.
    std::shared_ptr<vector<Models::ListDataServiceApisResponseBodyDataApisRegistrationDetailsRegistrationRequestParameters>> registrationRequestParameters_ = nullptr;
    // The format in which the response of the API request is returned. Valid values: 0 and 1. The value 0 indicates the JSON format. The value 1 indicates the XML format. APIs generated in wizard or script mode support the JSON format. APIs generated by registration support the JSON and XML formats.
    std::shared_ptr<int32_t> serviceContentType_ = nullptr;
    // The URL of the backend service.
    std::shared_ptr<string> serviceHost_ = nullptr;
    // The path of the backend service.
    std::shared_ptr<string> servicePath_ = nullptr;
    // The description of the request body initiated to call the backend service.
    std::shared_ptr<string> serviceRequestBodyDescription_ = nullptr;
    // The sample success response of the API.
    std::shared_ptr<string> successfulResultSample_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

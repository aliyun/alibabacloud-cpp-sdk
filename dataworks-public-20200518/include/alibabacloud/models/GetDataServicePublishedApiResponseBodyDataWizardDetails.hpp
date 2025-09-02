// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEPUBLISHEDAPIRESPONSEBODYDATAWIZARDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEPUBLISHEDAPIRESPONSEBODYDATAWIZARDDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardConnection.hpp>
#include <vector>
#include <alibabacloud/models/GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardErrorCodes.hpp>
#include <alibabacloud/models/GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardRequestParameters.hpp>
#include <alibabacloud/models/GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardResponseParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServicePublishedApiResponseBodyDataWizardDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServicePublishedApiResponseBodyDataWizardDetails& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResultSample, failedResultSample_);
      DARABONBA_PTR_TO_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_TO_JSON(SuccessfulResultSample, successfulResultSample_);
      DARABONBA_PTR_TO_JSON(WizardConnection, wizardConnection_);
      DARABONBA_PTR_TO_JSON(WizardErrorCodes, wizardErrorCodes_);
      DARABONBA_PTR_TO_JSON(WizardRequestParameters, wizardRequestParameters_);
      DARABONBA_PTR_TO_JSON(WizardResponseParameters, wizardResponseParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServicePublishedApiResponseBodyDataWizardDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResultSample, failedResultSample_);
      DARABONBA_PTR_FROM_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_FROM_JSON(SuccessfulResultSample, successfulResultSample_);
      DARABONBA_PTR_FROM_JSON(WizardConnection, wizardConnection_);
      DARABONBA_PTR_FROM_JSON(WizardErrorCodes, wizardErrorCodes_);
      DARABONBA_PTR_FROM_JSON(WizardRequestParameters, wizardRequestParameters_);
      DARABONBA_PTR_FROM_JSON(WizardResponseParameters, wizardResponseParameters_);
    };
    GetDataServicePublishedApiResponseBodyDataWizardDetails() = default ;
    GetDataServicePublishedApiResponseBodyDataWizardDetails(const GetDataServicePublishedApiResponseBodyDataWizardDetails &) = default ;
    GetDataServicePublishedApiResponseBodyDataWizardDetails(GetDataServicePublishedApiResponseBodyDataWizardDetails &&) = default ;
    GetDataServicePublishedApiResponseBodyDataWizardDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServicePublishedApiResponseBodyDataWizardDetails() = default ;
    GetDataServicePublishedApiResponseBodyDataWizardDetails& operator=(const GetDataServicePublishedApiResponseBodyDataWizardDetails &) = default ;
    GetDataServicePublishedApiResponseBodyDataWizardDetails& operator=(GetDataServicePublishedApiResponseBodyDataWizardDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedResultSample_ != nullptr
        && this->isPagedResponse_ != nullptr && this->successfulResultSample_ != nullptr && this->wizardConnection_ != nullptr && this->wizardErrorCodes_ != nullptr && this->wizardRequestParameters_ != nullptr
        && this->wizardResponseParameters_ != nullptr; };
    // failedResultSample Field Functions 
    bool hasFailedResultSample() const { return this->failedResultSample_ != nullptr;};
    void deleteFailedResultSample() { this->failedResultSample_ = nullptr;};
    inline string failedResultSample() const { DARABONBA_PTR_GET_DEFAULT(failedResultSample_, "") };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setFailedResultSample(string failedResultSample) { DARABONBA_PTR_SET_VALUE(failedResultSample_, failedResultSample) };


    // isPagedResponse Field Functions 
    bool hasIsPagedResponse() const { return this->isPagedResponse_ != nullptr;};
    void deleteIsPagedResponse() { this->isPagedResponse_ = nullptr;};
    inline bool isPagedResponse() const { DARABONBA_PTR_GET_DEFAULT(isPagedResponse_, false) };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setIsPagedResponse(bool isPagedResponse) { DARABONBA_PTR_SET_VALUE(isPagedResponse_, isPagedResponse) };


    // successfulResultSample Field Functions 
    bool hasSuccessfulResultSample() const { return this->successfulResultSample_ != nullptr;};
    void deleteSuccessfulResultSample() { this->successfulResultSample_ = nullptr;};
    inline string successfulResultSample() const { DARABONBA_PTR_GET_DEFAULT(successfulResultSample_, "") };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setSuccessfulResultSample(string successfulResultSample) { DARABONBA_PTR_SET_VALUE(successfulResultSample_, successfulResultSample) };


    // wizardConnection Field Functions 
    bool hasWizardConnection() const { return this->wizardConnection_ != nullptr;};
    void deleteWizardConnection() { this->wizardConnection_ = nullptr;};
    inline const Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardConnection & wizardConnection() const { DARABONBA_PTR_GET_CONST(wizardConnection_, Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardConnection) };
    inline Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardConnection wizardConnection() { DARABONBA_PTR_GET(wizardConnection_, Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardConnection) };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setWizardConnection(const Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardConnection & wizardConnection) { DARABONBA_PTR_SET_VALUE(wizardConnection_, wizardConnection) };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setWizardConnection(Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardConnection && wizardConnection) { DARABONBA_PTR_SET_RVALUE(wizardConnection_, wizardConnection) };


    // wizardErrorCodes Field Functions 
    bool hasWizardErrorCodes() const { return this->wizardErrorCodes_ != nullptr;};
    void deleteWizardErrorCodes() { this->wizardErrorCodes_ = nullptr;};
    inline const vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardErrorCodes> & wizardErrorCodes() const { DARABONBA_PTR_GET_CONST(wizardErrorCodes_, vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardErrorCodes>) };
    inline vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardErrorCodes> wizardErrorCodes() { DARABONBA_PTR_GET(wizardErrorCodes_, vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardErrorCodes>) };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setWizardErrorCodes(const vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardErrorCodes> & wizardErrorCodes) { DARABONBA_PTR_SET_VALUE(wizardErrorCodes_, wizardErrorCodes) };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setWizardErrorCodes(vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardErrorCodes> && wizardErrorCodes) { DARABONBA_PTR_SET_RVALUE(wizardErrorCodes_, wizardErrorCodes) };


    // wizardRequestParameters Field Functions 
    bool hasWizardRequestParameters() const { return this->wizardRequestParameters_ != nullptr;};
    void deleteWizardRequestParameters() { this->wizardRequestParameters_ = nullptr;};
    inline const vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardRequestParameters> & wizardRequestParameters() const { DARABONBA_PTR_GET_CONST(wizardRequestParameters_, vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardRequestParameters>) };
    inline vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardRequestParameters> wizardRequestParameters() { DARABONBA_PTR_GET(wizardRequestParameters_, vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardRequestParameters>) };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setWizardRequestParameters(const vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardRequestParameters> & wizardRequestParameters) { DARABONBA_PTR_SET_VALUE(wizardRequestParameters_, wizardRequestParameters) };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setWizardRequestParameters(vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardRequestParameters> && wizardRequestParameters) { DARABONBA_PTR_SET_RVALUE(wizardRequestParameters_, wizardRequestParameters) };


    // wizardResponseParameters Field Functions 
    bool hasWizardResponseParameters() const { return this->wizardResponseParameters_ != nullptr;};
    void deleteWizardResponseParameters() { this->wizardResponseParameters_ = nullptr;};
    inline const vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardResponseParameters> & wizardResponseParameters() const { DARABONBA_PTR_GET_CONST(wizardResponseParameters_, vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardResponseParameters>) };
    inline vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardResponseParameters> wizardResponseParameters() { DARABONBA_PTR_GET(wizardResponseParameters_, vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardResponseParameters>) };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setWizardResponseParameters(const vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardResponseParameters> & wizardResponseParameters) { DARABONBA_PTR_SET_VALUE(wizardResponseParameters_, wizardResponseParameters) };
    inline GetDataServicePublishedApiResponseBodyDataWizardDetails& setWizardResponseParameters(vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardResponseParameters> && wizardResponseParameters) { DARABONBA_PTR_SET_RVALUE(wizardResponseParameters_, wizardResponseParameters) };


  protected:
    // The sample error response of the API.
    std::shared_ptr<string> failedResultSample_ = nullptr;
    // Indicates whether the entries were returned by page.
    std::shared_ptr<bool> isPagedResponse_ = nullptr;
    // The sample success response of the API.
    std::shared_ptr<string> successfulResultSample_ = nullptr;
    // The data source information of the API generated in wizard mode.
    std::shared_ptr<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardConnection> wizardConnection_ = nullptr;
    // The error codes returned for the API generated in wizard mode.
    std::shared_ptr<vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardErrorCodes>> wizardErrorCodes_ = nullptr;
    // The request parameters of the API generated in wizard mode.
    std::shared_ptr<vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardRequestParameters>> wizardRequestParameters_ = nullptr;
    // The response parameters of the API generated in wizard mode.
    std::shared_ptr<vector<Models::GetDataServicePublishedApiResponseBodyDataWizardDetailsWizardResponseParameters>> wizardResponseParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

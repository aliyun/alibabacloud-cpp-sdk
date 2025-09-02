// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYDATAAPISWIZARDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYDATAAPISWIZARDDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardConnection.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardErrorCodes.hpp>
#include <alibabacloud/models/ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardRequestParameters.hpp>
#include <alibabacloud/models/ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardResponseParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServicePublishedApisResponseBodyDataApisWizardDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServicePublishedApisResponseBodyDataApisWizardDetails& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResultSample, failedResultSample_);
      DARABONBA_PTR_TO_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_TO_JSON(SuccessfulResultSample, successfulResultSample_);
      DARABONBA_PTR_TO_JSON(WizardConnection, wizardConnection_);
      DARABONBA_PTR_TO_JSON(WizardErrorCodes, wizardErrorCodes_);
      DARABONBA_PTR_TO_JSON(WizardRequestParameters, wizardRequestParameters_);
      DARABONBA_PTR_TO_JSON(WizardResponseParameters, wizardResponseParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServicePublishedApisResponseBodyDataApisWizardDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResultSample, failedResultSample_);
      DARABONBA_PTR_FROM_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_FROM_JSON(SuccessfulResultSample, successfulResultSample_);
      DARABONBA_PTR_FROM_JSON(WizardConnection, wizardConnection_);
      DARABONBA_PTR_FROM_JSON(WizardErrorCodes, wizardErrorCodes_);
      DARABONBA_PTR_FROM_JSON(WizardRequestParameters, wizardRequestParameters_);
      DARABONBA_PTR_FROM_JSON(WizardResponseParameters, wizardResponseParameters_);
    };
    ListDataServicePublishedApisResponseBodyDataApisWizardDetails() = default ;
    ListDataServicePublishedApisResponseBodyDataApisWizardDetails(const ListDataServicePublishedApisResponseBodyDataApisWizardDetails &) = default ;
    ListDataServicePublishedApisResponseBodyDataApisWizardDetails(ListDataServicePublishedApisResponseBodyDataApisWizardDetails &&) = default ;
    ListDataServicePublishedApisResponseBodyDataApisWizardDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServicePublishedApisResponseBodyDataApisWizardDetails() = default ;
    ListDataServicePublishedApisResponseBodyDataApisWizardDetails& operator=(const ListDataServicePublishedApisResponseBodyDataApisWizardDetails &) = default ;
    ListDataServicePublishedApisResponseBodyDataApisWizardDetails& operator=(ListDataServicePublishedApisResponseBodyDataApisWizardDetails &&) = default ;
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
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setFailedResultSample(string failedResultSample) { DARABONBA_PTR_SET_VALUE(failedResultSample_, failedResultSample) };


    // isPagedResponse Field Functions 
    bool hasIsPagedResponse() const { return this->isPagedResponse_ != nullptr;};
    void deleteIsPagedResponse() { this->isPagedResponse_ = nullptr;};
    inline bool isPagedResponse() const { DARABONBA_PTR_GET_DEFAULT(isPagedResponse_, false) };
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setIsPagedResponse(bool isPagedResponse) { DARABONBA_PTR_SET_VALUE(isPagedResponse_, isPagedResponse) };


    // successfulResultSample Field Functions 
    bool hasSuccessfulResultSample() const { return this->successfulResultSample_ != nullptr;};
    void deleteSuccessfulResultSample() { this->successfulResultSample_ = nullptr;};
    inline string successfulResultSample() const { DARABONBA_PTR_GET_DEFAULT(successfulResultSample_, "") };
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setSuccessfulResultSample(string successfulResultSample) { DARABONBA_PTR_SET_VALUE(successfulResultSample_, successfulResultSample) };


    // wizardConnection Field Functions 
    bool hasWizardConnection() const { return this->wizardConnection_ != nullptr;};
    void deleteWizardConnection() { this->wizardConnection_ = nullptr;};
    inline const Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardConnection & wizardConnection() const { DARABONBA_PTR_GET_CONST(wizardConnection_, Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardConnection) };
    inline Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardConnection wizardConnection() { DARABONBA_PTR_GET(wizardConnection_, Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardConnection) };
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setWizardConnection(const Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardConnection & wizardConnection) { DARABONBA_PTR_SET_VALUE(wizardConnection_, wizardConnection) };
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setWizardConnection(Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardConnection && wizardConnection) { DARABONBA_PTR_SET_RVALUE(wizardConnection_, wizardConnection) };


    // wizardErrorCodes Field Functions 
    bool hasWizardErrorCodes() const { return this->wizardErrorCodes_ != nullptr;};
    void deleteWizardErrorCodes() { this->wizardErrorCodes_ = nullptr;};
    inline const vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardErrorCodes> & wizardErrorCodes() const { DARABONBA_PTR_GET_CONST(wizardErrorCodes_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardErrorCodes>) };
    inline vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardErrorCodes> wizardErrorCodes() { DARABONBA_PTR_GET(wizardErrorCodes_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardErrorCodes>) };
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setWizardErrorCodes(const vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardErrorCodes> & wizardErrorCodes) { DARABONBA_PTR_SET_VALUE(wizardErrorCodes_, wizardErrorCodes) };
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setWizardErrorCodes(vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardErrorCodes> && wizardErrorCodes) { DARABONBA_PTR_SET_RVALUE(wizardErrorCodes_, wizardErrorCodes) };


    // wizardRequestParameters Field Functions 
    bool hasWizardRequestParameters() const { return this->wizardRequestParameters_ != nullptr;};
    void deleteWizardRequestParameters() { this->wizardRequestParameters_ = nullptr;};
    inline const vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardRequestParameters> & wizardRequestParameters() const { DARABONBA_PTR_GET_CONST(wizardRequestParameters_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardRequestParameters>) };
    inline vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardRequestParameters> wizardRequestParameters() { DARABONBA_PTR_GET(wizardRequestParameters_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardRequestParameters>) };
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setWizardRequestParameters(const vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardRequestParameters> & wizardRequestParameters) { DARABONBA_PTR_SET_VALUE(wizardRequestParameters_, wizardRequestParameters) };
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setWizardRequestParameters(vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardRequestParameters> && wizardRequestParameters) { DARABONBA_PTR_SET_RVALUE(wizardRequestParameters_, wizardRequestParameters) };


    // wizardResponseParameters Field Functions 
    bool hasWizardResponseParameters() const { return this->wizardResponseParameters_ != nullptr;};
    void deleteWizardResponseParameters() { this->wizardResponseParameters_ = nullptr;};
    inline const vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardResponseParameters> & wizardResponseParameters() const { DARABONBA_PTR_GET_CONST(wizardResponseParameters_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardResponseParameters>) };
    inline vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardResponseParameters> wizardResponseParameters() { DARABONBA_PTR_GET(wizardResponseParameters_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardResponseParameters>) };
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setWizardResponseParameters(const vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardResponseParameters> & wizardResponseParameters) { DARABONBA_PTR_SET_VALUE(wizardResponseParameters_, wizardResponseParameters) };
    inline ListDataServicePublishedApisResponseBodyDataApisWizardDetails& setWizardResponseParameters(vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardResponseParameters> && wizardResponseParameters) { DARABONBA_PTR_SET_RVALUE(wizardResponseParameters_, wizardResponseParameters) };


  protected:
    // The sample error response of the API.
    std::shared_ptr<string> failedResultSample_ = nullptr;
    // Indicates whether the entries are returned by page.
    std::shared_ptr<bool> isPagedResponse_ = nullptr;
    // The sample success response of the API.
    std::shared_ptr<string> successfulResultSample_ = nullptr;
    // The data source information about the API generated in wizard mode.
    std::shared_ptr<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardConnection> wizardConnection_ = nullptr;
    // The error codes returned for the API generated in wizard mode.
    std::shared_ptr<vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardErrorCodes>> wizardErrorCodes_ = nullptr;
    // The request parameters of the API generated in wizard mode.
    std::shared_ptr<vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardRequestParameters>> wizardRequestParameters_ = nullptr;
    // The response parameters of the API generated in wizard mode.
    std::shared_ptr<vector<Models::ListDataServicePublishedApisResponseBodyDataApisWizardDetailsWizardResponseParameters>> wizardResponseParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYDATAAPISSCRIPTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYDATAAPISSCRIPTDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptErrorCodes.hpp>
#include <alibabacloud/models/ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptRequestParameters.hpp>
#include <alibabacloud/models/ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptResponseParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServicePublishedApisResponseBodyDataApisScriptDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServicePublishedApisResponseBodyDataApisScriptDetails& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResultSample, failedResultSample_);
      DARABONBA_PTR_TO_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(ScriptConnection, scriptConnection_);
      DARABONBA_PTR_TO_JSON(ScriptErrorCodes, scriptErrorCodes_);
      DARABONBA_PTR_TO_JSON(ScriptRequestParameters, scriptRequestParameters_);
      DARABONBA_PTR_TO_JSON(ScriptResponseParameters, scriptResponseParameters_);
      DARABONBA_PTR_TO_JSON(SuccessfulResultSample, successfulResultSample_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServicePublishedApisResponseBodyDataApisScriptDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResultSample, failedResultSample_);
      DARABONBA_PTR_FROM_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(ScriptConnection, scriptConnection_);
      DARABONBA_PTR_FROM_JSON(ScriptErrorCodes, scriptErrorCodes_);
      DARABONBA_PTR_FROM_JSON(ScriptRequestParameters, scriptRequestParameters_);
      DARABONBA_PTR_FROM_JSON(ScriptResponseParameters, scriptResponseParameters_);
      DARABONBA_PTR_FROM_JSON(SuccessfulResultSample, successfulResultSample_);
    };
    ListDataServicePublishedApisResponseBodyDataApisScriptDetails() = default ;
    ListDataServicePublishedApisResponseBodyDataApisScriptDetails(const ListDataServicePublishedApisResponseBodyDataApisScriptDetails &) = default ;
    ListDataServicePublishedApisResponseBodyDataApisScriptDetails(ListDataServicePublishedApisResponseBodyDataApisScriptDetails &&) = default ;
    ListDataServicePublishedApisResponseBodyDataApisScriptDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServicePublishedApisResponseBodyDataApisScriptDetails() = default ;
    ListDataServicePublishedApisResponseBodyDataApisScriptDetails& operator=(const ListDataServicePublishedApisResponseBodyDataApisScriptDetails &) = default ;
    ListDataServicePublishedApisResponseBodyDataApisScriptDetails& operator=(ListDataServicePublishedApisResponseBodyDataApisScriptDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedResultSample_ != nullptr
        && this->isPagedResponse_ != nullptr && this->script_ != nullptr && this->scriptConnection_ != nullptr && this->scriptErrorCodes_ != nullptr && this->scriptRequestParameters_ != nullptr
        && this->scriptResponseParameters_ != nullptr && this->successfulResultSample_ != nullptr; };
    // failedResultSample Field Functions 
    bool hasFailedResultSample() const { return this->failedResultSample_ != nullptr;};
    void deleteFailedResultSample() { this->failedResultSample_ = nullptr;};
    inline string failedResultSample() const { DARABONBA_PTR_GET_DEFAULT(failedResultSample_, "") };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setFailedResultSample(string failedResultSample) { DARABONBA_PTR_SET_VALUE(failedResultSample_, failedResultSample) };


    // isPagedResponse Field Functions 
    bool hasIsPagedResponse() const { return this->isPagedResponse_ != nullptr;};
    void deleteIsPagedResponse() { this->isPagedResponse_ = nullptr;};
    inline bool isPagedResponse() const { DARABONBA_PTR_GET_DEFAULT(isPagedResponse_, false) };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setIsPagedResponse(bool isPagedResponse) { DARABONBA_PTR_SET_VALUE(isPagedResponse_, isPagedResponse) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // scriptConnection Field Functions 
    bool hasScriptConnection() const { return this->scriptConnection_ != nullptr;};
    void deleteScriptConnection() { this->scriptConnection_ = nullptr;};
    inline const Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection & scriptConnection() const { DARABONBA_PTR_GET_CONST(scriptConnection_, Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection) };
    inline Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection scriptConnection() { DARABONBA_PTR_GET(scriptConnection_, Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection) };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setScriptConnection(const Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection & scriptConnection) { DARABONBA_PTR_SET_VALUE(scriptConnection_, scriptConnection) };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setScriptConnection(Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection && scriptConnection) { DARABONBA_PTR_SET_RVALUE(scriptConnection_, scriptConnection) };


    // scriptErrorCodes Field Functions 
    bool hasScriptErrorCodes() const { return this->scriptErrorCodes_ != nullptr;};
    void deleteScriptErrorCodes() { this->scriptErrorCodes_ = nullptr;};
    inline const vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptErrorCodes> & scriptErrorCodes() const { DARABONBA_PTR_GET_CONST(scriptErrorCodes_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptErrorCodes>) };
    inline vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptErrorCodes> scriptErrorCodes() { DARABONBA_PTR_GET(scriptErrorCodes_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptErrorCodes>) };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setScriptErrorCodes(const vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptErrorCodes> & scriptErrorCodes) { DARABONBA_PTR_SET_VALUE(scriptErrorCodes_, scriptErrorCodes) };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setScriptErrorCodes(vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptErrorCodes> && scriptErrorCodes) { DARABONBA_PTR_SET_RVALUE(scriptErrorCodes_, scriptErrorCodes) };


    // scriptRequestParameters Field Functions 
    bool hasScriptRequestParameters() const { return this->scriptRequestParameters_ != nullptr;};
    void deleteScriptRequestParameters() { this->scriptRequestParameters_ = nullptr;};
    inline const vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptRequestParameters> & scriptRequestParameters() const { DARABONBA_PTR_GET_CONST(scriptRequestParameters_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptRequestParameters>) };
    inline vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptRequestParameters> scriptRequestParameters() { DARABONBA_PTR_GET(scriptRequestParameters_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptRequestParameters>) };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setScriptRequestParameters(const vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptRequestParameters> & scriptRequestParameters) { DARABONBA_PTR_SET_VALUE(scriptRequestParameters_, scriptRequestParameters) };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setScriptRequestParameters(vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptRequestParameters> && scriptRequestParameters) { DARABONBA_PTR_SET_RVALUE(scriptRequestParameters_, scriptRequestParameters) };


    // scriptResponseParameters Field Functions 
    bool hasScriptResponseParameters() const { return this->scriptResponseParameters_ != nullptr;};
    void deleteScriptResponseParameters() { this->scriptResponseParameters_ = nullptr;};
    inline const vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptResponseParameters> & scriptResponseParameters() const { DARABONBA_PTR_GET_CONST(scriptResponseParameters_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptResponseParameters>) };
    inline vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptResponseParameters> scriptResponseParameters() { DARABONBA_PTR_GET(scriptResponseParameters_, vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptResponseParameters>) };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setScriptResponseParameters(const vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptResponseParameters> & scriptResponseParameters) { DARABONBA_PTR_SET_VALUE(scriptResponseParameters_, scriptResponseParameters) };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setScriptResponseParameters(vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptResponseParameters> && scriptResponseParameters) { DARABONBA_PTR_SET_RVALUE(scriptResponseParameters_, scriptResponseParameters) };


    // successfulResultSample Field Functions 
    bool hasSuccessfulResultSample() const { return this->successfulResultSample_ != nullptr;};
    void deleteSuccessfulResultSample() { this->successfulResultSample_ = nullptr;};
    inline string successfulResultSample() const { DARABONBA_PTR_GET_DEFAULT(successfulResultSample_, "") };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetails& setSuccessfulResultSample(string successfulResultSample) { DARABONBA_PTR_SET_VALUE(successfulResultSample_, successfulResultSample) };


  protected:
    // The sample error response of the API.
    std::shared_ptr<string> failedResultSample_ = nullptr;
    // Indicates whether the entries are returned by page.
    std::shared_ptr<bool> isPagedResponse_ = nullptr;
    // The SQL script.
    std::shared_ptr<string> script_ = nullptr;
    // The data source information about the API generated in script mode.
    std::shared_ptr<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection> scriptConnection_ = nullptr;
    // The error codes returned for the API generated in script mode.
    std::shared_ptr<vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptErrorCodes>> scriptErrorCodes_ = nullptr;
    // The request parameters of the API generated in script mode.
    std::shared_ptr<vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptRequestParameters>> scriptRequestParameters_ = nullptr;
    // The response parameters of the API generated in script mode.
    std::shared_ptr<vector<Models::ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptResponseParameters>> scriptResponseParameters_ = nullptr;
    // The sample success response of the API.
    std::shared_ptr<string> successfulResultSample_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

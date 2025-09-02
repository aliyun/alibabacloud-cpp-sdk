// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIRESPONSEBODYDATASCRIPTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIRESPONSEBODYDATASCRIPTDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataServiceApiResponseBodyDataScriptDetailsScriptConnection.hpp>
#include <vector>
#include <alibabacloud/models/GetDataServiceApiResponseBodyDataScriptDetailsScriptRequestParameters.hpp>
#include <alibabacloud/models/GetDataServiceApiResponseBodyDataScriptDetailsScriptResponseParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceApiResponseBodyDataScriptDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiResponseBodyDataScriptDetails& obj) { 
      DARABONBA_PTR_TO_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(ScriptConnection, scriptConnection_);
      DARABONBA_PTR_TO_JSON(ScriptRequestParameters, scriptRequestParameters_);
      DARABONBA_PTR_TO_JSON(ScriptResponseParameters, scriptResponseParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiResponseBodyDataScriptDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(ScriptConnection, scriptConnection_);
      DARABONBA_PTR_FROM_JSON(ScriptRequestParameters, scriptRequestParameters_);
      DARABONBA_PTR_FROM_JSON(ScriptResponseParameters, scriptResponseParameters_);
    };
    GetDataServiceApiResponseBodyDataScriptDetails() = default ;
    GetDataServiceApiResponseBodyDataScriptDetails(const GetDataServiceApiResponseBodyDataScriptDetails &) = default ;
    GetDataServiceApiResponseBodyDataScriptDetails(GetDataServiceApiResponseBodyDataScriptDetails &&) = default ;
    GetDataServiceApiResponseBodyDataScriptDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiResponseBodyDataScriptDetails() = default ;
    GetDataServiceApiResponseBodyDataScriptDetails& operator=(const GetDataServiceApiResponseBodyDataScriptDetails &) = default ;
    GetDataServiceApiResponseBodyDataScriptDetails& operator=(GetDataServiceApiResponseBodyDataScriptDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isPagedResponse_ != nullptr
        && this->script_ != nullptr && this->scriptConnection_ != nullptr && this->scriptRequestParameters_ != nullptr && this->scriptResponseParameters_ != nullptr; };
    // isPagedResponse Field Functions 
    bool hasIsPagedResponse() const { return this->isPagedResponse_ != nullptr;};
    void deleteIsPagedResponse() { this->isPagedResponse_ = nullptr;};
    inline bool isPagedResponse() const { DARABONBA_PTR_GET_DEFAULT(isPagedResponse_, false) };
    inline GetDataServiceApiResponseBodyDataScriptDetails& setIsPagedResponse(bool isPagedResponse) { DARABONBA_PTR_SET_VALUE(isPagedResponse_, isPagedResponse) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline GetDataServiceApiResponseBodyDataScriptDetails& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    // scriptConnection Field Functions 
    bool hasScriptConnection() const { return this->scriptConnection_ != nullptr;};
    void deleteScriptConnection() { this->scriptConnection_ = nullptr;};
    inline const Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptConnection & scriptConnection() const { DARABONBA_PTR_GET_CONST(scriptConnection_, Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptConnection) };
    inline Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptConnection scriptConnection() { DARABONBA_PTR_GET(scriptConnection_, Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptConnection) };
    inline GetDataServiceApiResponseBodyDataScriptDetails& setScriptConnection(const Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptConnection & scriptConnection) { DARABONBA_PTR_SET_VALUE(scriptConnection_, scriptConnection) };
    inline GetDataServiceApiResponseBodyDataScriptDetails& setScriptConnection(Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptConnection && scriptConnection) { DARABONBA_PTR_SET_RVALUE(scriptConnection_, scriptConnection) };


    // scriptRequestParameters Field Functions 
    bool hasScriptRequestParameters() const { return this->scriptRequestParameters_ != nullptr;};
    void deleteScriptRequestParameters() { this->scriptRequestParameters_ = nullptr;};
    inline const vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptRequestParameters> & scriptRequestParameters() const { DARABONBA_PTR_GET_CONST(scriptRequestParameters_, vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptRequestParameters>) };
    inline vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptRequestParameters> scriptRequestParameters() { DARABONBA_PTR_GET(scriptRequestParameters_, vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptRequestParameters>) };
    inline GetDataServiceApiResponseBodyDataScriptDetails& setScriptRequestParameters(const vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptRequestParameters> & scriptRequestParameters) { DARABONBA_PTR_SET_VALUE(scriptRequestParameters_, scriptRequestParameters) };
    inline GetDataServiceApiResponseBodyDataScriptDetails& setScriptRequestParameters(vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptRequestParameters> && scriptRequestParameters) { DARABONBA_PTR_SET_RVALUE(scriptRequestParameters_, scriptRequestParameters) };


    // scriptResponseParameters Field Functions 
    bool hasScriptResponseParameters() const { return this->scriptResponseParameters_ != nullptr;};
    void deleteScriptResponseParameters() { this->scriptResponseParameters_ = nullptr;};
    inline const vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptResponseParameters> & scriptResponseParameters() const { DARABONBA_PTR_GET_CONST(scriptResponseParameters_, vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptResponseParameters>) };
    inline vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptResponseParameters> scriptResponseParameters() { DARABONBA_PTR_GET(scriptResponseParameters_, vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptResponseParameters>) };
    inline GetDataServiceApiResponseBodyDataScriptDetails& setScriptResponseParameters(const vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptResponseParameters> & scriptResponseParameters) { DARABONBA_PTR_SET_VALUE(scriptResponseParameters_, scriptResponseParameters) };
    inline GetDataServiceApiResponseBodyDataScriptDetails& setScriptResponseParameters(vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptResponseParameters> && scriptResponseParameters) { DARABONBA_PTR_SET_RVALUE(scriptResponseParameters_, scriptResponseParameters) };


  protected:
    // Indicates whether the entries were returned by page.
    std::shared_ptr<bool> isPagedResponse_ = nullptr;
    // The SQL script.
    std::shared_ptr<string> script_ = nullptr;
    // The data source information of the API generated in script mode.
    std::shared_ptr<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptConnection> scriptConnection_ = nullptr;
    // The request parameters of the API generated in script mode.
    std::shared_ptr<vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptRequestParameters>> scriptRequestParameters_ = nullptr;
    // The response parameters of the API generated in script mode.
    std::shared_ptr<vector<Models::GetDataServiceApiResponseBodyDataScriptDetailsScriptResponseParameters>> scriptResponseParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

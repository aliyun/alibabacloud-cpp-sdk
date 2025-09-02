// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIRESPONSEBODYDATAWIZARDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIRESPONSEBODYDATAWIZARDDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection.hpp>
#include <vector>
#include <alibabacloud/models/GetDataServiceApiResponseBodyDataWizardDetailsWizardRequestParameters.hpp>
#include <alibabacloud/models/GetDataServiceApiResponseBodyDataWizardDetailsWizardResponseParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceApiResponseBodyDataWizardDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiResponseBodyDataWizardDetails& obj) { 
      DARABONBA_PTR_TO_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_TO_JSON(WizardConnection, wizardConnection_);
      DARABONBA_PTR_TO_JSON(WizardRequestParameters, wizardRequestParameters_);
      DARABONBA_PTR_TO_JSON(WizardResponseParameters, wizardResponseParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiResponseBodyDataWizardDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_FROM_JSON(WizardConnection, wizardConnection_);
      DARABONBA_PTR_FROM_JSON(WizardRequestParameters, wizardRequestParameters_);
      DARABONBA_PTR_FROM_JSON(WizardResponseParameters, wizardResponseParameters_);
    };
    GetDataServiceApiResponseBodyDataWizardDetails() = default ;
    GetDataServiceApiResponseBodyDataWizardDetails(const GetDataServiceApiResponseBodyDataWizardDetails &) = default ;
    GetDataServiceApiResponseBodyDataWizardDetails(GetDataServiceApiResponseBodyDataWizardDetails &&) = default ;
    GetDataServiceApiResponseBodyDataWizardDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiResponseBodyDataWizardDetails() = default ;
    GetDataServiceApiResponseBodyDataWizardDetails& operator=(const GetDataServiceApiResponseBodyDataWizardDetails &) = default ;
    GetDataServiceApiResponseBodyDataWizardDetails& operator=(GetDataServiceApiResponseBodyDataWizardDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isPagedResponse_ != nullptr
        && this->wizardConnection_ != nullptr && this->wizardRequestParameters_ != nullptr && this->wizardResponseParameters_ != nullptr; };
    // isPagedResponse Field Functions 
    bool hasIsPagedResponse() const { return this->isPagedResponse_ != nullptr;};
    void deleteIsPagedResponse() { this->isPagedResponse_ = nullptr;};
    inline bool isPagedResponse() const { DARABONBA_PTR_GET_DEFAULT(isPagedResponse_, false) };
    inline GetDataServiceApiResponseBodyDataWizardDetails& setIsPagedResponse(bool isPagedResponse) { DARABONBA_PTR_SET_VALUE(isPagedResponse_, isPagedResponse) };


    // wizardConnection Field Functions 
    bool hasWizardConnection() const { return this->wizardConnection_ != nullptr;};
    void deleteWizardConnection() { this->wizardConnection_ = nullptr;};
    inline const Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection & wizardConnection() const { DARABONBA_PTR_GET_CONST(wizardConnection_, Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection) };
    inline Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection wizardConnection() { DARABONBA_PTR_GET(wizardConnection_, Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection) };
    inline GetDataServiceApiResponseBodyDataWizardDetails& setWizardConnection(const Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection & wizardConnection) { DARABONBA_PTR_SET_VALUE(wizardConnection_, wizardConnection) };
    inline GetDataServiceApiResponseBodyDataWizardDetails& setWizardConnection(Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection && wizardConnection) { DARABONBA_PTR_SET_RVALUE(wizardConnection_, wizardConnection) };


    // wizardRequestParameters Field Functions 
    bool hasWizardRequestParameters() const { return this->wizardRequestParameters_ != nullptr;};
    void deleteWizardRequestParameters() { this->wizardRequestParameters_ = nullptr;};
    inline const vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardRequestParameters> & wizardRequestParameters() const { DARABONBA_PTR_GET_CONST(wizardRequestParameters_, vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardRequestParameters>) };
    inline vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardRequestParameters> wizardRequestParameters() { DARABONBA_PTR_GET(wizardRequestParameters_, vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardRequestParameters>) };
    inline GetDataServiceApiResponseBodyDataWizardDetails& setWizardRequestParameters(const vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardRequestParameters> & wizardRequestParameters) { DARABONBA_PTR_SET_VALUE(wizardRequestParameters_, wizardRequestParameters) };
    inline GetDataServiceApiResponseBodyDataWizardDetails& setWizardRequestParameters(vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardRequestParameters> && wizardRequestParameters) { DARABONBA_PTR_SET_RVALUE(wizardRequestParameters_, wizardRequestParameters) };


    // wizardResponseParameters Field Functions 
    bool hasWizardResponseParameters() const { return this->wizardResponseParameters_ != nullptr;};
    void deleteWizardResponseParameters() { this->wizardResponseParameters_ = nullptr;};
    inline const vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardResponseParameters> & wizardResponseParameters() const { DARABONBA_PTR_GET_CONST(wizardResponseParameters_, vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardResponseParameters>) };
    inline vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardResponseParameters> wizardResponseParameters() { DARABONBA_PTR_GET(wizardResponseParameters_, vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardResponseParameters>) };
    inline GetDataServiceApiResponseBodyDataWizardDetails& setWizardResponseParameters(const vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardResponseParameters> & wizardResponseParameters) { DARABONBA_PTR_SET_VALUE(wizardResponseParameters_, wizardResponseParameters) };
    inline GetDataServiceApiResponseBodyDataWizardDetails& setWizardResponseParameters(vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardResponseParameters> && wizardResponseParameters) { DARABONBA_PTR_SET_RVALUE(wizardResponseParameters_, wizardResponseParameters) };


  protected:
    // Indicates whether the entries were returned by page.
    std::shared_ptr<bool> isPagedResponse_ = nullptr;
    // The data source information of the API generated in wizard mode.
    std::shared_ptr<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection> wizardConnection_ = nullptr;
    // The request parameters of the API generated in wizard mode.
    std::shared_ptr<vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardRequestParameters>> wizardRequestParameters_ = nullptr;
    // The response parameters of the API generated in wizard mode.
    std::shared_ptr<vector<Models::GetDataServiceApiResponseBodyDataWizardDetailsWizardResponseParameters>> wizardResponseParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

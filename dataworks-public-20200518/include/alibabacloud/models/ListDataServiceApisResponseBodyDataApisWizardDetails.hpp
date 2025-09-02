// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPISRESPONSEBODYDATAAPISWIZARDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPISRESPONSEBODYDATAAPISWIZARDDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataServiceApisResponseBodyDataApisWizardDetailsWizardConnection.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters.hpp>
#include <alibabacloud/models/ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApisResponseBodyDataApisWizardDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApisResponseBodyDataApisWizardDetails& obj) { 
      DARABONBA_PTR_TO_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_TO_JSON(WizardConnection, wizardConnection_);
      DARABONBA_PTR_TO_JSON(WizardRequestParameters, wizardRequestParameters_);
      DARABONBA_PTR_TO_JSON(WizardResponseParameters, wizardResponseParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApisResponseBodyDataApisWizardDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(IsPagedResponse, isPagedResponse_);
      DARABONBA_PTR_FROM_JSON(WizardConnection, wizardConnection_);
      DARABONBA_PTR_FROM_JSON(WizardRequestParameters, wizardRequestParameters_);
      DARABONBA_PTR_FROM_JSON(WizardResponseParameters, wizardResponseParameters_);
    };
    ListDataServiceApisResponseBodyDataApisWizardDetails() = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetails(const ListDataServiceApisResponseBodyDataApisWizardDetails &) = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetails(ListDataServiceApisResponseBodyDataApisWizardDetails &&) = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApisResponseBodyDataApisWizardDetails() = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetails& operator=(const ListDataServiceApisResponseBodyDataApisWizardDetails &) = default ;
    ListDataServiceApisResponseBodyDataApisWizardDetails& operator=(ListDataServiceApisResponseBodyDataApisWizardDetails &&) = default ;
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
    inline ListDataServiceApisResponseBodyDataApisWizardDetails& setIsPagedResponse(bool isPagedResponse) { DARABONBA_PTR_SET_VALUE(isPagedResponse_, isPagedResponse) };


    // wizardConnection Field Functions 
    bool hasWizardConnection() const { return this->wizardConnection_ != nullptr;};
    void deleteWizardConnection() { this->wizardConnection_ = nullptr;};
    inline const Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardConnection & wizardConnection() const { DARABONBA_PTR_GET_CONST(wizardConnection_, Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardConnection) };
    inline Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardConnection wizardConnection() { DARABONBA_PTR_GET(wizardConnection_, Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardConnection) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetails& setWizardConnection(const Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardConnection & wizardConnection) { DARABONBA_PTR_SET_VALUE(wizardConnection_, wizardConnection) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetails& setWizardConnection(Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardConnection && wizardConnection) { DARABONBA_PTR_SET_RVALUE(wizardConnection_, wizardConnection) };


    // wizardRequestParameters Field Functions 
    bool hasWizardRequestParameters() const { return this->wizardRequestParameters_ != nullptr;};
    void deleteWizardRequestParameters() { this->wizardRequestParameters_ = nullptr;};
    inline const vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters> & wizardRequestParameters() const { DARABONBA_PTR_GET_CONST(wizardRequestParameters_, vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters>) };
    inline vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters> wizardRequestParameters() { DARABONBA_PTR_GET(wizardRequestParameters_, vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters>) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetails& setWizardRequestParameters(const vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters> & wizardRequestParameters) { DARABONBA_PTR_SET_VALUE(wizardRequestParameters_, wizardRequestParameters) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetails& setWizardRequestParameters(vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters> && wizardRequestParameters) { DARABONBA_PTR_SET_RVALUE(wizardRequestParameters_, wizardRequestParameters) };


    // wizardResponseParameters Field Functions 
    bool hasWizardResponseParameters() const { return this->wizardResponseParameters_ != nullptr;};
    void deleteWizardResponseParameters() { this->wizardResponseParameters_ = nullptr;};
    inline const vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters> & wizardResponseParameters() const { DARABONBA_PTR_GET_CONST(wizardResponseParameters_, vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters>) };
    inline vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters> wizardResponseParameters() { DARABONBA_PTR_GET(wizardResponseParameters_, vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters>) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetails& setWizardResponseParameters(const vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters> & wizardResponseParameters) { DARABONBA_PTR_SET_VALUE(wizardResponseParameters_, wizardResponseParameters) };
    inline ListDataServiceApisResponseBodyDataApisWizardDetails& setWizardResponseParameters(vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters> && wizardResponseParameters) { DARABONBA_PTR_SET_RVALUE(wizardResponseParameters_, wizardResponseParameters) };


  protected:
    // Indicates whether the entries are returned by page.
    std::shared_ptr<bool> isPagedResponse_ = nullptr;
    // The data source information about the API generated in wizard mode.
    std::shared_ptr<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardConnection> wizardConnection_ = nullptr;
    // The request parameters of the API generated in wizard mode.
    std::shared_ptr<vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardRequestParameters>> wizardRequestParameters_ = nullptr;
    // The response parameters of the API generated in wizard mode.
    std::shared_ptr<vector<Models::ListDataServiceApisResponseBodyDataApisWizardDetailsWizardResponseParameters>> wizardResponseParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

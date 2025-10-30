// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters.hpp>
#include <alibabacloud/models/ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAuthorizedDataServiceApiDetailsResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedDataServiceApiDetailsResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(AuthorizedDevReturnParameters, authorizedDevReturnParameters_);
      DARABONBA_PTR_TO_JSON(AuthorizedProdReturnParameters, authorizedProdReturnParameters_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DevAuthPeriod, devAuthPeriod_);
      DARABONBA_PTR_TO_JSON(ProdAuthPeriod, prodAuthPeriod_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedDataServiceApiDetailsResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(AuthorizedDevReturnParameters, authorizedDevReturnParameters_);
      DARABONBA_PTR_FROM_JSON(AuthorizedProdReturnParameters, authorizedProdReturnParameters_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DevAuthPeriod, devAuthPeriod_);
      DARABONBA_PTR_FROM_JSON(ProdAuthPeriod, prodAuthPeriod_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListAuthorizedDataServiceApiDetailsResponseBodyResultData() = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultData(const ListAuthorizedDataServiceApiDetailsResponseBodyResultData &) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultData(ListAuthorizedDataServiceApiDetailsResponseBodyResultData &&) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedDataServiceApiDetailsResponseBodyResultData() = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultData& operator=(const ListAuthorizedDataServiceApiDetailsResponseBodyResultData &) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultData& operator=(ListAuthorizedDataServiceApiDetailsResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->appId_ == nullptr && return this->authType_ == nullptr && return this->authorizedDevReturnParameters_ == nullptr && return this->authorizedProdReturnParameters_ == nullptr
        && return this->description_ == nullptr && return this->devAuthPeriod_ == nullptr && return this->prodAuthPeriod_ == nullptr && return this->projectId_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // authorizedDevReturnParameters Field Functions 
    bool hasAuthorizedDevReturnParameters() const { return this->authorizedDevReturnParameters_ != nullptr;};
    void deleteAuthorizedDevReturnParameters() { this->authorizedDevReturnParameters_ = nullptr;};
    inline const vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters> & authorizedDevReturnParameters() const { DARABONBA_PTR_GET_CONST(authorizedDevReturnParameters_, vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters>) };
    inline vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters> authorizedDevReturnParameters() { DARABONBA_PTR_GET(authorizedDevReturnParameters_, vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters>) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setAuthorizedDevReturnParameters(const vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters> & authorizedDevReturnParameters) { DARABONBA_PTR_SET_VALUE(authorizedDevReturnParameters_, authorizedDevReturnParameters) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setAuthorizedDevReturnParameters(vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters> && authorizedDevReturnParameters) { DARABONBA_PTR_SET_RVALUE(authorizedDevReturnParameters_, authorizedDevReturnParameters) };


    // authorizedProdReturnParameters Field Functions 
    bool hasAuthorizedProdReturnParameters() const { return this->authorizedProdReturnParameters_ != nullptr;};
    void deleteAuthorizedProdReturnParameters() { this->authorizedProdReturnParameters_ = nullptr;};
    inline const vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters> & authorizedProdReturnParameters() const { DARABONBA_PTR_GET_CONST(authorizedProdReturnParameters_, vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters>) };
    inline vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters> authorizedProdReturnParameters() { DARABONBA_PTR_GET(authorizedProdReturnParameters_, vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters>) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setAuthorizedProdReturnParameters(const vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters> & authorizedProdReturnParameters) { DARABONBA_PTR_SET_VALUE(authorizedProdReturnParameters_, authorizedProdReturnParameters) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setAuthorizedProdReturnParameters(vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters> && authorizedProdReturnParameters) { DARABONBA_PTR_SET_RVALUE(authorizedProdReturnParameters_, authorizedProdReturnParameters) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // devAuthPeriod Field Functions 
    bool hasDevAuthPeriod() const { return this->devAuthPeriod_ != nullptr;};
    void deleteDevAuthPeriod() { this->devAuthPeriod_ = nullptr;};
    inline string devAuthPeriod() const { DARABONBA_PTR_GET_DEFAULT(devAuthPeriod_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setDevAuthPeriod(string devAuthPeriod) { DARABONBA_PTR_SET_VALUE(devAuthPeriod_, devAuthPeriod) };


    // prodAuthPeriod Field Functions 
    bool hasProdAuthPeriod() const { return this->prodAuthPeriod_ != nullptr;};
    void deleteProdAuthPeriod() { this->prodAuthPeriod_ = nullptr;};
    inline string prodAuthPeriod() const { DARABONBA_PTR_GET_DEFAULT(prodAuthPeriod_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setProdAuthPeriod(string prodAuthPeriod) { DARABONBA_PTR_SET_VALUE(prodAuthPeriod_, prodAuthPeriod) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // API_ID
    std::shared_ptr<int64_t> apiId_ = nullptr;
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<int64_t> appId_ = nullptr;
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters>> authorizedDevReturnParameters_ = nullptr;
    std::shared_ptr<vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters>> authorizedProdReturnParameters_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> devAuthPeriod_ = nullptr;
    std::shared_ptr<string> prodAuthPeriod_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

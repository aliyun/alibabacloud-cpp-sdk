// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppRequestAuthentication.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppRequestNetwork.hpp>
#include <alibabacloud/models/CreateAppRequestPrivateNetwork.hpp>
#include <alibabacloud/models/CreateAppRequestQuotaInfo.hpp>
#include <alibabacloud/models/CreateAppRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class CreateAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appName, appName_);
      DARABONBA_PTR_TO_JSON(authentication, authentication_);
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(privateNetwork, privateNetwork_);
      DARABONBA_PTR_TO_JSON(quotaInfo, quotaInfo_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(scenario, scenario_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appName, appName_);
      DARABONBA_PTR_FROM_JSON(authentication, authentication_);
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(privateNetwork, privateNetwork_);
      DARABONBA_PTR_FROM_JSON(quotaInfo, quotaInfo_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateAppRequest() = default ;
    CreateAppRequest(const CreateAppRequest &) = default ;
    CreateAppRequest(CreateAppRequest &&) = default ;
    CreateAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequest() = default ;
    CreateAppRequest& operator=(const CreateAppRequest &) = default ;
    CreateAppRequest& operator=(CreateAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->authentication_ != nullptr && this->chargeType_ != nullptr && this->description_ != nullptr && this->network_ != nullptr && this->privateNetwork_ != nullptr
        && this->quotaInfo_ != nullptr && this->regionId_ != nullptr && this->scenario_ != nullptr && this->tags_ != nullptr && this->version_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline const CreateAppRequestAuthentication & authentication() const { DARABONBA_PTR_GET_CONST(authentication_, CreateAppRequestAuthentication) };
    inline CreateAppRequestAuthentication authentication() { DARABONBA_PTR_GET(authentication_, CreateAppRequestAuthentication) };
    inline CreateAppRequest& setAuthentication(const CreateAppRequestAuthentication & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
    inline CreateAppRequest& setAuthentication(CreateAppRequestAuthentication && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateAppRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const vector<CreateAppRequestNetwork> & network() const { DARABONBA_PTR_GET_CONST(network_, vector<CreateAppRequestNetwork>) };
    inline vector<CreateAppRequestNetwork> network() { DARABONBA_PTR_GET(network_, vector<CreateAppRequestNetwork>) };
    inline CreateAppRequest& setNetwork(const vector<CreateAppRequestNetwork> & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline CreateAppRequest& setNetwork(vector<CreateAppRequestNetwork> && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // privateNetwork Field Functions 
    bool hasPrivateNetwork() const { return this->privateNetwork_ != nullptr;};
    void deletePrivateNetwork() { this->privateNetwork_ = nullptr;};
    inline const vector<CreateAppRequestPrivateNetwork> & privateNetwork() const { DARABONBA_PTR_GET_CONST(privateNetwork_, vector<CreateAppRequestPrivateNetwork>) };
    inline vector<CreateAppRequestPrivateNetwork> privateNetwork() { DARABONBA_PTR_GET(privateNetwork_, vector<CreateAppRequestPrivateNetwork>) };
    inline CreateAppRequest& setPrivateNetwork(const vector<CreateAppRequestPrivateNetwork> & privateNetwork) { DARABONBA_PTR_SET_VALUE(privateNetwork_, privateNetwork) };
    inline CreateAppRequest& setPrivateNetwork(vector<CreateAppRequestPrivateNetwork> && privateNetwork) { DARABONBA_PTR_SET_RVALUE(privateNetwork_, privateNetwork) };


    // quotaInfo Field Functions 
    bool hasQuotaInfo() const { return this->quotaInfo_ != nullptr;};
    void deleteQuotaInfo() { this->quotaInfo_ = nullptr;};
    inline const CreateAppRequestQuotaInfo & quotaInfo() const { DARABONBA_PTR_GET_CONST(quotaInfo_, CreateAppRequestQuotaInfo) };
    inline CreateAppRequestQuotaInfo quotaInfo() { DARABONBA_PTR_GET(quotaInfo_, CreateAppRequestQuotaInfo) };
    inline CreateAppRequest& setQuotaInfo(const CreateAppRequestQuotaInfo & quotaInfo) { DARABONBA_PTR_SET_VALUE(quotaInfo_, quotaInfo) };
    inline CreateAppRequest& setQuotaInfo(CreateAppRequestQuotaInfo && quotaInfo) { DARABONBA_PTR_SET_RVALUE(quotaInfo_, quotaInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline CreateAppRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateAppRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateAppRequestTags>) };
    inline vector<CreateAppRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateAppRequestTags>) };
    inline CreateAppRequest& setTags(const vector<CreateAppRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateAppRequest& setTags(vector<CreateAppRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateAppRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAppRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAppRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // 应用名
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateAppRequestAuthentication> authentication_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    // 应用备注
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<CreateAppRequestNetwork>> network_ = nullptr;
    std::shared_ptr<vector<CreateAppRequestPrivateNetwork>> privateNetwork_ = nullptr;
    std::shared_ptr<CreateAppRequestQuotaInfo> quotaInfo_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> scenario_ = nullptr;
    std::shared_ptr<vector<CreateAppRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif

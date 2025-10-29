// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiPublishRevisionInfoCloudProductConfig.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiDomainInfo.hpp>
#include <alibabacloud/models/HttpApiPublishRevisionInfoDnsConfigs.hpp>
#include <alibabacloud/models/HttpApiPublishRevisionInfoEnvironmentInfo.hpp>
#include <alibabacloud/models/HttpApiOperationInfo.hpp>
#include <alibabacloud/models/HttpApiPublishRevisionInfoServiceConfigs.hpp>
#include <alibabacloud/models/HttpApiPublishRevisionInfoVipConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiPublishRevisionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiPublishRevisionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
      DARABONBA_PTR_TO_JSON(backendType, backendType_);
      DARABONBA_PTR_TO_JSON(cloudProductConfig, cloudProductConfig_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(customDomains, customDomains_);
      DARABONBA_PTR_TO_JSON(dnsConfigs, dnsConfigs_);
      DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_TO_JSON(isCurrentVersion, isCurrentVersion_);
      DARABONBA_PTR_TO_JSON(operations, operations_);
      DARABONBA_PTR_TO_JSON(revisionId, revisionId_);
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_TO_JSON(subDomains, subDomains_);
      DARABONBA_PTR_TO_JSON(vipConfigs, vipConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiPublishRevisionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
      DARABONBA_PTR_FROM_JSON(backendType, backendType_);
      DARABONBA_PTR_FROM_JSON(cloudProductConfig, cloudProductConfig_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(customDomains, customDomains_);
      DARABONBA_PTR_FROM_JSON(dnsConfigs, dnsConfigs_);
      DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_FROM_JSON(isCurrentVersion, isCurrentVersion_);
      DARABONBA_PTR_FROM_JSON(operations, operations_);
      DARABONBA_PTR_FROM_JSON(revisionId, revisionId_);
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_FROM_JSON(subDomains, subDomains_);
      DARABONBA_PTR_FROM_JSON(vipConfigs, vipConfigs_);
    };
    HttpApiPublishRevisionInfo() = default ;
    HttpApiPublishRevisionInfo(const HttpApiPublishRevisionInfo &) = default ;
    HttpApiPublishRevisionInfo(HttpApiPublishRevisionInfo &&) = default ;
    HttpApiPublishRevisionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiPublishRevisionInfo() = default ;
    HttpApiPublishRevisionInfo& operator=(const HttpApiPublishRevisionInfo &) = default ;
    HttpApiPublishRevisionInfo& operator=(HttpApiPublishRevisionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendScene_ == nullptr
        && return this->backendType_ == nullptr && return this->cloudProductConfig_ == nullptr && return this->createTimestamp_ == nullptr && return this->customDomains_ == nullptr && return this->dnsConfigs_ == nullptr
        && return this->environmentInfo_ == nullptr && return this->isCurrentVersion_ == nullptr && return this->operations_ == nullptr && return this->revisionId_ == nullptr && return this->serviceConfigs_ == nullptr
        && return this->subDomains_ == nullptr && return this->vipConfigs_ == nullptr; };
    // backendScene Field Functions 
    bool hasBackendScene() const { return this->backendScene_ != nullptr;};
    void deleteBackendScene() { this->backendScene_ = nullptr;};
    inline string backendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
    inline HttpApiPublishRevisionInfo& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string backendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline HttpApiPublishRevisionInfo& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    // cloudProductConfig Field Functions 
    bool hasCloudProductConfig() const { return this->cloudProductConfig_ != nullptr;};
    void deleteCloudProductConfig() { this->cloudProductConfig_ = nullptr;};
    inline const HttpApiPublishRevisionInfoCloudProductConfig & cloudProductConfig() const { DARABONBA_PTR_GET_CONST(cloudProductConfig_, HttpApiPublishRevisionInfoCloudProductConfig) };
    inline HttpApiPublishRevisionInfoCloudProductConfig cloudProductConfig() { DARABONBA_PTR_GET(cloudProductConfig_, HttpApiPublishRevisionInfoCloudProductConfig) };
    inline HttpApiPublishRevisionInfo& setCloudProductConfig(const HttpApiPublishRevisionInfoCloudProductConfig & cloudProductConfig) { DARABONBA_PTR_SET_VALUE(cloudProductConfig_, cloudProductConfig) };
    inline HttpApiPublishRevisionInfo& setCloudProductConfig(HttpApiPublishRevisionInfoCloudProductConfig && cloudProductConfig) { DARABONBA_PTR_SET_RVALUE(cloudProductConfig_, cloudProductConfig) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline HttpApiPublishRevisionInfo& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // customDomains Field Functions 
    bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
    void deleteCustomDomains() { this->customDomains_ = nullptr;};
    inline const vector<HttpApiDomainInfo> & customDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, vector<HttpApiDomainInfo>) };
    inline vector<HttpApiDomainInfo> customDomains() { DARABONBA_PTR_GET(customDomains_, vector<HttpApiDomainInfo>) };
    inline HttpApiPublishRevisionInfo& setCustomDomains(const vector<HttpApiDomainInfo> & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
    inline HttpApiPublishRevisionInfo& setCustomDomains(vector<HttpApiDomainInfo> && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


    // dnsConfigs Field Functions 
    bool hasDnsConfigs() const { return this->dnsConfigs_ != nullptr;};
    void deleteDnsConfigs() { this->dnsConfigs_ = nullptr;};
    inline const vector<HttpApiPublishRevisionInfoDnsConfigs> & dnsConfigs() const { DARABONBA_PTR_GET_CONST(dnsConfigs_, vector<HttpApiPublishRevisionInfoDnsConfigs>) };
    inline vector<HttpApiPublishRevisionInfoDnsConfigs> dnsConfigs() { DARABONBA_PTR_GET(dnsConfigs_, vector<HttpApiPublishRevisionInfoDnsConfigs>) };
    inline HttpApiPublishRevisionInfo& setDnsConfigs(const vector<HttpApiPublishRevisionInfoDnsConfigs> & dnsConfigs) { DARABONBA_PTR_SET_VALUE(dnsConfigs_, dnsConfigs) };
    inline HttpApiPublishRevisionInfo& setDnsConfigs(vector<HttpApiPublishRevisionInfoDnsConfigs> && dnsConfigs) { DARABONBA_PTR_SET_RVALUE(dnsConfigs_, dnsConfigs) };


    // environmentInfo Field Functions 
    bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
    void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
    inline const HttpApiPublishRevisionInfoEnvironmentInfo & environmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, HttpApiPublishRevisionInfoEnvironmentInfo) };
    inline HttpApiPublishRevisionInfoEnvironmentInfo environmentInfo() { DARABONBA_PTR_GET(environmentInfo_, HttpApiPublishRevisionInfoEnvironmentInfo) };
    inline HttpApiPublishRevisionInfo& setEnvironmentInfo(const HttpApiPublishRevisionInfoEnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
    inline HttpApiPublishRevisionInfo& setEnvironmentInfo(HttpApiPublishRevisionInfoEnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


    // isCurrentVersion Field Functions 
    bool hasIsCurrentVersion() const { return this->isCurrentVersion_ != nullptr;};
    void deleteIsCurrentVersion() { this->isCurrentVersion_ = nullptr;};
    inline bool isCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(isCurrentVersion_, false) };
    inline HttpApiPublishRevisionInfo& setIsCurrentVersion(bool isCurrentVersion) { DARABONBA_PTR_SET_VALUE(isCurrentVersion_, isCurrentVersion) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<HttpApiOperationInfo> & operations() const { DARABONBA_PTR_GET_CONST(operations_, vector<HttpApiOperationInfo>) };
    inline vector<HttpApiOperationInfo> operations() { DARABONBA_PTR_GET(operations_, vector<HttpApiOperationInfo>) };
    inline HttpApiPublishRevisionInfo& setOperations(const vector<HttpApiOperationInfo> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline HttpApiPublishRevisionInfo& setOperations(vector<HttpApiOperationInfo> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


    // revisionId Field Functions 
    bool hasRevisionId() const { return this->revisionId_ != nullptr;};
    void deleteRevisionId() { this->revisionId_ = nullptr;};
    inline string revisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, "") };
    inline HttpApiPublishRevisionInfo& setRevisionId(string revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<HttpApiPublishRevisionInfoServiceConfigs> & serviceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<HttpApiPublishRevisionInfoServiceConfigs>) };
    inline vector<HttpApiPublishRevisionInfoServiceConfigs> serviceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<HttpApiPublishRevisionInfoServiceConfigs>) };
    inline HttpApiPublishRevisionInfo& setServiceConfigs(const vector<HttpApiPublishRevisionInfoServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline HttpApiPublishRevisionInfo& setServiceConfigs(vector<HttpApiPublishRevisionInfoServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


    // subDomains Field Functions 
    bool hasSubDomains() const { return this->subDomains_ != nullptr;};
    void deleteSubDomains() { this->subDomains_ = nullptr;};
    inline const vector<HttpApiDomainInfo> & subDomains() const { DARABONBA_PTR_GET_CONST(subDomains_, vector<HttpApiDomainInfo>) };
    inline vector<HttpApiDomainInfo> subDomains() { DARABONBA_PTR_GET(subDomains_, vector<HttpApiDomainInfo>) };
    inline HttpApiPublishRevisionInfo& setSubDomains(const vector<HttpApiDomainInfo> & subDomains) { DARABONBA_PTR_SET_VALUE(subDomains_, subDomains) };
    inline HttpApiPublishRevisionInfo& setSubDomains(vector<HttpApiDomainInfo> && subDomains) { DARABONBA_PTR_SET_RVALUE(subDomains_, subDomains) };


    // vipConfigs Field Functions 
    bool hasVipConfigs() const { return this->vipConfigs_ != nullptr;};
    void deleteVipConfigs() { this->vipConfigs_ = nullptr;};
    inline const vector<HttpApiPublishRevisionInfoVipConfigs> & vipConfigs() const { DARABONBA_PTR_GET_CONST(vipConfigs_, vector<HttpApiPublishRevisionInfoVipConfigs>) };
    inline vector<HttpApiPublishRevisionInfoVipConfigs> vipConfigs() { DARABONBA_PTR_GET(vipConfigs_, vector<HttpApiPublishRevisionInfoVipConfigs>) };
    inline HttpApiPublishRevisionInfo& setVipConfigs(const vector<HttpApiPublishRevisionInfoVipConfigs> & vipConfigs) { DARABONBA_PTR_SET_VALUE(vipConfigs_, vipConfigs) };
    inline HttpApiPublishRevisionInfo& setVipConfigs(vector<HttpApiPublishRevisionInfoVipConfigs> && vipConfigs) { DARABONBA_PTR_SET_RVALUE(vipConfigs_, vipConfigs) };


  protected:
    std::shared_ptr<string> backendScene_ = nullptr;
    std::shared_ptr<string> backendType_ = nullptr;
    std::shared_ptr<HttpApiPublishRevisionInfoCloudProductConfig> cloudProductConfig_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<vector<HttpApiDomainInfo>> customDomains_ = nullptr;
    std::shared_ptr<vector<HttpApiPublishRevisionInfoDnsConfigs>> dnsConfigs_ = nullptr;
    std::shared_ptr<HttpApiPublishRevisionInfoEnvironmentInfo> environmentInfo_ = nullptr;
    std::shared_ptr<bool> isCurrentVersion_ = nullptr;
    std::shared_ptr<vector<HttpApiOperationInfo>> operations_ = nullptr;
    std::shared_ptr<string> revisionId_ = nullptr;
    std::shared_ptr<vector<HttpApiPublishRevisionInfoServiceConfigs>> serviceConfigs_ = nullptr;
    std::shared_ptr<vector<HttpApiDomainInfo>> subDomains_ = nullptr;
    std::shared_ptr<vector<HttpApiPublishRevisionInfoVipConfigs>> vipConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

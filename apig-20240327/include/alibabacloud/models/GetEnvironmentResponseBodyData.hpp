// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENVIRONMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETENVIRONMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEnvironmentResponseBodyDataStatisticsInfo.hpp>
#include <vector>
#include <alibabacloud/APIG20240327.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetEnvironmentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnvironmentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(default, default_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(statisticsInfo, statisticsInfo_);
      DARABONBA_PTR_TO_JSON(subDomainInfos, subDomainInfos_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnvironmentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(default, default_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(statisticsInfo, statisticsInfo_);
      DARABONBA_PTR_FROM_JSON(subDomainInfos, subDomainInfos_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
    };
    GetEnvironmentResponseBodyData() = default ;
    GetEnvironmentResponseBodyData(const GetEnvironmentResponseBodyData &) = default ;
    GetEnvironmentResponseBodyData(GetEnvironmentResponseBodyData &&) = default ;
    GetEnvironmentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnvironmentResponseBodyData() = default ;
    GetEnvironmentResponseBodyData& operator=(const GetEnvironmentResponseBodyData &) = default ;
    GetEnvironmentResponseBodyData& operator=(GetEnvironmentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->createTimestamp_ != nullptr && this->default_ != nullptr && this->description_ != nullptr && this->environmentId_ != nullptr && this->gatewayInfo_ != nullptr
        && this->name_ != nullptr && this->resourceGroupId_ != nullptr && this->statisticsInfo_ != nullptr && this->subDomainInfos_ != nullptr && this->updateTimestamp_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline GetEnvironmentResponseBodyData& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetEnvironmentResponseBodyData& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline bool _default() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
    inline GetEnvironmentResponseBodyData& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEnvironmentResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline GetEnvironmentResponseBodyData& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const Models::GatewayInfo & gatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, Models::GatewayInfo) };
    inline Models::GatewayInfo gatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, Models::GatewayInfo) };
    inline GetEnvironmentResponseBodyData& setGatewayInfo(const Models::GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline GetEnvironmentResponseBodyData& setGatewayInfo(Models::GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetEnvironmentResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetEnvironmentResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // statisticsInfo Field Functions 
    bool hasStatisticsInfo() const { return this->statisticsInfo_ != nullptr;};
    void deleteStatisticsInfo() { this->statisticsInfo_ = nullptr;};
    inline const Models::GetEnvironmentResponseBodyDataStatisticsInfo & statisticsInfo() const { DARABONBA_PTR_GET_CONST(statisticsInfo_, Models::GetEnvironmentResponseBodyDataStatisticsInfo) };
    inline Models::GetEnvironmentResponseBodyDataStatisticsInfo statisticsInfo() { DARABONBA_PTR_GET(statisticsInfo_, Models::GetEnvironmentResponseBodyDataStatisticsInfo) };
    inline GetEnvironmentResponseBodyData& setStatisticsInfo(const Models::GetEnvironmentResponseBodyDataStatisticsInfo & statisticsInfo) { DARABONBA_PTR_SET_VALUE(statisticsInfo_, statisticsInfo) };
    inline GetEnvironmentResponseBodyData& setStatisticsInfo(Models::GetEnvironmentResponseBodyDataStatisticsInfo && statisticsInfo) { DARABONBA_PTR_SET_RVALUE(statisticsInfo_, statisticsInfo) };


    // subDomainInfos Field Functions 
    bool hasSubDomainInfos() const { return this->subDomainInfos_ != nullptr;};
    void deleteSubDomainInfos() { this->subDomainInfos_ = nullptr;};
    inline const vector<Models::SubDomainInfo> & subDomainInfos() const { DARABONBA_PTR_GET_CONST(subDomainInfos_, vector<Models::SubDomainInfo>) };
    inline vector<Models::SubDomainInfo> subDomainInfos() { DARABONBA_PTR_GET(subDomainInfos_, vector<Models::SubDomainInfo>) };
    inline GetEnvironmentResponseBodyData& setSubDomainInfos(const vector<Models::SubDomainInfo> & subDomainInfos) { DARABONBA_PTR_SET_VALUE(subDomainInfos_, subDomainInfos) };
    inline GetEnvironmentResponseBodyData& setSubDomainInfos(vector<Models::SubDomainInfo> && subDomainInfos) { DARABONBA_PTR_SET_RVALUE(subDomainInfos_, subDomainInfos) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline GetEnvironmentResponseBodyData& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // Environment alias.
    std::shared_ptr<string> alias_ = nullptr;
    // Creation timestamp.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // Whether it is the default environment.
    std::shared_ptr<bool> default_ = nullptr;
    // Environment description.
    std::shared_ptr<string> description_ = nullptr;
    // Environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // Gateway information
    std::shared_ptr<Models::GatewayInfo> gatewayInfo_ = nullptr;
    // Environment name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Related resource information.
    std::shared_ptr<Models::GetEnvironmentResponseBodyDataStatisticsInfo> statisticsInfo_ = nullptr;
    // List of subdomains.
    std::shared_ptr<vector<Models::SubDomainInfo>> subDomainInfos_ = nullptr;
    // Update timestamp.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GatewayInfo.hpp>
#include <vector>
#include <alibabacloud/models/SubDomainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class EnvironmentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(default, default_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(subDomainInfos, subDomainInfos_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(default, default_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(subDomainInfos, subDomainInfos_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
    };
    EnvironmentInfo() = default ;
    EnvironmentInfo(const EnvironmentInfo &) = default ;
    EnvironmentInfo(EnvironmentInfo &&) = default ;
    EnvironmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentInfo() = default ;
    EnvironmentInfo& operator=(const EnvironmentInfo &) = default ;
    EnvironmentInfo& operator=(EnvironmentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->createTimestamp_ == nullptr && this->default_ == nullptr && this->description_ == nullptr && this->environmentId_ == nullptr && this->gatewayInfo_ == nullptr
        && this->name_ == nullptr && this->resourceGroupId_ == nullptr && this->subDomainInfos_ == nullptr && this->updateTimestamp_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline EnvironmentInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline EnvironmentInfo& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline bool getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
    inline EnvironmentInfo& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline EnvironmentInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline EnvironmentInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, GatewayInfo) };
    inline GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, GatewayInfo) };
    inline EnvironmentInfo& setGatewayInfo(const GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline EnvironmentInfo& setGatewayInfo(GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EnvironmentInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline EnvironmentInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subDomainInfos Field Functions 
    bool hasSubDomainInfos() const { return this->subDomainInfos_ != nullptr;};
    void deleteSubDomainInfos() { this->subDomainInfos_ = nullptr;};
    inline const vector<SubDomainInfo> & getSubDomainInfos() const { DARABONBA_PTR_GET_CONST(subDomainInfos_, vector<SubDomainInfo>) };
    inline vector<SubDomainInfo> getSubDomainInfos() { DARABONBA_PTR_GET(subDomainInfos_, vector<SubDomainInfo>) };
    inline EnvironmentInfo& setSubDomainInfos(const vector<SubDomainInfo> & subDomainInfos) { DARABONBA_PTR_SET_VALUE(subDomainInfos_, subDomainInfos) };
    inline EnvironmentInfo& setSubDomainInfos(vector<SubDomainInfo> && subDomainInfos) { DARABONBA_PTR_SET_RVALUE(subDomainInfos_, subDomainInfos) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline EnvironmentInfo& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<int64_t> createTimestamp_ {};
    shared_ptr<bool> default_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> environmentId_ {};
    shared_ptr<GatewayInfo> gatewayInfo_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<SubDomainInfo>> subDomainInfos_ {};
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

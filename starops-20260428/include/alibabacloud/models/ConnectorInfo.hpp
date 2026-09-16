// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTORINFO_HPP_
#define ALIBABACLOUD_MODELS_CONNECTORINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConnectorAuthentication.hpp>
#include <vector>
#include <alibabacloud/models/ConnectorRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class ConnectorInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectorInfo& obj) { 
      DARABONBA_PTR_TO_JSON(authentication, authentication_);
      DARABONBA_PTR_TO_JSON(capabilityGrants, capabilityGrants_);
      DARABONBA_ANY_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(connectorName, connectorName_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(etag, etag_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_ANY_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(revision, revision_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_ANY_TO_JSON(status, status_);
      DARABONBA_ANY_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectorInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(authentication, authentication_);
      DARABONBA_PTR_FROM_JSON(capabilityGrants, capabilityGrants_);
      DARABONBA_ANY_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(connectorName, connectorName_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(etag, etag_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_ANY_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(revision, revision_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_ANY_FROM_JSON(status, status_);
      DARABONBA_ANY_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ConnectorInfo() = default ;
    ConnectorInfo(const ConnectorInfo &) = default ;
    ConnectorInfo(ConnectorInfo &&) = default ;
    ConnectorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectorInfo() = default ;
    ConnectorInfo& operator=(const ConnectorInfo &) = default ;
    ConnectorInfo& operator=(ConnectorInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authentication_ == nullptr
        && this->capabilityGrants_ == nullptr && this->configuration_ == nullptr && this->connectorName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->displayName_ == nullptr && this->enabled_ == nullptr && this->etag_ == nullptr && this->name_ == nullptr && this->policy_ == nullptr
        && this->provider_ == nullptr && this->revision_ == nullptr && this->runtime_ == nullptr && this->status_ == nullptr && this->target_ == nullptr
        && this->updateTime_ == nullptr; };
    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline const ConnectorAuthentication & getAuthentication() const { DARABONBA_PTR_GET_CONST(authentication_, ConnectorAuthentication) };
    inline ConnectorAuthentication getAuthentication() { DARABONBA_PTR_GET(authentication_, ConnectorAuthentication) };
    inline ConnectorInfo& setAuthentication(const ConnectorAuthentication & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
    inline ConnectorInfo& setAuthentication(ConnectorAuthentication && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


    // capabilityGrants Field Functions 
    bool hasCapabilityGrants() const { return this->capabilityGrants_ != nullptr;};
    void deleteCapabilityGrants() { this->capabilityGrants_ = nullptr;};
    inline const vector<Darabonba::Json> & getCapabilityGrants() const { DARABONBA_PTR_GET_CONST(capabilityGrants_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getCapabilityGrants() { DARABONBA_PTR_GET(capabilityGrants_, vector<Darabonba::Json>) };
    inline ConnectorInfo& setCapabilityGrants(const vector<Darabonba::Json> & capabilityGrants) { DARABONBA_PTR_SET_VALUE(capabilityGrants_, capabilityGrants) };
    inline ConnectorInfo& setCapabilityGrants(vector<Darabonba::Json> && capabilityGrants) { DARABONBA_PTR_SET_RVALUE(capabilityGrants_, capabilityGrants) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline     const Darabonba::Json & getConfiguration() const { DARABONBA_GET(configuration_) };
    Darabonba::Json & getConfiguration() { DARABONBA_GET(configuration_) };
    inline ConnectorInfo& setConfiguration(const Darabonba::Json & configuration) { DARABONBA_SET_VALUE(configuration_, configuration) };
    inline ConnectorInfo& setConfiguration(Darabonba::Json && configuration) { DARABONBA_SET_RVALUE(configuration_, configuration) };


    // connectorName Field Functions 
    bool hasConnectorName() const { return this->connectorName_ != nullptr;};
    void deleteConnectorName() { this->connectorName_ = nullptr;};
    inline string getConnectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
    inline ConnectorInfo& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ConnectorInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ConnectorInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ConnectorInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ConnectorInfo& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // etag Field Functions 
    bool hasEtag() const { return this->etag_ != nullptr;};
    void deleteEtag() { this->etag_ = nullptr;};
    inline string getEtag() const { DARABONBA_PTR_GET_DEFAULT(etag_, "") };
    inline ConnectorInfo& setEtag(string etag) { DARABONBA_PTR_SET_VALUE(etag_, etag) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConnectorInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline     const Darabonba::Json & getPolicy() const { DARABONBA_GET(policy_) };
    Darabonba::Json & getPolicy() { DARABONBA_GET(policy_) };
    inline ConnectorInfo& setPolicy(const Darabonba::Json & policy) { DARABONBA_SET_VALUE(policy_, policy) };
    inline ConnectorInfo& setPolicy(Darabonba::Json && policy) { DARABONBA_SET_RVALUE(policy_, policy) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ConnectorInfo& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // revision Field Functions 
    bool hasRevision() const { return this->revision_ != nullptr;};
    void deleteRevision() { this->revision_ = nullptr;};
    inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
    inline ConnectorInfo& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const ConnectorRuntime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, ConnectorRuntime) };
    inline ConnectorRuntime getRuntime() { DARABONBA_PTR_GET(runtime_, ConnectorRuntime) };
    inline ConnectorInfo& setRuntime(const ConnectorRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ConnectorInfo& setRuntime(ConnectorRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline     const Darabonba::Json & getStatus() const { DARABONBA_GET(status_) };
    Darabonba::Json & getStatus() { DARABONBA_GET(status_) };
    inline ConnectorInfo& setStatus(const Darabonba::Json & status) { DARABONBA_SET_VALUE(status_, status) };
    inline ConnectorInfo& setStatus(Darabonba::Json && status) { DARABONBA_SET_RVALUE(status_, status) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline     const Darabonba::Json & getTarget() const { DARABONBA_GET(target_) };
    Darabonba::Json & getTarget() { DARABONBA_GET(target_) };
    inline ConnectorInfo& setTarget(const Darabonba::Json & target) { DARABONBA_SET_VALUE(target_, target) };
    inline ConnectorInfo& setTarget(Darabonba::Json && target) { DARABONBA_SET_RVALUE(target_, target) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ConnectorInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Safe authentication identity
    // 
    // This parameter is required.
    shared_ptr<ConnectorAuthentication> authentication_ {};
    // The list of capabilities granted to the Connector.
    // 
    // This parameter is required.
    shared_ptr<vector<Darabonba::Json>> capabilityGrants_ {};
    // Provider configuration
    // 
    // This parameter is required.
    Darabonba::Json configuration_ {};
    // Connector name
    // 
    // This parameter is required.
    shared_ptr<string> connectorName_ {};
    // Creation time
    // 
    // This parameter is required.
    shared_ptr<string> createTime_ {};
    // Description
    shared_ptr<string> description_ {};
    // Display name
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // Specifies whether the Connector is enabled.
    // 
    // This parameter is required.
    shared_ptr<bool> enabled_ {};
    // ETag
    // 
    // This parameter is required.
    shared_ptr<string> etag_ {};
    // Digital employee name
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The execution policy of the Connector.
    // 
    // This parameter is required.
    Darabonba::Json policy_ {};
    // Provider
    // 
    // This parameter is required.
    shared_ptr<string> provider_ {};
    // Revision
    // 
    // This parameter is required.
    shared_ptr<int64_t> revision_ {};
    // The runtime configuration of the Connector.
    // 
    // This parameter is required.
    shared_ptr<ConnectorRuntime> runtime_ {};
    // Resource status
    // 
    // This parameter is required.
    Darabonba::Json status_ {};
    // Provider target
    // 
    // This parameter is required.
    Darabonba::Json target_ {};
    // Update time
    // 
    // This parameter is required.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif

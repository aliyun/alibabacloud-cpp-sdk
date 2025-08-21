// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpgradeEngineVersionRequestPlugins.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpgradeEngineVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeEngineVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(plugins, plugins_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(updateStrategy, updateStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeEngineVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(plugins, plugins_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(updateStrategy, updateStrategy_);
    };
    UpgradeEngineVersionRequest() = default ;
    UpgradeEngineVersionRequest(const UpgradeEngineVersionRequest &) = default ;
    UpgradeEngineVersionRequest(UpgradeEngineVersionRequest &&) = default ;
    UpgradeEngineVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeEngineVersionRequest() = default ;
    UpgradeEngineVersionRequest& operator=(const UpgradeEngineVersionRequest &) = default ;
    UpgradeEngineVersionRequest& operator=(UpgradeEngineVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->plugins_ != nullptr
        && this->type_ != nullptr && this->version_ != nullptr && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->updateStrategy_ != nullptr; };
    // plugins Field Functions 
    bool hasPlugins() const { return this->plugins_ != nullptr;};
    void deletePlugins() { this->plugins_ = nullptr;};
    inline const vector<UpgradeEngineVersionRequestPlugins> & plugins() const { DARABONBA_PTR_GET_CONST(plugins_, vector<UpgradeEngineVersionRequestPlugins>) };
    inline vector<UpgradeEngineVersionRequestPlugins> plugins() { DARABONBA_PTR_GET(plugins_, vector<UpgradeEngineVersionRequestPlugins>) };
    inline UpgradeEngineVersionRequest& setPlugins(const vector<UpgradeEngineVersionRequestPlugins> & plugins) { DARABONBA_PTR_SET_VALUE(plugins_, plugins) };
    inline UpgradeEngineVersionRequest& setPlugins(vector<UpgradeEngineVersionRequestPlugins> && plugins) { DARABONBA_PTR_SET_RVALUE(plugins_, plugins) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpgradeEngineVersionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpgradeEngineVersionRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpgradeEngineVersionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpgradeEngineVersionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // updateStrategy Field Functions 
    bool hasUpdateStrategy() const { return this->updateStrategy_ != nullptr;};
    void deleteUpdateStrategy() { this->updateStrategy_ = nullptr;};
    inline string updateStrategy() const { DARABONBA_PTR_GET_DEFAULT(updateStrategy_, "") };
    inline UpgradeEngineVersionRequest& setUpdateStrategy(string updateStrategy) { DARABONBA_PTR_SET_VALUE(updateStrategy_, updateStrategy) };


  protected:
    std::shared_ptr<vector<UpgradeEngineVersionRequestPlugins>> plugins_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    // The moderation results.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The monitoring type. Valid values:
    // 
    // *   checkClusterHealth: Cluster Health Status
    // *   checkConfigCompatible: Configuration Compatibility Status
    // *   checkClusterResource: resource space status
    // *   checkClusterSnapshot: Whether a snapshot exists
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> updateStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

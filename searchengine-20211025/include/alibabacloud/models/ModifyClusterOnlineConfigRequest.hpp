// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERONLINECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERONLINECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyClusterOnlineConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterOnlineConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clusters, clusters_);
      DARABONBA_PTR_TO_JSON(config, config_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterOnlineConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(config, config_);
    };
    ModifyClusterOnlineConfigRequest() = default ;
    ModifyClusterOnlineConfigRequest(const ModifyClusterOnlineConfigRequest &) = default ;
    ModifyClusterOnlineConfigRequest(ModifyClusterOnlineConfigRequest &&) = default ;
    ModifyClusterOnlineConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterOnlineConfigRequest() = default ;
    ModifyClusterOnlineConfigRequest& operator=(const ModifyClusterOnlineConfigRequest &) = default ;
    ModifyClusterOnlineConfigRequest& operator=(ModifyClusterOnlineConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusters_ != nullptr
        && this->config_ != nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<string> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<string>) };
    inline vector<string> clusters() { DARABONBA_PTR_GET(clusters_, vector<string>) };
    inline ModifyClusterOnlineConfigRequest& setClusters(const vector<string> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline ModifyClusterOnlineConfigRequest& setClusters(vector<string> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, int32_t> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, int32_t>) };
    inline map<string, int32_t> config() { DARABONBA_PTR_GET(config_, map<string, int32_t>) };
    inline ModifyClusterOnlineConfigRequest& setConfig(const map<string, int32_t> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ModifyClusterOnlineConfigRequest& setConfig(map<string, int32_t> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


  protected:
    // The cluster information.
    std::shared_ptr<vector<string>> clusters_ = nullptr;
    // The configuration information.
    std::shared_ptr<map<string, int32_t>> config_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif

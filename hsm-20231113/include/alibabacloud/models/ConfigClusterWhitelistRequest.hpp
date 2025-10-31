// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGCLUSTERWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGCLUSTERWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ConfigClusterWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigClusterWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigClusterWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    ConfigClusterWhitelistRequest() = default ;
    ConfigClusterWhitelistRequest(const ConfigClusterWhitelistRequest &) = default ;
    ConfigClusterWhitelistRequest(ConfigClusterWhitelistRequest &&) = default ;
    ConfigClusterWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigClusterWhitelistRequest() = default ;
    ConfigClusterWhitelistRequest& operator=(const ConfigClusterWhitelistRequest &) = default ;
    ConfigClusterWhitelistRequest& operator=(ConfigClusterWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->whitelist_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ConfigClusterWhitelistRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string whitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline ConfigClusterWhitelistRequest& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The IP address whitelist of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif

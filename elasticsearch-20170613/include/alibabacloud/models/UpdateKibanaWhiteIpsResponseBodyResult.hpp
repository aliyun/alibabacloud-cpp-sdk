// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKIBANAWHITEIPSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKIBANAWHITEIPSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateKibanaWhiteIpsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKibanaWhiteIpsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
      DARABONBA_PTR_TO_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKibanaWhiteIpsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
    };
    UpdateKibanaWhiteIpsResponseBodyResult() = default ;
    UpdateKibanaWhiteIpsResponseBodyResult(const UpdateKibanaWhiteIpsResponseBodyResult &) = default ;
    UpdateKibanaWhiteIpsResponseBodyResult(UpdateKibanaWhiteIpsResponseBodyResult &&) = default ;
    UpdateKibanaWhiteIpsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKibanaWhiteIpsResponseBodyResult() = default ;
    UpdateKibanaWhiteIpsResponseBodyResult& operator=(const UpdateKibanaWhiteIpsResponseBodyResult &) = default ;
    UpdateKibanaWhiteIpsResponseBodyResult& operator=(UpdateKibanaWhiteIpsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kibanaIPWhitelist_ != nullptr
        && this->kibanaPrivateIPWhitelist_ != nullptr && this->networkConfig_ != nullptr; };
    // kibanaIPWhitelist Field Functions 
    bool hasKibanaIPWhitelist() const { return this->kibanaIPWhitelist_ != nullptr;};
    void deleteKibanaIPWhitelist() { this->kibanaIPWhitelist_ = nullptr;};
    inline const vector<string> & kibanaIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaIPWhitelist_, vector<string>) };
    inline vector<string> kibanaIPWhitelist() { DARABONBA_PTR_GET(kibanaIPWhitelist_, vector<string>) };
    inline UpdateKibanaWhiteIpsResponseBodyResult& setKibanaIPWhitelist(const vector<string> & kibanaIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };
    inline UpdateKibanaWhiteIpsResponseBodyResult& setKibanaIPWhitelist(vector<string> && kibanaIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };


    // kibanaPrivateIPWhitelist Field Functions 
    bool hasKibanaPrivateIPWhitelist() const { return this->kibanaPrivateIPWhitelist_ != nullptr;};
    void deleteKibanaPrivateIPWhitelist() { this->kibanaPrivateIPWhitelist_ = nullptr;};
    inline const vector<string> & kibanaPrivateIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaPrivateIPWhitelist_, vector<string>) };
    inline vector<string> kibanaPrivateIPWhitelist() { DARABONBA_PTR_GET(kibanaPrivateIPWhitelist_, vector<string>) };
    inline UpdateKibanaWhiteIpsResponseBodyResult& setKibanaPrivateIPWhitelist(const vector<string> & kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };
    inline UpdateKibanaWhiteIpsResponseBodyResult& setKibanaPrivateIPWhitelist(vector<string> && kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig) };
    inline Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig) };
    inline UpdateKibanaWhiteIpsResponseBodyResult& setNetworkConfig(const Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline UpdateKibanaWhiteIpsResponseBodyResult& setNetworkConfig(Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


  protected:
    // The public IP address whitelists for access to the Kibana console of the cluster.
    std::shared_ptr<vector<string>> kibanaIPWhitelist_ = nullptr;
    // The private IP address whitelists for access to the Kibana console of the cluster.
    std::shared_ptr<vector<string>> kibanaPrivateIPWhitelist_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<Models::UpdateKibanaWhiteIpsResponseBodyResultNetworkConfig> networkConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

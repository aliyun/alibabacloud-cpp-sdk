// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITEIPSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITEIPSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWhiteIpsResponseBodyResultNetworkConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateWhiteIpsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhiteIpsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(esIPWhitelist, esIPWhitelist_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhiteIpsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(esIPWhitelist, esIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
    };
    UpdateWhiteIpsResponseBodyResult() = default ;
    UpdateWhiteIpsResponseBodyResult(const UpdateWhiteIpsResponseBodyResult &) = default ;
    UpdateWhiteIpsResponseBodyResult(UpdateWhiteIpsResponseBodyResult &&) = default ;
    UpdateWhiteIpsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhiteIpsResponseBodyResult() = default ;
    UpdateWhiteIpsResponseBodyResult& operator=(const UpdateWhiteIpsResponseBodyResult &) = default ;
    UpdateWhiteIpsResponseBodyResult& operator=(UpdateWhiteIpsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->esIPWhitelist_ != nullptr
        && this->networkConfig_ != nullptr; };
    // esIPWhitelist Field Functions 
    bool hasEsIPWhitelist() const { return this->esIPWhitelist_ != nullptr;};
    void deleteEsIPWhitelist() { this->esIPWhitelist_ = nullptr;};
    inline const vector<string> & esIPWhitelist() const { DARABONBA_PTR_GET_CONST(esIPWhitelist_, vector<string>) };
    inline vector<string> esIPWhitelist() { DARABONBA_PTR_GET(esIPWhitelist_, vector<string>) };
    inline UpdateWhiteIpsResponseBodyResult& setEsIPWhitelist(const vector<string> & esIPWhitelist) { DARABONBA_PTR_SET_VALUE(esIPWhitelist_, esIPWhitelist) };
    inline UpdateWhiteIpsResponseBodyResult& setEsIPWhitelist(vector<string> && esIPWhitelist) { DARABONBA_PTR_SET_RVALUE(esIPWhitelist_, esIPWhitelist) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const Models::UpdateWhiteIpsResponseBodyResultNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Models::UpdateWhiteIpsResponseBodyResultNetworkConfig) };
    inline Models::UpdateWhiteIpsResponseBodyResultNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, Models::UpdateWhiteIpsResponseBodyResultNetworkConfig) };
    inline UpdateWhiteIpsResponseBodyResult& setNetworkConfig(const Models::UpdateWhiteIpsResponseBodyResultNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline UpdateWhiteIpsResponseBodyResult& setNetworkConfig(Models::UpdateWhiteIpsResponseBodyResultNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


  protected:
    // The list of whitelists.
    std::shared_ptr<vector<string>> esIPWhitelist_ = nullptr;
    // The name of the whitelist. By default, the default whitelist is included.
    std::shared_ptr<Models::UpdateWhiteIpsResponseBodyResultNetworkConfig> networkConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

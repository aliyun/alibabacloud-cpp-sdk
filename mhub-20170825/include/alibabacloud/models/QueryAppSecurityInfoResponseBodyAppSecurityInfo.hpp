// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPSECURITYINFORESPONSEBODYAPPSECURITYINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPSECURITYINFORESPONSEBODYAPPSECURITYINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class QueryAppSecurityInfoResponseBodyAppSecurityInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppSecurityInfoResponseBodyAppSecurityInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(ExtConfig, extConfig_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppSecurityInfoResponseBodyAppSecurityInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(ExtConfig, extConfig_);
    };
    QueryAppSecurityInfoResponseBodyAppSecurityInfo() = default ;
    QueryAppSecurityInfoResponseBodyAppSecurityInfo(const QueryAppSecurityInfoResponseBodyAppSecurityInfo &) = default ;
    QueryAppSecurityInfoResponseBodyAppSecurityInfo(QueryAppSecurityInfoResponseBodyAppSecurityInfo &&) = default ;
    QueryAppSecurityInfoResponseBodyAppSecurityInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppSecurityInfoResponseBodyAppSecurityInfo() = default ;
    QueryAppSecurityInfoResponseBodyAppSecurityInfo& operator=(const QueryAppSecurityInfoResponseBodyAppSecurityInfo &) = default ;
    QueryAppSecurityInfoResponseBodyAppSecurityInfo& operator=(QueryAppSecurityInfoResponseBodyAppSecurityInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->appSecret_ != nullptr && this->extConfig_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline QueryAppSecurityInfoResponseBodyAppSecurityInfo& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline QueryAppSecurityInfoResponseBodyAppSecurityInfo& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // extConfig Field Functions 
    bool hasExtConfig() const { return this->extConfig_ != nullptr;};
    void deleteExtConfig() { this->extConfig_ = nullptr;};
    inline const Models::QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig & extConfig() const { DARABONBA_PTR_GET_CONST(extConfig_, Models::QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig) };
    inline Models::QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig extConfig() { DARABONBA_PTR_GET(extConfig_, Models::QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig) };
    inline QueryAppSecurityInfoResponseBodyAppSecurityInfo& setExtConfig(const Models::QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig & extConfig) { DARABONBA_PTR_SET_VALUE(extConfig_, extConfig) };
    inline QueryAppSecurityInfoResponseBodyAppSecurityInfo& setExtConfig(Models::QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig && extConfig) { DARABONBA_PTR_SET_RVALUE(extConfig_, extConfig) };


  protected:
    std::shared_ptr<string> appKey_ = nullptr;
    std::shared_ptr<string> appSecret_ = nullptr;
    std::shared_ptr<Models::QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig> extConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif

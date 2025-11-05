// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONFIGSRESPONSEBODYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONFIGSRESPONSEBODYCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserConfigsResponseBodyConfigsOssLogConfig.hpp>
#include <alibabacloud/models/DescribeUserConfigsResponseBodyConfigsWafConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserConfigsResponseBodyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConfigsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(OssLogConfig, ossLogConfig_);
      DARABONBA_PTR_TO_JSON(WafConfig, wafConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConfigsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(OssLogConfig, ossLogConfig_);
      DARABONBA_PTR_FROM_JSON(WafConfig, wafConfig_);
    };
    DescribeUserConfigsResponseBodyConfigs() = default ;
    DescribeUserConfigsResponseBodyConfigs(const DescribeUserConfigsResponseBodyConfigs &) = default ;
    DescribeUserConfigsResponseBodyConfigs(DescribeUserConfigsResponseBodyConfigs &&) = default ;
    DescribeUserConfigsResponseBodyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConfigsResponseBodyConfigs() = default ;
    DescribeUserConfigsResponseBodyConfigs& operator=(const DescribeUserConfigsResponseBodyConfigs &) = default ;
    DescribeUserConfigsResponseBodyConfigs& operator=(DescribeUserConfigsResponseBodyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossLogConfig_ == nullptr
        && return this->wafConfig_ == nullptr; };
    // ossLogConfig Field Functions 
    bool hasOssLogConfig() const { return this->ossLogConfig_ != nullptr;};
    void deleteOssLogConfig() { this->ossLogConfig_ = nullptr;};
    inline const Models::DescribeUserConfigsResponseBodyConfigsOssLogConfig & ossLogConfig() const { DARABONBA_PTR_GET_CONST(ossLogConfig_, Models::DescribeUserConfigsResponseBodyConfigsOssLogConfig) };
    inline Models::DescribeUserConfigsResponseBodyConfigsOssLogConfig ossLogConfig() { DARABONBA_PTR_GET(ossLogConfig_, Models::DescribeUserConfigsResponseBodyConfigsOssLogConfig) };
    inline DescribeUserConfigsResponseBodyConfigs& setOssLogConfig(const Models::DescribeUserConfigsResponseBodyConfigsOssLogConfig & ossLogConfig) { DARABONBA_PTR_SET_VALUE(ossLogConfig_, ossLogConfig) };
    inline DescribeUserConfigsResponseBodyConfigs& setOssLogConfig(Models::DescribeUserConfigsResponseBodyConfigsOssLogConfig && ossLogConfig) { DARABONBA_PTR_SET_RVALUE(ossLogConfig_, ossLogConfig) };


    // wafConfig Field Functions 
    bool hasWafConfig() const { return this->wafConfig_ != nullptr;};
    void deleteWafConfig() { this->wafConfig_ = nullptr;};
    inline const Models::DescribeUserConfigsResponseBodyConfigsWafConfig & wafConfig() const { DARABONBA_PTR_GET_CONST(wafConfig_, Models::DescribeUserConfigsResponseBodyConfigsWafConfig) };
    inline Models::DescribeUserConfigsResponseBodyConfigsWafConfig wafConfig() { DARABONBA_PTR_GET(wafConfig_, Models::DescribeUserConfigsResponseBodyConfigsWafConfig) };
    inline DescribeUserConfigsResponseBodyConfigs& setWafConfig(const Models::DescribeUserConfigsResponseBodyConfigsWafConfig & wafConfig) { DARABONBA_PTR_SET_VALUE(wafConfig_, wafConfig) };
    inline DescribeUserConfigsResponseBodyConfigs& setWafConfig(Models::DescribeUserConfigsResponseBodyConfigsWafConfig && wafConfig) { DARABONBA_PTR_SET_RVALUE(wafConfig_, wafConfig) };


  protected:
    // The configurations of Object Storage Service (OSS).
    std::shared_ptr<Models::DescribeUserConfigsResponseBodyConfigsOssLogConfig> ossLogConfig_ = nullptr;
    // The configurations of Web Application Firewall (WAF).
    std::shared_ptr<Models::DescribeUserConfigsResponseBodyConfigsWafConfig> wafConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLAPPSRESPONSEBODYACLAPPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLAPPSRESPONSEBODYACLAPPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclAppsResponseBodyAclApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclAppsResponseBodyAclApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Popular, popular_);
      DARABONBA_PTR_TO_JSON(Protocols, protocols_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SupportFqdn, supportFqdn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclAppsResponseBodyAclApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Popular, popular_);
      DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SupportFqdn, supportFqdn_);
    };
    DescribeAclAppsResponseBodyAclApps() = default ;
    DescribeAclAppsResponseBodyAclApps(const DescribeAclAppsResponseBodyAclApps &) = default ;
    DescribeAclAppsResponseBodyAclApps(DescribeAclAppsResponseBodyAclApps &&) = default ;
    DescribeAclAppsResponseBodyAclApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclAppsResponseBodyAclApps() = default ;
    DescribeAclAppsResponseBodyAclApps& operator=(const DescribeAclAppsResponseBodyAclApps &) = default ;
    DescribeAclAppsResponseBodyAclApps& operator=(DescribeAclAppsResponseBodyAclApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->popular_ == nullptr && return this->protocols_ == nullptr && return this->riskLevel_ == nullptr && return this->supportFqdn_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline DescribeAclAppsResponseBodyAclApps& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAclAppsResponseBodyAclApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // popular Field Functions 
    bool hasPopular() const { return this->popular_ != nullptr;};
    void deletePopular() { this->popular_ = nullptr;};
    inline int32_t popular() const { DARABONBA_PTR_GET_DEFAULT(popular_, 0) };
    inline DescribeAclAppsResponseBodyAclApps& setPopular(int32_t popular) { DARABONBA_PTR_SET_VALUE(popular_, popular) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> protocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline DescribeAclAppsResponseBodyAclApps& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline DescribeAclAppsResponseBodyAclApps& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline DescribeAclAppsResponseBodyAclApps& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // supportFqdn Field Functions 
    bool hasSupportFqdn() const { return this->supportFqdn_ != nullptr;};
    void deleteSupportFqdn() { this->supportFqdn_ = nullptr;};
    inline int32_t supportFqdn() const { DARABONBA_PTR_GET_DEFAULT(supportFqdn_, 0) };
    inline DescribeAclAppsResponseBodyAclApps& setSupportFqdn(int32_t supportFqdn) { DARABONBA_PTR_SET_VALUE(supportFqdn_, supportFqdn) };


  protected:
    std::shared_ptr<int32_t> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> popular_ = nullptr;
    std::shared_ptr<vector<string>> protocols_ = nullptr;
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    std::shared_ptr<int32_t> supportFqdn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

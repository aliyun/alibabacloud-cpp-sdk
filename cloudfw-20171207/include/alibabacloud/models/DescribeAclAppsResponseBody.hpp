// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLAPPSRESPONSEBODY_HPP_
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
  class DescribeAclAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclApps, aclApps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclApps, aclApps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAclAppsResponseBody() = default ;
    DescribeAclAppsResponseBody(const DescribeAclAppsResponseBody &) = default ;
    DescribeAclAppsResponseBody(DescribeAclAppsResponseBody &&) = default ;
    DescribeAclAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclAppsResponseBody() = default ;
    DescribeAclAppsResponseBody& operator=(const DescribeAclAppsResponseBody &) = default ;
    DescribeAclAppsResponseBody& operator=(DescribeAclAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AclApps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclApps& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Popular, popular_);
        DARABONBA_PTR_TO_JSON(Protocols, protocols_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SupportFqdn, supportFqdn_);
      };
      friend void from_json(const Darabonba::Json& j, AclApps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Popular, popular_);
        DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SupportFqdn, supportFqdn_);
      };
      AclApps() = default ;
      AclApps(const AclApps &) = default ;
      AclApps(AclApps &&) = default ;
      AclApps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclApps() = default ;
      AclApps& operator=(const AclApps &) = default ;
      AclApps& operator=(AclApps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->popular_ == nullptr && this->protocols_ == nullptr && this->riskLevel_ == nullptr && this->supportFqdn_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
      inline AclApps& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline AclApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // popular Field Functions 
      bool hasPopular() const { return this->popular_ != nullptr;};
      void deletePopular() { this->popular_ = nullptr;};
      inline int32_t getPopular() const { DARABONBA_PTR_GET_DEFAULT(popular_, 0) };
      inline AclApps& setPopular(int32_t popular) { DARABONBA_PTR_SET_VALUE(popular_, popular) };


      // protocols Field Functions 
      bool hasProtocols() const { return this->protocols_ != nullptr;};
      void deleteProtocols() { this->protocols_ = nullptr;};
      inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
      inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
      inline AclApps& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
      inline AclApps& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
      inline AclApps& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // supportFqdn Field Functions 
      bool hasSupportFqdn() const { return this->supportFqdn_ != nullptr;};
      void deleteSupportFqdn() { this->supportFqdn_ = nullptr;};
      inline int32_t getSupportFqdn() const { DARABONBA_PTR_GET_DEFAULT(supportFqdn_, 0) };
      inline AclApps& setSupportFqdn(int32_t supportFqdn) { DARABONBA_PTR_SET_VALUE(supportFqdn_, supportFqdn) };


    protected:
      shared_ptr<int32_t> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<int32_t> popular_ {};
      shared_ptr<vector<string>> protocols_ {};
      shared_ptr<int32_t> riskLevel_ {};
      shared_ptr<int32_t> supportFqdn_ {};
    };

    virtual bool empty() const override { return this->aclApps_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // aclApps Field Functions 
    bool hasAclApps() const { return this->aclApps_ != nullptr;};
    void deleteAclApps() { this->aclApps_ = nullptr;};
    inline const vector<DescribeAclAppsResponseBody::AclApps> & getAclApps() const { DARABONBA_PTR_GET_CONST(aclApps_, vector<DescribeAclAppsResponseBody::AclApps>) };
    inline vector<DescribeAclAppsResponseBody::AclApps> getAclApps() { DARABONBA_PTR_GET(aclApps_, vector<DescribeAclAppsResponseBody::AclApps>) };
    inline DescribeAclAppsResponseBody& setAclApps(const vector<DescribeAclAppsResponseBody::AclApps> & aclApps) { DARABONBA_PTR_SET_VALUE(aclApps_, aclApps) };
    inline DescribeAclAppsResponseBody& setAclApps(vector<DescribeAclAppsResponseBody::AclApps> && aclApps) { DARABONBA_PTR_SET_RVALUE(aclApps_, aclApps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAclAppsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeAclAppsResponseBody::AclApps>> aclApps_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

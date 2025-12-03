// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPPSRESPONSEBODYAUTHORIZEDAPPSAUTHORIZEDAPP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPPSRESPONSEBODYAUTHORIZEDAPPSAUTHORIZEDAPP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedAppTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& obj) { 
      DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AuthVaildTime, authVaildTime_);
      DARABONBA_PTR_TO_JSON(AuthorizationSource, authorizationSource_);
      DARABONBA_PTR_TO_JSON(AuthorizedTime, authorizedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(StageAlias, stageAlias_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AuthVaildTime, authVaildTime_);
      DARABONBA_PTR_FROM_JSON(AuthorizationSource, authorizationSource_);
      DARABONBA_PTR_FROM_JSON(AuthorizedTime, authorizedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(StageAlias, stageAlias_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp() = default ;
    DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp(const DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp &) = default ;
    DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp(DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp &&) = default ;
    DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp() = default ;
    DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& operator=(const DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp &) = default ;
    DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& operator=(DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appDescription_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->authVaildTime_ == nullptr && return this->authorizationSource_ == nullptr && return this->authorizedTime_ == nullptr
        && return this->description_ == nullptr && return this->operator_ == nullptr && return this->stageAlias_ == nullptr && return this->stageName_ == nullptr && return this->tag_ == nullptr; };
    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string appDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // authVaildTime Field Functions 
    bool hasAuthVaildTime() const { return this->authVaildTime_ != nullptr;};
    void deleteAuthVaildTime() { this->authVaildTime_ = nullptr;};
    inline string authVaildTime() const { DARABONBA_PTR_GET_DEFAULT(authVaildTime_, "") };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setAuthVaildTime(string authVaildTime) { DARABONBA_PTR_SET_VALUE(authVaildTime_, authVaildTime) };


    // authorizationSource Field Functions 
    bool hasAuthorizationSource() const { return this->authorizationSource_ != nullptr;};
    void deleteAuthorizationSource() { this->authorizationSource_ = nullptr;};
    inline string authorizationSource() const { DARABONBA_PTR_GET_DEFAULT(authorizationSource_, "") };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setAuthorizationSource(string authorizationSource) { DARABONBA_PTR_SET_VALUE(authorizationSource_, authorizationSource) };


    // authorizedTime Field Functions 
    bool hasAuthorizedTime() const { return this->authorizedTime_ != nullptr;};
    void deleteAuthorizedTime() { this->authorizedTime_ = nullptr;};
    inline string authorizedTime() const { DARABONBA_PTR_GET_DEFAULT(authorizedTime_, "") };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setAuthorizedTime(string authorizedTime) { DARABONBA_PTR_SET_VALUE(authorizedTime_, authorizedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // stageAlias Field Functions 
    bool hasStageAlias() const { return this->stageAlias_ != nullptr;};
    void deleteStageAlias() { this->stageAlias_ = nullptr;};
    inline string stageAlias() const { DARABONBA_PTR_GET_DEFAULT(stageAlias_, "") };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setStageAlias(string stageAlias) { DARABONBA_PTR_SET_VALUE(stageAlias_, stageAlias) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedAppTag & tag() const { DARABONBA_PTR_GET_CONST(tag_, Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedAppTag) };
    inline Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedAppTag tag() { DARABONBA_PTR_GET(tag_, Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedAppTag) };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setTag(const Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedAppTag & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedApp& setTag(Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedAppTag && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The application description.
    std::shared_ptr<string> appDescription_ = nullptr;
    // The application ID, which is generated by the system and globally unique.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The application name.
    std::shared_ptr<string> authVaildTime_ = nullptr;
    // The authorization source. Valid values:
    // 
    // *   **CONSOLE**
    // *   **API**
    std::shared_ptr<string> authorizationSource_ = nullptr;
    // The authorization time (UTC).
    std::shared_ptr<string> authorizedTime_ = nullptr;
    // The authorization description.
    std::shared_ptr<string> description_ = nullptr;
    // The authorizer. Valid values:
    // 
    // *   **PROVIDER**: API owner
    // *   **CONSUMER**: API caller
    std::shared_ptr<string> operator_ = nullptr;
    // The environment alias.
    std::shared_ptr<string> stageAlias_ = nullptr;
    // The environment to which the API is published. Valid values:
    // 
    // *   **RELEASE**: the production environment
    // *   **PRE**: the staging environment
    // *   **TEST**: the test environment
    std::shared_ptr<string> stageName_ = nullptr;
    // The key of the tag.
    std::shared_ptr<Models::DescribeAuthorizedAppsResponseBodyAuthorizedAppsAuthorizedAppTag> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

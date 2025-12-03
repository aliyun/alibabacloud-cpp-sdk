// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSBYAPIPRODUCTRESPONSEBODYAUTHORIZEDAPPSAUTHORIZEDAPP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSBYAPIPRODUCTRESPONSEBODYAUTHORIZEDAPPSAUTHORIZEDAPP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_TO_JSON(AuthorizedTime, authorizedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AuthValidTime, authValidTime_);
      DARABONBA_PTR_FROM_JSON(AuthorizedTime, authorizedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
    };
    DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp() = default ;
    DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp(const DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp &) = default ;
    DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp(DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp &&) = default ;
    DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp() = default ;
    DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp& operator=(const DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp &) = default ;
    DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp& operator=(DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->authValidTime_ == nullptr && return this->authorizedTime_ == nullptr && return this->description_ == nullptr && return this->extend_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // authValidTime Field Functions 
    bool hasAuthValidTime() const { return this->authValidTime_ != nullptr;};
    void deleteAuthValidTime() { this->authValidTime_ = nullptr;};
    inline string authValidTime() const { DARABONBA_PTR_GET_DEFAULT(authValidTime_, "") };
    inline DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp& setAuthValidTime(string authValidTime) { DARABONBA_PTR_SET_VALUE(authValidTime_, authValidTime) };


    // authorizedTime Field Functions 
    bool hasAuthorizedTime() const { return this->authorizedTime_ != nullptr;};
    void deleteAuthorizedTime() { this->authorizedTime_ = nullptr;};
    inline string authorizedTime() const { DARABONBA_PTR_GET_DEFAULT(authorizedTime_, "") };
    inline DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp& setAuthorizedTime(string authorizedTime) { DARABONBA_PTR_SET_VALUE(authorizedTime_, authorizedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline DescribeAppsByApiProductResponseBodyAuthorizedAppsAuthorizedApp& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


  protected:
    // The application ID.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The expiration time of the authorization. The time is in GMT. An empty value indicates that the authorization does not expire.
    std::shared_ptr<string> authValidTime_ = nullptr;
    // The time when the authorization was created. The time is in GMT.
    std::shared_ptr<string> authorizedTime_ = nullptr;
    // The authorization description.
    std::shared_ptr<string> description_ = nullptr;
    // The extended information.
    std::shared_ptr<string> extend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

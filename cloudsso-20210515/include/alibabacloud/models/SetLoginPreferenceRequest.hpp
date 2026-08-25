// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLOGINPREFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLOGINPREFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class SetLoginPreferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLoginPreferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserToGetCredentials, allowUserToGetCredentials_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(LoginNetworkMasks, loginNetworkMasks_);
    };
    friend void from_json(const Darabonba::Json& j, SetLoginPreferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserToGetCredentials, allowUserToGetCredentials_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(LoginNetworkMasks, loginNetworkMasks_);
    };
    SetLoginPreferenceRequest() = default ;
    SetLoginPreferenceRequest(const SetLoginPreferenceRequest &) = default ;
    SetLoginPreferenceRequest(SetLoginPreferenceRequest &&) = default ;
    SetLoginPreferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLoginPreferenceRequest() = default ;
    SetLoginPreferenceRequest& operator=(const SetLoginPreferenceRequest &) = default ;
    SetLoginPreferenceRequest& operator=(SetLoginPreferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowUserToGetCredentials_ == nullptr
        && this->directoryId_ == nullptr && this->loginNetworkMasks_ == nullptr; };
    // allowUserToGetCredentials Field Functions 
    bool hasAllowUserToGetCredentials() const { return this->allowUserToGetCredentials_ != nullptr;};
    void deleteAllowUserToGetCredentials() { this->allowUserToGetCredentials_ = nullptr;};
    inline bool getAllowUserToGetCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowUserToGetCredentials_, false) };
    inline SetLoginPreferenceRequest& setAllowUserToGetCredentials(bool allowUserToGetCredentials) { DARABONBA_PTR_SET_VALUE(allowUserToGetCredentials_, allowUserToGetCredentials) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SetLoginPreferenceRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // loginNetworkMasks Field Functions 
    bool hasLoginNetworkMasks() const { return this->loginNetworkMasks_ != nullptr;};
    void deleteLoginNetworkMasks() { this->loginNetworkMasks_ = nullptr;};
    inline string getLoginNetworkMasks() const { DARABONBA_PTR_GET_DEFAULT(loginNetworkMasks_, "") };
    inline SetLoginPreferenceRequest& setLoginNetworkMasks(string loginNetworkMasks) { DARABONBA_PTR_SET_VALUE(loginNetworkMasks_, loginNetworkMasks) };


  protected:
    // Specifies whether to allow a user to obtain the application access credential after logon to the portal. Valid values:
    // 
    // *   True
    // *   False (default)
    shared_ptr<bool> allowUserToGetCredentials_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The IP address whitelist. CloudSSO users can log on to the CloudSSO user portal only by using the IP addresses in the whitelist. Limits:
    // 
    // *   You can enter IP addresses or CIDR blocks. IPv4 addresses are supported.
    // *   You can enter up to 100 IP addresses or CIDR blocks. Separate multiple IP addresses or CIDR blocks with semicolons `(;)`.
    // *   If you do not specify this parameter, the original settings are retained.
    // *   If you set this parameter to a semicolon (`;`), the value of this parameter is cleared.
    // *   The IP address whitelist takes effect only on CloudSSO users who want to log on to the CloudSSO user portal by using the username-password logon or single sign-on (SSO) method. The IP address whitelist does not take effect on CloudSSO users who access accounts in a resource directory from the CloudSSO user portal.
    shared_ptr<string> loginNetworkMasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif

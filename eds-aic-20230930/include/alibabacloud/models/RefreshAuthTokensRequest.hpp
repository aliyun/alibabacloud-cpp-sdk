// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHAUTHTOKENSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHAUTHTOKENSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RefreshAuthTokensRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshAuthTokensRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireSeconds, expireSeconds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LicenseKeys, licenseKeys_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAuthTokensRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireSeconds, expireSeconds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LicenseKeys, licenseKeys_);
    };
    RefreshAuthTokensRequest() = default ;
    RefreshAuthTokensRequest(const RefreshAuthTokensRequest &) = default ;
    RefreshAuthTokensRequest(RefreshAuthTokensRequest &&) = default ;
    RefreshAuthTokensRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshAuthTokensRequest() = default ;
    RefreshAuthTokensRequest& operator=(const RefreshAuthTokensRequest &) = default ;
    RefreshAuthTokensRequest& operator=(RefreshAuthTokensRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireSeconds_ == nullptr
        && this->instanceIds_ == nullptr && this->licenseKeys_ == nullptr; };
    // expireSeconds Field Functions 
    bool hasExpireSeconds() const { return this->expireSeconds_ != nullptr;};
    void deleteExpireSeconds() { this->expireSeconds_ = nullptr;};
    inline int64_t getExpireSeconds() const { DARABONBA_PTR_GET_DEFAULT(expireSeconds_, 0L) };
    inline RefreshAuthTokensRequest& setExpireSeconds(int64_t expireSeconds) { DARABONBA_PTR_SET_VALUE(expireSeconds_, expireSeconds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline RefreshAuthTokensRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // licenseKeys Field Functions 
    bool hasLicenseKeys() const { return this->licenseKeys_ != nullptr;};
    void deleteLicenseKeys() { this->licenseKeys_ = nullptr;};
    inline string getLicenseKeys() const { DARABONBA_PTR_GET_DEFAULT(licenseKeys_, "") };
    inline RefreshAuthTokensRequest& setLicenseKeys(string licenseKeys) { DARABONBA_PTR_SET_VALUE(licenseKeys_, licenseKeys) };


  protected:
    // The validity period in seconds.
    shared_ptr<int64_t> expireSeconds_ {};
    // The list of instance IDs.
    shared_ptr<string> instanceIds_ {};
    // The list of license keys.
    shared_ptr<string> licenseKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

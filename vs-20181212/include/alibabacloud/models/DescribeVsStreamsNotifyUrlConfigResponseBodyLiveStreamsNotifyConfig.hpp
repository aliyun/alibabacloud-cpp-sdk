// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESPONSEBODYLIVESTREAMSNOTIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESPONSEBODYLIVESTREAMSNOTIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
    };
    DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig() = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig(const DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig &) = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig(DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig &&) = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig() = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& operator=(const DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig &) = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& operator=(DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authKey_ == nullptr
        && return this->authType_ == nullptr && return this->domainName_ == nullptr && return this->notifyUrl_ == nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


  protected:
    std::shared_ptr<string> authKey_ = nullptr;
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> notifyUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif

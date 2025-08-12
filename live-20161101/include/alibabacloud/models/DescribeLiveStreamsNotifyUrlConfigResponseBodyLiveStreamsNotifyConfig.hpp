// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYURLCONFIGRESPONSEBODYLIVESTREAMSNOTIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYURLCONFIGRESPONSEBODYLIVESTREAMSNOTIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ExceptionNotifyUrl, exceptionNotifyUrl_);
      DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_TO_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ExceptionNotifyUrl, exceptionNotifyUrl_);
      DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_FROM_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
    };
    DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig() = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig(const DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig &) = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig(DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig &&) = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig() = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& operator=(const DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig &) = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& operator=(DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->exceptionNotifyUrl_ != nullptr && this->notifyAuthKey_ != nullptr && this->notifyReqAuth_ != nullptr && this->notifyUrl_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // exceptionNotifyUrl Field Functions 
    bool hasExceptionNotifyUrl() const { return this->exceptionNotifyUrl_ != nullptr;};
    void deleteExceptionNotifyUrl() { this->exceptionNotifyUrl_ = nullptr;};
    inline string exceptionNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(exceptionNotifyUrl_, "") };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& setExceptionNotifyUrl(string exceptionNotifyUrl) { DARABONBA_PTR_SET_VALUE(exceptionNotifyUrl_, exceptionNotifyUrl) };


    // notifyAuthKey Field Functions 
    bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
    void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
    inline string notifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


    // notifyReqAuth Field Functions 
    bool hasNotifyReqAuth() const { return this->notifyReqAuth_ != nullptr;};
    void deleteNotifyReqAuth() { this->notifyReqAuth_ = nullptr;};
    inline string notifyReqAuth() const { DARABONBA_PTR_GET_DEFAULT(notifyReqAuth_, "") };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& setNotifyReqAuth(string notifyReqAuth) { DARABONBA_PTR_SET_VALUE(notifyReqAuth_, notifyReqAuth) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


  protected:
    // The ingest domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // Exception event callback URL.
    std::shared_ptr<string> exceptionNotifyUrl_ = nullptr;
    // The authentication key.
    std::shared_ptr<string> notifyAuthKey_ = nullptr;
    // Indicates whether callback authentication is enabled. Valid values:
    // 
    // *   yes
    // *   no
    std::shared_ptr<string> notifyReqAuth_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> notifyUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

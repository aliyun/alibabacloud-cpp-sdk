// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYCONFIGRESPONSEBODYLIVERECORDNOTIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYCONFIGRESPONSEBODYLIVERECORDNOTIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(NeedStatusNotify, needStatusNotify_);
      DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_TO_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(OnDemandUrl, onDemandUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NeedStatusNotify, needStatusNotify_);
      DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_FROM_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(OnDemandUrl, onDemandUrl_);
    };
    DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig() = default ;
    DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig(const DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig &) = default ;
    DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig(DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig &&) = default ;
    DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig() = default ;
    DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig& operator=(const DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig &) = default ;
    DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig& operator=(DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->needStatusNotify_ == nullptr && return this->notifyAuthKey_ == nullptr && return this->notifyReqAuth_ == nullptr && return this->notifyUrl_ == nullptr && return this->onDemandUrl_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // needStatusNotify Field Functions 
    bool hasNeedStatusNotify() const { return this->needStatusNotify_ != nullptr;};
    void deleteNeedStatusNotify() { this->needStatusNotify_ = nullptr;};
    inline bool needStatusNotify() const { DARABONBA_PTR_GET_DEFAULT(needStatusNotify_, false) };
    inline DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig& setNeedStatusNotify(bool needStatusNotify) { DARABONBA_PTR_SET_VALUE(needStatusNotify_, needStatusNotify) };


    // notifyAuthKey Field Functions 
    bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
    void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
    inline string notifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
    inline DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


    // notifyReqAuth Field Functions 
    bool hasNotifyReqAuth() const { return this->notifyReqAuth_ != nullptr;};
    void deleteNotifyReqAuth() { this->notifyReqAuth_ = nullptr;};
    inline bool notifyReqAuth() const { DARABONBA_PTR_GET_DEFAULT(notifyReqAuth_, false) };
    inline DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig& setNotifyReqAuth(bool notifyReqAuth) { DARABONBA_PTR_SET_VALUE(notifyReqAuth_, notifyReqAuth) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // onDemandUrl Field Functions 
    bool hasOnDemandUrl() const { return this->onDemandUrl_ != nullptr;};
    void deleteOnDemandUrl() { this->onDemandUrl_ = nullptr;};
    inline string onDemandUrl() const { DARABONBA_PTR_GET_DEFAULT(onDemandUrl_, "") };
    inline DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig& setOnDemandUrl(string onDemandUrl) { DARABONBA_PTR_SET_VALUE(onDemandUrl_, onDemandUrl) };


  protected:
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // Indicates whether recording status callbacks are enabled. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> needStatusNotify_ = nullptr;
    std::shared_ptr<string> notifyAuthKey_ = nullptr;
    std::shared_ptr<bool> notifyReqAuth_ = nullptr;
    // The recording callback URL.
    std::shared_ptr<string> notifyUrl_ = nullptr;
    // The callback URL for on-demand recording.
    std::shared_ptr<string> onDemandUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

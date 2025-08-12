// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTNOTIFYCONFIGRESPONSEBODYLIVEDETECTNOTIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTNOTIFYCONFIGRESPONSEBODYLIVEDETECTNOTIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
    };
    DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig() = default ;
    DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig(const DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig &) = default ;
    DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig(DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig &&) = default ;
    DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig() = default ;
    DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig& operator=(const DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig &) = default ;
    DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig& operator=(DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->notifyUrl_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


  protected:
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> notifyUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

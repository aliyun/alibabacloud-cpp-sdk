// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPDNSUDPIPSEGMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPDNSUDPIPSEGMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class RemovePdnsUdpIpSegmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemovePdnsUdpIpSegmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, RemovePdnsUdpIpSegmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    RemovePdnsUdpIpSegmentRequest() = default ;
    RemovePdnsUdpIpSegmentRequest(const RemovePdnsUdpIpSegmentRequest &) = default ;
    RemovePdnsUdpIpSegmentRequest(RemovePdnsUdpIpSegmentRequest &&) = default ;
    RemovePdnsUdpIpSegmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemovePdnsUdpIpSegmentRequest() = default ;
    RemovePdnsUdpIpSegmentRequest& operator=(const RemovePdnsUdpIpSegmentRequest &) = default ;
    RemovePdnsUdpIpSegmentRequest& operator=(RemovePdnsUdpIpSegmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && return this->lang_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline RemovePdnsUdpIpSegmentRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline RemovePdnsUdpIpSegmentRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

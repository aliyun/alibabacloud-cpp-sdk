// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPDNSUDPIPSEGMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPDNSUDPIPSEGMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreatePdnsUdpIpSegmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePdnsUdpIpSegmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IpToken, ipToken_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePdnsUdpIpSegmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IpToken, ipToken_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreatePdnsUdpIpSegmentRequest() = default ;
    CreatePdnsUdpIpSegmentRequest(const CreatePdnsUdpIpSegmentRequest &) = default ;
    CreatePdnsUdpIpSegmentRequest(CreatePdnsUdpIpSegmentRequest &&) = default ;
    CreatePdnsUdpIpSegmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePdnsUdpIpSegmentRequest() = default ;
    CreatePdnsUdpIpSegmentRequest& operator=(const CreatePdnsUdpIpSegmentRequest &) = default ;
    CreatePdnsUdpIpSegmentRequest& operator=(CreatePdnsUdpIpSegmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && return this->ipToken_ == nullptr && return this->lang_ == nullptr && return this->name_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline CreatePdnsUdpIpSegmentRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipToken Field Functions 
    bool hasIpToken() const { return this->ipToken_ != nullptr;};
    void deleteIpToken() { this->ipToken_ = nullptr;};
    inline string ipToken() const { DARABONBA_PTR_GET_DEFAULT(ipToken_, "") };
    inline CreatePdnsUdpIpSegmentRequest& setIpToken(string ipToken) { DARABONBA_PTR_SET_VALUE(ipToken_, ipToken) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreatePdnsUdpIpSegmentRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePdnsUdpIpSegmentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> ipToken_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

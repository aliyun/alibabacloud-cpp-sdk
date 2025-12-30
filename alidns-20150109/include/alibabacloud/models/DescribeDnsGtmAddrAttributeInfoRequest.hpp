// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRATTRIBUTEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRATTRIBUTEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAddrAttributeInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAddrAttributeInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addrs, addrs_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAddrAttributeInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addrs, addrs_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDnsGtmAddrAttributeInfoRequest() = default ;
    DescribeDnsGtmAddrAttributeInfoRequest(const DescribeDnsGtmAddrAttributeInfoRequest &) = default ;
    DescribeDnsGtmAddrAttributeInfoRequest(DescribeDnsGtmAddrAttributeInfoRequest &&) = default ;
    DescribeDnsGtmAddrAttributeInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAddrAttributeInfoRequest() = default ;
    DescribeDnsGtmAddrAttributeInfoRequest& operator=(const DescribeDnsGtmAddrAttributeInfoRequest &) = default ;
    DescribeDnsGtmAddrAttributeInfoRequest& operator=(DescribeDnsGtmAddrAttributeInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addrs_ == nullptr
        && this->lang_ == nullptr && this->type_ == nullptr; };
    // addrs Field Functions 
    bool hasAddrs() const { return this->addrs_ != nullptr;};
    void deleteAddrs() { this->addrs_ = nullptr;};
    inline string getAddrs() const { DARABONBA_PTR_GET_DEFAULT(addrs_, "") };
    inline DescribeDnsGtmAddrAttributeInfoRequest& setAddrs(string addrs) { DARABONBA_PTR_SET_VALUE(addrs_, addrs) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDnsGtmAddrAttributeInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDnsGtmAddrAttributeInfoRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The addresses.
    // 
    // This parameter is required.
    shared_ptr<string> addrs_ {};
    // The language of the values for specific response parameters. Default value: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
    // The type of addresses. Valid values:
    // 
    // *   IPV4: IPv4 address
    // *   IPv6: IPv6 address
    // *   DOMAIN: domain name
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

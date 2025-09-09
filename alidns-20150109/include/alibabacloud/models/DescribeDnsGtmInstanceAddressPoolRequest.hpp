// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceAddressPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceAddressPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceAddressPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeDnsGtmInstanceAddressPoolRequest() = default ;
    DescribeDnsGtmInstanceAddressPoolRequest(const DescribeDnsGtmInstanceAddressPoolRequest &) = default ;
    DescribeDnsGtmInstanceAddressPoolRequest(DescribeDnsGtmInstanceAddressPoolRequest &&) = default ;
    DescribeDnsGtmInstanceAddressPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceAddressPoolRequest() = default ;
    DescribeDnsGtmInstanceAddressPoolRequest& operator=(const DescribeDnsGtmInstanceAddressPoolRequest &) = default ;
    DescribeDnsGtmInstanceAddressPoolRequest& operator=(DescribeDnsGtmInstanceAddressPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrPoolId_ != nullptr
        && this->lang_ != nullptr; };
    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string addrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline DescribeDnsGtmInstanceAddressPoolRequest& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDnsGtmInstanceAddressPoolRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the address pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> addrPoolId_ = nullptr;
    // The language of the values of specific response parameters. Default value: en. Valid values: en, zh, and ja.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

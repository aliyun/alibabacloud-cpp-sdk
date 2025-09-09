// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSGTMADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSGTMADDRESSPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDnsGtmAddressPoolRequestAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateDnsGtmAddressPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDnsGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDnsGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LbaStrategy, lbaStrategy_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateDnsGtmAddressPoolRequest() = default ;
    UpdateDnsGtmAddressPoolRequest(const UpdateDnsGtmAddressPoolRequest &) = default ;
    UpdateDnsGtmAddressPoolRequest(UpdateDnsGtmAddressPoolRequest &&) = default ;
    UpdateDnsGtmAddressPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDnsGtmAddressPoolRequest() = default ;
    UpdateDnsGtmAddressPoolRequest& operator=(const UpdateDnsGtmAddressPoolRequest &) = default ;
    UpdateDnsGtmAddressPoolRequest& operator=(UpdateDnsGtmAddressPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addr_ != nullptr
        && this->addrPoolId_ != nullptr && this->lang_ != nullptr && this->lbaStrategy_ != nullptr && this->name_ != nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<UpdateDnsGtmAddressPoolRequestAddr> & addr() const { DARABONBA_PTR_GET_CONST(addr_, vector<UpdateDnsGtmAddressPoolRequestAddr>) };
    inline vector<UpdateDnsGtmAddressPoolRequestAddr> addr() { DARABONBA_PTR_GET(addr_, vector<UpdateDnsGtmAddressPoolRequestAddr>) };
    inline UpdateDnsGtmAddressPoolRequest& setAddr(const vector<UpdateDnsGtmAddressPoolRequestAddr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline UpdateDnsGtmAddressPoolRequest& setAddr(vector<UpdateDnsGtmAddressPoolRequestAddr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string addrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline UpdateDnsGtmAddressPoolRequest& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDnsGtmAddressPoolRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lbaStrategy Field Functions 
    bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
    void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
    inline string lbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
    inline UpdateDnsGtmAddressPoolRequest& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDnsGtmAddressPoolRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The address pools.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateDnsGtmAddressPoolRequestAddr>> addr_ = nullptr;
    // The ID of the address pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> addrPoolId_ = nullptr;
    // The language of the values of specific response parameters. Default value: en. Valid values: en, zh, and ja.
    std::shared_ptr<string> lang_ = nullptr;
    // The load balancing policy of the address pool. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    // 
    // This parameter is required.
    std::shared_ptr<string> lbaStrategy_ = nullptr;
    // The name of the address pool.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

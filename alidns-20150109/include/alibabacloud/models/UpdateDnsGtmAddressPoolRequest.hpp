// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSGTMADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSGTMADDRESSPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Addr : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addr& obj) { 
        DARABONBA_PTR_TO_JSON(Addr, addr_);
        DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
        DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, Addr& obj) { 
        DARABONBA_PTR_FROM_JSON(Addr, addr_);
        DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
        DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
      };
      Addr() = default ;
      Addr(const Addr &) = default ;
      Addr(Addr &&) = default ;
      Addr(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addr() = default ;
      Addr& operator=(const Addr &) = default ;
      Addr& operator=(Addr &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addr_ == nullptr
        && this->attributeInfo_ == nullptr && this->lbaWeight_ == nullptr && this->mode_ == nullptr && this->remark_ == nullptr; };
      // addr Field Functions 
      bool hasAddr() const { return this->addr_ != nullptr;};
      void deleteAddr() { this->addr_ = nullptr;};
      inline string getAddr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
      inline Addr& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


      // attributeInfo Field Functions 
      bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
      void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
      inline string getAttributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
      inline Addr& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


      // lbaWeight Field Functions 
      bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
      void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
      inline int32_t getLbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
      inline Addr& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Addr& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Addr& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // The address in the address pool.
      // 
      // This parameter is required.
      shared_ptr<string> addr_ {};
      // The information about the source region of the address. The value of the parameter is a string in the JSON format. Valid values:
      // 
      // *   LineCode: the line code of the source region. This parameter is deprecated. Use lineCodes instead.
      // 
      // *   lineCodes: the line codes of the source region
      // 
      // *   lineCodeRectifyType: the rectification type of the line code. Default value: AUTO. Valid values:
      // 
      //     *   NO_NEED: no need for rectification
      //     *   RECTIFIED: rectified
      //     *   AUTO: automatic rectification
      shared_ptr<string> attributeInfo_ {};
      // The weight of the address.
      shared_ptr<int32_t> lbaWeight_ {};
      // The return mode of the addresses. Valid values:
      // 
      // *   SMART: smart return
      // *   ONLINE: always online
      // *   OFFLINE: always offline
      // 
      // This parameter is required.
      shared_ptr<string> mode_ {};
      // The description of the address pool.
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->addr_ == nullptr
        && this->addrPoolId_ == nullptr && this->lang_ == nullptr && this->lbaStrategy_ == nullptr && this->name_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<UpdateDnsGtmAddressPoolRequest::Addr> & getAddr() const { DARABONBA_PTR_GET_CONST(addr_, vector<UpdateDnsGtmAddressPoolRequest::Addr>) };
    inline vector<UpdateDnsGtmAddressPoolRequest::Addr> getAddr() { DARABONBA_PTR_GET(addr_, vector<UpdateDnsGtmAddressPoolRequest::Addr>) };
    inline UpdateDnsGtmAddressPoolRequest& setAddr(const vector<UpdateDnsGtmAddressPoolRequest::Addr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline UpdateDnsGtmAddressPoolRequest& setAddr(vector<UpdateDnsGtmAddressPoolRequest::Addr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string getAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline UpdateDnsGtmAddressPoolRequest& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDnsGtmAddressPoolRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lbaStrategy Field Functions 
    bool hasLbaStrategy() const { return this->lbaStrategy_ != nullptr;};
    void deleteLbaStrategy() { this->lbaStrategy_ = nullptr;};
    inline string getLbaStrategy() const { DARABONBA_PTR_GET_DEFAULT(lbaStrategy_, "") };
    inline UpdateDnsGtmAddressPoolRequest& setLbaStrategy(string lbaStrategy) { DARABONBA_PTR_SET_VALUE(lbaStrategy_, lbaStrategy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDnsGtmAddressPoolRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The address pools.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateDnsGtmAddressPoolRequest::Addr>> addr_ {};
    // The ID of the address pool.
    // 
    // This parameter is required.
    shared_ptr<string> addrPoolId_ {};
    // The language of the values of specific response parameters. Default value: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
    // The load balancing policy of the address pool. Valid values:
    // 
    // *   ALL_RR: returns all addresses.
    // *   RATIO: returns addresses by weight.
    // 
    // This parameter is required.
    shared_ptr<string> lbaStrategy_ {};
    // The name of the address pool.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

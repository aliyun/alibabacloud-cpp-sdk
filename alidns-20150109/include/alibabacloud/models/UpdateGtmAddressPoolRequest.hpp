// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGTMADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGTMADDRESSPOOLREQUEST_HPP_
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
  class UpdateGtmAddressPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MinAvailableAddrNum, minAvailableAddrNum_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGtmAddressPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(AddrPoolId, addrPoolId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MinAvailableAddrNum, minAvailableAddrNum_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateGtmAddressPoolRequest() = default ;
    UpdateGtmAddressPoolRequest(const UpdateGtmAddressPoolRequest &) = default ;
    UpdateGtmAddressPoolRequest(UpdateGtmAddressPoolRequest &&) = default ;
    UpdateGtmAddressPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGtmAddressPoolRequest() = default ;
    UpdateGtmAddressPoolRequest& operator=(const UpdateGtmAddressPoolRequest &) = default ;
    UpdateGtmAddressPoolRequest& operator=(UpdateGtmAddressPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addr : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addr& obj) { 
        DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Addr& obj) { 
        DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->lbaWeight_ == nullptr
        && this->mode_ == nullptr && this->value_ == nullptr; };
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


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Addr& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The weight of the address pool that you want to modify.
      shared_ptr<int32_t> lbaWeight_ {};
      // The mode of the address pool that you want to modify.
      // 
      // *   **SMART**: Intelligent return
      // *   **ONLINE**: Always online
      // *   **OFFLINE**: Always offline
      shared_ptr<string> mode_ {};
      // The addresses in the address pool.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->addr_ == nullptr
        && this->addrPoolId_ == nullptr && this->lang_ == nullptr && this->minAvailableAddrNum_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const vector<UpdateGtmAddressPoolRequest::Addr> & getAddr() const { DARABONBA_PTR_GET_CONST(addr_, vector<UpdateGtmAddressPoolRequest::Addr>) };
    inline vector<UpdateGtmAddressPoolRequest::Addr> getAddr() { DARABONBA_PTR_GET(addr_, vector<UpdateGtmAddressPoolRequest::Addr>) };
    inline UpdateGtmAddressPoolRequest& setAddr(const vector<UpdateGtmAddressPoolRequest::Addr> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline UpdateGtmAddressPoolRequest& setAddr(vector<UpdateGtmAddressPoolRequest::Addr> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // addrPoolId Field Functions 
    bool hasAddrPoolId() const { return this->addrPoolId_ != nullptr;};
    void deleteAddrPoolId() { this->addrPoolId_ = nullptr;};
    inline string getAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(addrPoolId_, "") };
    inline UpdateGtmAddressPoolRequest& setAddrPoolId(string addrPoolId) { DARABONBA_PTR_SET_VALUE(addrPoolId_, addrPoolId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateGtmAddressPoolRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // minAvailableAddrNum Field Functions 
    bool hasMinAvailableAddrNum() const { return this->minAvailableAddrNum_ != nullptr;};
    void deleteMinAvailableAddrNum() { this->minAvailableAddrNum_ = nullptr;};
    inline int32_t getMinAvailableAddrNum() const { DARABONBA_PTR_GET_DEFAULT(minAvailableAddrNum_, 0) };
    inline UpdateGtmAddressPoolRequest& setMinAvailableAddrNum(int32_t minAvailableAddrNum) { DARABONBA_PTR_SET_VALUE(minAvailableAddrNum_, minAvailableAddrNum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGtmAddressPoolRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateGtmAddressPoolRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<vector<UpdateGtmAddressPoolRequest::Addr>> addr_ {};
    // The ID of the address pool that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> addrPoolId_ {};
    // The language used by the user.
    shared_ptr<string> lang_ {};
    // The minimum number of available addresses in the address pool.
    shared_ptr<int32_t> minAvailableAddrNum_ {};
    // The name of the address pool that you want to modify.
    shared_ptr<string> name_ {};
    // The type of the address pool that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

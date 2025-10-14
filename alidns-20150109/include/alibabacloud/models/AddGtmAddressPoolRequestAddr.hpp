// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGTMADDRESSPOOLREQUESTADDR_HPP_
#define ALIBABACLOUD_MODELS_ADDGTMADDRESSPOOLREQUESTADDR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddGtmAddressPoolRequestAddr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGtmAddressPoolRequestAddr& obj) { 
      DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AddGtmAddressPoolRequestAddr& obj) { 
      DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    AddGtmAddressPoolRequestAddr() = default ;
    AddGtmAddressPoolRequestAddr(const AddGtmAddressPoolRequestAddr &) = default ;
    AddGtmAddressPoolRequestAddr(AddGtmAddressPoolRequestAddr &&) = default ;
    AddGtmAddressPoolRequestAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGtmAddressPoolRequestAddr() = default ;
    AddGtmAddressPoolRequestAddr& operator=(const AddGtmAddressPoolRequestAddr &) = default ;
    AddGtmAddressPoolRequestAddr& operator=(AddGtmAddressPoolRequestAddr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lbaWeight_ == nullptr
        && return this->mode_ == nullptr && return this->value_ == nullptr; };
    // lbaWeight Field Functions 
    bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
    void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
    inline int32_t lbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
    inline AddGtmAddressPoolRequestAddr& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline AddGtmAddressPoolRequestAddr& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AddGtmAddressPoolRequestAddr& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The weight of the address pool.
    std::shared_ptr<int32_t> lbaWeight_ = nullptr;
    // The mode of the address pool. Valid values:
    // 
    // *   **SMART**: smart return
    // *   **ONLINE**: always online
    // *   **OFFLINE**: always offline
    std::shared_ptr<string> mode_ = nullptr;
    // The address in the address pool.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSINFO_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class AddressInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressInfo& obj) { 
      DARABONBA_PTR_TO_JSON(addressDetail, addressDetail_);
      DARABONBA_PTR_TO_JSON(addressId, addressId_);
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_TO_JSON(receiver, receiver_);
      DARABONBA_PTR_TO_JSON(receiverPhone, receiverPhone_);
      DARABONBA_PTR_TO_JSON(townDivisionCode, townDivisionCode_);
    };
    friend void from_json(const Darabonba::Json& j, AddressInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(addressDetail, addressDetail_);
      DARABONBA_PTR_FROM_JSON(addressId, addressId_);
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_FROM_JSON(receiver, receiver_);
      DARABONBA_PTR_FROM_JSON(receiverPhone, receiverPhone_);
      DARABONBA_PTR_FROM_JSON(townDivisionCode, townDivisionCode_);
    };
    AddressInfo() = default ;
    AddressInfo(const AddressInfo &) = default ;
    AddressInfo(AddressInfo &&) = default ;
    AddressInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressInfo() = default ;
    AddressInfo& operator=(const AddressInfo &) = default ;
    AddressInfo& operator=(AddressInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressDetail_ == nullptr
        && this->addressId_ == nullptr && this->divisionCode_ == nullptr && this->receiver_ == nullptr && this->receiverPhone_ == nullptr && this->townDivisionCode_ == nullptr; };
    // addressDetail Field Functions 
    bool hasAddressDetail() const { return this->addressDetail_ != nullptr;};
    void deleteAddressDetail() { this->addressDetail_ = nullptr;};
    inline string getAddressDetail() const { DARABONBA_PTR_GET_DEFAULT(addressDetail_, "") };
    inline AddressInfo& setAddressDetail(string addressDetail) { DARABONBA_PTR_SET_VALUE(addressDetail_, addressDetail) };


    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline int64_t getAddressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, 0L) };
    inline AddressInfo& setAddressId(int64_t addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline string getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, "") };
    inline AddressInfo& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


    // receiver Field Functions 
    bool hasReceiver() const { return this->receiver_ != nullptr;};
    void deleteReceiver() { this->receiver_ = nullptr;};
    inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
    inline AddressInfo& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


    // receiverPhone Field Functions 
    bool hasReceiverPhone() const { return this->receiverPhone_ != nullptr;};
    void deleteReceiverPhone() { this->receiverPhone_ = nullptr;};
    inline string getReceiverPhone() const { DARABONBA_PTR_GET_DEFAULT(receiverPhone_, "") };
    inline AddressInfo& setReceiverPhone(string receiverPhone) { DARABONBA_PTR_SET_VALUE(receiverPhone_, receiverPhone) };


    // townDivisionCode Field Functions 
    bool hasTownDivisionCode() const { return this->townDivisionCode_ != nullptr;};
    void deleteTownDivisionCode() { this->townDivisionCode_ = nullptr;};
    inline string getTownDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(townDivisionCode_, "") };
    inline AddressInfo& setTownDivisionCode(string townDivisionCode) { DARABONBA_PTR_SET_VALUE(townDivisionCode_, townDivisionCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> addressDetail_ {};
    shared_ptr<int64_t> addressId_ {};
    shared_ptr<string> divisionCode_ {};
    // This parameter is required.
    shared_ptr<string> receiver_ {};
    // This parameter is required.
    shared_ptr<string> receiverPhone_ {};
    shared_ptr<string> townDivisionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif

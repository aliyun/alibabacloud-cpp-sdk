// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCANCELRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCANCELRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderCancelResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderCancelResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(cancel_success, cancelSuccess_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(forfeit_fee, forfeitFee_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderCancelResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(cancel_success, cancelSuccess_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(forfeit_fee, forfeitFee_);
    };
    HotelOrderCancelResponseBodyModule() = default ;
    HotelOrderCancelResponseBodyModule(const HotelOrderCancelResponseBodyModule &) = default ;
    HotelOrderCancelResponseBodyModule(HotelOrderCancelResponseBodyModule &&) = default ;
    HotelOrderCancelResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderCancelResponseBodyModule() = default ;
    HotelOrderCancelResponseBodyModule& operator=(const HotelOrderCancelResponseBodyModule &) = default ;
    HotelOrderCancelResponseBodyModule& operator=(HotelOrderCancelResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelSuccess_ != nullptr
        && this->code_ != nullptr && this->desc_ != nullptr && this->forfeitFee_ != nullptr; };
    // cancelSuccess Field Functions 
    bool hasCancelSuccess() const { return this->cancelSuccess_ != nullptr;};
    void deleteCancelSuccess() { this->cancelSuccess_ = nullptr;};
    inline bool cancelSuccess() const { DARABONBA_PTR_GET_DEFAULT(cancelSuccess_, false) };
    inline HotelOrderCancelResponseBodyModule& setCancelSuccess(bool cancelSuccess) { DARABONBA_PTR_SET_VALUE(cancelSuccess_, cancelSuccess) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelOrderCancelResponseBodyModule& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline HotelOrderCancelResponseBodyModule& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // forfeitFee Field Functions 
    bool hasForfeitFee() const { return this->forfeitFee_ != nullptr;};
    void deleteForfeitFee() { this->forfeitFee_ = nullptr;};
    inline int64_t forfeitFee() const { DARABONBA_PTR_GET_DEFAULT(forfeitFee_, 0L) };
    inline HotelOrderCancelResponseBodyModule& setForfeitFee(int64_t forfeitFee) { DARABONBA_PTR_SET_VALUE(forfeitFee_, forfeitFee) };


  protected:
    std::shared_ptr<bool> cancelSuccess_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<int64_t> forfeitFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

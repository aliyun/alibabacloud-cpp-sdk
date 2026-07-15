// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEPRICEMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEPRICEMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModulePriceMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModulePriceMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(service_no, serviceNo_);
    };
    friend void from_json(const Darabonba::Json& j, ModulePriceMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(service_no, serviceNo_);
    };
    ModulePriceMapValue() = default ;
    ModulePriceMapValue(const ModulePriceMapValue &) = default ;
    ModulePriceMapValue(ModulePriceMapValue &&) = default ;
    ModulePriceMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModulePriceMapValue() = default ;
    ModulePriceMapValue& operator=(const ModulePriceMapValue &) = default ;
    ModulePriceMapValue& operator=(ModulePriceMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->price_ == nullptr
        && this->serviceNo_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline ModulePriceMapValue& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // serviceNo Field Functions 
    bool hasServiceNo() const { return this->serviceNo_ != nullptr;};
    void deleteServiceNo() { this->serviceNo_ = nullptr;};
    inline string getServiceNo() const { DARABONBA_PTR_GET_DEFAULT(serviceNo_, "") };
    inline ModulePriceMapValue& setServiceNo(string serviceNo) { DARABONBA_PTR_SET_VALUE(serviceNo_, serviceNo) };


  protected:
    shared_ptr<int64_t> price_ {};
    shared_ptr<string> serviceNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

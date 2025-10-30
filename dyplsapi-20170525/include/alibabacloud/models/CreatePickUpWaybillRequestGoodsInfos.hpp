// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLREQUESTGOODSINFOS_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLREQUESTGOODSINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillRequestGoodsInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillRequestGoodsInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillRequestGoodsInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreatePickUpWaybillRequestGoodsInfos() = default ;
    CreatePickUpWaybillRequestGoodsInfos(const CreatePickUpWaybillRequestGoodsInfos &) = default ;
    CreatePickUpWaybillRequestGoodsInfos(CreatePickUpWaybillRequestGoodsInfos &&) = default ;
    CreatePickUpWaybillRequestGoodsInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillRequestGoodsInfos() = default ;
    CreatePickUpWaybillRequestGoodsInfos& operator=(const CreatePickUpWaybillRequestGoodsInfos &) = default ;
    CreatePickUpWaybillRequestGoodsInfos& operator=(CreatePickUpWaybillRequestGoodsInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->quantity_ == nullptr && return this->weight_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePickUpWaybillRequestGoodsInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline string quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
    inline CreatePickUpWaybillRequestGoodsInfos& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline CreatePickUpWaybillRequestGoodsInfos& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The item name.
    std::shared_ptr<string> name_ = nullptr;
    // The item quantity.
    std::shared_ptr<string> quantity_ = nullptr;
    // The item weight. Unit: gram.
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

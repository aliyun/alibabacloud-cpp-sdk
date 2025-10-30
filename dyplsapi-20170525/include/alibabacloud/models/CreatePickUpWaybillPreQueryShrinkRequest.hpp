// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsigneeInfo, consigneeInfoShrink_);
      DARABONBA_PTR_TO_JSON(CpCode, cpCode_);
      DARABONBA_PTR_TO_JSON(OrderChannels, orderChannels_);
      DARABONBA_PTR_TO_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_TO_JSON(PreWeight, preWeight_);
      DARABONBA_PTR_TO_JSON(SenderInfo, senderInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsigneeInfo, consigneeInfoShrink_);
      DARABONBA_PTR_FROM_JSON(CpCode, cpCode_);
      DARABONBA_PTR_FROM_JSON(OrderChannels, orderChannels_);
      DARABONBA_PTR_FROM_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_FROM_JSON(PreWeight, preWeight_);
      DARABONBA_PTR_FROM_JSON(SenderInfo, senderInfoShrink_);
    };
    CreatePickUpWaybillPreQueryShrinkRequest() = default ;
    CreatePickUpWaybillPreQueryShrinkRequest(const CreatePickUpWaybillPreQueryShrinkRequest &) = default ;
    CreatePickUpWaybillPreQueryShrinkRequest(CreatePickUpWaybillPreQueryShrinkRequest &&) = default ;
    CreatePickUpWaybillPreQueryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryShrinkRequest() = default ;
    CreatePickUpWaybillPreQueryShrinkRequest& operator=(const CreatePickUpWaybillPreQueryShrinkRequest &) = default ;
    CreatePickUpWaybillPreQueryShrinkRequest& operator=(CreatePickUpWaybillPreQueryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consigneeInfoShrink_ == nullptr
        && return this->cpCode_ == nullptr && return this->orderChannels_ == nullptr && return this->outerOrderCode_ == nullptr && return this->preWeight_ == nullptr && return this->senderInfoShrink_ == nullptr; };
    // consigneeInfoShrink Field Functions 
    bool hasConsigneeInfoShrink() const { return this->consigneeInfoShrink_ != nullptr;};
    void deleteConsigneeInfoShrink() { this->consigneeInfoShrink_ = nullptr;};
    inline string consigneeInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(consigneeInfoShrink_, "") };
    inline CreatePickUpWaybillPreQueryShrinkRequest& setConsigneeInfoShrink(string consigneeInfoShrink) { DARABONBA_PTR_SET_VALUE(consigneeInfoShrink_, consigneeInfoShrink) };


    // cpCode Field Functions 
    bool hasCpCode() const { return this->cpCode_ != nullptr;};
    void deleteCpCode() { this->cpCode_ = nullptr;};
    inline string cpCode() const { DARABONBA_PTR_GET_DEFAULT(cpCode_, "") };
    inline CreatePickUpWaybillPreQueryShrinkRequest& setCpCode(string cpCode) { DARABONBA_PTR_SET_VALUE(cpCode_, cpCode) };


    // orderChannels Field Functions 
    bool hasOrderChannels() const { return this->orderChannels_ != nullptr;};
    void deleteOrderChannels() { this->orderChannels_ = nullptr;};
    inline string orderChannels() const { DARABONBA_PTR_GET_DEFAULT(orderChannels_, "") };
    inline CreatePickUpWaybillPreQueryShrinkRequest& setOrderChannels(string orderChannels) { DARABONBA_PTR_SET_VALUE(orderChannels_, orderChannels) };


    // outerOrderCode Field Functions 
    bool hasOuterOrderCode() const { return this->outerOrderCode_ != nullptr;};
    void deleteOuterOrderCode() { this->outerOrderCode_ = nullptr;};
    inline string outerOrderCode() const { DARABONBA_PTR_GET_DEFAULT(outerOrderCode_, "") };
    inline CreatePickUpWaybillPreQueryShrinkRequest& setOuterOrderCode(string outerOrderCode) { DARABONBA_PTR_SET_VALUE(outerOrderCode_, outerOrderCode) };


    // preWeight Field Functions 
    bool hasPreWeight() const { return this->preWeight_ != nullptr;};
    void deletePreWeight() { this->preWeight_ = nullptr;};
    inline string preWeight() const { DARABONBA_PTR_GET_DEFAULT(preWeight_, "") };
    inline CreatePickUpWaybillPreQueryShrinkRequest& setPreWeight(string preWeight) { DARABONBA_PTR_SET_VALUE(preWeight_, preWeight) };


    // senderInfoShrink Field Functions 
    bool hasSenderInfoShrink() const { return this->senderInfoShrink_ != nullptr;};
    void deleteSenderInfoShrink() { this->senderInfoShrink_ = nullptr;};
    inline string senderInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(senderInfoShrink_, "") };
    inline CreatePickUpWaybillPreQueryShrinkRequest& setSenderInfoShrink(string senderInfoShrink) { DARABONBA_PTR_SET_VALUE(senderInfoShrink_, senderInfoShrink) };


  protected:
    // The consignee information.
    // 
    // This parameter is required.
    std::shared_ptr<string> consigneeInfoShrink_ = nullptr;
    // The code of the courier company. If no courier company is specified, the system allocates a courier company.
    std::shared_ptr<string> cpCode_ = nullptr;
    // The identifier of the external channel source. It cannot contain underscores.
    // 
    // This parameter is required.
    std::shared_ptr<string> orderChannels_ = nullptr;
    // The order number of the access system.
    std::shared_ptr<string> outerOrderCode_ = nullptr;
    // The estimated weight. Unit: gram.
    // 
    // >  If you need to query the estimated price, this parameter is required.
    std::shared_ptr<string> preWeight_ = nullptr;
    // The sender information.
    // 
    // This parameter is required.
    std::shared_ptr<string> senderInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

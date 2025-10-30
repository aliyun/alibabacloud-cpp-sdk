// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePickUpWaybillPreQueryRequestConsigneeInfo.hpp>
#include <alibabacloud/models/CreatePickUpWaybillPreQueryRequestSenderInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsigneeInfo, consigneeInfo_);
      DARABONBA_PTR_TO_JSON(CpCode, cpCode_);
      DARABONBA_PTR_TO_JSON(OrderChannels, orderChannels_);
      DARABONBA_PTR_TO_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_TO_JSON(PreWeight, preWeight_);
      DARABONBA_PTR_TO_JSON(SenderInfo, senderInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsigneeInfo, consigneeInfo_);
      DARABONBA_PTR_FROM_JSON(CpCode, cpCode_);
      DARABONBA_PTR_FROM_JSON(OrderChannels, orderChannels_);
      DARABONBA_PTR_FROM_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_FROM_JSON(PreWeight, preWeight_);
      DARABONBA_PTR_FROM_JSON(SenderInfo, senderInfo_);
    };
    CreatePickUpWaybillPreQueryRequest() = default ;
    CreatePickUpWaybillPreQueryRequest(const CreatePickUpWaybillPreQueryRequest &) = default ;
    CreatePickUpWaybillPreQueryRequest(CreatePickUpWaybillPreQueryRequest &&) = default ;
    CreatePickUpWaybillPreQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryRequest() = default ;
    CreatePickUpWaybillPreQueryRequest& operator=(const CreatePickUpWaybillPreQueryRequest &) = default ;
    CreatePickUpWaybillPreQueryRequest& operator=(CreatePickUpWaybillPreQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consigneeInfo_ == nullptr
        && return this->cpCode_ == nullptr && return this->orderChannels_ == nullptr && return this->outerOrderCode_ == nullptr && return this->preWeight_ == nullptr && return this->senderInfo_ == nullptr; };
    // consigneeInfo Field Functions 
    bool hasConsigneeInfo() const { return this->consigneeInfo_ != nullptr;};
    void deleteConsigneeInfo() { this->consigneeInfo_ = nullptr;};
    inline const CreatePickUpWaybillPreQueryRequestConsigneeInfo & consigneeInfo() const { DARABONBA_PTR_GET_CONST(consigneeInfo_, CreatePickUpWaybillPreQueryRequestConsigneeInfo) };
    inline CreatePickUpWaybillPreQueryRequestConsigneeInfo consigneeInfo() { DARABONBA_PTR_GET(consigneeInfo_, CreatePickUpWaybillPreQueryRequestConsigneeInfo) };
    inline CreatePickUpWaybillPreQueryRequest& setConsigneeInfo(const CreatePickUpWaybillPreQueryRequestConsigneeInfo & consigneeInfo) { DARABONBA_PTR_SET_VALUE(consigneeInfo_, consigneeInfo) };
    inline CreatePickUpWaybillPreQueryRequest& setConsigneeInfo(CreatePickUpWaybillPreQueryRequestConsigneeInfo && consigneeInfo) { DARABONBA_PTR_SET_RVALUE(consigneeInfo_, consigneeInfo) };


    // cpCode Field Functions 
    bool hasCpCode() const { return this->cpCode_ != nullptr;};
    void deleteCpCode() { this->cpCode_ = nullptr;};
    inline string cpCode() const { DARABONBA_PTR_GET_DEFAULT(cpCode_, "") };
    inline CreatePickUpWaybillPreQueryRequest& setCpCode(string cpCode) { DARABONBA_PTR_SET_VALUE(cpCode_, cpCode) };


    // orderChannels Field Functions 
    bool hasOrderChannels() const { return this->orderChannels_ != nullptr;};
    void deleteOrderChannels() { this->orderChannels_ = nullptr;};
    inline string orderChannels() const { DARABONBA_PTR_GET_DEFAULT(orderChannels_, "") };
    inline CreatePickUpWaybillPreQueryRequest& setOrderChannels(string orderChannels) { DARABONBA_PTR_SET_VALUE(orderChannels_, orderChannels) };


    // outerOrderCode Field Functions 
    bool hasOuterOrderCode() const { return this->outerOrderCode_ != nullptr;};
    void deleteOuterOrderCode() { this->outerOrderCode_ = nullptr;};
    inline string outerOrderCode() const { DARABONBA_PTR_GET_DEFAULT(outerOrderCode_, "") };
    inline CreatePickUpWaybillPreQueryRequest& setOuterOrderCode(string outerOrderCode) { DARABONBA_PTR_SET_VALUE(outerOrderCode_, outerOrderCode) };


    // preWeight Field Functions 
    bool hasPreWeight() const { return this->preWeight_ != nullptr;};
    void deletePreWeight() { this->preWeight_ = nullptr;};
    inline string preWeight() const { DARABONBA_PTR_GET_DEFAULT(preWeight_, "") };
    inline CreatePickUpWaybillPreQueryRequest& setPreWeight(string preWeight) { DARABONBA_PTR_SET_VALUE(preWeight_, preWeight) };


    // senderInfo Field Functions 
    bool hasSenderInfo() const { return this->senderInfo_ != nullptr;};
    void deleteSenderInfo() { this->senderInfo_ = nullptr;};
    inline const CreatePickUpWaybillPreQueryRequestSenderInfo & senderInfo() const { DARABONBA_PTR_GET_CONST(senderInfo_, CreatePickUpWaybillPreQueryRequestSenderInfo) };
    inline CreatePickUpWaybillPreQueryRequestSenderInfo senderInfo() { DARABONBA_PTR_GET(senderInfo_, CreatePickUpWaybillPreQueryRequestSenderInfo) };
    inline CreatePickUpWaybillPreQueryRequest& setSenderInfo(const CreatePickUpWaybillPreQueryRequestSenderInfo & senderInfo) { DARABONBA_PTR_SET_VALUE(senderInfo_, senderInfo) };
    inline CreatePickUpWaybillPreQueryRequest& setSenderInfo(CreatePickUpWaybillPreQueryRequestSenderInfo && senderInfo) { DARABONBA_PTR_SET_RVALUE(senderInfo_, senderInfo) };


  protected:
    // The consignee information.
    // 
    // This parameter is required.
    std::shared_ptr<CreatePickUpWaybillPreQueryRequestConsigneeInfo> consigneeInfo_ = nullptr;
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
    std::shared_ptr<CreatePickUpWaybillPreQueryRequestSenderInfo> senderInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppointGotEndTime, appointGotEndTime_);
      DARABONBA_PTR_TO_JSON(AppointGotStartTime, appointGotStartTime_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ConsigneeAddress, consigneeAddress_);
      DARABONBA_PTR_TO_JSON(ConsigneeMobile, consigneeMobile_);
      DARABONBA_PTR_TO_JSON(ConsigneeName, consigneeName_);
      DARABONBA_PTR_TO_JSON(ConsigneePhone, consigneePhone_);
      DARABONBA_PTR_TO_JSON(CpCode, cpCode_);
      DARABONBA_PTR_TO_JSON(GoodsInfos, goodsInfos_);
      DARABONBA_PTR_TO_JSON(OrderChannels, orderChannels_);
      DARABONBA_PTR_TO_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SendAddress, sendAddress_);
      DARABONBA_PTR_TO_JSON(SendMobile, sendMobile_);
      DARABONBA_PTR_TO_JSON(SendName, sendName_);
      DARABONBA_PTR_TO_JSON(SendPhone, sendPhone_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppointGotEndTime, appointGotEndTime_);
      DARABONBA_PTR_FROM_JSON(AppointGotStartTime, appointGotStartTime_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ConsigneeAddress, consigneeAddress_);
      DARABONBA_PTR_FROM_JSON(ConsigneeMobile, consigneeMobile_);
      DARABONBA_PTR_FROM_JSON(ConsigneeName, consigneeName_);
      DARABONBA_PTR_FROM_JSON(ConsigneePhone, consigneePhone_);
      DARABONBA_PTR_FROM_JSON(CpCode, cpCode_);
      DARABONBA_PTR_FROM_JSON(GoodsInfos, goodsInfos_);
      DARABONBA_PTR_FROM_JSON(OrderChannels, orderChannels_);
      DARABONBA_PTR_FROM_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SendAddress, sendAddress_);
      DARABONBA_PTR_FROM_JSON(SendMobile, sendMobile_);
      DARABONBA_PTR_FROM_JSON(SendName, sendName_);
      DARABONBA_PTR_FROM_JSON(SendPhone, sendPhone_);
    };
    CreatePickUpWaybillRequest() = default ;
    CreatePickUpWaybillRequest(const CreatePickUpWaybillRequest &) = default ;
    CreatePickUpWaybillRequest(CreatePickUpWaybillRequest &&) = default ;
    CreatePickUpWaybillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillRequest() = default ;
    CreatePickUpWaybillRequest& operator=(const CreatePickUpWaybillRequest &) = default ;
    CreatePickUpWaybillRequest& operator=(CreatePickUpWaybillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SendAddress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SendAddress& obj) { 
        DARABONBA_PTR_TO_JSON(AddressDetail, addressDetail_);
        DARABONBA_PTR_TO_JSON(AreaName, areaName_);
        DARABONBA_PTR_TO_JSON(CityName, cityName_);
        DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
        DARABONBA_PTR_TO_JSON(TownName, townName_);
      };
      friend void from_json(const Darabonba::Json& j, SendAddress& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressDetail, addressDetail_);
        DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
        DARABONBA_PTR_FROM_JSON(CityName, cityName_);
        DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
        DARABONBA_PTR_FROM_JSON(TownName, townName_);
      };
      SendAddress() = default ;
      SendAddress(const SendAddress &) = default ;
      SendAddress(SendAddress &&) = default ;
      SendAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SendAddress() = default ;
      SendAddress& operator=(const SendAddress &) = default ;
      SendAddress& operator=(SendAddress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addressDetail_ == nullptr
        && this->areaName_ == nullptr && this->cityName_ == nullptr && this->provinceName_ == nullptr && this->townName_ == nullptr; };
      // addressDetail Field Functions 
      bool hasAddressDetail() const { return this->addressDetail_ != nullptr;};
      void deleteAddressDetail() { this->addressDetail_ = nullptr;};
      inline string getAddressDetail() const { DARABONBA_PTR_GET_DEFAULT(addressDetail_, "") };
      inline SendAddress& setAddressDetail(string addressDetail) { DARABONBA_PTR_SET_VALUE(addressDetail_, addressDetail) };


      // areaName Field Functions 
      bool hasAreaName() const { return this->areaName_ != nullptr;};
      void deleteAreaName() { this->areaName_ = nullptr;};
      inline string getAreaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
      inline SendAddress& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


      // cityName Field Functions 
      bool hasCityName() const { return this->cityName_ != nullptr;};
      void deleteCityName() { this->cityName_ = nullptr;};
      inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
      inline SendAddress& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


      // provinceName Field Functions 
      bool hasProvinceName() const { return this->provinceName_ != nullptr;};
      void deleteProvinceName() { this->provinceName_ = nullptr;};
      inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
      inline SendAddress& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


      // townName Field Functions 
      bool hasTownName() const { return this->townName_ != nullptr;};
      void deleteTownName() { this->townName_ = nullptr;};
      inline string getTownName() const { DARABONBA_PTR_GET_DEFAULT(townName_, "") };
      inline SendAddress& setTownName(string townName) { DARABONBA_PTR_SET_VALUE(townName_, townName) };


    protected:
      // The detailed address.
      // 
      // This parameter is required.
      shared_ptr<string> addressDetail_ {};
      // The district.
      // 
      // This parameter is required.
      shared_ptr<string> areaName_ {};
      // The city.
      // 
      // This parameter is required.
      shared_ptr<string> cityName_ {};
      // The province.
      // 
      // This parameter is required.
      shared_ptr<string> provinceName_ {};
      // The street.
      shared_ptr<string> townName_ {};
    };

    class GoodsInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GoodsInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, GoodsInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      GoodsInfos() = default ;
      GoodsInfos(const GoodsInfos &) = default ;
      GoodsInfos(GoodsInfos &&) = default ;
      GoodsInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GoodsInfos() = default ;
      GoodsInfos& operator=(const GoodsInfos &) = default ;
      GoodsInfos& operator=(GoodsInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->quantity_ == nullptr && this->weight_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline GoodsInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
      inline GoodsInfos& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
      inline GoodsInfos& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The name of the item.
      shared_ptr<string> name_ {};
      // The quantity.
      shared_ptr<string> quantity_ {};
      // The weight. Unit: grams.
      shared_ptr<string> weight_ {};
    };

    class ConsigneeAddress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsigneeAddress& obj) { 
        DARABONBA_PTR_TO_JSON(AddressDetail, addressDetail_);
        DARABONBA_PTR_TO_JSON(AreaName, areaName_);
        DARABONBA_PTR_TO_JSON(CityName, cityName_);
        DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
        DARABONBA_PTR_TO_JSON(TownName, townName_);
      };
      friend void from_json(const Darabonba::Json& j, ConsigneeAddress& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressDetail, addressDetail_);
        DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
        DARABONBA_PTR_FROM_JSON(CityName, cityName_);
        DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
        DARABONBA_PTR_FROM_JSON(TownName, townName_);
      };
      ConsigneeAddress() = default ;
      ConsigneeAddress(const ConsigneeAddress &) = default ;
      ConsigneeAddress(ConsigneeAddress &&) = default ;
      ConsigneeAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsigneeAddress() = default ;
      ConsigneeAddress& operator=(const ConsigneeAddress &) = default ;
      ConsigneeAddress& operator=(ConsigneeAddress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addressDetail_ == nullptr
        && this->areaName_ == nullptr && this->cityName_ == nullptr && this->provinceName_ == nullptr && this->townName_ == nullptr; };
      // addressDetail Field Functions 
      bool hasAddressDetail() const { return this->addressDetail_ != nullptr;};
      void deleteAddressDetail() { this->addressDetail_ = nullptr;};
      inline string getAddressDetail() const { DARABONBA_PTR_GET_DEFAULT(addressDetail_, "") };
      inline ConsigneeAddress& setAddressDetail(string addressDetail) { DARABONBA_PTR_SET_VALUE(addressDetail_, addressDetail) };


      // areaName Field Functions 
      bool hasAreaName() const { return this->areaName_ != nullptr;};
      void deleteAreaName() { this->areaName_ = nullptr;};
      inline string getAreaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
      inline ConsigneeAddress& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


      // cityName Field Functions 
      bool hasCityName() const { return this->cityName_ != nullptr;};
      void deleteCityName() { this->cityName_ = nullptr;};
      inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
      inline ConsigneeAddress& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


      // provinceName Field Functions 
      bool hasProvinceName() const { return this->provinceName_ != nullptr;};
      void deleteProvinceName() { this->provinceName_ = nullptr;};
      inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
      inline ConsigneeAddress& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


      // townName Field Functions 
      bool hasTownName() const { return this->townName_ != nullptr;};
      void deleteTownName() { this->townName_ = nullptr;};
      inline string getTownName() const { DARABONBA_PTR_GET_DEFAULT(townName_, "") };
      inline ConsigneeAddress& setTownName(string townName) { DARABONBA_PTR_SET_VALUE(townName_, townName) };


    protected:
      // The detailed address.
      // 
      // This parameter is required.
      shared_ptr<string> addressDetail_ {};
      // The district.
      // 
      // This parameter is required.
      shared_ptr<string> areaName_ {};
      // The city.
      // 
      // This parameter is required.
      shared_ptr<string> cityName_ {};
      // The province.
      // 
      // This parameter is required.
      shared_ptr<string> provinceName_ {};
      // The street.
      shared_ptr<string> townName_ {};
    };

    virtual bool empty() const override { return this->appointGotEndTime_ == nullptr
        && this->appointGotStartTime_ == nullptr && this->bizType_ == nullptr && this->consigneeAddress_ == nullptr && this->consigneeMobile_ == nullptr && this->consigneeName_ == nullptr
        && this->consigneePhone_ == nullptr && this->cpCode_ == nullptr && this->goodsInfos_ == nullptr && this->orderChannels_ == nullptr && this->outerOrderCode_ == nullptr
        && this->remark_ == nullptr && this->sendAddress_ == nullptr && this->sendMobile_ == nullptr && this->sendName_ == nullptr && this->sendPhone_ == nullptr; };
    // appointGotEndTime Field Functions 
    bool hasAppointGotEndTime() const { return this->appointGotEndTime_ != nullptr;};
    void deleteAppointGotEndTime() { this->appointGotEndTime_ = nullptr;};
    inline string getAppointGotEndTime() const { DARABONBA_PTR_GET_DEFAULT(appointGotEndTime_, "") };
    inline CreatePickUpWaybillRequest& setAppointGotEndTime(string appointGotEndTime) { DARABONBA_PTR_SET_VALUE(appointGotEndTime_, appointGotEndTime) };


    // appointGotStartTime Field Functions 
    bool hasAppointGotStartTime() const { return this->appointGotStartTime_ != nullptr;};
    void deleteAppointGotStartTime() { this->appointGotStartTime_ = nullptr;};
    inline string getAppointGotStartTime() const { DARABONBA_PTR_GET_DEFAULT(appointGotStartTime_, "") };
    inline CreatePickUpWaybillRequest& setAppointGotStartTime(string appointGotStartTime) { DARABONBA_PTR_SET_VALUE(appointGotStartTime_, appointGotStartTime) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline CreatePickUpWaybillRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // consigneeAddress Field Functions 
    bool hasConsigneeAddress() const { return this->consigneeAddress_ != nullptr;};
    void deleteConsigneeAddress() { this->consigneeAddress_ = nullptr;};
    inline const CreatePickUpWaybillRequest::ConsigneeAddress & getConsigneeAddress() const { DARABONBA_PTR_GET_CONST(consigneeAddress_, CreatePickUpWaybillRequest::ConsigneeAddress) };
    inline CreatePickUpWaybillRequest::ConsigneeAddress getConsigneeAddress() { DARABONBA_PTR_GET(consigneeAddress_, CreatePickUpWaybillRequest::ConsigneeAddress) };
    inline CreatePickUpWaybillRequest& setConsigneeAddress(const CreatePickUpWaybillRequest::ConsigneeAddress & consigneeAddress) { DARABONBA_PTR_SET_VALUE(consigneeAddress_, consigneeAddress) };
    inline CreatePickUpWaybillRequest& setConsigneeAddress(CreatePickUpWaybillRequest::ConsigneeAddress && consigneeAddress) { DARABONBA_PTR_SET_RVALUE(consigneeAddress_, consigneeAddress) };


    // consigneeMobile Field Functions 
    bool hasConsigneeMobile() const { return this->consigneeMobile_ != nullptr;};
    void deleteConsigneeMobile() { this->consigneeMobile_ = nullptr;};
    inline string getConsigneeMobile() const { DARABONBA_PTR_GET_DEFAULT(consigneeMobile_, "") };
    inline CreatePickUpWaybillRequest& setConsigneeMobile(string consigneeMobile) { DARABONBA_PTR_SET_VALUE(consigneeMobile_, consigneeMobile) };


    // consigneeName Field Functions 
    bool hasConsigneeName() const { return this->consigneeName_ != nullptr;};
    void deleteConsigneeName() { this->consigneeName_ = nullptr;};
    inline string getConsigneeName() const { DARABONBA_PTR_GET_DEFAULT(consigneeName_, "") };
    inline CreatePickUpWaybillRequest& setConsigneeName(string consigneeName) { DARABONBA_PTR_SET_VALUE(consigneeName_, consigneeName) };


    // consigneePhone Field Functions 
    bool hasConsigneePhone() const { return this->consigneePhone_ != nullptr;};
    void deleteConsigneePhone() { this->consigneePhone_ = nullptr;};
    inline string getConsigneePhone() const { DARABONBA_PTR_GET_DEFAULT(consigneePhone_, "") };
    inline CreatePickUpWaybillRequest& setConsigneePhone(string consigneePhone) { DARABONBA_PTR_SET_VALUE(consigneePhone_, consigneePhone) };


    // cpCode Field Functions 
    bool hasCpCode() const { return this->cpCode_ != nullptr;};
    void deleteCpCode() { this->cpCode_ = nullptr;};
    inline string getCpCode() const { DARABONBA_PTR_GET_DEFAULT(cpCode_, "") };
    inline CreatePickUpWaybillRequest& setCpCode(string cpCode) { DARABONBA_PTR_SET_VALUE(cpCode_, cpCode) };


    // goodsInfos Field Functions 
    bool hasGoodsInfos() const { return this->goodsInfos_ != nullptr;};
    void deleteGoodsInfos() { this->goodsInfos_ = nullptr;};
    inline const vector<CreatePickUpWaybillRequest::GoodsInfos> & getGoodsInfos() const { DARABONBA_PTR_GET_CONST(goodsInfos_, vector<CreatePickUpWaybillRequest::GoodsInfos>) };
    inline vector<CreatePickUpWaybillRequest::GoodsInfos> getGoodsInfos() { DARABONBA_PTR_GET(goodsInfos_, vector<CreatePickUpWaybillRequest::GoodsInfos>) };
    inline CreatePickUpWaybillRequest& setGoodsInfos(const vector<CreatePickUpWaybillRequest::GoodsInfos> & goodsInfos) { DARABONBA_PTR_SET_VALUE(goodsInfos_, goodsInfos) };
    inline CreatePickUpWaybillRequest& setGoodsInfos(vector<CreatePickUpWaybillRequest::GoodsInfos> && goodsInfos) { DARABONBA_PTR_SET_RVALUE(goodsInfos_, goodsInfos) };


    // orderChannels Field Functions 
    bool hasOrderChannels() const { return this->orderChannels_ != nullptr;};
    void deleteOrderChannels() { this->orderChannels_ = nullptr;};
    inline string getOrderChannels() const { DARABONBA_PTR_GET_DEFAULT(orderChannels_, "") };
    inline CreatePickUpWaybillRequest& setOrderChannels(string orderChannels) { DARABONBA_PTR_SET_VALUE(orderChannels_, orderChannels) };


    // outerOrderCode Field Functions 
    bool hasOuterOrderCode() const { return this->outerOrderCode_ != nullptr;};
    void deleteOuterOrderCode() { this->outerOrderCode_ = nullptr;};
    inline string getOuterOrderCode() const { DARABONBA_PTR_GET_DEFAULT(outerOrderCode_, "") };
    inline CreatePickUpWaybillRequest& setOuterOrderCode(string outerOrderCode) { DARABONBA_PTR_SET_VALUE(outerOrderCode_, outerOrderCode) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreatePickUpWaybillRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sendAddress Field Functions 
    bool hasSendAddress() const { return this->sendAddress_ != nullptr;};
    void deleteSendAddress() { this->sendAddress_ = nullptr;};
    inline const CreatePickUpWaybillRequest::SendAddress & getSendAddress() const { DARABONBA_PTR_GET_CONST(sendAddress_, CreatePickUpWaybillRequest::SendAddress) };
    inline CreatePickUpWaybillRequest::SendAddress getSendAddress() { DARABONBA_PTR_GET(sendAddress_, CreatePickUpWaybillRequest::SendAddress) };
    inline CreatePickUpWaybillRequest& setSendAddress(const CreatePickUpWaybillRequest::SendAddress & sendAddress) { DARABONBA_PTR_SET_VALUE(sendAddress_, sendAddress) };
    inline CreatePickUpWaybillRequest& setSendAddress(CreatePickUpWaybillRequest::SendAddress && sendAddress) { DARABONBA_PTR_SET_RVALUE(sendAddress_, sendAddress) };


    // sendMobile Field Functions 
    bool hasSendMobile() const { return this->sendMobile_ != nullptr;};
    void deleteSendMobile() { this->sendMobile_ = nullptr;};
    inline string getSendMobile() const { DARABONBA_PTR_GET_DEFAULT(sendMobile_, "") };
    inline CreatePickUpWaybillRequest& setSendMobile(string sendMobile) { DARABONBA_PTR_SET_VALUE(sendMobile_, sendMobile) };


    // sendName Field Functions 
    bool hasSendName() const { return this->sendName_ != nullptr;};
    void deleteSendName() { this->sendName_ = nullptr;};
    inline string getSendName() const { DARABONBA_PTR_GET_DEFAULT(sendName_, "") };
    inline CreatePickUpWaybillRequest& setSendName(string sendName) { DARABONBA_PTR_SET_VALUE(sendName_, sendName) };


    // sendPhone Field Functions 
    bool hasSendPhone() const { return this->sendPhone_ != nullptr;};
    void deleteSendPhone() { this->sendPhone_ = nullptr;};
    inline string getSendPhone() const { DARABONBA_PTR_GET_DEFAULT(sendPhone_, "") };
    inline CreatePickUpWaybillRequest& setSendPhone(string sendPhone) { DARABONBA_PTR_SET_VALUE(sendPhone_, sendPhone) };


  protected:
    // The end time of the scheduled door-to-door pickup, in the YYYY-MM-DD HH:mm:ss format. To obtain the value of **AppointGotEndTime**, obtain the **EndTime** value from **AppointTimes** in the **CpTimeSelectList** response parameter of the [CreatePickUpWaybillPreQuery](https://api.aliyun.com/document/Dyplsapi/2017-05-25/CreatePickUpWaybillPreQuery) operation.
    // > Required when **bizType** is set to **1**.
    shared_ptr<string> appointGotEndTime_ {};
    // The start time of the scheduled door-to-door pickup, in the YYYY-MM-DD HH:mm:ss format. To obtain the value of **AppointGotStartTime**, obtain the **StartTime** value from **AppointTimes** in the **CpTimeSelectList** response parameter of the [CreatePickUpWaybillPreQuery](https://api.aliyun.com/document/Dyplsapi/2017-05-25/CreatePickUpWaybillPreQuery) operation.
    // 
    // > Required when **bizType** is set to **1**.
    shared_ptr<string> appointGotStartTime_ {};
    // The delivery mode. Valid values:
    // 
    // - **0**: real-time order (default)
    // - **1**: scheduled order
    shared_ptr<int32_t> bizType_ {};
    // The address of the recipient.
    // 
    // This parameter is required.
    shared_ptr<CreatePickUpWaybillRequest::ConsigneeAddress> consigneeAddress_ {};
    // The mobile phone number of the recipient.
    // 
    // > You must specify either ConsigneeMobile or ConsigneePhone.
    shared_ptr<string> consigneeMobile_ {};
    // The name of the recipient.
    // 
    // This parameter is required.
    shared_ptr<string> consigneeName_ {};
    // The landline phone number of the recipient.
    // > You must specify either ConsigneeMobile or ConsigneePhone.
    shared_ptr<string> consigneePhone_ {};
    // The express delivery company code.
    shared_ptr<string> cpCode_ {};
    // The list of goods.
    shared_ptr<vector<CreatePickUpWaybillRequest::GoodsInfos>> goodsInfos_ {};
    // The external channel source.
    // 
    // This parameter is required.
    shared_ptr<string> orderChannels_ {};
    // The external order ID.
    // 
    // This parameter is required.
    shared_ptr<string> outerOrderCode_ {};
    // The remark. The remark content printed on the waybill.
    shared_ptr<string> remark_ {};
    // The address of the sender.
    // 
    // This parameter is required.
    shared_ptr<CreatePickUpWaybillRequest::SendAddress> sendAddress_ {};
    // The mobile phone number of the sender.
    // 
    // > You must specify either SendMobile or SendPhone.
    shared_ptr<string> sendMobile_ {};
    // The name of the sender.
    // 
    // This parameter is required.
    shared_ptr<string> sendName_ {};
    // The landline phone number of the sender.
    // > You must specify either SendMobile or SendPhone.
    shared_ptr<string> sendPhone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

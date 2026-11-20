// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class SenderInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SenderInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AddressInfo, addressInfo_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, SenderInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressInfo, addressInfo_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      SenderInfo() = default ;
      SenderInfo(const SenderInfo &) = default ;
      SenderInfo(SenderInfo &&) = default ;
      SenderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SenderInfo() = default ;
      SenderInfo& operator=(const SenderInfo &) = default ;
      SenderInfo& operator=(SenderInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddressInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddressInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AddressDetail, addressDetail_);
          DARABONBA_PTR_TO_JSON(AreaName, areaName_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
          DARABONBA_PTR_TO_JSON(TownName, townName_);
        };
        friend void from_json(const Darabonba::Json& j, AddressInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AddressDetail, addressDetail_);
          DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
          DARABONBA_PTR_FROM_JSON(TownName, townName_);
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
        && this->areaName_ == nullptr && this->cityName_ == nullptr && this->provinceName_ == nullptr && this->townName_ == nullptr; };
        // addressDetail Field Functions 
        bool hasAddressDetail() const { return this->addressDetail_ != nullptr;};
        void deleteAddressDetail() { this->addressDetail_ = nullptr;};
        inline string getAddressDetail() const { DARABONBA_PTR_GET_DEFAULT(addressDetail_, "") };
        inline AddressInfo& setAddressDetail(string addressDetail) { DARABONBA_PTR_SET_VALUE(addressDetail_, addressDetail) };


        // areaName Field Functions 
        bool hasAreaName() const { return this->areaName_ != nullptr;};
        void deleteAreaName() { this->areaName_ = nullptr;};
        inline string getAreaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
        inline AddressInfo& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline AddressInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // provinceName Field Functions 
        bool hasProvinceName() const { return this->provinceName_ != nullptr;};
        void deleteProvinceName() { this->provinceName_ = nullptr;};
        inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
        inline AddressInfo& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


        // townName Field Functions 
        bool hasTownName() const { return this->townName_ != nullptr;};
        void deleteTownName() { this->townName_ = nullptr;};
        inline string getTownName() const { DARABONBA_PTR_GET_DEFAULT(townName_, "") };
        inline AddressInfo& setTownName(string townName) { DARABONBA_PTR_SET_VALUE(townName_, townName) };


      protected:
        // The detailed address of the sender.
        shared_ptr<string> addressDetail_ {};
        // The district where the sender is located.
        shared_ptr<string> areaName_ {};
        // The city where the sender is located.
        shared_ptr<string> cityName_ {};
        // The province where the sender is located.
        shared_ptr<string> provinceName_ {};
        // The street where the sender is located.
        shared_ptr<string> townName_ {};
      };

      virtual bool empty() const override { return this->addressInfo_ == nullptr
        && this->mobile_ == nullptr && this->name_ == nullptr; };
      // addressInfo Field Functions 
      bool hasAddressInfo() const { return this->addressInfo_ != nullptr;};
      void deleteAddressInfo() { this->addressInfo_ = nullptr;};
      inline const SenderInfo::AddressInfo & getAddressInfo() const { DARABONBA_PTR_GET_CONST(addressInfo_, SenderInfo::AddressInfo) };
      inline SenderInfo::AddressInfo getAddressInfo() { DARABONBA_PTR_GET(addressInfo_, SenderInfo::AddressInfo) };
      inline SenderInfo& setAddressInfo(const SenderInfo::AddressInfo & addressInfo) { DARABONBA_PTR_SET_VALUE(addressInfo_, addressInfo) };
      inline SenderInfo& setAddressInfo(SenderInfo::AddressInfo && addressInfo) { DARABONBA_PTR_SET_RVALUE(addressInfo_, addressInfo) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline SenderInfo& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SenderInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The address information of the sender.
      shared_ptr<SenderInfo::AddressInfo> addressInfo_ {};
      // The mobile phone number of the sender.
      // 
      // This parameter is required.
      shared_ptr<string> mobile_ {};
      // The name of the sender.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    class ConsigneeInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsigneeInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AddressInfo, addressInfo_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, ConsigneeInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressInfo, addressInfo_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      ConsigneeInfo() = default ;
      ConsigneeInfo(const ConsigneeInfo &) = default ;
      ConsigneeInfo(ConsigneeInfo &&) = default ;
      ConsigneeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsigneeInfo() = default ;
      ConsigneeInfo& operator=(const ConsigneeInfo &) = default ;
      ConsigneeInfo& operator=(ConsigneeInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddressInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddressInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AddressDetail, addressDetail_);
          DARABONBA_PTR_TO_JSON(AreaName, areaName_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
          DARABONBA_PTR_TO_JSON(TownName, townName_);
        };
        friend void from_json(const Darabonba::Json& j, AddressInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AddressDetail, addressDetail_);
          DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
          DARABONBA_PTR_FROM_JSON(TownName, townName_);
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
        && this->areaName_ == nullptr && this->cityName_ == nullptr && this->provinceName_ == nullptr && this->townName_ == nullptr; };
        // addressDetail Field Functions 
        bool hasAddressDetail() const { return this->addressDetail_ != nullptr;};
        void deleteAddressDetail() { this->addressDetail_ = nullptr;};
        inline string getAddressDetail() const { DARABONBA_PTR_GET_DEFAULT(addressDetail_, "") };
        inline AddressInfo& setAddressDetail(string addressDetail) { DARABONBA_PTR_SET_VALUE(addressDetail_, addressDetail) };


        // areaName Field Functions 
        bool hasAreaName() const { return this->areaName_ != nullptr;};
        void deleteAreaName() { this->areaName_ = nullptr;};
        inline string getAreaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
        inline AddressInfo& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline AddressInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // provinceName Field Functions 
        bool hasProvinceName() const { return this->provinceName_ != nullptr;};
        void deleteProvinceName() { this->provinceName_ = nullptr;};
        inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
        inline AddressInfo& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


        // townName Field Functions 
        bool hasTownName() const { return this->townName_ != nullptr;};
        void deleteTownName() { this->townName_ = nullptr;};
        inline string getTownName() const { DARABONBA_PTR_GET_DEFAULT(townName_, "") };
        inline AddressInfo& setTownName(string townName) { DARABONBA_PTR_SET_VALUE(townName_, townName) };


      protected:
        // The detailed address of the recipient.
        shared_ptr<string> addressDetail_ {};
        // The district where the recipient is located.
        shared_ptr<string> areaName_ {};
        // The city where the recipient is located.
        shared_ptr<string> cityName_ {};
        // The province where the recipient is located.
        shared_ptr<string> provinceName_ {};
        // The street where the recipient is located.
        shared_ptr<string> townName_ {};
      };

      virtual bool empty() const override { return this->addressInfo_ == nullptr
        && this->mobile_ == nullptr && this->name_ == nullptr; };
      // addressInfo Field Functions 
      bool hasAddressInfo() const { return this->addressInfo_ != nullptr;};
      void deleteAddressInfo() { this->addressInfo_ = nullptr;};
      inline const ConsigneeInfo::AddressInfo & getAddressInfo() const { DARABONBA_PTR_GET_CONST(addressInfo_, ConsigneeInfo::AddressInfo) };
      inline ConsigneeInfo::AddressInfo getAddressInfo() { DARABONBA_PTR_GET(addressInfo_, ConsigneeInfo::AddressInfo) };
      inline ConsigneeInfo& setAddressInfo(const ConsigneeInfo::AddressInfo & addressInfo) { DARABONBA_PTR_SET_VALUE(addressInfo_, addressInfo) };
      inline ConsigneeInfo& setAddressInfo(ConsigneeInfo::AddressInfo && addressInfo) { DARABONBA_PTR_SET_RVALUE(addressInfo_, addressInfo) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline ConsigneeInfo& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ConsigneeInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The address information of the recipient.
      shared_ptr<ConsigneeInfo::AddressInfo> addressInfo_ {};
      // The mobile phone number of the recipient.
      // 
      // This parameter is required.
      shared_ptr<string> mobile_ {};
      // The name of the recipient.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->consigneeInfo_ == nullptr
        && this->cpCode_ == nullptr && this->orderChannels_ == nullptr && this->outerOrderCode_ == nullptr && this->preWeight_ == nullptr && this->senderInfo_ == nullptr; };
    // consigneeInfo Field Functions 
    bool hasConsigneeInfo() const { return this->consigneeInfo_ != nullptr;};
    void deleteConsigneeInfo() { this->consigneeInfo_ = nullptr;};
    inline const CreatePickUpWaybillPreQueryRequest::ConsigneeInfo & getConsigneeInfo() const { DARABONBA_PTR_GET_CONST(consigneeInfo_, CreatePickUpWaybillPreQueryRequest::ConsigneeInfo) };
    inline CreatePickUpWaybillPreQueryRequest::ConsigneeInfo getConsigneeInfo() { DARABONBA_PTR_GET(consigneeInfo_, CreatePickUpWaybillPreQueryRequest::ConsigneeInfo) };
    inline CreatePickUpWaybillPreQueryRequest& setConsigneeInfo(const CreatePickUpWaybillPreQueryRequest::ConsigneeInfo & consigneeInfo) { DARABONBA_PTR_SET_VALUE(consigneeInfo_, consigneeInfo) };
    inline CreatePickUpWaybillPreQueryRequest& setConsigneeInfo(CreatePickUpWaybillPreQueryRequest::ConsigneeInfo && consigneeInfo) { DARABONBA_PTR_SET_RVALUE(consigneeInfo_, consigneeInfo) };


    // cpCode Field Functions 
    bool hasCpCode() const { return this->cpCode_ != nullptr;};
    void deleteCpCode() { this->cpCode_ = nullptr;};
    inline string getCpCode() const { DARABONBA_PTR_GET_DEFAULT(cpCode_, "") };
    inline CreatePickUpWaybillPreQueryRequest& setCpCode(string cpCode) { DARABONBA_PTR_SET_VALUE(cpCode_, cpCode) };


    // orderChannels Field Functions 
    bool hasOrderChannels() const { return this->orderChannels_ != nullptr;};
    void deleteOrderChannels() { this->orderChannels_ = nullptr;};
    inline string getOrderChannels() const { DARABONBA_PTR_GET_DEFAULT(orderChannels_, "") };
    inline CreatePickUpWaybillPreQueryRequest& setOrderChannels(string orderChannels) { DARABONBA_PTR_SET_VALUE(orderChannels_, orderChannels) };


    // outerOrderCode Field Functions 
    bool hasOuterOrderCode() const { return this->outerOrderCode_ != nullptr;};
    void deleteOuterOrderCode() { this->outerOrderCode_ = nullptr;};
    inline string getOuterOrderCode() const { DARABONBA_PTR_GET_DEFAULT(outerOrderCode_, "") };
    inline CreatePickUpWaybillPreQueryRequest& setOuterOrderCode(string outerOrderCode) { DARABONBA_PTR_SET_VALUE(outerOrderCode_, outerOrderCode) };


    // preWeight Field Functions 
    bool hasPreWeight() const { return this->preWeight_ != nullptr;};
    void deletePreWeight() { this->preWeight_ = nullptr;};
    inline string getPreWeight() const { DARABONBA_PTR_GET_DEFAULT(preWeight_, "") };
    inline CreatePickUpWaybillPreQueryRequest& setPreWeight(string preWeight) { DARABONBA_PTR_SET_VALUE(preWeight_, preWeight) };


    // senderInfo Field Functions 
    bool hasSenderInfo() const { return this->senderInfo_ != nullptr;};
    void deleteSenderInfo() { this->senderInfo_ = nullptr;};
    inline const CreatePickUpWaybillPreQueryRequest::SenderInfo & getSenderInfo() const { DARABONBA_PTR_GET_CONST(senderInfo_, CreatePickUpWaybillPreQueryRequest::SenderInfo) };
    inline CreatePickUpWaybillPreQueryRequest::SenderInfo getSenderInfo() { DARABONBA_PTR_GET(senderInfo_, CreatePickUpWaybillPreQueryRequest::SenderInfo) };
    inline CreatePickUpWaybillPreQueryRequest& setSenderInfo(const CreatePickUpWaybillPreQueryRequest::SenderInfo & senderInfo) { DARABONBA_PTR_SET_VALUE(senderInfo_, senderInfo) };
    inline CreatePickUpWaybillPreQueryRequest& setSenderInfo(CreatePickUpWaybillPreQueryRequest::SenderInfo && senderInfo) { DARABONBA_PTR_SET_RVALUE(senderInfo_, senderInfo) };


  protected:
    // The recipient information.
    // 
    // This parameter is required.
    shared_ptr<CreatePickUpWaybillPreQueryRequest::ConsigneeInfo> consigneeInfo_ {};
    // The courier company code. If not specified, the system automatically assigns a courier company.
    shared_ptr<string> cpCode_ {};
    // The external channel source identifier. The value cannot contain underscores. The value is agreed upon with the system during integration.
    // 
    // This parameter is required.
    shared_ptr<string> orderChannels_ {};
    // The order number in the caller\\"s system.
    shared_ptr<string> outerOrderCode_ {};
    // The estimated weight, in grams.
    // 
    // > If you want to query the estimated price, this parameter is required.
    shared_ptr<string> preWeight_ {};
    // The sender information.
    // 
    // This parameter is required.
    shared_ptr<CreatePickUpWaybillPreQueryRequest::SenderInfo> senderInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

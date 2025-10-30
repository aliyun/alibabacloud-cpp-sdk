// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYREQUESTSENDERINFOADDRESSINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYREQUESTSENDERINFOADDRESSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AddressDetail, addressDetail_);
      DARABONBA_PTR_TO_JSON(AreaName, areaName_);
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
      DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
      DARABONBA_PTR_TO_JSON(TownName, townName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressDetail, addressDetail_);
      DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
      DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
      DARABONBA_PTR_FROM_JSON(TownName, townName_);
    };
    CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo() = default ;
    CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo(const CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo &) = default ;
    CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo(CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo &&) = default ;
    CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo() = default ;
    CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo& operator=(const CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo &) = default ;
    CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo& operator=(CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressDetail_ == nullptr
        && return this->areaName_ == nullptr && return this->cityName_ == nullptr && return this->provinceName_ == nullptr && return this->townName_ == nullptr; };
    // addressDetail Field Functions 
    bool hasAddressDetail() const { return this->addressDetail_ != nullptr;};
    void deleteAddressDetail() { this->addressDetail_ = nullptr;};
    inline string addressDetail() const { DARABONBA_PTR_GET_DEFAULT(addressDetail_, "") };
    inline CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo& setAddressDetail(string addressDetail) { DARABONBA_PTR_SET_VALUE(addressDetail_, addressDetail) };


    // areaName Field Functions 
    bool hasAreaName() const { return this->areaName_ != nullptr;};
    void deleteAreaName() { this->areaName_ = nullptr;};
    inline string areaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
    inline CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // provinceName Field Functions 
    bool hasProvinceName() const { return this->provinceName_ != nullptr;};
    void deleteProvinceName() { this->provinceName_ = nullptr;};
    inline string provinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
    inline CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


    // townName Field Functions 
    bool hasTownName() const { return this->townName_ != nullptr;};
    void deleteTownName() { this->townName_ = nullptr;};
    inline string townName() const { DARABONBA_PTR_GET_DEFAULT(townName_, "") };
    inline CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo& setTownName(string townName) { DARABONBA_PTR_SET_VALUE(townName_, townName) };


  protected:
    // The detailed address of the sender.
    std::shared_ptr<string> addressDetail_ = nullptr;
    // The district where the sender is located.
    std::shared_ptr<string> areaName_ = nullptr;
    // The city where the sender is located.
    std::shared_ptr<string> cityName_ = nullptr;
    // The province where the sender is located.
    std::shared_ptr<string> provinceName_ = nullptr;
    // The street where the sender is located.
    std::shared_ptr<string> townName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

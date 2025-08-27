// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULEHOTELSTATICINFOS_HPP_
#define ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULEHOTELSTATICINFOS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo.hpp>
#include <vector>
#include <alibabacloud/models/HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos.hpp>
#include <alibabacloud/models/HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelStaticInfoResponseBodyModuleHotelStaticInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelStaticInfoResponseBodyModuleHotelStaticInfos& obj) { 
      DARABONBA_PTR_TO_JSON(block_room_type_information, blockRoomTypeInformation_);
      DARABONBA_PTR_TO_JSON(brand, brand_);
      DARABONBA_PTR_TO_JSON(brand_name, brandName_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(city_name, cityName_);
      DARABONBA_PTR_TO_JSON(country, country_);
      DARABONBA_PTR_TO_JSON(country_code, countryCode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(district, district_);
      DARABONBA_PTR_TO_JSON(district_name, districtName_);
      DARABONBA_PTR_TO_JSON(expand_info, expandInfo_);
      DARABONBA_PTR_TO_JSON(hotel_address, hotelAddress_);
      DARABONBA_PTR_TO_JSON(hotel_en_address, hotelEnAddress_);
      DARABONBA_PTR_TO_JSON(hotel_en_name, hotelEnName_);
      DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_TO_JSON(hotel_open_time, hotelOpenTime_);
      DARABONBA_PTR_TO_JSON(hotel_phones, hotelPhones_);
      DARABONBA_PTR_TO_JSON(hotel_policies, hotelPolicies_);
      DARABONBA_PTR_TO_JSON(hotelfax, hotelfax_);
      DARABONBA_PTR_TO_JSON(hotelpics, hotelpics_);
      DARABONBA_PTR_TO_JSON(imageinfos, imageinfos_);
      DARABONBA_PTR_TO_JSON(invoice_provider_method, invoiceProviderMethod_);
      DARABONBA_PTR_TO_JSON(invoice_types, invoiceTypes_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(province, province_);
      DARABONBA_PTR_TO_JSON(province_name, provinceName_);
      DARABONBA_PTR_TO_JSON(rating_average, ratingAverage_);
      DARABONBA_PTR_TO_JSON(room_infos, roomInfos_);
      DARABONBA_PTR_TO_JSON(star, star_);
      DARABONBA_PTR_TO_JSON(star_rate, starRate_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(themes, themes_);
      DARABONBA_PTR_TO_JSON(visa_reminding, visaReminding_);
    };
    friend void from_json(const Darabonba::Json& j, HotelStaticInfoResponseBodyModuleHotelStaticInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(block_room_type_information, blockRoomTypeInformation_);
      DARABONBA_PTR_FROM_JSON(brand, brand_);
      DARABONBA_PTR_FROM_JSON(brand_name, brandName_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(city_name, cityName_);
      DARABONBA_PTR_FROM_JSON(country, country_);
      DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(district, district_);
      DARABONBA_PTR_FROM_JSON(district_name, districtName_);
      DARABONBA_PTR_FROM_JSON(expand_info, expandInfo_);
      DARABONBA_PTR_FROM_JSON(hotel_address, hotelAddress_);
      DARABONBA_PTR_FROM_JSON(hotel_en_address, hotelEnAddress_);
      DARABONBA_PTR_FROM_JSON(hotel_en_name, hotelEnName_);
      DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
      DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
      DARABONBA_PTR_FROM_JSON(hotel_open_time, hotelOpenTime_);
      DARABONBA_PTR_FROM_JSON(hotel_phones, hotelPhones_);
      DARABONBA_PTR_FROM_JSON(hotel_policies, hotelPolicies_);
      DARABONBA_PTR_FROM_JSON(hotelfax, hotelfax_);
      DARABONBA_PTR_FROM_JSON(hotelpics, hotelpics_);
      DARABONBA_PTR_FROM_JSON(imageinfos, imageinfos_);
      DARABONBA_PTR_FROM_JSON(invoice_provider_method, invoiceProviderMethod_);
      DARABONBA_PTR_FROM_JSON(invoice_types, invoiceTypes_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(province, province_);
      DARABONBA_PTR_FROM_JSON(province_name, provinceName_);
      DARABONBA_PTR_FROM_JSON(rating_average, ratingAverage_);
      DARABONBA_PTR_FROM_JSON(room_infos, roomInfos_);
      DARABONBA_PTR_FROM_JSON(star, star_);
      DARABONBA_PTR_FROM_JSON(star_rate, starRate_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(themes, themes_);
      DARABONBA_PTR_FROM_JSON(visa_reminding, visaReminding_);
    };
    HotelStaticInfoResponseBodyModuleHotelStaticInfos() = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfos(const HotelStaticInfoResponseBodyModuleHotelStaticInfos &) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfos(HotelStaticInfoResponseBodyModuleHotelStaticInfos &&) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelStaticInfoResponseBodyModuleHotelStaticInfos() = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfos& operator=(const HotelStaticInfoResponseBodyModuleHotelStaticInfos &) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfos& operator=(HotelStaticInfoResponseBodyModuleHotelStaticInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockRoomTypeInformation_ != nullptr
        && this->brand_ != nullptr && this->brandName_ != nullptr && this->cityCode_ != nullptr && this->cityName_ != nullptr && this->country_ != nullptr
        && this->countryCode_ != nullptr && this->description_ != nullptr && this->district_ != nullptr && this->districtName_ != nullptr && this->expandInfo_ != nullptr
        && this->hotelAddress_ != nullptr && this->hotelEnAddress_ != nullptr && this->hotelEnName_ != nullptr && this->hotelId_ != nullptr && this->hotelName_ != nullptr
        && this->hotelOpenTime_ != nullptr && this->hotelPhones_ != nullptr && this->hotelPolicies_ != nullptr && this->hotelfax_ != nullptr && this->hotelpics_ != nullptr
        && this->imageinfos_ != nullptr && this->invoiceProviderMethod_ != nullptr && this->invoiceTypes_ != nullptr && this->location_ != nullptr && this->province_ != nullptr
        && this->provinceName_ != nullptr && this->ratingAverage_ != nullptr && this->roomInfos_ != nullptr && this->star_ != nullptr && this->starRate_ != nullptr
        && this->status_ != nullptr && this->themes_ != nullptr && this->visaReminding_ != nullptr; };
    // blockRoomTypeInformation Field Functions 
    bool hasBlockRoomTypeInformation() const { return this->blockRoomTypeInformation_ != nullptr;};
    void deleteBlockRoomTypeInformation() { this->blockRoomTypeInformation_ = nullptr;};
    inline const map<string, string> & blockRoomTypeInformation() const { DARABONBA_PTR_GET_CONST(blockRoomTypeInformation_, map<string, string>) };
    inline map<string, string> blockRoomTypeInformation() { DARABONBA_PTR_GET(blockRoomTypeInformation_, map<string, string>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setBlockRoomTypeInformation(const map<string, string> & blockRoomTypeInformation) { DARABONBA_PTR_SET_VALUE(blockRoomTypeInformation_, blockRoomTypeInformation) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setBlockRoomTypeInformation(map<string, string> && blockRoomTypeInformation) { DARABONBA_PTR_SET_RVALUE(blockRoomTypeInformation_, blockRoomTypeInformation) };


    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string brand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // brandName Field Functions 
    bool hasBrandName() const { return this->brandName_ != nullptr;};
    void deleteBrandName() { this->brandName_ = nullptr;};
    inline string brandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // district Field Functions 
    bool hasDistrict() const { return this->district_ != nullptr;};
    void deleteDistrict() { this->district_ = nullptr;};
    inline string district() const { DARABONBA_PTR_GET_DEFAULT(district_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setDistrict(string district) { DARABONBA_PTR_SET_VALUE(district_, district) };


    // districtName Field Functions 
    bool hasDistrictName() const { return this->districtName_ != nullptr;};
    void deleteDistrictName() { this->districtName_ = nullptr;};
    inline string districtName() const { DARABONBA_PTR_GET_DEFAULT(districtName_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setDistrictName(string districtName) { DARABONBA_PTR_SET_VALUE(districtName_, districtName) };


    // expandInfo Field Functions 
    bool hasExpandInfo() const { return this->expandInfo_ != nullptr;};
    void deleteExpandInfo() { this->expandInfo_ = nullptr;};
    inline const Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo & expandInfo() const { DARABONBA_PTR_GET_CONST(expandInfo_, Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo) };
    inline Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo expandInfo() { DARABONBA_PTR_GET(expandInfo_, Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setExpandInfo(const Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo & expandInfo) { DARABONBA_PTR_SET_VALUE(expandInfo_, expandInfo) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setExpandInfo(Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo && expandInfo) { DARABONBA_PTR_SET_RVALUE(expandInfo_, expandInfo) };


    // hotelAddress Field Functions 
    bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
    void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
    inline string hotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


    // hotelEnAddress Field Functions 
    bool hasHotelEnAddress() const { return this->hotelEnAddress_ != nullptr;};
    void deleteHotelEnAddress() { this->hotelEnAddress_ = nullptr;};
    inline string hotelEnAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelEnAddress_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setHotelEnAddress(string hotelEnAddress) { DARABONBA_PTR_SET_VALUE(hotelEnAddress_, hotelEnAddress) };


    // hotelEnName Field Functions 
    bool hasHotelEnName() const { return this->hotelEnName_ != nullptr;};
    void deleteHotelEnName() { this->hotelEnName_ = nullptr;};
    inline string hotelEnName() const { DARABONBA_PTR_GET_DEFAULT(hotelEnName_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setHotelEnName(string hotelEnName) { DARABONBA_PTR_SET_VALUE(hotelEnName_, hotelEnName) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string hotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // hotelName Field Functions 
    bool hasHotelName() const { return this->hotelName_ != nullptr;};
    void deleteHotelName() { this->hotelName_ = nullptr;};
    inline string hotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    // hotelOpenTime Field Functions 
    bool hasHotelOpenTime() const { return this->hotelOpenTime_ != nullptr;};
    void deleteHotelOpenTime() { this->hotelOpenTime_ = nullptr;};
    inline string hotelOpenTime() const { DARABONBA_PTR_GET_DEFAULT(hotelOpenTime_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setHotelOpenTime(string hotelOpenTime) { DARABONBA_PTR_SET_VALUE(hotelOpenTime_, hotelOpenTime) };


    // hotelPhones Field Functions 
    bool hasHotelPhones() const { return this->hotelPhones_ != nullptr;};
    void deleteHotelPhones() { this->hotelPhones_ = nullptr;};
    inline string hotelPhones() const { DARABONBA_PTR_GET_DEFAULT(hotelPhones_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setHotelPhones(string hotelPhones) { DARABONBA_PTR_SET_VALUE(hotelPhones_, hotelPhones) };


    // hotelPolicies Field Functions 
    bool hasHotelPolicies() const { return this->hotelPolicies_ != nullptr;};
    void deleteHotelPolicies() { this->hotelPolicies_ = nullptr;};
    inline string hotelPolicies() const { DARABONBA_PTR_GET_DEFAULT(hotelPolicies_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setHotelPolicies(string hotelPolicies) { DARABONBA_PTR_SET_VALUE(hotelPolicies_, hotelPolicies) };


    // hotelfax Field Functions 
    bool hasHotelfax() const { return this->hotelfax_ != nullptr;};
    void deleteHotelfax() { this->hotelfax_ = nullptr;};
    inline string hotelfax() const { DARABONBA_PTR_GET_DEFAULT(hotelfax_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setHotelfax(string hotelfax) { DARABONBA_PTR_SET_VALUE(hotelfax_, hotelfax) };


    // hotelpics Field Functions 
    bool hasHotelpics() const { return this->hotelpics_ != nullptr;};
    void deleteHotelpics() { this->hotelpics_ = nullptr;};
    inline string hotelpics() const { DARABONBA_PTR_GET_DEFAULT(hotelpics_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setHotelpics(string hotelpics) { DARABONBA_PTR_SET_VALUE(hotelpics_, hotelpics) };


    // imageinfos Field Functions 
    bool hasImageinfos() const { return this->imageinfos_ != nullptr;};
    void deleteImageinfos() { this->imageinfos_ = nullptr;};
    inline const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos> & imageinfos() const { DARABONBA_PTR_GET_CONST(imageinfos_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos>) };
    inline vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos> imageinfos() { DARABONBA_PTR_GET(imageinfos_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setImageinfos(const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos> & imageinfos) { DARABONBA_PTR_SET_VALUE(imageinfos_, imageinfos) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setImageinfos(vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos> && imageinfos) { DARABONBA_PTR_SET_RVALUE(imageinfos_, imageinfos) };


    // invoiceProviderMethod Field Functions 
    bool hasInvoiceProviderMethod() const { return this->invoiceProviderMethod_ != nullptr;};
    void deleteInvoiceProviderMethod() { this->invoiceProviderMethod_ = nullptr;};
    inline string invoiceProviderMethod() const { DARABONBA_PTR_GET_DEFAULT(invoiceProviderMethod_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setInvoiceProviderMethod(string invoiceProviderMethod) { DARABONBA_PTR_SET_VALUE(invoiceProviderMethod_, invoiceProviderMethod) };


    // invoiceTypes Field Functions 
    bool hasInvoiceTypes() const { return this->invoiceTypes_ != nullptr;};
    void deleteInvoiceTypes() { this->invoiceTypes_ = nullptr;};
    inline const vector<int32_t> & invoiceTypes() const { DARABONBA_PTR_GET_CONST(invoiceTypes_, vector<int32_t>) };
    inline vector<int32_t> invoiceTypes() { DARABONBA_PTR_GET(invoiceTypes_, vector<int32_t>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setInvoiceTypes(const vector<int32_t> & invoiceTypes) { DARABONBA_PTR_SET_VALUE(invoiceTypes_, invoiceTypes) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setInvoiceTypes(vector<int32_t> && invoiceTypes) { DARABONBA_PTR_SET_RVALUE(invoiceTypes_, invoiceTypes) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // provinceName Field Functions 
    bool hasProvinceName() const { return this->provinceName_ != nullptr;};
    void deleteProvinceName() { this->provinceName_ = nullptr;};
    inline string provinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


    // ratingAverage Field Functions 
    bool hasRatingAverage() const { return this->ratingAverage_ != nullptr;};
    void deleteRatingAverage() { this->ratingAverage_ = nullptr;};
    inline string ratingAverage() const { DARABONBA_PTR_GET_DEFAULT(ratingAverage_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setRatingAverage(string ratingAverage) { DARABONBA_PTR_SET_VALUE(ratingAverage_, ratingAverage) };


    // roomInfos Field Functions 
    bool hasRoomInfos() const { return this->roomInfos_ != nullptr;};
    void deleteRoomInfos() { this->roomInfos_ = nullptr;};
    inline const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos> & roomInfos() const { DARABONBA_PTR_GET_CONST(roomInfos_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos>) };
    inline vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos> roomInfos() { DARABONBA_PTR_GET(roomInfos_, vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos>) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setRoomInfos(const vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos> & roomInfos) { DARABONBA_PTR_SET_VALUE(roomInfos_, roomInfos) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setRoomInfos(vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos> && roomInfos) { DARABONBA_PTR_SET_RVALUE(roomInfos_, roomInfos) };


    // star Field Functions 
    bool hasStar() const { return this->star_ != nullptr;};
    void deleteStar() { this->star_ = nullptr;};
    inline string star() const { DARABONBA_PTR_GET_DEFAULT(star_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setStar(string star) { DARABONBA_PTR_SET_VALUE(star_, star) };


    // starRate Field Functions 
    bool hasStarRate() const { return this->starRate_ != nullptr;};
    void deleteStarRate() { this->starRate_ = nullptr;};
    inline string starRate() const { DARABONBA_PTR_GET_DEFAULT(starRate_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setStarRate(string starRate) { DARABONBA_PTR_SET_VALUE(starRate_, starRate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // themes Field Functions 
    bool hasThemes() const { return this->themes_ != nullptr;};
    void deleteThemes() { this->themes_ = nullptr;};
    inline string themes() const { DARABONBA_PTR_GET_DEFAULT(themes_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setThemes(string themes) { DARABONBA_PTR_SET_VALUE(themes_, themes) };


    // visaReminding Field Functions 
    bool hasVisaReminding() const { return this->visaReminding_ != nullptr;};
    void deleteVisaReminding() { this->visaReminding_ = nullptr;};
    inline bool visaReminding() const { DARABONBA_PTR_GET_DEFAULT(visaReminding_, false) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfos& setVisaReminding(bool visaReminding) { DARABONBA_PTR_SET_VALUE(visaReminding_, visaReminding) };


  protected:
    std::shared_ptr<map<string, string>> blockRoomTypeInformation_ = nullptr;
    std::shared_ptr<string> brand_ = nullptr;
    std::shared_ptr<string> brandName_ = nullptr;
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> countryCode_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> district_ = nullptr;
    std::shared_ptr<string> districtName_ = nullptr;
    std::shared_ptr<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosExpandInfo> expandInfo_ = nullptr;
    std::shared_ptr<string> hotelAddress_ = nullptr;
    std::shared_ptr<string> hotelEnAddress_ = nullptr;
    std::shared_ptr<string> hotelEnName_ = nullptr;
    std::shared_ptr<string> hotelId_ = nullptr;
    std::shared_ptr<string> hotelName_ = nullptr;
    std::shared_ptr<string> hotelOpenTime_ = nullptr;
    std::shared_ptr<string> hotelPhones_ = nullptr;
    std::shared_ptr<string> hotelPolicies_ = nullptr;
    std::shared_ptr<string> hotelfax_ = nullptr;
    std::shared_ptr<string> hotelpics_ = nullptr;
    std::shared_ptr<vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos>> imageinfos_ = nullptr;
    std::shared_ptr<string> invoiceProviderMethod_ = nullptr;
    std::shared_ptr<vector<int32_t>> invoiceTypes_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> provinceName_ = nullptr;
    std::shared_ptr<string> ratingAverage_ = nullptr;
    std::shared_ptr<vector<Models::HotelStaticInfoResponseBodyModuleHotelStaticInfosRoomInfos>> roomInfos_ = nullptr;
    std::shared_ptr<string> star_ = nullptr;
    std::shared_ptr<string> starRate_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> themes_ = nullptr;
    std::shared_ptr<bool> visaReminding_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

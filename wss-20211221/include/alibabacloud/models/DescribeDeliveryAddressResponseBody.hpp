// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeDeliveryAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeliveryAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeliveryAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDeliveryAddressResponseBody() = default ;
    DescribeDeliveryAddressResponseBody(const DescribeDeliveryAddressResponseBody &) = default ;
    DescribeDeliveryAddressResponseBody(DescribeDeliveryAddressResponseBody &&) = default ;
    DescribeDeliveryAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeliveryAddressResponseBody() = default ;
    DescribeDeliveryAddressResponseBody& operator=(const DescribeDeliveryAddressResponseBody &) = default ;
    DescribeDeliveryAddressResponseBody& operator=(DescribeDeliveryAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addresses& obj) { 
        DARABONBA_PTR_TO_JSON(Area, area_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(Contacts, contacts_);
        DARABONBA_PTR_TO_JSON(DefaultAddress, defaultAddress_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
        DARABONBA_PTR_TO_JSON(Province, province_);
        DARABONBA_PTR_TO_JSON(Town, town_);
      };
      friend void from_json(const Darabonba::Json& j, Addresses& obj) { 
        DARABONBA_PTR_FROM_JSON(Area, area_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
        DARABONBA_PTR_FROM_JSON(DefaultAddress, defaultAddress_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
        DARABONBA_PTR_FROM_JSON(Town, town_);
      };
      Addresses() = default ;
      Addresses(const Addresses &) = default ;
      Addresses(Addresses &&) = default ;
      Addresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addresses() = default ;
      Addresses& operator=(const Addresses &) = default ;
      Addresses& operator=(Addresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Town : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Town& obj) { 
          DARABONBA_PTR_TO_JSON(TownId, townId_);
          DARABONBA_PTR_TO_JSON(TownName, townName_);
        };
        friend void from_json(const Darabonba::Json& j, Town& obj) { 
          DARABONBA_PTR_FROM_JSON(TownId, townId_);
          DARABONBA_PTR_FROM_JSON(TownName, townName_);
        };
        Town() = default ;
        Town(const Town &) = default ;
        Town(Town &&) = default ;
        Town(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Town() = default ;
        Town& operator=(const Town &) = default ;
        Town& operator=(Town &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->townId_ == nullptr
        && this->townName_ == nullptr; };
        // townId Field Functions 
        bool hasTownId() const { return this->townId_ != nullptr;};
        void deleteTownId() { this->townId_ = nullptr;};
        inline int64_t getTownId() const { DARABONBA_PTR_GET_DEFAULT(townId_, 0L) };
        inline Town& setTownId(int64_t townId) { DARABONBA_PTR_SET_VALUE(townId_, townId) };


        // townName Field Functions 
        bool hasTownName() const { return this->townName_ != nullptr;};
        void deleteTownName() { this->townName_ = nullptr;};
        inline string getTownName() const { DARABONBA_PTR_GET_DEFAULT(townName_, "") };
        inline Town& setTownName(string townName) { DARABONBA_PTR_SET_VALUE(townName_, townName) };


      protected:
        shared_ptr<int64_t> townId_ {};
        shared_ptr<string> townName_ {};
      };

      class Province : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Province& obj) { 
          DARABONBA_PTR_TO_JSON(ProvinceId, provinceId_);
          DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
        };
        friend void from_json(const Darabonba::Json& j, Province& obj) { 
          DARABONBA_PTR_FROM_JSON(ProvinceId, provinceId_);
          DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
        };
        Province() = default ;
        Province(const Province &) = default ;
        Province(Province &&) = default ;
        Province(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Province() = default ;
        Province& operator=(const Province &) = default ;
        Province& operator=(Province &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->provinceId_ == nullptr
        && this->provinceName_ == nullptr; };
        // provinceId Field Functions 
        bool hasProvinceId() const { return this->provinceId_ != nullptr;};
        void deleteProvinceId() { this->provinceId_ = nullptr;};
        inline int64_t getProvinceId() const { DARABONBA_PTR_GET_DEFAULT(provinceId_, 0L) };
        inline Province& setProvinceId(int64_t provinceId) { DARABONBA_PTR_SET_VALUE(provinceId_, provinceId) };


        // provinceName Field Functions 
        bool hasProvinceName() const { return this->provinceName_ != nullptr;};
        void deleteProvinceName() { this->provinceName_ = nullptr;};
        inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
        inline Province& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


      protected:
        shared_ptr<int64_t> provinceId_ {};
        shared_ptr<string> provinceName_ {};
      };

      class City : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const City& obj) { 
          DARABONBA_PTR_TO_JSON(CityId, cityId_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
        };
        friend void from_json(const Darabonba::Json& j, City& obj) { 
          DARABONBA_PTR_FROM_JSON(CityId, cityId_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
        };
        City() = default ;
        City(const City &) = default ;
        City(City &&) = default ;
        City(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~City() = default ;
        City& operator=(const City &) = default ;
        City& operator=(City &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityId_ == nullptr
        && this->cityName_ == nullptr; };
        // cityId Field Functions 
        bool hasCityId() const { return this->cityId_ != nullptr;};
        void deleteCityId() { this->cityId_ = nullptr;};
        inline int64_t getCityId() const { DARABONBA_PTR_GET_DEFAULT(cityId_, 0L) };
        inline City& setCityId(int64_t cityId) { DARABONBA_PTR_SET_VALUE(cityId_, cityId) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline City& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


      protected:
        shared_ptr<int64_t> cityId_ {};
        shared_ptr<string> cityName_ {};
      };

      class Area : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Area& obj) { 
          DARABONBA_PTR_TO_JSON(AreaId, areaId_);
          DARABONBA_PTR_TO_JSON(AreaName, areaName_);
        };
        friend void from_json(const Darabonba::Json& j, Area& obj) { 
          DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
          DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
        };
        Area() = default ;
        Area(const Area &) = default ;
        Area(Area &&) = default ;
        Area(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Area() = default ;
        Area& operator=(const Area &) = default ;
        Area& operator=(Area &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->areaId_ == nullptr
        && this->areaName_ == nullptr; };
        // areaId Field Functions 
        bool hasAreaId() const { return this->areaId_ != nullptr;};
        void deleteAreaId() { this->areaId_ = nullptr;};
        inline int64_t getAreaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, 0L) };
        inline Area& setAreaId(int64_t areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


        // areaName Field Functions 
        bool hasAreaName() const { return this->areaName_ != nullptr;};
        void deleteAreaName() { this->areaName_ = nullptr;};
        inline string getAreaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
        inline Area& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


      protected:
        shared_ptr<int64_t> areaId_ {};
        shared_ptr<string> areaName_ {};
      };

      virtual bool empty() const override { return this->area_ == nullptr
        && this->city_ == nullptr && this->contacts_ == nullptr && this->defaultAddress_ == nullptr && this->detail_ == nullptr && this->mobile_ == nullptr
        && this->postalCode_ == nullptr && this->province_ == nullptr && this->town_ == nullptr; };
      // area Field Functions 
      bool hasArea() const { return this->area_ != nullptr;};
      void deleteArea() { this->area_ = nullptr;};
      inline const Addresses::Area & getArea() const { DARABONBA_PTR_GET_CONST(area_, Addresses::Area) };
      inline Addresses::Area getArea() { DARABONBA_PTR_GET(area_, Addresses::Area) };
      inline Addresses& setArea(const Addresses::Area & area) { DARABONBA_PTR_SET_VALUE(area_, area) };
      inline Addresses& setArea(Addresses::Area && area) { DARABONBA_PTR_SET_RVALUE(area_, area) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline const Addresses::City & getCity() const { DARABONBA_PTR_GET_CONST(city_, Addresses::City) };
      inline Addresses::City getCity() { DARABONBA_PTR_GET(city_, Addresses::City) };
      inline Addresses& setCity(const Addresses::City & city) { DARABONBA_PTR_SET_VALUE(city_, city) };
      inline Addresses& setCity(Addresses::City && city) { DARABONBA_PTR_SET_RVALUE(city_, city) };


      // contacts Field Functions 
      bool hasContacts() const { return this->contacts_ != nullptr;};
      void deleteContacts() { this->contacts_ = nullptr;};
      inline string getContacts() const { DARABONBA_PTR_GET_DEFAULT(contacts_, "") };
      inline Addresses& setContacts(string contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };


      // defaultAddress Field Functions 
      bool hasDefaultAddress() const { return this->defaultAddress_ != nullptr;};
      void deleteDefaultAddress() { this->defaultAddress_ = nullptr;};
      inline bool getDefaultAddress() const { DARABONBA_PTR_GET_DEFAULT(defaultAddress_, false) };
      inline Addresses& setDefaultAddress(bool defaultAddress) { DARABONBA_PTR_SET_VALUE(defaultAddress_, defaultAddress) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Addresses& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline Addresses& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // postalCode Field Functions 
      bool hasPostalCode() const { return this->postalCode_ != nullptr;};
      void deletePostalCode() { this->postalCode_ = nullptr;};
      inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
      inline Addresses& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline const Addresses::Province & getProvince() const { DARABONBA_PTR_GET_CONST(province_, Addresses::Province) };
      inline Addresses::Province getProvince() { DARABONBA_PTR_GET(province_, Addresses::Province) };
      inline Addresses& setProvince(const Addresses::Province & province) { DARABONBA_PTR_SET_VALUE(province_, province) };
      inline Addresses& setProvince(Addresses::Province && province) { DARABONBA_PTR_SET_RVALUE(province_, province) };


      // town Field Functions 
      bool hasTown() const { return this->town_ != nullptr;};
      void deleteTown() { this->town_ = nullptr;};
      inline const Addresses::Town & getTown() const { DARABONBA_PTR_GET_CONST(town_, Addresses::Town) };
      inline Addresses::Town getTown() { DARABONBA_PTR_GET(town_, Addresses::Town) };
      inline Addresses& setTown(const Addresses::Town & town) { DARABONBA_PTR_SET_VALUE(town_, town) };
      inline Addresses& setTown(Addresses::Town && town) { DARABONBA_PTR_SET_RVALUE(town_, town) };


    protected:
      shared_ptr<Addresses::Area> area_ {};
      shared_ptr<Addresses::City> city_ {};
      shared_ptr<string> contacts_ {};
      shared_ptr<bool> defaultAddress_ {};
      shared_ptr<string> detail_ {};
      shared_ptr<string> mobile_ {};
      shared_ptr<string> postalCode_ {};
      shared_ptr<Addresses::Province> province_ {};
      shared_ptr<Addresses::Town> town_ {};
    };

    virtual bool empty() const override { return this->addresses_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<DescribeDeliveryAddressResponseBody::Addresses> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<DescribeDeliveryAddressResponseBody::Addresses>) };
    inline vector<DescribeDeliveryAddressResponseBody::Addresses> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<DescribeDeliveryAddressResponseBody::Addresses>) };
    inline DescribeDeliveryAddressResponseBody& setAddresses(const vector<DescribeDeliveryAddressResponseBody::Addresses> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline DescribeDeliveryAddressResponseBody& setAddresses(vector<DescribeDeliveryAddressResponseBody::Addresses> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeliveryAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDeliveryAddressResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeDeliveryAddressResponseBody::Addresses>> addresses_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif

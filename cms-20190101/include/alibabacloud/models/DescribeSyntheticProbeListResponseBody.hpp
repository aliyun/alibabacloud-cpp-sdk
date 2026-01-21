// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNTHETICPROBELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNTHETICPROBELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSyntheticProbeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyntheticProbeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IspCityList, ispCityList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyntheticProbeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IspCityList, ispCityList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSyntheticProbeListResponseBody() = default ;
    DescribeSyntheticProbeListResponseBody(const DescribeSyntheticProbeListResponseBody &) = default ;
    DescribeSyntheticProbeListResponseBody(DescribeSyntheticProbeListResponseBody &&) = default ;
    DescribeSyntheticProbeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyntheticProbeListResponseBody() = default ;
    DescribeSyntheticProbeListResponseBody& operator=(const DescribeSyntheticProbeListResponseBody &) = default ;
    DescribeSyntheticProbeListResponseBody& operator=(DescribeSyntheticProbeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IspCityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IspCityList& obj) { 
        DARABONBA_PTR_TO_JSON(AreaCn, areaCn_);
        DARABONBA_PTR_TO_JSON(AreaEn, areaEn_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(CityCn, cityCn_);
        DARABONBA_PTR_TO_JSON(CityEn, cityEn_);
        DARABONBA_PTR_TO_JSON(Country, country_);
        DARABONBA_PTR_TO_JSON(CountryCn, countryCn_);
        DARABONBA_PTR_TO_JSON(CountryEn, countryEn_);
        DARABONBA_PTR_TO_JSON(IdcV4ProbeCount, idcV4ProbeCount_);
        DARABONBA_PTR_TO_JSON(IdcV6ProbeCount, idcV6ProbeCount_);
        DARABONBA_PTR_TO_JSON(IpPool, ipPool_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(IspCn, ispCn_);
        DARABONBA_PTR_TO_JSON(IspEn, ispEn_);
        DARABONBA_PTR_TO_JSON(LmProbeCount, lmProbeCount_);
        DARABONBA_PTR_TO_JSON(MbProbeCount, mbProbeCount_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(RegionCn, regionCn_);
        DARABONBA_PTR_TO_JSON(RegionEn, regionEn_);
      };
      friend void from_json(const Darabonba::Json& j, IspCityList& obj) { 
        DARABONBA_PTR_FROM_JSON(AreaCn, areaCn_);
        DARABONBA_PTR_FROM_JSON(AreaEn, areaEn_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(CityCn, cityCn_);
        DARABONBA_PTR_FROM_JSON(CityEn, cityEn_);
        DARABONBA_PTR_FROM_JSON(Country, country_);
        DARABONBA_PTR_FROM_JSON(CountryCn, countryCn_);
        DARABONBA_PTR_FROM_JSON(CountryEn, countryEn_);
        DARABONBA_PTR_FROM_JSON(IdcV4ProbeCount, idcV4ProbeCount_);
        DARABONBA_PTR_FROM_JSON(IdcV6ProbeCount, idcV6ProbeCount_);
        DARABONBA_PTR_FROM_JSON(IpPool, ipPool_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(IspCn, ispCn_);
        DARABONBA_PTR_FROM_JSON(IspEn, ispEn_);
        DARABONBA_PTR_FROM_JSON(LmProbeCount, lmProbeCount_);
        DARABONBA_PTR_FROM_JSON(MbProbeCount, mbProbeCount_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(RegionCn, regionCn_);
        DARABONBA_PTR_FROM_JSON(RegionEn, regionEn_);
      };
      IspCityList() = default ;
      IspCityList(const IspCityList &) = default ;
      IspCityList(IspCityList &&) = default ;
      IspCityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IspCityList() = default ;
      IspCityList& operator=(const IspCityList &) = default ;
      IspCityList& operator=(IspCityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->areaCn_ == nullptr
        && this->areaEn_ == nullptr && this->city_ == nullptr && this->cityCn_ == nullptr && this->cityEn_ == nullptr && this->country_ == nullptr
        && this->countryCn_ == nullptr && this->countryEn_ == nullptr && this->idcV4ProbeCount_ == nullptr && this->idcV6ProbeCount_ == nullptr && this->ipPool_ == nullptr
        && this->isp_ == nullptr && this->ispCn_ == nullptr && this->ispEn_ == nullptr && this->lmProbeCount_ == nullptr && this->mbProbeCount_ == nullptr
        && this->region_ == nullptr && this->regionCn_ == nullptr && this->regionEn_ == nullptr; };
      // areaCn Field Functions 
      bool hasAreaCn() const { return this->areaCn_ != nullptr;};
      void deleteAreaCn() { this->areaCn_ = nullptr;};
      inline string getAreaCn() const { DARABONBA_PTR_GET_DEFAULT(areaCn_, "") };
      inline IspCityList& setAreaCn(string areaCn) { DARABONBA_PTR_SET_VALUE(areaCn_, areaCn) };


      // areaEn Field Functions 
      bool hasAreaEn() const { return this->areaEn_ != nullptr;};
      void deleteAreaEn() { this->areaEn_ = nullptr;};
      inline string getAreaEn() const { DARABONBA_PTR_GET_DEFAULT(areaEn_, "") };
      inline IspCityList& setAreaEn(string areaEn) { DARABONBA_PTR_SET_VALUE(areaEn_, areaEn) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline IspCityList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // cityCn Field Functions 
      bool hasCityCn() const { return this->cityCn_ != nullptr;};
      void deleteCityCn() { this->cityCn_ = nullptr;};
      inline string getCityCn() const { DARABONBA_PTR_GET_DEFAULT(cityCn_, "") };
      inline IspCityList& setCityCn(string cityCn) { DARABONBA_PTR_SET_VALUE(cityCn_, cityCn) };


      // cityEn Field Functions 
      bool hasCityEn() const { return this->cityEn_ != nullptr;};
      void deleteCityEn() { this->cityEn_ = nullptr;};
      inline string getCityEn() const { DARABONBA_PTR_GET_DEFAULT(cityEn_, "") };
      inline IspCityList& setCityEn(string cityEn) { DARABONBA_PTR_SET_VALUE(cityEn_, cityEn) };


      // country Field Functions 
      bool hasCountry() const { return this->country_ != nullptr;};
      void deleteCountry() { this->country_ = nullptr;};
      inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
      inline IspCityList& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


      // countryCn Field Functions 
      bool hasCountryCn() const { return this->countryCn_ != nullptr;};
      void deleteCountryCn() { this->countryCn_ = nullptr;};
      inline string getCountryCn() const { DARABONBA_PTR_GET_DEFAULT(countryCn_, "") };
      inline IspCityList& setCountryCn(string countryCn) { DARABONBA_PTR_SET_VALUE(countryCn_, countryCn) };


      // countryEn Field Functions 
      bool hasCountryEn() const { return this->countryEn_ != nullptr;};
      void deleteCountryEn() { this->countryEn_ = nullptr;};
      inline string getCountryEn() const { DARABONBA_PTR_GET_DEFAULT(countryEn_, "") };
      inline IspCityList& setCountryEn(string countryEn) { DARABONBA_PTR_SET_VALUE(countryEn_, countryEn) };


      // idcV4ProbeCount Field Functions 
      bool hasIdcV4ProbeCount() const { return this->idcV4ProbeCount_ != nullptr;};
      void deleteIdcV4ProbeCount() { this->idcV4ProbeCount_ = nullptr;};
      inline int32_t getIdcV4ProbeCount() const { DARABONBA_PTR_GET_DEFAULT(idcV4ProbeCount_, 0) };
      inline IspCityList& setIdcV4ProbeCount(int32_t idcV4ProbeCount) { DARABONBA_PTR_SET_VALUE(idcV4ProbeCount_, idcV4ProbeCount) };


      // idcV6ProbeCount Field Functions 
      bool hasIdcV6ProbeCount() const { return this->idcV6ProbeCount_ != nullptr;};
      void deleteIdcV6ProbeCount() { this->idcV6ProbeCount_ = nullptr;};
      inline int32_t getIdcV6ProbeCount() const { DARABONBA_PTR_GET_DEFAULT(idcV6ProbeCount_, 0) };
      inline IspCityList& setIdcV6ProbeCount(int32_t idcV6ProbeCount) { DARABONBA_PTR_SET_VALUE(idcV6ProbeCount_, idcV6ProbeCount) };


      // ipPool Field Functions 
      bool hasIpPool() const { return this->ipPool_ != nullptr;};
      void deleteIpPool() { this->ipPool_ = nullptr;};
      inline const vector<string> & getIpPool() const { DARABONBA_PTR_GET_CONST(ipPool_, vector<string>) };
      inline vector<string> getIpPool() { DARABONBA_PTR_GET(ipPool_, vector<string>) };
      inline IspCityList& setIpPool(const vector<string> & ipPool) { DARABONBA_PTR_SET_VALUE(ipPool_, ipPool) };
      inline IspCityList& setIpPool(vector<string> && ipPool) { DARABONBA_PTR_SET_RVALUE(ipPool_, ipPool) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline IspCityList& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // ispCn Field Functions 
      bool hasIspCn() const { return this->ispCn_ != nullptr;};
      void deleteIspCn() { this->ispCn_ = nullptr;};
      inline string getIspCn() const { DARABONBA_PTR_GET_DEFAULT(ispCn_, "") };
      inline IspCityList& setIspCn(string ispCn) { DARABONBA_PTR_SET_VALUE(ispCn_, ispCn) };


      // ispEn Field Functions 
      bool hasIspEn() const { return this->ispEn_ != nullptr;};
      void deleteIspEn() { this->ispEn_ = nullptr;};
      inline string getIspEn() const { DARABONBA_PTR_GET_DEFAULT(ispEn_, "") };
      inline IspCityList& setIspEn(string ispEn) { DARABONBA_PTR_SET_VALUE(ispEn_, ispEn) };


      // lmProbeCount Field Functions 
      bool hasLmProbeCount() const { return this->lmProbeCount_ != nullptr;};
      void deleteLmProbeCount() { this->lmProbeCount_ = nullptr;};
      inline int32_t getLmProbeCount() const { DARABONBA_PTR_GET_DEFAULT(lmProbeCount_, 0) };
      inline IspCityList& setLmProbeCount(int32_t lmProbeCount) { DARABONBA_PTR_SET_VALUE(lmProbeCount_, lmProbeCount) };


      // mbProbeCount Field Functions 
      bool hasMbProbeCount() const { return this->mbProbeCount_ != nullptr;};
      void deleteMbProbeCount() { this->mbProbeCount_ = nullptr;};
      inline int32_t getMbProbeCount() const { DARABONBA_PTR_GET_DEFAULT(mbProbeCount_, 0) };
      inline IspCityList& setMbProbeCount(int32_t mbProbeCount) { DARABONBA_PTR_SET_VALUE(mbProbeCount_, mbProbeCount) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline IspCityList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // regionCn Field Functions 
      bool hasRegionCn() const { return this->regionCn_ != nullptr;};
      void deleteRegionCn() { this->regionCn_ = nullptr;};
      inline string getRegionCn() const { DARABONBA_PTR_GET_DEFAULT(regionCn_, "") };
      inline IspCityList& setRegionCn(string regionCn) { DARABONBA_PTR_SET_VALUE(regionCn_, regionCn) };


      // regionEn Field Functions 
      bool hasRegionEn() const { return this->regionEn_ != nullptr;};
      void deleteRegionEn() { this->regionEn_ = nullptr;};
      inline string getRegionEn() const { DARABONBA_PTR_GET_DEFAULT(regionEn_, "") };
      inline IspCityList& setRegionEn(string regionEn) { DARABONBA_PTR_SET_VALUE(regionEn_, regionEn) };


    protected:
      shared_ptr<string> areaCn_ {};
      shared_ptr<string> areaEn_ {};
      shared_ptr<string> city_ {};
      shared_ptr<string> cityCn_ {};
      shared_ptr<string> cityEn_ {};
      shared_ptr<string> country_ {};
      shared_ptr<string> countryCn_ {};
      shared_ptr<string> countryEn_ {};
      shared_ptr<int32_t> idcV4ProbeCount_ {};
      // The number of IPv6 nodes in data centers.
      shared_ptr<int32_t> idcV6ProbeCount_ {};
      // The IP addresses of the monitored nodes.
      shared_ptr<vector<string>> ipPool_ {};
      shared_ptr<string> isp_ {};
      shared_ptr<string> ispCn_ {};
      shared_ptr<string> ispEn_ {};
      shared_ptr<int32_t> lmProbeCount_ {};
      shared_ptr<int32_t> mbProbeCount_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> regionCn_ {};
      shared_ptr<string> regionEn_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ispCityList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSyntheticProbeListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ispCityList Field Functions 
    bool hasIspCityList() const { return this->ispCityList_ != nullptr;};
    void deleteIspCityList() { this->ispCityList_ = nullptr;};
    inline const vector<DescribeSyntheticProbeListResponseBody::IspCityList> & getIspCityList() const { DARABONBA_PTR_GET_CONST(ispCityList_, vector<DescribeSyntheticProbeListResponseBody::IspCityList>) };
    inline vector<DescribeSyntheticProbeListResponseBody::IspCityList> getIspCityList() { DARABONBA_PTR_GET(ispCityList_, vector<DescribeSyntheticProbeListResponseBody::IspCityList>) };
    inline DescribeSyntheticProbeListResponseBody& setIspCityList(const vector<DescribeSyntheticProbeListResponseBody::IspCityList> & ispCityList) { DARABONBA_PTR_SET_VALUE(ispCityList_, ispCityList) };
    inline DescribeSyntheticProbeListResponseBody& setIspCityList(vector<DescribeSyntheticProbeListResponseBody::IspCityList> && ispCityList) { DARABONBA_PTR_SET_RVALUE(ispCityList_, ispCityList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSyntheticProbeListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyntheticProbeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSyntheticProbeListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    // The queried detection points.
    shared_ptr<vector<DescribeSyntheticProbeListResponseBody::IspCityList>> ispCityList_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

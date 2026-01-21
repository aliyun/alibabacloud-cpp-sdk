// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTRESPONSEBODY_HPP_
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
  class DescribeSiteMonitorISPCityListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorISPCityListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IspCityList, ispCityList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorISPCityListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IspCityList, ispCityList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSiteMonitorISPCityListResponseBody() = default ;
    DescribeSiteMonitorISPCityListResponseBody(const DescribeSiteMonitorISPCityListResponseBody &) = default ;
    DescribeSiteMonitorISPCityListResponseBody(DescribeSiteMonitorISPCityListResponseBody &&) = default ;
    DescribeSiteMonitorISPCityListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorISPCityListResponseBody() = default ;
    DescribeSiteMonitorISPCityListResponseBody& operator=(const DescribeSiteMonitorISPCityListResponseBody &) = default ;
    DescribeSiteMonitorISPCityListResponseBody& operator=(DescribeSiteMonitorISPCityListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IspCityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IspCityList& obj) { 
        DARABONBA_PTR_TO_JSON(IspCity, ispCity_);
      };
      friend void from_json(const Darabonba::Json& j, IspCityList& obj) { 
        DARABONBA_PTR_FROM_JSON(IspCity, ispCity_);
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
      class IspCity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IspCity& obj) { 
          DARABONBA_PTR_TO_JSON(Area.en, area_en_);
          DARABONBA_PTR_TO_JSON(Area.zh_CN, area_zh_cN_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(CityName.en, cityName_en_);
          DARABONBA_PTR_TO_JSON(CityName.zh_CN, cityName_zh_cN_);
          DARABONBA_PTR_TO_JSON(Country, country_);
          DARABONBA_PTR_TO_JSON(Country.en, country_en_);
          DARABONBA_PTR_TO_JSON(Country.zh_CN, country_zh_cN_);
          DARABONBA_PTR_TO_JSON(IPPool, IPPool_);
          DARABONBA_PTR_TO_JSON(IPV4ProbeCount, IPV4ProbeCount_);
          DARABONBA_PTR_TO_JSON(IPV6ProbeCount, IPV6ProbeCount_);
          DARABONBA_PTR_TO_JSON(Isp, isp_);
          DARABONBA_PTR_TO_JSON(IspName.en, ispName_en_);
          DARABONBA_PTR_TO_JSON(IspName.zh_CN, ispName_zh_cN_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Region.en, region_en_);
          DARABONBA_PTR_TO_JSON(Region.zh_CN, region_zh_cN_);
        };
        friend void from_json(const Darabonba::Json& j, IspCity& obj) { 
          DARABONBA_PTR_FROM_JSON(Area.en, area_en_);
          DARABONBA_PTR_FROM_JSON(Area.zh_CN, area_zh_cN_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(CityName.en, cityName_en_);
          DARABONBA_PTR_FROM_JSON(CityName.zh_CN, cityName_zh_cN_);
          DARABONBA_PTR_FROM_JSON(Country, country_);
          DARABONBA_PTR_FROM_JSON(Country.en, country_en_);
          DARABONBA_PTR_FROM_JSON(Country.zh_CN, country_zh_cN_);
          DARABONBA_PTR_FROM_JSON(IPPool, IPPool_);
          DARABONBA_PTR_FROM_JSON(IPV4ProbeCount, IPV4ProbeCount_);
          DARABONBA_PTR_FROM_JSON(IPV6ProbeCount, IPV6ProbeCount_);
          DARABONBA_PTR_FROM_JSON(Isp, isp_);
          DARABONBA_PTR_FROM_JSON(IspName.en, ispName_en_);
          DARABONBA_PTR_FROM_JSON(IspName.zh_CN, ispName_zh_cN_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Region.en, region_en_);
          DARABONBA_PTR_FROM_JSON(Region.zh_CN, region_zh_cN_);
        };
        IspCity() = default ;
        IspCity(const IspCity &) = default ;
        IspCity(IspCity &&) = default ;
        IspCity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IspCity() = default ;
        IspCity& operator=(const IspCity &) = default ;
        IspCity& operator=(IspCity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IPPool : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IPPool& obj) { 
            DARABONBA_PTR_TO_JSON(IPPool, IPPool_);
          };
          friend void from_json(const Darabonba::Json& j, IPPool& obj) { 
            DARABONBA_PTR_FROM_JSON(IPPool, IPPool_);
          };
          IPPool() = default ;
          IPPool(const IPPool &) = default ;
          IPPool(IPPool &&) = default ;
          IPPool(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IPPool() = default ;
          IPPool& operator=(const IPPool &) = default ;
          IPPool& operator=(IPPool &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->IPPool_ == nullptr; };
          // IPPool Field Functions 
          bool hasIPPool() const { return this->IPPool_ != nullptr;};
          void deleteIPPool() { this->IPPool_ = nullptr;};
          inline const vector<string> & getIPPool() const { DARABONBA_PTR_GET_CONST(IPPool_, vector<string>) };
          inline vector<string> getIPPool() { DARABONBA_PTR_GET(IPPool_, vector<string>) };
          inline IPPool& setIPPool(const vector<string> & IPPool) { DARABONBA_PTR_SET_VALUE(IPPool_, IPPool) };
          inline IPPool& setIPPool(vector<string> && IPPool) { DARABONBA_PTR_SET_RVALUE(IPPool_, IPPool) };


        protected:
          shared_ptr<vector<string>> IPPool_ {};
        };

        virtual bool empty() const override { return this->area_en_ == nullptr
        && this->area_zh_cN_ == nullptr && this->city_ == nullptr && this->cityName_en_ == nullptr && this->cityName_zh_cN_ == nullptr && this->country_ == nullptr
        && this->country_en_ == nullptr && this->country_zh_cN_ == nullptr && this->IPPool_ == nullptr && this->IPV4ProbeCount_ == nullptr && this->IPV6ProbeCount_ == nullptr
        && this->isp_ == nullptr && this->ispName_en_ == nullptr && this->ispName_zh_cN_ == nullptr && this->region_ == nullptr && this->region_en_ == nullptr
        && this->region_zh_cN_ == nullptr; };
        // area_en Field Functions 
        bool hasArea_en() const { return this->area_en_ != nullptr;};
        void deleteArea_en() { this->area_en_ = nullptr;};
        inline string getArea_en() const { DARABONBA_PTR_GET_DEFAULT(area_en_, "") };
        inline IspCity& setArea_en(string area_en) { DARABONBA_PTR_SET_VALUE(area_en_, area_en) };


        // area_zh_cN Field Functions 
        bool hasArea_zh_cN() const { return this->area_zh_cN_ != nullptr;};
        void deleteArea_zh_cN() { this->area_zh_cN_ = nullptr;};
        inline string getArea_zh_cN() const { DARABONBA_PTR_GET_DEFAULT(area_zh_cN_, "") };
        inline IspCity& setArea_zh_cN(string area_zh_cN) { DARABONBA_PTR_SET_VALUE(area_zh_cN_, area_zh_cN) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline IspCity& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // cityName_en Field Functions 
        bool hasCityName_en() const { return this->cityName_en_ != nullptr;};
        void deleteCityName_en() { this->cityName_en_ = nullptr;};
        inline string getCityName_en() const { DARABONBA_PTR_GET_DEFAULT(cityName_en_, "") };
        inline IspCity& setCityName_en(string cityName_en) { DARABONBA_PTR_SET_VALUE(cityName_en_, cityName_en) };


        // cityName_zh_cN Field Functions 
        bool hasCityName_zh_cN() const { return this->cityName_zh_cN_ != nullptr;};
        void deleteCityName_zh_cN() { this->cityName_zh_cN_ = nullptr;};
        inline string getCityName_zh_cN() const { DARABONBA_PTR_GET_DEFAULT(cityName_zh_cN_, "") };
        inline IspCity& setCityName_zh_cN(string cityName_zh_cN) { DARABONBA_PTR_SET_VALUE(cityName_zh_cN_, cityName_zh_cN) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
        inline IspCity& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


        // country_en Field Functions 
        bool hasCountry_en() const { return this->country_en_ != nullptr;};
        void deleteCountry_en() { this->country_en_ = nullptr;};
        inline string getCountry_en() const { DARABONBA_PTR_GET_DEFAULT(country_en_, "") };
        inline IspCity& setCountry_en(string country_en) { DARABONBA_PTR_SET_VALUE(country_en_, country_en) };


        // country_zh_cN Field Functions 
        bool hasCountry_zh_cN() const { return this->country_zh_cN_ != nullptr;};
        void deleteCountry_zh_cN() { this->country_zh_cN_ = nullptr;};
        inline string getCountry_zh_cN() const { DARABONBA_PTR_GET_DEFAULT(country_zh_cN_, "") };
        inline IspCity& setCountry_zh_cN(string country_zh_cN) { DARABONBA_PTR_SET_VALUE(country_zh_cN_, country_zh_cN) };


        // IPPool Field Functions 
        bool hasIPPool() const { return this->IPPool_ != nullptr;};
        void deleteIPPool() { this->IPPool_ = nullptr;};
        inline const IspCity::IPPool & getIPPool() const { DARABONBA_PTR_GET_CONST(IPPool_, IspCity::IPPool) };
        inline IspCity::IPPool getIPPool() { DARABONBA_PTR_GET(IPPool_, IspCity::IPPool) };
        inline IspCity& setIPPool(const IspCity::IPPool & iPPool) { DARABONBA_PTR_SET_VALUE(IPPool_, iPPool) };
        inline IspCity& setIPPool(IspCity::IPPool && iPPool) { DARABONBA_PTR_SET_RVALUE(IPPool_, iPPool) };


        // IPV4ProbeCount Field Functions 
        bool hasIPV4ProbeCount() const { return this->IPV4ProbeCount_ != nullptr;};
        void deleteIPV4ProbeCount() { this->IPV4ProbeCount_ = nullptr;};
        inline string getIPV4ProbeCount() const { DARABONBA_PTR_GET_DEFAULT(IPV4ProbeCount_, "") };
        inline IspCity& setIPV4ProbeCount(string IPV4ProbeCount) { DARABONBA_PTR_SET_VALUE(IPV4ProbeCount_, IPV4ProbeCount) };


        // IPV6ProbeCount Field Functions 
        bool hasIPV6ProbeCount() const { return this->IPV6ProbeCount_ != nullptr;};
        void deleteIPV6ProbeCount() { this->IPV6ProbeCount_ = nullptr;};
        inline string getIPV6ProbeCount() const { DARABONBA_PTR_GET_DEFAULT(IPV6ProbeCount_, "") };
        inline IspCity& setIPV6ProbeCount(string IPV6ProbeCount) { DARABONBA_PTR_SET_VALUE(IPV6ProbeCount_, IPV6ProbeCount) };


        // isp Field Functions 
        bool hasIsp() const { return this->isp_ != nullptr;};
        void deleteIsp() { this->isp_ = nullptr;};
        inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
        inline IspCity& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


        // ispName_en Field Functions 
        bool hasIspName_en() const { return this->ispName_en_ != nullptr;};
        void deleteIspName_en() { this->ispName_en_ = nullptr;};
        inline string getIspName_en() const { DARABONBA_PTR_GET_DEFAULT(ispName_en_, "") };
        inline IspCity& setIspName_en(string ispName_en) { DARABONBA_PTR_SET_VALUE(ispName_en_, ispName_en) };


        // ispName_zh_cN Field Functions 
        bool hasIspName_zh_cN() const { return this->ispName_zh_cN_ != nullptr;};
        void deleteIspName_zh_cN() { this->ispName_zh_cN_ = nullptr;};
        inline string getIspName_zh_cN() const { DARABONBA_PTR_GET_DEFAULT(ispName_zh_cN_, "") };
        inline IspCity& setIspName_zh_cN(string ispName_zh_cN) { DARABONBA_PTR_SET_VALUE(ispName_zh_cN_, ispName_zh_cN) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline IspCity& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // region_en Field Functions 
        bool hasRegion_en() const { return this->region_en_ != nullptr;};
        void deleteRegion_en() { this->region_en_ = nullptr;};
        inline string getRegion_en() const { DARABONBA_PTR_GET_DEFAULT(region_en_, "") };
        inline IspCity& setRegion_en(string region_en) { DARABONBA_PTR_SET_VALUE(region_en_, region_en) };


        // region_zh_cN Field Functions 
        bool hasRegion_zh_cN() const { return this->region_zh_cN_ != nullptr;};
        void deleteRegion_zh_cN() { this->region_zh_cN_ = nullptr;};
        inline string getRegion_zh_cN() const { DARABONBA_PTR_GET_DEFAULT(region_zh_cN_, "") };
        inline IspCity& setRegion_zh_cN(string region_zh_cN) { DARABONBA_PTR_SET_VALUE(region_zh_cN_, region_zh_cN) };


      protected:
        shared_ptr<string> area_en_ {};
        shared_ptr<string> area_zh_cN_ {};
        // The city ID.
        shared_ptr<string> city_ {};
        shared_ptr<string> cityName_en_ {};
        shared_ptr<string> cityName_zh_cN_ {};
        // The country name.
        // 
        // > This parameter is valid only on the China site (aliyun.com).
        shared_ptr<string> country_ {};
        shared_ptr<string> country_en_ {};
        shared_ptr<string> country_zh_cN_ {};
        // The IP address pool.
        shared_ptr<IspCity::IPPool> IPPool_ {};
        // The number of IPv4 probes.
        shared_ptr<string> IPV4ProbeCount_ {};
        // The number of IPv6 probes.
        shared_ptr<string> IPV6ProbeCount_ {};
        // The carrier ID.
        shared_ptr<string> isp_ {};
        shared_ptr<string> ispName_en_ {};
        shared_ptr<string> ispName_zh_cN_ {};
        // The province name.
        shared_ptr<string> region_ {};
        shared_ptr<string> region_en_ {};
        shared_ptr<string> region_zh_cN_ {};
      };

      virtual bool empty() const override { return this->ispCity_ == nullptr; };
      // ispCity Field Functions 
      bool hasIspCity() const { return this->ispCity_ != nullptr;};
      void deleteIspCity() { this->ispCity_ = nullptr;};
      inline const vector<IspCityList::IspCity> & getIspCity() const { DARABONBA_PTR_GET_CONST(ispCity_, vector<IspCityList::IspCity>) };
      inline vector<IspCityList::IspCity> getIspCity() { DARABONBA_PTR_GET(ispCity_, vector<IspCityList::IspCity>) };
      inline IspCityList& setIspCity(const vector<IspCityList::IspCity> & ispCity) { DARABONBA_PTR_SET_VALUE(ispCity_, ispCity) };
      inline IspCityList& setIspCity(vector<IspCityList::IspCity> && ispCity) { DARABONBA_PTR_SET_RVALUE(ispCity_, ispCity) };


    protected:
      shared_ptr<vector<IspCityList::IspCity>> ispCity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ispCityList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSiteMonitorISPCityListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ispCityList Field Functions 
    bool hasIspCityList() const { return this->ispCityList_ != nullptr;};
    void deleteIspCityList() { this->ispCityList_ = nullptr;};
    inline const DescribeSiteMonitorISPCityListResponseBody::IspCityList & getIspCityList() const { DARABONBA_PTR_GET_CONST(ispCityList_, DescribeSiteMonitorISPCityListResponseBody::IspCityList) };
    inline DescribeSiteMonitorISPCityListResponseBody::IspCityList getIspCityList() { DARABONBA_PTR_GET(ispCityList_, DescribeSiteMonitorISPCityListResponseBody::IspCityList) };
    inline DescribeSiteMonitorISPCityListResponseBody& setIspCityList(const DescribeSiteMonitorISPCityListResponseBody::IspCityList & ispCityList) { DARABONBA_PTR_SET_VALUE(ispCityList_, ispCityList) };
    inline DescribeSiteMonitorISPCityListResponseBody& setIspCityList(DescribeSiteMonitorISPCityListResponseBody::IspCityList && ispCityList) { DARABONBA_PTR_SET_RVALUE(ispCityList_, ispCityList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSiteMonitorISPCityListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteMonitorISPCityListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSiteMonitorISPCityListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The queried detection points.
    shared_ptr<DescribeSiteMonitorISPCityListResponseBody::IspCityList> ispCityList_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

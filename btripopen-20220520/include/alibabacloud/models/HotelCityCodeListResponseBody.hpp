// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELCITYCODELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELCITYCODELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelCityCodeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelCityCodeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelCityCodeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelCityCodeListResponseBody() = default ;
    HotelCityCodeListResponseBody(const HotelCityCodeListResponseBody &) = default ;
    HotelCityCodeListResponseBody(HotelCityCodeListResponseBody &&) = default ;
    HotelCityCodeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelCityCodeListResponseBody() = default ;
    HotelCityCodeListResponseBody& operator=(const HotelCityCodeListResponseBody &) = default ;
    HotelCityCodeListResponseBody& operator=(HotelCityCodeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(citys, citys_);
        DARABONBA_PTR_TO_JSON(provice_code, proviceCode_);
        DARABONBA_PTR_TO_JSON(province_name, provinceName_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(citys, citys_);
        DARABONBA_PTR_FROM_JSON(provice_code, proviceCode_);
        DARABONBA_PTR_FROM_JSON(province_name, provinceName_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Citys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Citys& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(districts, districts_);
        };
        friend void from_json(const Darabonba::Json& j, Citys& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(districts, districts_);
        };
        Citys() = default ;
        Citys(const Citys &) = default ;
        Citys(Citys &&) = default ;
        Citys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Citys() = default ;
        Citys& operator=(const Citys &) = default ;
        Citys& operator=(Citys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Districts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Districts& obj) { 
            DARABONBA_PTR_TO_JSON(district_code, districtCode_);
            DARABONBA_PTR_TO_JSON(district_name, districtName_);
          };
          friend void from_json(const Darabonba::Json& j, Districts& obj) { 
            DARABONBA_PTR_FROM_JSON(district_code, districtCode_);
            DARABONBA_PTR_FROM_JSON(district_name, districtName_);
          };
          Districts() = default ;
          Districts(const Districts &) = default ;
          Districts(Districts &&) = default ;
          Districts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Districts() = default ;
          Districts& operator=(const Districts &) = default ;
          Districts& operator=(Districts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->districtCode_ == nullptr
        && this->districtName_ == nullptr; };
          // districtCode Field Functions 
          bool hasDistrictCode() const { return this->districtCode_ != nullptr;};
          void deleteDistrictCode() { this->districtCode_ = nullptr;};
          inline string getDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(districtCode_, "") };
          inline Districts& setDistrictCode(string districtCode) { DARABONBA_PTR_SET_VALUE(districtCode_, districtCode) };


          // districtName Field Functions 
          bool hasDistrictName() const { return this->districtName_ != nullptr;};
          void deleteDistrictName() { this->districtName_ = nullptr;};
          inline string getDistrictName() const { DARABONBA_PTR_GET_DEFAULT(districtName_, "") };
          inline Districts& setDistrictName(string districtName) { DARABONBA_PTR_SET_VALUE(districtName_, districtName) };


        protected:
          shared_ptr<string> districtCode_ {};
          shared_ptr<string> districtName_ {};
        };

        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->districts_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline Citys& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline Citys& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // districts Field Functions 
        bool hasDistricts() const { return this->districts_ != nullptr;};
        void deleteDistricts() { this->districts_ = nullptr;};
        inline const vector<Citys::Districts> & getDistricts() const { DARABONBA_PTR_GET_CONST(districts_, vector<Citys::Districts>) };
        inline vector<Citys::Districts> getDistricts() { DARABONBA_PTR_GET(districts_, vector<Citys::Districts>) };
        inline Citys& setDistricts(const vector<Citys::Districts> & districts) { DARABONBA_PTR_SET_VALUE(districts_, districts) };
        inline Citys& setDistricts(vector<Citys::Districts> && districts) { DARABONBA_PTR_SET_RVALUE(districts_, districts) };


      protected:
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<vector<Citys::Districts>> districts_ {};
      };

      virtual bool empty() const override { return this->citys_ == nullptr
        && this->proviceCode_ == nullptr && this->provinceName_ == nullptr; };
      // citys Field Functions 
      bool hasCitys() const { return this->citys_ != nullptr;};
      void deleteCitys() { this->citys_ = nullptr;};
      inline const vector<Module::Citys> & getCitys() const { DARABONBA_PTR_GET_CONST(citys_, vector<Module::Citys>) };
      inline vector<Module::Citys> getCitys() { DARABONBA_PTR_GET(citys_, vector<Module::Citys>) };
      inline Module& setCitys(const vector<Module::Citys> & citys) { DARABONBA_PTR_SET_VALUE(citys_, citys) };
      inline Module& setCitys(vector<Module::Citys> && citys) { DARABONBA_PTR_SET_RVALUE(citys_, citys) };


      // proviceCode Field Functions 
      bool hasProviceCode() const { return this->proviceCode_ != nullptr;};
      void deleteProviceCode() { this->proviceCode_ = nullptr;};
      inline string getProviceCode() const { DARABONBA_PTR_GET_DEFAULT(proviceCode_, "") };
      inline Module& setProviceCode(string proviceCode) { DARABONBA_PTR_SET_VALUE(proviceCode_, proviceCode) };


      // provinceName Field Functions 
      bool hasProvinceName() const { return this->provinceName_ != nullptr;};
      void deleteProvinceName() { this->provinceName_ = nullptr;};
      inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
      inline Module& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


    protected:
      shared_ptr<vector<Module::Citys>> citys_ {};
      shared_ptr<string> proviceCode_ {};
      shared_ptr<string> provinceName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelCityCodeListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelCityCodeListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<HotelCityCodeListResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<HotelCityCodeListResponseBody::Module>) };
    inline vector<HotelCityCodeListResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<HotelCityCodeListResponseBody::Module>) };
    inline HotelCityCodeListResponseBody& setModule(const vector<HotelCityCodeListResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelCityCodeListResponseBody& setModule(vector<HotelCityCodeListResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelCityCodeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelCityCodeListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelCityCodeListResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<HotelCityCodeListResponseBody::Module>> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

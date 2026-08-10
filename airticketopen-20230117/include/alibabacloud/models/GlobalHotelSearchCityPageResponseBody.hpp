// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELSEARCHCITYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELSEARCHCITYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelSearchCityPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelSearchCityPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelSearchCityPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelSearchCityPageResponseBody() = default ;
    GlobalHotelSearchCityPageResponseBody(const GlobalHotelSearchCityPageResponseBody &) = default ;
    GlobalHotelSearchCityPageResponseBody(GlobalHotelSearchCityPageResponseBody &&) = default ;
    GlobalHotelSearchCityPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelSearchCityPageResponseBody() = default ;
    GlobalHotelSearchCityPageResponseBody& operator=(const GlobalHotelSearchCityPageResponseBody &) = default ;
    GlobalHotelSearchCityPageResponseBody& operator=(GlobalHotelSearchCityPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Cities, cities_);
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Cities, cities_);
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Cities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cities& obj) { 
          DARABONBA_PTR_TO_JSON(CnName, cnName_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Country, country_);
          DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_TO_JSON(EnName, enName_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(ParentCode, parentCode_);
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, Cities& obj) { 
          DARABONBA_PTR_FROM_JSON(CnName, cnName_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Country, country_);
          DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_FROM_JSON(EnName, enName_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(ParentCode, parentCode_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        Cities() = default ;
        Cities(const Cities &) = default ;
        Cities(Cities &&) = default ;
        Cities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cities() = default ;
        Cities& operator=(const Cities &) = default ;
        Cities& operator=(Cities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnName_ == nullptr
        && this->code_ == nullptr && this->country_ == nullptr && this->countryCode_ == nullptr && this->enName_ == nullptr && this->level_ == nullptr
        && this->parentCode_ == nullptr && this->region_ == nullptr; };
        // cnName Field Functions 
        bool hasCnName() const { return this->cnName_ != nullptr;};
        void deleteCnName() { this->cnName_ = nullptr;};
        inline string getCnName() const { DARABONBA_PTR_GET_DEFAULT(cnName_, "") };
        inline Cities& setCnName(string cnName) { DARABONBA_PTR_SET_VALUE(cnName_, cnName) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline Cities& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline int32_t getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, 0) };
        inline Cities& setCountry(int32_t country) { DARABONBA_PTR_SET_VALUE(country_, country) };


        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline Cities& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // enName Field Functions 
        bool hasEnName() const { return this->enName_ != nullptr;};
        void deleteEnName() { this->enName_ = nullptr;};
        inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
        inline Cities& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
        inline Cities& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // parentCode Field Functions 
        bool hasParentCode() const { return this->parentCode_ != nullptr;};
        void deleteParentCode() { this->parentCode_ = nullptr;};
        inline int32_t getParentCode() const { DARABONBA_PTR_GET_DEFAULT(parentCode_, 0) };
        inline Cities& setParentCode(int32_t parentCode) { DARABONBA_PTR_SET_VALUE(parentCode_, parentCode) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline int32_t getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
        inline Cities& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        // The Chinese name of the city.
        shared_ptr<string> cnName_ {};
        // The city code.
        shared_ptr<int32_t> code_ {};
        // The country code.
        shared_ptr<int32_t> country_ {};
        // The country code in ISO 3166-1 alpha-2 format.
        shared_ptr<string> countryCode_ {};
        // The English name of the city.
        shared_ptr<string> enName_ {};
        // The administrative level.
        shared_ptr<int32_t> level_ {};
        // The parent city code.
        shared_ptr<int32_t> parentCode_ {};
        // The region.
        shared_ptr<int32_t> region_ {};
      };

      virtual bool empty() const override { return this->cities_ == nullptr
        && this->hasNext_ == nullptr && this->total_ == nullptr; };
      // cities Field Functions 
      bool hasCities() const { return this->cities_ != nullptr;};
      void deleteCities() { this->cities_ = nullptr;};
      inline const vector<Data::Cities> & getCities() const { DARABONBA_PTR_GET_CONST(cities_, vector<Data::Cities>) };
      inline vector<Data::Cities> getCities() { DARABONBA_PTR_GET(cities_, vector<Data::Cities>) };
      inline Data& setCities(const vector<Data::Cities> & cities) { DARABONBA_PTR_SET_VALUE(cities_, cities) };
      inline Data& setCities(vector<Data::Cities> && cities) { DARABONBA_PTR_SET_RVALUE(cities_, cities) };


      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline Data& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of cities.
      shared_ptr<vector<Data::Cities>> cities_ {};
      // Indicates whether there is a next page.
      shared_ptr<bool> hasNext_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tracerId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GlobalHotelSearchCityPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GlobalHotelSearchCityPageResponseBody::Data) };
    inline GlobalHotelSearchCityPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GlobalHotelSearchCityPageResponseBody::Data) };
    inline GlobalHotelSearchCityPageResponseBody& setData(const GlobalHotelSearchCityPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GlobalHotelSearchCityPageResponseBody& setData(GlobalHotelSearchCityPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GlobalHotelSearchCityPageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GlobalHotelSearchCityPageResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GlobalHotelSearchCityPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GlobalHotelSearchCityPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelSearchCityPageResponseBody& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The business data.
    shared_ptr<GlobalHotelSearchCityPageResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // TraceId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

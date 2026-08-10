// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELSEARCHHOTELLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELSEARCHHOTELLISTRESPONSEBODY_HPP_
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
  class GlobalHotelSearchHotelListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelSearchHotelListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelSearchHotelListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelSearchHotelListResponseBody() = default ;
    GlobalHotelSearchHotelListResponseBody(const GlobalHotelSearchHotelListResponseBody &) = default ;
    GlobalHotelSearchHotelListResponseBody(GlobalHotelSearchHotelListResponseBody &&) = default ;
    GlobalHotelSearchHotelListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelSearchHotelListResponseBody() = default ;
    GlobalHotelSearchHotelListResponseBody& operator=(const GlobalHotelSearchHotelListResponseBody &) = default ;
    GlobalHotelSearchHotelListResponseBody& operator=(GlobalHotelSearchHotelListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Hotels, hotels_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Hotels, hotels_);
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
      class Hotels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Hotels& obj) { 
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(CountryName, countryName_);
          DARABONBA_PTR_TO_JSON(HotelName, hotelName_);
          DARABONBA_PTR_TO_JSON(StandardHotelId, standardHotelId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Hotels& obj) { 
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
          DARABONBA_PTR_FROM_JSON(HotelName, hotelName_);
          DARABONBA_PTR_FROM_JSON(StandardHotelId, standardHotelId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Hotels() = default ;
        Hotels(const Hotels &) = default ;
        Hotels(Hotels &&) = default ;
        Hotels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Hotels() = default ;
        Hotels& operator=(const Hotels &) = default ;
        Hotels& operator=(Hotels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityName_ == nullptr
        && this->countryName_ == nullptr && this->hotelName_ == nullptr && this->standardHotelId_ == nullptr && this->status_ == nullptr; };
        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline Hotels& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // countryName Field Functions 
        bool hasCountryName() const { return this->countryName_ != nullptr;};
        void deleteCountryName() { this->countryName_ = nullptr;};
        inline string getCountryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
        inline Hotels& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline Hotels& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // standardHotelId Field Functions 
        bool hasStandardHotelId() const { return this->standardHotelId_ != nullptr;};
        void deleteStandardHotelId() { this->standardHotelId_ = nullptr;};
        inline string getStandardHotelId() const { DARABONBA_PTR_GET_DEFAULT(standardHotelId_, "") };
        inline Hotels& setStandardHotelId(string standardHotelId) { DARABONBA_PTR_SET_VALUE(standardHotelId_, standardHotelId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Hotels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The city name.
        shared_ptr<string> cityName_ {};
        // The country name.
        shared_ptr<string> countryName_ {};
        // The hotel name.
        shared_ptr<string> hotelName_ {};
        // The platform standard hotel ID.
        shared_ptr<string> standardHotelId_ {};
        // The hotel status (ONLINE/OFFLINE).
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->hotels_ == nullptr
        && this->total_ == nullptr; };
      // hotels Field Functions 
      bool hasHotels() const { return this->hotels_ != nullptr;};
      void deleteHotels() { this->hotels_ = nullptr;};
      inline const vector<Data::Hotels> & getHotels() const { DARABONBA_PTR_GET_CONST(hotels_, vector<Data::Hotels>) };
      inline vector<Data::Hotels> getHotels() { DARABONBA_PTR_GET(hotels_, vector<Data::Hotels>) };
      inline Data& setHotels(const vector<Data::Hotels> & hotels) { DARABONBA_PTR_SET_VALUE(hotels_, hotels) };
      inline Data& setHotels(vector<Data::Hotels> && hotels) { DARABONBA_PTR_SET_RVALUE(hotels_, hotels) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of hotels.
      shared_ptr<vector<Data::Hotels>> hotels_ {};
      // The total number of hotels.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tracerId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GlobalHotelSearchHotelListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GlobalHotelSearchHotelListResponseBody::Data) };
    inline GlobalHotelSearchHotelListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GlobalHotelSearchHotelListResponseBody::Data) };
    inline GlobalHotelSearchHotelListResponseBody& setData(const GlobalHotelSearchHotelListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GlobalHotelSearchHotelListResponseBody& setData(GlobalHotelSearchHotelListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GlobalHotelSearchHotelListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GlobalHotelSearchHotelListResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GlobalHotelSearchHotelListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GlobalHotelSearchHotelListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelSearchHotelListResponseBody& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The business data.
    shared_ptr<GlobalHotelSearchHotelListResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

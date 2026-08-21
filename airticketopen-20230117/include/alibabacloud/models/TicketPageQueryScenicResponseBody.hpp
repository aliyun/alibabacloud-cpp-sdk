// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETPAGEQUERYSCENICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETPAGEQUERYSCENICRESPONSEBODY_HPP_
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
  class TicketPageQueryScenicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketPageQueryScenicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TicketPageQueryScenicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TicketPageQueryScenicResponseBody() = default ;
    TicketPageQueryScenicResponseBody(const TicketPageQueryScenicResponseBody &) = default ;
    TicketPageQueryScenicResponseBody(TicketPageQueryScenicResponseBody &&) = default ;
    TicketPageQueryScenicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketPageQueryScenicResponseBody() = default ;
    TicketPageQueryScenicResponseBody& operator=(const TicketPageQueryScenicResponseBody &) = default ;
    TicketPageQueryScenicResponseBody& operator=(TicketPageQueryScenicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Scenics, scenics_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Scenics, scenics_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Scenics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scenics& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(Country, country_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Images, images_);
          DARABONBA_PTR_TO_JSON(Latitude, latitude_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Longitude, longitude_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OpeningTime, openingTime_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
          DARABONBA_PTR_TO_JSON(PreferentialPolicy, preferentialPolicy_);
          DARABONBA_PTR_TO_JSON(Province, province_);
          DARABONBA_PTR_TO_JSON(ResidenceTime, residenceTime_);
          DARABONBA_PTR_TO_JSON(ScenicId, scenicId_);
          DARABONBA_PTR_TO_JSON(Timezone, timezone_);
        };
        friend void from_json(const Darabonba::Json& j, Scenics& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(Country, country_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Images, images_);
          DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OpeningTime, openingTime_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
          DARABONBA_PTR_FROM_JSON(PreferentialPolicy, preferentialPolicy_);
          DARABONBA_PTR_FROM_JSON(Province, province_);
          DARABONBA_PTR_FROM_JSON(ResidenceTime, residenceTime_);
          DARABONBA_PTR_FROM_JSON(ScenicId, scenicId_);
          DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
        };
        Scenics() = default ;
        Scenics(const Scenics &) = default ;
        Scenics(Scenics &&) = default ;
        Scenics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scenics() = default ;
        Scenics& operator=(const Scenics &) = default ;
        Scenics& operator=(Scenics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->city_ == nullptr && this->country_ == nullptr && this->description_ == nullptr && this->images_ == nullptr && this->latitude_ == nullptr
        && this->level_ == nullptr && this->longitude_ == nullptr && this->name_ == nullptr && this->openingTime_ == nullptr && this->phone_ == nullptr
        && this->preferentialPolicy_ == nullptr && this->province_ == nullptr && this->residenceTime_ == nullptr && this->scenicId_ == nullptr && this->timezone_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline Scenics& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline Scenics& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
        inline Scenics& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Scenics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // images Field Functions 
        bool hasImages() const { return this->images_ != nullptr;};
        void deleteImages() { this->images_ = nullptr;};
        inline const vector<string> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
        inline vector<string> getImages() { DARABONBA_PTR_GET(images_, vector<string>) };
        inline Scenics& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
        inline Scenics& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


        // latitude Field Functions 
        bool hasLatitude() const { return this->latitude_ != nullptr;};
        void deleteLatitude() { this->latitude_ = nullptr;};
        inline double getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, 0.0) };
        inline Scenics& setLatitude(double latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Scenics& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // longitude Field Functions 
        bool hasLongitude() const { return this->longitude_ != nullptr;};
        void deleteLongitude() { this->longitude_ = nullptr;};
        inline double getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, 0.0) };
        inline Scenics& setLongitude(double longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Scenics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // openingTime Field Functions 
        bool hasOpeningTime() const { return this->openingTime_ != nullptr;};
        void deleteOpeningTime() { this->openingTime_ = nullptr;};
        inline string getOpeningTime() const { DARABONBA_PTR_GET_DEFAULT(openingTime_, "") };
        inline Scenics& setOpeningTime(string openingTime) { DARABONBA_PTR_SET_VALUE(openingTime_, openingTime) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline Scenics& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // preferentialPolicy Field Functions 
        bool hasPreferentialPolicy() const { return this->preferentialPolicy_ != nullptr;};
        void deletePreferentialPolicy() { this->preferentialPolicy_ = nullptr;};
        inline string getPreferentialPolicy() const { DARABONBA_PTR_GET_DEFAULT(preferentialPolicy_, "") };
        inline Scenics& setPreferentialPolicy(string preferentialPolicy) { DARABONBA_PTR_SET_VALUE(preferentialPolicy_, preferentialPolicy) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
        inline Scenics& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


        // residenceTime Field Functions 
        bool hasResidenceTime() const { return this->residenceTime_ != nullptr;};
        void deleteResidenceTime() { this->residenceTime_ = nullptr;};
        inline string getResidenceTime() const { DARABONBA_PTR_GET_DEFAULT(residenceTime_, "") };
        inline Scenics& setResidenceTime(string residenceTime) { DARABONBA_PTR_SET_VALUE(residenceTime_, residenceTime) };


        // scenicId Field Functions 
        bool hasScenicId() const { return this->scenicId_ != nullptr;};
        void deleteScenicId() { this->scenicId_ = nullptr;};
        inline int64_t getScenicId() const { DARABONBA_PTR_GET_DEFAULT(scenicId_, 0L) };
        inline Scenics& setScenicId(int64_t scenicId) { DARABONBA_PTR_SET_VALUE(scenicId_, scenicId) };


        // timezone Field Functions 
        bool hasTimezone() const { return this->timezone_ != nullptr;};
        void deleteTimezone() { this->timezone_ = nullptr;};
        inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
        inline Scenics& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<string> city_ {};
        shared_ptr<string> country_ {};
        shared_ptr<string> description_ {};
        shared_ptr<vector<string>> images_ {};
        shared_ptr<double> latitude_ {};
        shared_ptr<string> level_ {};
        shared_ptr<double> longitude_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> openingTime_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<string> preferentialPolicy_ {};
        shared_ptr<string> province_ {};
        shared_ptr<string> residenceTime_ {};
        shared_ptr<int64_t> scenicId_ {};
        shared_ptr<string> timezone_ {};
      };

      virtual bool empty() const override { return this->scenics_ == nullptr
        && this->totalSize_ == nullptr; };
      // scenics Field Functions 
      bool hasScenics() const { return this->scenics_ != nullptr;};
      void deleteScenics() { this->scenics_ = nullptr;};
      inline const vector<Data::Scenics> & getScenics() const { DARABONBA_PTR_GET_CONST(scenics_, vector<Data::Scenics>) };
      inline vector<Data::Scenics> getScenics() { DARABONBA_PTR_GET(scenics_, vector<Data::Scenics>) };
      inline Data& setScenics(const vector<Data::Scenics> & scenics) { DARABONBA_PTR_SET_VALUE(scenics_, scenics) };
      inline Data& setScenics(vector<Data::Scenics> && scenics) { DARABONBA_PTR_SET_RVALUE(scenics_, scenics) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<vector<Data::Scenics>> scenics_ {};
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TicketPageQueryScenicResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TicketPageQueryScenicResponseBody::Data) };
    inline TicketPageQueryScenicResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TicketPageQueryScenicResponseBody::Data) };
    inline TicketPageQueryScenicResponseBody& setData(const TicketPageQueryScenicResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TicketPageQueryScenicResponseBody& setData(TicketPageQueryScenicResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline TicketPageQueryScenicResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline TicketPageQueryScenicResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketPageQueryScenicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketPageQueryScenicResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<TicketPageQueryScenicResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

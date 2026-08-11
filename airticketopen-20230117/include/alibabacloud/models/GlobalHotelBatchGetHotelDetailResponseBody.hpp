// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELBATCHGETHOTELDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELBATCHGETHOTELDETAILRESPONSEBODY_HPP_
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
  class GlobalHotelBatchGetHotelDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelBatchGetHotelDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelBatchGetHotelDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelBatchGetHotelDetailResponseBody() = default ;
    GlobalHotelBatchGetHotelDetailResponseBody(const GlobalHotelBatchGetHotelDetailResponseBody &) = default ;
    GlobalHotelBatchGetHotelDetailResponseBody(GlobalHotelBatchGetHotelDetailResponseBody &&) = default ;
    GlobalHotelBatchGetHotelDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelBatchGetHotelDetailResponseBody() = default ;
    GlobalHotelBatchGetHotelDetailResponseBody& operator=(const GlobalHotelBatchGetHotelDetailResponseBody &) = default ;
    GlobalHotelBatchGetHotelDetailResponseBody& operator=(GlobalHotelBatchGetHotelDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Hotels, hotels_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Hotels, hotels_);
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
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(CheckInTime, checkInTime_);
          DARABONBA_PTR_TO_JSON(CheckOutTime, checkOutTime_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(CountryName, countryName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Facilities, facilities_);
          DARABONBA_PTR_TO_JSON(HotelName, hotelName_);
          DARABONBA_PTR_TO_JSON(HotelNameCn, hotelNameCn_);
          DARABONBA_PTR_TO_JSON(HotelType, hotelType_);
          DARABONBA_PTR_TO_JSON(Latitude, latitude_);
          DARABONBA_PTR_TO_JSON(Longitude, longitude_);
          DARABONBA_PTR_TO_JSON(OpeningTime, openingTime_);
          DARABONBA_PTR_TO_JSON(Pictures, pictures_);
          DARABONBA_PTR_TO_JSON(Policies, policies_);
          DARABONBA_PTR_TO_JSON(PositionType, positionType_);
          DARABONBA_PTR_TO_JSON(RenovationTime, renovationTime_);
          DARABONBA_PTR_TO_JSON(RoomTypes, roomTypes_);
          DARABONBA_PTR_TO_JSON(StandardHotelId, standardHotelId_);
          DARABONBA_PTR_TO_JSON(Star, star_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tel, tel_);
          DARABONBA_PTR_TO_JSON(Timezone, timezone_);
        };
        friend void from_json(const Darabonba::Json& j, Hotels& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(CheckInTime, checkInTime_);
          DARABONBA_PTR_FROM_JSON(CheckOutTime, checkOutTime_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Facilities, facilities_);
          DARABONBA_PTR_FROM_JSON(HotelName, hotelName_);
          DARABONBA_PTR_FROM_JSON(HotelNameCn, hotelNameCn_);
          DARABONBA_PTR_FROM_JSON(HotelType, hotelType_);
          DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
          DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
          DARABONBA_PTR_FROM_JSON(OpeningTime, openingTime_);
          DARABONBA_PTR_FROM_JSON(Pictures, pictures_);
          DARABONBA_PTR_FROM_JSON(Policies, policies_);
          DARABONBA_PTR_FROM_JSON(PositionType, positionType_);
          DARABONBA_PTR_FROM_JSON(RenovationTime, renovationTime_);
          DARABONBA_PTR_FROM_JSON(RoomTypes, roomTypes_);
          DARABONBA_PTR_FROM_JSON(StandardHotelId, standardHotelId_);
          DARABONBA_PTR_FROM_JSON(Star, star_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tel, tel_);
          DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
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
        class RoomTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoomTypes& obj) { 
            DARABONBA_PTR_TO_JSON(BedType, bedType_);
            DARABONBA_PTR_TO_JSON(Pictures, pictures_);
            DARABONBA_PTR_TO_JSON(RoomName, roomName_);
            DARABONBA_PTR_TO_JSON(RoomNameCn, roomNameCn_);
            DARABONBA_PTR_TO_JSON(RoomSize, roomSize_);
            DARABONBA_PTR_TO_JSON(RoomSizeUnit, roomSizeUnit_);
            DARABONBA_PTR_TO_JSON(StandardRoomId, standardRoomId_);
            DARABONBA_PTR_TO_JSON(WindowType, windowType_);
            DARABONBA_PTR_TO_JSON(WindowTypeDefect, windowTypeDefect_);
          };
          friend void from_json(const Darabonba::Json& j, RoomTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(BedType, bedType_);
            DARABONBA_PTR_FROM_JSON(Pictures, pictures_);
            DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
            DARABONBA_PTR_FROM_JSON(RoomNameCn, roomNameCn_);
            DARABONBA_PTR_FROM_JSON(RoomSize, roomSize_);
            DARABONBA_PTR_FROM_JSON(RoomSizeUnit, roomSizeUnit_);
            DARABONBA_PTR_FROM_JSON(StandardRoomId, standardRoomId_);
            DARABONBA_PTR_FROM_JSON(WindowType, windowType_);
            DARABONBA_PTR_FROM_JSON(WindowTypeDefect, windowTypeDefect_);
          };
          RoomTypes() = default ;
          RoomTypes(const RoomTypes &) = default ;
          RoomTypes(RoomTypes &&) = default ;
          RoomTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoomTypes() = default ;
          RoomTypes& operator=(const RoomTypes &) = default ;
          RoomTypes& operator=(RoomTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Pictures : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Pictures& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(FirstCategoryCode, firstCategoryCode_);
              DARABONBA_PTR_TO_JSON(FirstCategoryName, firstCategoryName_);
              DARABONBA_PTR_TO_JSON(IsHeadPic, isHeadPic_);
              DARABONBA_PTR_TO_JSON(PictureId, pictureId_);
              DARABONBA_PTR_TO_JSON(SecondCategoryCode, secondCategoryCode_);
              DARABONBA_PTR_TO_JSON(SecondCategoryName, secondCategoryName_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, Pictures& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(FirstCategoryCode, firstCategoryCode_);
              DARABONBA_PTR_FROM_JSON(FirstCategoryName, firstCategoryName_);
              DARABONBA_PTR_FROM_JSON(IsHeadPic, isHeadPic_);
              DARABONBA_PTR_FROM_JSON(PictureId, pictureId_);
              DARABONBA_PTR_FROM_JSON(SecondCategoryCode, secondCategoryCode_);
              DARABONBA_PTR_FROM_JSON(SecondCategoryName, secondCategoryName_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            Pictures() = default ;
            Pictures(const Pictures &) = default ;
            Pictures(Pictures &&) = default ;
            Pictures(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Pictures() = default ;
            Pictures& operator=(const Pictures &) = default ;
            Pictures& operator=(Pictures &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->firstCategoryCode_ == nullptr && this->firstCategoryName_ == nullptr && this->isHeadPic_ == nullptr && this->pictureId_ == nullptr && this->secondCategoryCode_ == nullptr
        && this->secondCategoryName_ == nullptr && this->url_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline Pictures& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // firstCategoryCode Field Functions 
            bool hasFirstCategoryCode() const { return this->firstCategoryCode_ != nullptr;};
            void deleteFirstCategoryCode() { this->firstCategoryCode_ = nullptr;};
            inline string getFirstCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(firstCategoryCode_, "") };
            inline Pictures& setFirstCategoryCode(string firstCategoryCode) { DARABONBA_PTR_SET_VALUE(firstCategoryCode_, firstCategoryCode) };


            // firstCategoryName Field Functions 
            bool hasFirstCategoryName() const { return this->firstCategoryName_ != nullptr;};
            void deleteFirstCategoryName() { this->firstCategoryName_ = nullptr;};
            inline string getFirstCategoryName() const { DARABONBA_PTR_GET_DEFAULT(firstCategoryName_, "") };
            inline Pictures& setFirstCategoryName(string firstCategoryName) { DARABONBA_PTR_SET_VALUE(firstCategoryName_, firstCategoryName) };


            // isHeadPic Field Functions 
            bool hasIsHeadPic() const { return this->isHeadPic_ != nullptr;};
            void deleteIsHeadPic() { this->isHeadPic_ = nullptr;};
            inline bool getIsHeadPic() const { DARABONBA_PTR_GET_DEFAULT(isHeadPic_, false) };
            inline Pictures& setIsHeadPic(bool isHeadPic) { DARABONBA_PTR_SET_VALUE(isHeadPic_, isHeadPic) };


            // pictureId Field Functions 
            bool hasPictureId() const { return this->pictureId_ != nullptr;};
            void deletePictureId() { this->pictureId_ = nullptr;};
            inline string getPictureId() const { DARABONBA_PTR_GET_DEFAULT(pictureId_, "") };
            inline Pictures& setPictureId(string pictureId) { DARABONBA_PTR_SET_VALUE(pictureId_, pictureId) };


            // secondCategoryCode Field Functions 
            bool hasSecondCategoryCode() const { return this->secondCategoryCode_ != nullptr;};
            void deleteSecondCategoryCode() { this->secondCategoryCode_ = nullptr;};
            inline string getSecondCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryCode_, "") };
            inline Pictures& setSecondCategoryCode(string secondCategoryCode) { DARABONBA_PTR_SET_VALUE(secondCategoryCode_, secondCategoryCode) };


            // secondCategoryName Field Functions 
            bool hasSecondCategoryName() const { return this->secondCategoryName_ != nullptr;};
            void deleteSecondCategoryName() { this->secondCategoryName_ = nullptr;};
            inline string getSecondCategoryName() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryName_, "") };
            inline Pictures& setSecondCategoryName(string secondCategoryName) { DARABONBA_PTR_SET_VALUE(secondCategoryName_, secondCategoryName) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline Pictures& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // The picture description.
            shared_ptr<string> description_ {};
            // The first-level category code.
            shared_ptr<string> firstCategoryCode_ {};
            // The first-level category name.
            shared_ptr<string> firstCategoryName_ {};
            // Indicates whether the picture is the cover image.
            shared_ptr<bool> isHeadPic_ {};
            // The picture ID (subject to the URL).
            shared_ptr<string> pictureId_ {};
            // The second-level category code.
            shared_ptr<string> secondCategoryCode_ {};
            // The second-level category name.
            shared_ptr<string> secondCategoryName_ {};
            // The picture URL.
            shared_ptr<string> url_ {};
          };

          class BedType : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BedType& obj) { 
              DARABONBA_PTR_TO_JSON(BedCount, bedCount_);
              DARABONBA_PTR_TO_JSON(BedSize, bedSize_);
              DARABONBA_PTR_TO_JSON(BedType, bedType_);
            };
            friend void from_json(const Darabonba::Json& j, BedType& obj) { 
              DARABONBA_PTR_FROM_JSON(BedCount, bedCount_);
              DARABONBA_PTR_FROM_JSON(BedSize, bedSize_);
              DARABONBA_PTR_FROM_JSON(BedType, bedType_);
            };
            BedType() = default ;
            BedType(const BedType &) = default ;
            BedType(BedType &&) = default ;
            BedType(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BedType() = default ;
            BedType& operator=(const BedType &) = default ;
            BedType& operator=(BedType &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bedCount_ == nullptr
        && this->bedSize_ == nullptr && this->bedType_ == nullptr; };
            // bedCount Field Functions 
            bool hasBedCount() const { return this->bedCount_ != nullptr;};
            void deleteBedCount() { this->bedCount_ = nullptr;};
            inline int32_t getBedCount() const { DARABONBA_PTR_GET_DEFAULT(bedCount_, 0) };
            inline BedType& setBedCount(int32_t bedCount) { DARABONBA_PTR_SET_VALUE(bedCount_, bedCount) };


            // bedSize Field Functions 
            bool hasBedSize() const { return this->bedSize_ != nullptr;};
            void deleteBedSize() { this->bedSize_ = nullptr;};
            inline string getBedSize() const { DARABONBA_PTR_GET_DEFAULT(bedSize_, "") };
            inline BedType& setBedSize(string bedSize) { DARABONBA_PTR_SET_VALUE(bedSize_, bedSize) };


            // bedType Field Functions 
            bool hasBedType() const { return this->bedType_ != nullptr;};
            void deleteBedType() { this->bedType_ = nullptr;};
            inline string getBedType() const { DARABONBA_PTR_GET_DEFAULT(bedType_, "") };
            inline BedType& setBedType(string bedType) { DARABONBA_PTR_SET_VALUE(bedType_, bedType) };


          protected:
            // The number of beds.
            shared_ptr<int32_t> bedCount_ {};
            // The bed width in meters.
            shared_ptr<string> bedSize_ {};
            // The bed type name.
            shared_ptr<string> bedType_ {};
          };

          virtual bool empty() const override { return this->bedType_ == nullptr
        && this->pictures_ == nullptr && this->roomName_ == nullptr && this->roomNameCn_ == nullptr && this->roomSize_ == nullptr && this->roomSizeUnit_ == nullptr
        && this->standardRoomId_ == nullptr && this->windowType_ == nullptr && this->windowTypeDefect_ == nullptr; };
          // bedType Field Functions 
          bool hasBedType() const { return this->bedType_ != nullptr;};
          void deleteBedType() { this->bedType_ = nullptr;};
          inline const vector<RoomTypes::BedType> & getBedType() const { DARABONBA_PTR_GET_CONST(bedType_, vector<RoomTypes::BedType>) };
          inline vector<RoomTypes::BedType> getBedType() { DARABONBA_PTR_GET(bedType_, vector<RoomTypes::BedType>) };
          inline RoomTypes& setBedType(const vector<RoomTypes::BedType> & bedType) { DARABONBA_PTR_SET_VALUE(bedType_, bedType) };
          inline RoomTypes& setBedType(vector<RoomTypes::BedType> && bedType) { DARABONBA_PTR_SET_RVALUE(bedType_, bedType) };


          // pictures Field Functions 
          bool hasPictures() const { return this->pictures_ != nullptr;};
          void deletePictures() { this->pictures_ = nullptr;};
          inline const vector<RoomTypes::Pictures> & getPictures() const { DARABONBA_PTR_GET_CONST(pictures_, vector<RoomTypes::Pictures>) };
          inline vector<RoomTypes::Pictures> getPictures() { DARABONBA_PTR_GET(pictures_, vector<RoomTypes::Pictures>) };
          inline RoomTypes& setPictures(const vector<RoomTypes::Pictures> & pictures) { DARABONBA_PTR_SET_VALUE(pictures_, pictures) };
          inline RoomTypes& setPictures(vector<RoomTypes::Pictures> && pictures) { DARABONBA_PTR_SET_RVALUE(pictures_, pictures) };


          // roomName Field Functions 
          bool hasRoomName() const { return this->roomName_ != nullptr;};
          void deleteRoomName() { this->roomName_ = nullptr;};
          inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
          inline RoomTypes& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


          // roomNameCn Field Functions 
          bool hasRoomNameCn() const { return this->roomNameCn_ != nullptr;};
          void deleteRoomNameCn() { this->roomNameCn_ = nullptr;};
          inline string getRoomNameCn() const { DARABONBA_PTR_GET_DEFAULT(roomNameCn_, "") };
          inline RoomTypes& setRoomNameCn(string roomNameCn) { DARABONBA_PTR_SET_VALUE(roomNameCn_, roomNameCn) };


          // roomSize Field Functions 
          bool hasRoomSize() const { return this->roomSize_ != nullptr;};
          void deleteRoomSize() { this->roomSize_ = nullptr;};
          inline string getRoomSize() const { DARABONBA_PTR_GET_DEFAULT(roomSize_, "") };
          inline RoomTypes& setRoomSize(string roomSize) { DARABONBA_PTR_SET_VALUE(roomSize_, roomSize) };


          // roomSizeUnit Field Functions 
          bool hasRoomSizeUnit() const { return this->roomSizeUnit_ != nullptr;};
          void deleteRoomSizeUnit() { this->roomSizeUnit_ = nullptr;};
          inline string getRoomSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(roomSizeUnit_, "") };
          inline RoomTypes& setRoomSizeUnit(string roomSizeUnit) { DARABONBA_PTR_SET_VALUE(roomSizeUnit_, roomSizeUnit) };


          // standardRoomId Field Functions 
          bool hasStandardRoomId() const { return this->standardRoomId_ != nullptr;};
          void deleteStandardRoomId() { this->standardRoomId_ = nullptr;};
          inline string getStandardRoomId() const { DARABONBA_PTR_GET_DEFAULT(standardRoomId_, "") };
          inline RoomTypes& setStandardRoomId(string standardRoomId) { DARABONBA_PTR_SET_VALUE(standardRoomId_, standardRoomId) };


          // windowType Field Functions 
          bool hasWindowType() const { return this->windowType_ != nullptr;};
          void deleteWindowType() { this->windowType_ = nullptr;};
          inline string getWindowType() const { DARABONBA_PTR_GET_DEFAULT(windowType_, "") };
          inline RoomTypes& setWindowType(string windowType) { DARABONBA_PTR_SET_VALUE(windowType_, windowType) };


          // windowTypeDefect Field Functions 
          bool hasWindowTypeDefect() const { return this->windowTypeDefect_ != nullptr;};
          void deleteWindowTypeDefect() { this->windowTypeDefect_ = nullptr;};
          inline string getWindowTypeDefect() const { DARABONBA_PTR_GET_DEFAULT(windowTypeDefect_, "") };
          inline RoomTypes& setWindowTypeDefect(string windowTypeDefect) { DARABONBA_PTR_SET_VALUE(windowTypeDefect_, windowTypeDefect) };


        protected:
          // The list of bed types.
          shared_ptr<vector<RoomTypes::BedType>> bedType_ {};
          // The list of room type pictures.
          shared_ptr<vector<RoomTypes::Pictures>> pictures_ {};
          // The room type name.
          shared_ptr<string> roomName_ {};
          // The Chinese room type name (always in Chinese, regardless of the language parameter).
          shared_ptr<string> roomNameCn_ {};
          // The room area (passed through as-is, may be a range value).
          shared_ptr<string> roomSize_ {};
          // The area unit. Valid values: SQM (square meters) and SQFT (square feet). Default value: SQM.
          shared_ptr<string> roomSizeUnit_ {};
          // The platform standard room type ID.
          shared_ptr<string> standardRoomId_ {};
          // The window type. Valid values:
          // - 0: no window
          // - 1: with window
          // - 2: partially with window
          // - 3: opaque window
          // - 4: partially opaque window
          // - 5: floor-to-ceiling window
          shared_ptr<string> windowType_ {};
          // The window defect code. Valid values:
          // - 0: window cannot be opened for ventilation
          // - 1: view is obstructed outside the window
          // - 2: window faces the interior of the hotel
          // - 3: window is located in a corridor or hallway
          // - 4: window can be opened for ventilation and faces an outdoor open environment
          shared_ptr<string> windowTypeDefect_ {};
        };

        class Policies : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Policies& obj) { 
            DARABONBA_PTR_TO_JSON(GroupName, groupName_);
            DARABONBA_PTR_TO_JSON(GroupTypeId, groupTypeId_);
            DARABONBA_PTR_TO_JSON(Items, items_);
          };
          friend void from_json(const Darabonba::Json& j, Policies& obj) { 
            DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
            DARABONBA_PTR_FROM_JSON(GroupTypeId, groupTypeId_);
            DARABONBA_PTR_FROM_JSON(Items, items_);
          };
          Policies() = default ;
          Policies(const Policies &) = default ;
          Policies(Policies &&) = default ;
          Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Policies() = default ;
          Policies& operator=(const Policies &) = default ;
          Policies& operator=(Policies &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Items : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Items& obj) { 
              DARABONBA_PTR_TO_JSON(Children, children_);
              DARABONBA_PTR_TO_JSON(ItemName, itemName_);
              DARABONBA_PTR_TO_JSON(ItemTypeId, itemTypeId_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Items& obj) { 
              DARABONBA_PTR_FROM_JSON(Children, children_);
              DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
              DARABONBA_PTR_FROM_JSON(ItemTypeId, itemTypeId_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Items() = default ;
            Items(const Items &) = default ;
            Items(Items &&) = default ;
            Items(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Items() = default ;
            Items& operator=(const Items &) = default ;
            Items& operator=(Items &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->children_ == nullptr
        && this->itemName_ == nullptr && this->itemTypeId_ == nullptr && this->value_ == nullptr; };
            // children Field Functions 
            bool hasChildren() const { return this->children_ != nullptr;};
            void deleteChildren() { this->children_ = nullptr;};
            inline const vector<Darabonba::Json> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Darabonba::Json>) };
            inline vector<Darabonba::Json> getChildren() { DARABONBA_PTR_GET(children_, vector<Darabonba::Json>) };
            inline Items& setChildren(const vector<Darabonba::Json> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
            inline Items& setChildren(vector<Darabonba::Json> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


            // itemName Field Functions 
            bool hasItemName() const { return this->itemName_ != nullptr;};
            void deleteItemName() { this->itemName_ = nullptr;};
            inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
            inline Items& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


            // itemTypeId Field Functions 
            bool hasItemTypeId() const { return this->itemTypeId_ != nullptr;};
            void deleteItemTypeId() { this->itemTypeId_ = nullptr;};
            inline string getItemTypeId() const { DARABONBA_PTR_GET_DEFAULT(itemTypeId_, "") };
            inline Items& setItemTypeId(string itemTypeId) { DARABONBA_PTR_SET_VALUE(itemTypeId_, itemTypeId) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Items& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The list of sub-items.
            shared_ptr<vector<Darabonba::Json>> children_ {};
            // The item name.
            shared_ptr<string> itemName_ {};
            // The item type ID.
            shared_ptr<string> itemTypeId_ {};
            // The text value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->groupName_ == nullptr
        && this->groupTypeId_ == nullptr && this->items_ == nullptr; };
          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline Policies& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // groupTypeId Field Functions 
          bool hasGroupTypeId() const { return this->groupTypeId_ != nullptr;};
          void deleteGroupTypeId() { this->groupTypeId_ = nullptr;};
          inline string getGroupTypeId() const { DARABONBA_PTR_GET_DEFAULT(groupTypeId_, "") };
          inline Policies& setGroupTypeId(string groupTypeId) { DARABONBA_PTR_SET_VALUE(groupTypeId_, groupTypeId) };


          // items Field Functions 
          bool hasItems() const { return this->items_ != nullptr;};
          void deleteItems() { this->items_ = nullptr;};
          inline const vector<Policies::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Policies::Items>) };
          inline vector<Policies::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Policies::Items>) };
          inline Policies& setItems(const vector<Policies::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
          inline Policies& setItems(vector<Policies::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        protected:
          // The group name.
          shared_ptr<string> groupName_ {};
          // The group type ID.
          shared_ptr<string> groupTypeId_ {};
          // The list of policy items.
          shared_ptr<vector<Policies::Items>> items_ {};
        };

        class Pictures : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Pictures& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(FirstCategoryCode, firstCategoryCode_);
            DARABONBA_PTR_TO_JSON(FirstCategoryName, firstCategoryName_);
            DARABONBA_PTR_TO_JSON(IsHeadPic, isHeadPic_);
            DARABONBA_PTR_TO_JSON(PictureId, pictureId_);
            DARABONBA_PTR_TO_JSON(SecondCategoryCode, secondCategoryCode_);
            DARABONBA_PTR_TO_JSON(SecondCategoryName, secondCategoryName_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Pictures& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(FirstCategoryCode, firstCategoryCode_);
            DARABONBA_PTR_FROM_JSON(FirstCategoryName, firstCategoryName_);
            DARABONBA_PTR_FROM_JSON(IsHeadPic, isHeadPic_);
            DARABONBA_PTR_FROM_JSON(PictureId, pictureId_);
            DARABONBA_PTR_FROM_JSON(SecondCategoryCode, secondCategoryCode_);
            DARABONBA_PTR_FROM_JSON(SecondCategoryName, secondCategoryName_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Pictures() = default ;
          Pictures(const Pictures &) = default ;
          Pictures(Pictures &&) = default ;
          Pictures(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Pictures() = default ;
          Pictures& operator=(const Pictures &) = default ;
          Pictures& operator=(Pictures &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->firstCategoryCode_ == nullptr && this->firstCategoryName_ == nullptr && this->isHeadPic_ == nullptr && this->pictureId_ == nullptr && this->secondCategoryCode_ == nullptr
        && this->secondCategoryName_ == nullptr && this->url_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Pictures& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // firstCategoryCode Field Functions 
          bool hasFirstCategoryCode() const { return this->firstCategoryCode_ != nullptr;};
          void deleteFirstCategoryCode() { this->firstCategoryCode_ = nullptr;};
          inline string getFirstCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(firstCategoryCode_, "") };
          inline Pictures& setFirstCategoryCode(string firstCategoryCode) { DARABONBA_PTR_SET_VALUE(firstCategoryCode_, firstCategoryCode) };


          // firstCategoryName Field Functions 
          bool hasFirstCategoryName() const { return this->firstCategoryName_ != nullptr;};
          void deleteFirstCategoryName() { this->firstCategoryName_ = nullptr;};
          inline string getFirstCategoryName() const { DARABONBA_PTR_GET_DEFAULT(firstCategoryName_, "") };
          inline Pictures& setFirstCategoryName(string firstCategoryName) { DARABONBA_PTR_SET_VALUE(firstCategoryName_, firstCategoryName) };


          // isHeadPic Field Functions 
          bool hasIsHeadPic() const { return this->isHeadPic_ != nullptr;};
          void deleteIsHeadPic() { this->isHeadPic_ = nullptr;};
          inline bool getIsHeadPic() const { DARABONBA_PTR_GET_DEFAULT(isHeadPic_, false) };
          inline Pictures& setIsHeadPic(bool isHeadPic) { DARABONBA_PTR_SET_VALUE(isHeadPic_, isHeadPic) };


          // pictureId Field Functions 
          bool hasPictureId() const { return this->pictureId_ != nullptr;};
          void deletePictureId() { this->pictureId_ = nullptr;};
          inline string getPictureId() const { DARABONBA_PTR_GET_DEFAULT(pictureId_, "") };
          inline Pictures& setPictureId(string pictureId) { DARABONBA_PTR_SET_VALUE(pictureId_, pictureId) };


          // secondCategoryCode Field Functions 
          bool hasSecondCategoryCode() const { return this->secondCategoryCode_ != nullptr;};
          void deleteSecondCategoryCode() { this->secondCategoryCode_ = nullptr;};
          inline string getSecondCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryCode_, "") };
          inline Pictures& setSecondCategoryCode(string secondCategoryCode) { DARABONBA_PTR_SET_VALUE(secondCategoryCode_, secondCategoryCode) };


          // secondCategoryName Field Functions 
          bool hasSecondCategoryName() const { return this->secondCategoryName_ != nullptr;};
          void deleteSecondCategoryName() { this->secondCategoryName_ = nullptr;};
          inline string getSecondCategoryName() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryName_, "") };
          inline Pictures& setSecondCategoryName(string secondCategoryName) { DARABONBA_PTR_SET_VALUE(secondCategoryName_, secondCategoryName) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Pictures& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // The picture description.
          shared_ptr<string> description_ {};
          // The first-level category code.
          shared_ptr<string> firstCategoryCode_ {};
          // The first-level category name.
          shared_ptr<string> firstCategoryName_ {};
          // Indicates whether the picture is the cover image.
          shared_ptr<bool> isHeadPic_ {};
          // The picture ID (subject to the URL).
          shared_ptr<string> pictureId_ {};
          // The second-level category code.
          shared_ptr<string> secondCategoryCode_ {};
          // The second-level category name.
          shared_ptr<string> secondCategoryName_ {};
          // The picture URL.
          shared_ptr<string> url_ {};
        };

        class Facilities : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Facilities& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Facilities& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Facilities() = default ;
          Facilities(const Facilities &) = default ;
          Facilities(Facilities &&) = default ;
          Facilities(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Facilities() = default ;
          Facilities& operator=(const Facilities &) = default ;
          Facilities& operator=(Facilities &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Facilities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Facilities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Facilities& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The facility description.
          shared_ptr<string> description_ {};
          // The facility name.
          shared_ptr<string> name_ {};
          // The facility type.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->address_ == nullptr
        && this->checkInTime_ == nullptr && this->checkOutTime_ == nullptr && this->cityName_ == nullptr && this->countryName_ == nullptr && this->description_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->facilities_ == nullptr && this->hotelName_ == nullptr && this->hotelNameCn_ == nullptr
        && this->hotelType_ == nullptr && this->latitude_ == nullptr && this->longitude_ == nullptr && this->openingTime_ == nullptr && this->pictures_ == nullptr
        && this->policies_ == nullptr && this->positionType_ == nullptr && this->renovationTime_ == nullptr && this->roomTypes_ == nullptr && this->standardHotelId_ == nullptr
        && this->star_ == nullptr && this->status_ == nullptr && this->tel_ == nullptr && this->timezone_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline Hotels& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // checkInTime Field Functions 
        bool hasCheckInTime() const { return this->checkInTime_ != nullptr;};
        void deleteCheckInTime() { this->checkInTime_ = nullptr;};
        inline string getCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(checkInTime_, "") };
        inline Hotels& setCheckInTime(string checkInTime) { DARABONBA_PTR_SET_VALUE(checkInTime_, checkInTime) };


        // checkOutTime Field Functions 
        bool hasCheckOutTime() const { return this->checkOutTime_ != nullptr;};
        void deleteCheckOutTime() { this->checkOutTime_ = nullptr;};
        inline string getCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(checkOutTime_, "") };
        inline Hotels& setCheckOutTime(string checkOutTime) { DARABONBA_PTR_SET_VALUE(checkOutTime_, checkOutTime) };


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


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Hotels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Hotels& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Hotels& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // facilities Field Functions 
        bool hasFacilities() const { return this->facilities_ != nullptr;};
        void deleteFacilities() { this->facilities_ = nullptr;};
        inline const vector<Hotels::Facilities> & getFacilities() const { DARABONBA_PTR_GET_CONST(facilities_, vector<Hotels::Facilities>) };
        inline vector<Hotels::Facilities> getFacilities() { DARABONBA_PTR_GET(facilities_, vector<Hotels::Facilities>) };
        inline Hotels& setFacilities(const vector<Hotels::Facilities> & facilities) { DARABONBA_PTR_SET_VALUE(facilities_, facilities) };
        inline Hotels& setFacilities(vector<Hotels::Facilities> && facilities) { DARABONBA_PTR_SET_RVALUE(facilities_, facilities) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline Hotels& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // hotelNameCn Field Functions 
        bool hasHotelNameCn() const { return this->hotelNameCn_ != nullptr;};
        void deleteHotelNameCn() { this->hotelNameCn_ = nullptr;};
        inline string getHotelNameCn() const { DARABONBA_PTR_GET_DEFAULT(hotelNameCn_, "") };
        inline Hotels& setHotelNameCn(string hotelNameCn) { DARABONBA_PTR_SET_VALUE(hotelNameCn_, hotelNameCn) };


        // hotelType Field Functions 
        bool hasHotelType() const { return this->hotelType_ != nullptr;};
        void deleteHotelType() { this->hotelType_ = nullptr;};
        inline string getHotelType() const { DARABONBA_PTR_GET_DEFAULT(hotelType_, "") };
        inline Hotels& setHotelType(string hotelType) { DARABONBA_PTR_SET_VALUE(hotelType_, hotelType) };


        // latitude Field Functions 
        bool hasLatitude() const { return this->latitude_ != nullptr;};
        void deleteLatitude() { this->latitude_ = nullptr;};
        inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
        inline Hotels& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


        // longitude Field Functions 
        bool hasLongitude() const { return this->longitude_ != nullptr;};
        void deleteLongitude() { this->longitude_ = nullptr;};
        inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
        inline Hotels& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


        // openingTime Field Functions 
        bool hasOpeningTime() const { return this->openingTime_ != nullptr;};
        void deleteOpeningTime() { this->openingTime_ = nullptr;};
        inline int32_t getOpeningTime() const { DARABONBA_PTR_GET_DEFAULT(openingTime_, 0) };
        inline Hotels& setOpeningTime(int32_t openingTime) { DARABONBA_PTR_SET_VALUE(openingTime_, openingTime) };


        // pictures Field Functions 
        bool hasPictures() const { return this->pictures_ != nullptr;};
        void deletePictures() { this->pictures_ = nullptr;};
        inline const vector<Hotels::Pictures> & getPictures() const { DARABONBA_PTR_GET_CONST(pictures_, vector<Hotels::Pictures>) };
        inline vector<Hotels::Pictures> getPictures() { DARABONBA_PTR_GET(pictures_, vector<Hotels::Pictures>) };
        inline Hotels& setPictures(const vector<Hotels::Pictures> & pictures) { DARABONBA_PTR_SET_VALUE(pictures_, pictures) };
        inline Hotels& setPictures(vector<Hotels::Pictures> && pictures) { DARABONBA_PTR_SET_RVALUE(pictures_, pictures) };


        // policies Field Functions 
        bool hasPolicies() const { return this->policies_ != nullptr;};
        void deletePolicies() { this->policies_ = nullptr;};
        inline const vector<Hotels::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<Hotels::Policies>) };
        inline vector<Hotels::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<Hotels::Policies>) };
        inline Hotels& setPolicies(const vector<Hotels::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
        inline Hotels& setPolicies(vector<Hotels::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


        // positionType Field Functions 
        bool hasPositionType() const { return this->positionType_ != nullptr;};
        void deletePositionType() { this->positionType_ = nullptr;};
        inline string getPositionType() const { DARABONBA_PTR_GET_DEFAULT(positionType_, "") };
        inline Hotels& setPositionType(string positionType) { DARABONBA_PTR_SET_VALUE(positionType_, positionType) };


        // renovationTime Field Functions 
        bool hasRenovationTime() const { return this->renovationTime_ != nullptr;};
        void deleteRenovationTime() { this->renovationTime_ = nullptr;};
        inline int32_t getRenovationTime() const { DARABONBA_PTR_GET_DEFAULT(renovationTime_, 0) };
        inline Hotels& setRenovationTime(int32_t renovationTime) { DARABONBA_PTR_SET_VALUE(renovationTime_, renovationTime) };


        // roomTypes Field Functions 
        bool hasRoomTypes() const { return this->roomTypes_ != nullptr;};
        void deleteRoomTypes() { this->roomTypes_ = nullptr;};
        inline const vector<Hotels::RoomTypes> & getRoomTypes() const { DARABONBA_PTR_GET_CONST(roomTypes_, vector<Hotels::RoomTypes>) };
        inline vector<Hotels::RoomTypes> getRoomTypes() { DARABONBA_PTR_GET(roomTypes_, vector<Hotels::RoomTypes>) };
        inline Hotels& setRoomTypes(const vector<Hotels::RoomTypes> & roomTypes) { DARABONBA_PTR_SET_VALUE(roomTypes_, roomTypes) };
        inline Hotels& setRoomTypes(vector<Hotels::RoomTypes> && roomTypes) { DARABONBA_PTR_SET_RVALUE(roomTypes_, roomTypes) };


        // standardHotelId Field Functions 
        bool hasStandardHotelId() const { return this->standardHotelId_ != nullptr;};
        void deleteStandardHotelId() { this->standardHotelId_ = nullptr;};
        inline string getStandardHotelId() const { DARABONBA_PTR_GET_DEFAULT(standardHotelId_, "") };
        inline Hotels& setStandardHotelId(string standardHotelId) { DARABONBA_PTR_SET_VALUE(standardHotelId_, standardHotelId) };


        // star Field Functions 
        bool hasStar() const { return this->star_ != nullptr;};
        void deleteStar() { this->star_ = nullptr;};
        inline string getStar() const { DARABONBA_PTR_GET_DEFAULT(star_, "") };
        inline Hotels& setStar(string star) { DARABONBA_PTR_SET_VALUE(star_, star) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Hotels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tel Field Functions 
        bool hasTel() const { return this->tel_ != nullptr;};
        void deleteTel() { this->tel_ = nullptr;};
        inline string getTel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
        inline Hotels& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


        // timezone Field Functions 
        bool hasTimezone() const { return this->timezone_ != nullptr;};
        void deleteTimezone() { this->timezone_ = nullptr;};
        inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
        inline Hotels& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      protected:
        // The address.
        shared_ptr<string> address_ {};
        // The default check-in time.
        shared_ptr<string> checkInTime_ {};
        // The default check-out time.
        shared_ptr<string> checkOutTime_ {};
        // The city name.
        shared_ptr<string> cityName_ {};
        // The country name.
        shared_ptr<string> countryName_ {};
        // The hotel description.
        shared_ptr<string> description_ {};
        // The error code for the individual hotel.
        shared_ptr<string> errorCode_ {};
        // The error message for the individual hotel.
        shared_ptr<string> errorMessage_ {};
        // The list of facilities.
        shared_ptr<vector<Hotels::Facilities>> facilities_ {};
        // The hotel name.
        shared_ptr<string> hotelName_ {};
        // The Chinese hotel name.
        shared_ptr<string> hotelNameCn_ {};
        // The hotel type (LUXURY/DELUXE/COMFORT).
        shared_ptr<string> hotelType_ {};
        // The latitude.
        shared_ptr<string> latitude_ {};
        // The longitude.
        shared_ptr<string> longitude_ {};
        // The opening year.
        shared_ptr<int32_t> openingTime_ {};
        // The list of pictures.
        shared_ptr<vector<Hotels::Pictures>> pictures_ {};
        // The hotel policy information.
        shared_ptr<vector<Hotels::Policies>> policies_ {};
        // The source of the coordinates.
        shared_ptr<string> positionType_ {};
        // The renovation year.
        shared_ptr<int32_t> renovationTime_ {};
        // The list of room types.
        shared_ptr<vector<Hotels::RoomTypes>> roomTypes_ {};
        // The platform standard hotel ID.
        shared_ptr<string> standardHotelId_ {};
        // The star rating.
        shared_ptr<string> star_ {};
        // The hotel status (ONLINE/OFFLINE).
        shared_ptr<string> status_ {};
        // The phone number.
        shared_ptr<string> tel_ {};
        // The hotel time zone (IANA ID).
        shared_ptr<string> timezone_ {};
      };

      virtual bool empty() const override { return this->hotels_ == nullptr; };
      // hotels Field Functions 
      bool hasHotels() const { return this->hotels_ != nullptr;};
      void deleteHotels() { this->hotels_ = nullptr;};
      inline const vector<Data::Hotels> & getHotels() const { DARABONBA_PTR_GET_CONST(hotels_, vector<Data::Hotels>) };
      inline vector<Data::Hotels> getHotels() { DARABONBA_PTR_GET(hotels_, vector<Data::Hotels>) };
      inline Data& setHotels(const vector<Data::Hotels> & hotels) { DARABONBA_PTR_SET_VALUE(hotels_, hotels) };
      inline Data& setHotels(vector<Data::Hotels> && hotels) { DARABONBA_PTR_SET_RVALUE(hotels_, hotels) };


    protected:
      // The list of hotel details.
      shared_ptr<vector<Data::Hotels>> hotels_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tracerId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GlobalHotelBatchGetHotelDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GlobalHotelBatchGetHotelDetailResponseBody::Data) };
    inline GlobalHotelBatchGetHotelDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GlobalHotelBatchGetHotelDetailResponseBody::Data) };
    inline GlobalHotelBatchGetHotelDetailResponseBody& setData(const GlobalHotelBatchGetHotelDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GlobalHotelBatchGetHotelDetailResponseBody& setData(GlobalHotelBatchGetHotelDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GlobalHotelBatchGetHotelDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GlobalHotelBatchGetHotelDetailResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GlobalHotelBatchGetHotelDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GlobalHotelBatchGetHotelDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelBatchGetHotelDetailResponseBody& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The business data.
    shared_ptr<GlobalHotelBatchGetHotelDetailResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

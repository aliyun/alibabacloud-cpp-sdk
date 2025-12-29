// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    GetHotelSettingResponseBody() = default ;
    GetHotelSettingResponseBody(const GetHotelSettingResponseBody &) = default ;
    GetHotelSettingResponseBody(GetHotelSettingResponseBody &&) = default ;
    GetHotelSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelSettingResponseBody() = default ;
    GetHotelSettingResponseBody& operator=(const GetHotelSettingResponseBody &) = default ;
    GetHotelSettingResponseBody& operator=(GetHotelSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(DeleteToken, deleteToken_);
        DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_TO_JSON(HotelDeviceModeList, hotelDeviceModeList_);
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(HotelScreenSaver, hotelScreenSaver_);
        DARABONBA_PTR_TO_JSON(NightMode, nightMode_);
        DARABONBA_PTR_TO_JSON(SettingType, settingType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(DeleteToken, deleteToken_);
        DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_FROM_JSON(HotelDeviceModeList, hotelDeviceModeList_);
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(HotelScreenSaver, hotelScreenSaver_);
        DARABONBA_PTR_FROM_JSON(NightMode, nightMode_);
        DARABONBA_PTR_FROM_JSON(SettingType, settingType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NightMode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NightMode& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultBright, defaultBright_);
          DARABONBA_PTR_TO_JSON(DefaultVolume, defaultVolume_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(StandbyAction, standbyAction_);
          DARABONBA_PTR_TO_JSON(Start, start_);
        };
        friend void from_json(const Darabonba::Json& j, NightMode& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultBright, defaultBright_);
          DARABONBA_PTR_FROM_JSON(DefaultVolume, defaultVolume_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(StandbyAction, standbyAction_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
        };
        NightMode() = default ;
        NightMode(const NightMode &) = default ;
        NightMode(NightMode &&) = default ;
        NightMode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NightMode() = default ;
        NightMode& operator=(const NightMode &) = default ;
        NightMode& operator=(NightMode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultBright_ == nullptr
        && this->defaultVolume_ == nullptr && this->enable_ == nullptr && this->end_ == nullptr && this->standbyAction_ == nullptr && this->start_ == nullptr; };
        // defaultBright Field Functions 
        bool hasDefaultBright() const { return this->defaultBright_ != nullptr;};
        void deleteDefaultBright() { this->defaultBright_ = nullptr;};
        inline string getDefaultBright() const { DARABONBA_PTR_GET_DEFAULT(defaultBright_, "") };
        inline NightMode& setDefaultBright(string defaultBright) { DARABONBA_PTR_SET_VALUE(defaultBright_, defaultBright) };


        // defaultVolume Field Functions 
        bool hasDefaultVolume() const { return this->defaultVolume_ != nullptr;};
        void deleteDefaultVolume() { this->defaultVolume_ = nullptr;};
        inline string getDefaultVolume() const { DARABONBA_PTR_GET_DEFAULT(defaultVolume_, "") };
        inline NightMode& setDefaultVolume(string defaultVolume) { DARABONBA_PTR_SET_VALUE(defaultVolume_, defaultVolume) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline NightMode& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
        inline NightMode& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // standbyAction Field Functions 
        bool hasStandbyAction() const { return this->standbyAction_ != nullptr;};
        void deleteStandbyAction() { this->standbyAction_ = nullptr;};
        inline string getStandbyAction() const { DARABONBA_PTR_GET_DEFAULT(standbyAction_, "") };
        inline NightMode& setStandbyAction(string standbyAction) { DARABONBA_PTR_SET_VALUE(standbyAction_, standbyAction) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
        inline NightMode& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      protected:
        // 夜间模式下的默认亮度
        shared_ptr<string> defaultBright_ {};
        // 夜间模式下的默认音量
        shared_ptr<string> defaultVolume_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<string> end_ {};
        shared_ptr<string> standbyAction_ {};
        shared_ptr<string> start_ {};
      };

      class HotelScreenSaver : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelScreenSaver& obj) { 
          DARABONBA_PTR_TO_JSON(ScreenSaverPicUrl, screenSaverPicUrl_);
          DARABONBA_PTR_TO_JSON(ScreenSaverStyle, screenSaverStyle_);
        };
        friend void from_json(const Darabonba::Json& j, HotelScreenSaver& obj) { 
          DARABONBA_PTR_FROM_JSON(ScreenSaverPicUrl, screenSaverPicUrl_);
          DARABONBA_PTR_FROM_JSON(ScreenSaverStyle, screenSaverStyle_);
        };
        HotelScreenSaver() = default ;
        HotelScreenSaver(const HotelScreenSaver &) = default ;
        HotelScreenSaver(HotelScreenSaver &&) = default ;
        HotelScreenSaver(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelScreenSaver() = default ;
        HotelScreenSaver& operator=(const HotelScreenSaver &) = default ;
        HotelScreenSaver& operator=(HotelScreenSaver &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->screenSaverPicUrl_ == nullptr
        && this->screenSaverStyle_ == nullptr; };
        // screenSaverPicUrl Field Functions 
        bool hasScreenSaverPicUrl() const { return this->screenSaverPicUrl_ != nullptr;};
        void deleteScreenSaverPicUrl() { this->screenSaverPicUrl_ = nullptr;};
        inline string getScreenSaverPicUrl() const { DARABONBA_PTR_GET_DEFAULT(screenSaverPicUrl_, "") };
        inline HotelScreenSaver& setScreenSaverPicUrl(string screenSaverPicUrl) { DARABONBA_PTR_SET_VALUE(screenSaverPicUrl_, screenSaverPicUrl) };


        // screenSaverStyle Field Functions 
        bool hasScreenSaverStyle() const { return this->screenSaverStyle_ != nullptr;};
        void deleteScreenSaverStyle() { this->screenSaverStyle_ = nullptr;};
        inline string getScreenSaverStyle() const { DARABONBA_PTR_GET_DEFAULT(screenSaverStyle_, "") };
        inline HotelScreenSaver& setScreenSaverStyle(string screenSaverStyle) { DARABONBA_PTR_SET_VALUE(screenSaverStyle_, screenSaverStyle) };


      protected:
        shared_ptr<string> screenSaverPicUrl_ {};
        shared_ptr<string> screenSaverStyle_ {};
      };

      virtual bool empty() const override { return this->deleteToken_ == nullptr
        && this->extInfo_ == nullptr && this->hotelDeviceModeList_ == nullptr && this->hotelId_ == nullptr && this->hotelScreenSaver_ == nullptr && this->nightMode_ == nullptr
        && this->settingType_ == nullptr && this->value_ == nullptr; };
      // deleteToken Field Functions 
      bool hasDeleteToken() const { return this->deleteToken_ != nullptr;};
      void deleteDeleteToken() { this->deleteToken_ = nullptr;};
      inline int64_t getDeleteToken() const { DARABONBA_PTR_GET_DEFAULT(deleteToken_, 0L) };
      inline Result& setDeleteToken(int64_t deleteToken) { DARABONBA_PTR_SET_VALUE(deleteToken_, deleteToken) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline string getExtInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
      inline Result& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


      // hotelDeviceModeList Field Functions 
      bool hasHotelDeviceModeList() const { return this->hotelDeviceModeList_ != nullptr;};
      void deleteHotelDeviceModeList() { this->hotelDeviceModeList_ = nullptr;};
      inline const vector<string> & getHotelDeviceModeList() const { DARABONBA_PTR_GET_CONST(hotelDeviceModeList_, vector<string>) };
      inline vector<string> getHotelDeviceModeList() { DARABONBA_PTR_GET(hotelDeviceModeList_, vector<string>) };
      inline Result& setHotelDeviceModeList(const vector<string> & hotelDeviceModeList) { DARABONBA_PTR_SET_VALUE(hotelDeviceModeList_, hotelDeviceModeList) };
      inline Result& setHotelDeviceModeList(vector<string> && hotelDeviceModeList) { DARABONBA_PTR_SET_RVALUE(hotelDeviceModeList_, hotelDeviceModeList) };


      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline Result& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // hotelScreenSaver Field Functions 
      bool hasHotelScreenSaver() const { return this->hotelScreenSaver_ != nullptr;};
      void deleteHotelScreenSaver() { this->hotelScreenSaver_ = nullptr;};
      inline const Result::HotelScreenSaver & getHotelScreenSaver() const { DARABONBA_PTR_GET_CONST(hotelScreenSaver_, Result::HotelScreenSaver) };
      inline Result::HotelScreenSaver getHotelScreenSaver() { DARABONBA_PTR_GET(hotelScreenSaver_, Result::HotelScreenSaver) };
      inline Result& setHotelScreenSaver(const Result::HotelScreenSaver & hotelScreenSaver) { DARABONBA_PTR_SET_VALUE(hotelScreenSaver_, hotelScreenSaver) };
      inline Result& setHotelScreenSaver(Result::HotelScreenSaver && hotelScreenSaver) { DARABONBA_PTR_SET_RVALUE(hotelScreenSaver_, hotelScreenSaver) };


      // nightMode Field Functions 
      bool hasNightMode() const { return this->nightMode_ != nullptr;};
      void deleteNightMode() { this->nightMode_ = nullptr;};
      inline const Result::NightMode & getNightMode() const { DARABONBA_PTR_GET_CONST(nightMode_, Result::NightMode) };
      inline Result::NightMode getNightMode() { DARABONBA_PTR_GET(nightMode_, Result::NightMode) };
      inline Result& setNightMode(const Result::NightMode & nightMode) { DARABONBA_PTR_SET_VALUE(nightMode_, nightMode) };
      inline Result& setNightMode(Result::NightMode && nightMode) { DARABONBA_PTR_SET_RVALUE(nightMode_, nightMode) };


      // settingType Field Functions 
      bool hasSettingType() const { return this->settingType_ != nullptr;};
      void deleteSettingType() { this->settingType_ = nullptr;};
      inline string getSettingType() const { DARABONBA_PTR_GET_DEFAULT(settingType_, "") };
      inline Result& setSettingType(string settingType) { DARABONBA_PTR_SET_VALUE(settingType_, settingType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Result& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<int64_t> deleteToken_ {};
      shared_ptr<string> extInfo_ {};
      shared_ptr<vector<string>> hotelDeviceModeList_ {};
      shared_ptr<string> hotelId_ {};
      shared_ptr<Result::HotelScreenSaver> hotelScreenSaver_ {};
      shared_ptr<Result::NightMode> nightMode_ {};
      shared_ptr<string> settingType_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotelSettingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotelSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetHotelSettingResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetHotelSettingResponseBody::Result) };
    inline GetHotelSettingResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetHotelSettingResponseBody::Result) };
    inline GetHotelSettingResponseBody& setResult(const GetHotelSettingResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetHotelSettingResponseBody& setResult(GetHotelSettingResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetHotelSettingResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetHotelSettingResponseBody::Result> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif

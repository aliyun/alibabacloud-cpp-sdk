// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERTOTALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERTOTALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayUserTotalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayUserTotalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserPlayStatisTotals, userPlayStatisTotals_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayUserTotalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserPlayStatisTotals, userPlayStatisTotals_);
    };
    DescribePlayUserTotalResponseBody() = default ;
    DescribePlayUserTotalResponseBody(const DescribePlayUserTotalResponseBody &) = default ;
    DescribePlayUserTotalResponseBody(DescribePlayUserTotalResponseBody &&) = default ;
    DescribePlayUserTotalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayUserTotalResponseBody() = default ;
    DescribePlayUserTotalResponseBody& operator=(const DescribePlayUserTotalResponseBody &) = default ;
    DescribePlayUserTotalResponseBody& operator=(DescribePlayUserTotalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserPlayStatisTotals : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserPlayStatisTotals& obj) { 
        DARABONBA_PTR_TO_JSON(UserPlayStatisTotal, userPlayStatisTotal_);
      };
      friend void from_json(const Darabonba::Json& j, UserPlayStatisTotals& obj) { 
        DARABONBA_PTR_FROM_JSON(UserPlayStatisTotal, userPlayStatisTotal_);
      };
      UserPlayStatisTotals() = default ;
      UserPlayStatisTotals(const UserPlayStatisTotals &) = default ;
      UserPlayStatisTotals(UserPlayStatisTotals &&) = default ;
      UserPlayStatisTotals(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserPlayStatisTotals() = default ;
      UserPlayStatisTotals& operator=(const UserPlayStatisTotals &) = default ;
      UserPlayStatisTotals& operator=(UserPlayStatisTotals &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserPlayStatisTotal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserPlayStatisTotal& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(PlayDuration, playDuration_);
          DARABONBA_PTR_TO_JSON(PlayRange, playRange_);
          DARABONBA_PTR_TO_JSON(UV, UV_);
          DARABONBA_PTR_TO_JSON(VV, VV_);
        };
        friend void from_json(const Darabonba::Json& j, UserPlayStatisTotal& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(PlayDuration, playDuration_);
          DARABONBA_PTR_FROM_JSON(PlayRange, playRange_);
          DARABONBA_PTR_FROM_JSON(UV, UV_);
          DARABONBA_PTR_FROM_JSON(VV, VV_);
        };
        UserPlayStatisTotal() = default ;
        UserPlayStatisTotal(const UserPlayStatisTotal &) = default ;
        UserPlayStatisTotal(UserPlayStatisTotal &&) = default ;
        UserPlayStatisTotal(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserPlayStatisTotal() = default ;
        UserPlayStatisTotal& operator=(const UserPlayStatisTotal &) = default ;
        UserPlayStatisTotal& operator=(UserPlayStatisTotal &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VV : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VV& obj) { 
            DARABONBA_PTR_TO_JSON(Android, android_);
            DARABONBA_PTR_TO_JSON(Flash, flash_);
            DARABONBA_PTR_TO_JSON(HTML5, HTML5_);
            DARABONBA_PTR_TO_JSON(iOS, iOS_);
          };
          friend void from_json(const Darabonba::Json& j, VV& obj) { 
            DARABONBA_PTR_FROM_JSON(Android, android_);
            DARABONBA_PTR_FROM_JSON(Flash, flash_);
            DARABONBA_PTR_FROM_JSON(HTML5, HTML5_);
            DARABONBA_PTR_FROM_JSON(iOS, iOS_);
          };
          VV() = default ;
          VV(const VV &) = default ;
          VV(VV &&) = default ;
          VV(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VV() = default ;
          VV& operator=(const VV &) = default ;
          VV& operator=(VV &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->android_ == nullptr
        && this->flash_ == nullptr && this->HTML5_ == nullptr && this->iOS_ == nullptr; };
          // android Field Functions 
          bool hasAndroid() const { return this->android_ != nullptr;};
          void deleteAndroid() { this->android_ = nullptr;};
          inline string getAndroid() const { DARABONBA_PTR_GET_DEFAULT(android_, "") };
          inline VV& setAndroid(string android) { DARABONBA_PTR_SET_VALUE(android_, android) };


          // flash Field Functions 
          bool hasFlash() const { return this->flash_ != nullptr;};
          void deleteFlash() { this->flash_ = nullptr;};
          inline string getFlash() const { DARABONBA_PTR_GET_DEFAULT(flash_, "") };
          inline VV& setFlash(string flash) { DARABONBA_PTR_SET_VALUE(flash_, flash) };


          // HTML5 Field Functions 
          bool hasHTML5() const { return this->HTML5_ != nullptr;};
          void deleteHTML5() { this->HTML5_ = nullptr;};
          inline string getHTML5() const { DARABONBA_PTR_GET_DEFAULT(HTML5_, "") };
          inline VV& setHTML5(string HTML5) { DARABONBA_PTR_SET_VALUE(HTML5_, HTML5) };


          // iOS Field Functions 
          bool hasIOS() const { return this->iOS_ != nullptr;};
          void deleteIOS() { this->iOS_ = nullptr;};
          inline string getIOS() const { DARABONBA_PTR_GET_DEFAULT(iOS_, "") };
          inline VV& setIOS(string iOS) { DARABONBA_PTR_SET_VALUE(iOS_, iOS) };


        protected:
          // The total number of video views played by using ApsaraVideo Player SDK for Android.
          shared_ptr<string> android_ {};
          // The total number of video views played by using the Flash player.
          shared_ptr<string> flash_ {};
          // The total number of video views played by using the HTML5 player.
          shared_ptr<string> HTML5_ {};
          // The total number of video views played by using ApsaraVideo Player SDK for iOS.
          shared_ptr<string> iOS_ {};
        };

        class UV : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UV& obj) { 
            DARABONBA_PTR_TO_JSON(Android, android_);
            DARABONBA_PTR_TO_JSON(Flash, flash_);
            DARABONBA_PTR_TO_JSON(HTML5, HTML5_);
            DARABONBA_PTR_TO_JSON(iOS, iOS_);
          };
          friend void from_json(const Darabonba::Json& j, UV& obj) { 
            DARABONBA_PTR_FROM_JSON(Android, android_);
            DARABONBA_PTR_FROM_JSON(Flash, flash_);
            DARABONBA_PTR_FROM_JSON(HTML5, HTML5_);
            DARABONBA_PTR_FROM_JSON(iOS, iOS_);
          };
          UV() = default ;
          UV(const UV &) = default ;
          UV(UV &&) = default ;
          UV(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UV() = default ;
          UV& operator=(const UV &) = default ;
          UV& operator=(UV &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->android_ == nullptr
        && this->flash_ == nullptr && this->HTML5_ == nullptr && this->iOS_ == nullptr; };
          // android Field Functions 
          bool hasAndroid() const { return this->android_ != nullptr;};
          void deleteAndroid() { this->android_ = nullptr;};
          inline string getAndroid() const { DARABONBA_PTR_GET_DEFAULT(android_, "") };
          inline UV& setAndroid(string android) { DARABONBA_PTR_SET_VALUE(android_, android) };


          // flash Field Functions 
          bool hasFlash() const { return this->flash_ != nullptr;};
          void deleteFlash() { this->flash_ = nullptr;};
          inline string getFlash() const { DARABONBA_PTR_GET_DEFAULT(flash_, "") };
          inline UV& setFlash(string flash) { DARABONBA_PTR_SET_VALUE(flash_, flash) };


          // HTML5 Field Functions 
          bool hasHTML5() const { return this->HTML5_ != nullptr;};
          void deleteHTML5() { this->HTML5_ = nullptr;};
          inline string getHTML5() const { DARABONBA_PTR_GET_DEFAULT(HTML5_, "") };
          inline UV& setHTML5(string HTML5) { DARABONBA_PTR_SET_VALUE(HTML5_, HTML5) };


          // iOS Field Functions 
          bool hasIOS() const { return this->iOS_ != nullptr;};
          void deleteIOS() { this->iOS_ = nullptr;};
          inline string getIOS() const { DARABONBA_PTR_GET_DEFAULT(iOS_, "") };
          inline UV& setIOS(string iOS) { DARABONBA_PTR_SET_VALUE(iOS_, iOS) };


        protected:
          // The total number of unique visitors who use ApsaraVideo Player SDK for Android.
          shared_ptr<string> android_ {};
          // The total number of unique visitors who use the Flash player.
          shared_ptr<string> flash_ {};
          // The total number of unique visitors who use the HTML5 player.
          shared_ptr<string> HTML5_ {};
          // The total number of unique visitors who use ApsaraVideo Player SDK for iOS.
          shared_ptr<string> iOS_ {};
        };

        virtual bool empty() const override { return this->date_ == nullptr
        && this->playDuration_ == nullptr && this->playRange_ == nullptr && this->UV_ == nullptr && this->VV_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline UserPlayStatisTotal& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // playDuration Field Functions 
        bool hasPlayDuration() const { return this->playDuration_ != nullptr;};
        void deletePlayDuration() { this->playDuration_ = nullptr;};
        inline string getPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(playDuration_, "") };
        inline UserPlayStatisTotal& setPlayDuration(string playDuration) { DARABONBA_PTR_SET_VALUE(playDuration_, playDuration) };


        // playRange Field Functions 
        bool hasPlayRange() const { return this->playRange_ != nullptr;};
        void deletePlayRange() { this->playRange_ = nullptr;};
        inline string getPlayRange() const { DARABONBA_PTR_GET_DEFAULT(playRange_, "") };
        inline UserPlayStatisTotal& setPlayRange(string playRange) { DARABONBA_PTR_SET_VALUE(playRange_, playRange) };


        // UV Field Functions 
        bool hasUV() const { return this->UV_ != nullptr;};
        void deleteUV() { this->UV_ = nullptr;};
        inline const UserPlayStatisTotal::UV & getUV() const { DARABONBA_PTR_GET_CONST(UV_, UserPlayStatisTotal::UV) };
        inline UserPlayStatisTotal::UV getUV() { DARABONBA_PTR_GET(UV_, UserPlayStatisTotal::UV) };
        inline UserPlayStatisTotal& setUV(const UserPlayStatisTotal::UV & uV) { DARABONBA_PTR_SET_VALUE(UV_, uV) };
        inline UserPlayStatisTotal& setUV(UserPlayStatisTotal::UV && uV) { DARABONBA_PTR_SET_RVALUE(UV_, uV) };


        // VV Field Functions 
        bool hasVV() const { return this->VV_ != nullptr;};
        void deleteVV() { this->VV_ = nullptr;};
        inline const UserPlayStatisTotal::VV & getVV() const { DARABONBA_PTR_GET_CONST(VV_, UserPlayStatisTotal::VV) };
        inline UserPlayStatisTotal::VV getVV() { DARABONBA_PTR_GET(VV_, UserPlayStatisTotal::VV) };
        inline UserPlayStatisTotal& setVV(const UserPlayStatisTotal::VV & vV) { DARABONBA_PTR_SET_VALUE(VV_, vV) };
        inline UserPlayStatisTotal& setVV(UserPlayStatisTotal::VV && vV) { DARABONBA_PTR_SET_RVALUE(VV_, vV) };


      protected:
        // The date. The date is displayed in the yyyy-MM-dd format.
        shared_ptr<string> date_ {};
        // The total playback duration. Unit: milliseconds.
        shared_ptr<string> playDuration_ {};
        // The distribution of the playback duration.
        shared_ptr<string> playRange_ {};
        // The total number of unique visitors.
        shared_ptr<UserPlayStatisTotal::UV> UV_ {};
        // The total number of video views.
        shared_ptr<UserPlayStatisTotal::VV> VV_ {};
      };

      virtual bool empty() const override { return this->userPlayStatisTotal_ == nullptr; };
      // userPlayStatisTotal Field Functions 
      bool hasUserPlayStatisTotal() const { return this->userPlayStatisTotal_ != nullptr;};
      void deleteUserPlayStatisTotal() { this->userPlayStatisTotal_ = nullptr;};
      inline const vector<UserPlayStatisTotals::UserPlayStatisTotal> & getUserPlayStatisTotal() const { DARABONBA_PTR_GET_CONST(userPlayStatisTotal_, vector<UserPlayStatisTotals::UserPlayStatisTotal>) };
      inline vector<UserPlayStatisTotals::UserPlayStatisTotal> getUserPlayStatisTotal() { DARABONBA_PTR_GET(userPlayStatisTotal_, vector<UserPlayStatisTotals::UserPlayStatisTotal>) };
      inline UserPlayStatisTotals& setUserPlayStatisTotal(const vector<UserPlayStatisTotals::UserPlayStatisTotal> & userPlayStatisTotal) { DARABONBA_PTR_SET_VALUE(userPlayStatisTotal_, userPlayStatisTotal) };
      inline UserPlayStatisTotals& setUserPlayStatisTotal(vector<UserPlayStatisTotals::UserPlayStatisTotal> && userPlayStatisTotal) { DARABONBA_PTR_SET_RVALUE(userPlayStatisTotal_, userPlayStatisTotal) };


    protected:
      shared_ptr<vector<UserPlayStatisTotals::UserPlayStatisTotal>> userPlayStatisTotal_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userPlayStatisTotals_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayUserTotalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userPlayStatisTotals Field Functions 
    bool hasUserPlayStatisTotals() const { return this->userPlayStatisTotals_ != nullptr;};
    void deleteUserPlayStatisTotals() { this->userPlayStatisTotals_ = nullptr;};
    inline const DescribePlayUserTotalResponseBody::UserPlayStatisTotals & getUserPlayStatisTotals() const { DARABONBA_PTR_GET_CONST(userPlayStatisTotals_, DescribePlayUserTotalResponseBody::UserPlayStatisTotals) };
    inline DescribePlayUserTotalResponseBody::UserPlayStatisTotals getUserPlayStatisTotals() { DARABONBA_PTR_GET(userPlayStatisTotals_, DescribePlayUserTotalResponseBody::UserPlayStatisTotals) };
    inline DescribePlayUserTotalResponseBody& setUserPlayStatisTotals(const DescribePlayUserTotalResponseBody::UserPlayStatisTotals & userPlayStatisTotals) { DARABONBA_PTR_SET_VALUE(userPlayStatisTotals_, userPlayStatisTotals) };
    inline DescribePlayUserTotalResponseBody& setUserPlayStatisTotals(DescribePlayUserTotalResponseBody::UserPlayStatisTotals && userPlayStatisTotals) { DARABONBA_PTR_SET_RVALUE(userPlayStatisTotals_, userPlayStatisTotals) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The daily playback statistics.
    shared_ptr<DescribePlayUserTotalResponseBody::UserPlayStatisTotals> userPlayStatisTotals_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

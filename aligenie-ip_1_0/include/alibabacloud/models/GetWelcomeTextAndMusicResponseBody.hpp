// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWELCOMETEXTANDMUSICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWELCOMETEXTANDMUSICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetWelcomeTextAndMusicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWelcomeTextAndMusicResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Extentions, extentions_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetWelcomeTextAndMusicResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Extentions, extentions_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    GetWelcomeTextAndMusicResponseBody() = default ;
    GetWelcomeTextAndMusicResponseBody(const GetWelcomeTextAndMusicResponseBody &) = default ;
    GetWelcomeTextAndMusicResponseBody(GetWelcomeTextAndMusicResponseBody &&) = default ;
    GetWelcomeTextAndMusicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWelcomeTextAndMusicResponseBody() = default ;
    GetWelcomeTextAndMusicResponseBody& operator=(const GetWelcomeTextAndMusicResponseBody &) = default ;
    GetWelcomeTextAndMusicResponseBody& operator=(GetWelcomeTextAndMusicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(MusicUrl, musicUrl_);
        DARABONBA_PTR_TO_JSON(Text, text_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(MusicUrl, musicUrl_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
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
      virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->musicUrl_ == nullptr && this->text_ == nullptr; };
      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline Result& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // musicUrl Field Functions 
      bool hasMusicUrl() const { return this->musicUrl_ != nullptr;};
      void deleteMusicUrl() { this->musicUrl_ = nullptr;};
      inline string getMusicUrl() const { DARABONBA_PTR_GET_DEFAULT(musicUrl_, "") };
      inline Result& setMusicUrl(string musicUrl) { DARABONBA_PTR_SET_VALUE(musicUrl_, musicUrl) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Result& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      shared_ptr<string> hotelId_ {};
      shared_ptr<string> musicUrl_ {};
      shared_ptr<string> text_ {};
    };

    virtual bool empty() const override { return this->extentions_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // extentions Field Functions 
    bool hasExtentions() const { return this->extentions_ != nullptr;};
    void deleteExtentions() { this->extentions_ = nullptr;};
    inline     const Darabonba::Json & getExtentions() const { DARABONBA_GET(extentions_) };
    Darabonba::Json & getExtentions() { DARABONBA_GET(extentions_) };
    inline GetWelcomeTextAndMusicResponseBody& setExtentions(const Darabonba::Json & extentions) { DARABONBA_SET_VALUE(extentions_, extentions) };
    inline GetWelcomeTextAndMusicResponseBody& setExtentions(Darabonba::Json && extentions) { DARABONBA_SET_RVALUE(extentions_, extentions) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWelcomeTextAndMusicResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWelcomeTextAndMusicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetWelcomeTextAndMusicResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetWelcomeTextAndMusicResponseBody::Result) };
    inline GetWelcomeTextAndMusicResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetWelcomeTextAndMusicResponseBody::Result) };
    inline GetWelcomeTextAndMusicResponseBody& setResult(const GetWelcomeTextAndMusicResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetWelcomeTextAndMusicResponseBody& setResult(GetWelcomeTextAndMusicResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetWelcomeTextAndMusicResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    Darabonba::Json extentions_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetWelcomeTextAndMusicResponseBody::Result> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif

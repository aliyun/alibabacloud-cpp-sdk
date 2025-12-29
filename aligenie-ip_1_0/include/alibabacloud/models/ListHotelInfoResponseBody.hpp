// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELINFORESPONSEBODY_HPP_
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
  class ListHotelInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelInfoResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Extentions, extentions_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelInfoResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Extentions, extentions_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    ListHotelInfoResponseBody() = default ;
    ListHotelInfoResponseBody(const ListHotelInfoResponseBody &) = default ;
    ListHotelInfoResponseBody(ListHotelInfoResponseBody &&) = default ;
    ListHotelInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelInfoResponseBody() = default ;
    ListHotelInfoResponseBody& operator=(const ListHotelInfoResponseBody &) = default ;
    ListHotelInfoResponseBody& operator=(ListHotelInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAccount, authAccount_);
        DARABONBA_PTR_TO_JSON(HotelAddress, hotelAddress_);
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(HotelName, hotelName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAccount, authAccount_);
        DARABONBA_PTR_FROM_JSON(HotelAddress, hotelAddress_);
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(HotelName, hotelName_);
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
      class AuthAccount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthAccount& obj) { 
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, AuthAccount& obj) { 
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        AuthAccount() = default ;
        AuthAccount(const AuthAccount &) = default ;
        AuthAccount(AuthAccount &&) = default ;
        AuthAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthAccount() = default ;
        AuthAccount& operator=(const AuthAccount &) = default ;
        AuthAccount& operator=(AuthAccount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userName_ == nullptr; };
        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline AuthAccount& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->authAccount_ == nullptr
        && this->hotelAddress_ == nullptr && this->hotelId_ == nullptr && this->hotelName_ == nullptr; };
      // authAccount Field Functions 
      bool hasAuthAccount() const { return this->authAccount_ != nullptr;};
      void deleteAuthAccount() { this->authAccount_ = nullptr;};
      inline const vector<Result::AuthAccount> & getAuthAccount() const { DARABONBA_PTR_GET_CONST(authAccount_, vector<Result::AuthAccount>) };
      inline vector<Result::AuthAccount> getAuthAccount() { DARABONBA_PTR_GET(authAccount_, vector<Result::AuthAccount>) };
      inline Result& setAuthAccount(const vector<Result::AuthAccount> & authAccount) { DARABONBA_PTR_SET_VALUE(authAccount_, authAccount) };
      inline Result& setAuthAccount(vector<Result::AuthAccount> && authAccount) { DARABONBA_PTR_SET_RVALUE(authAccount_, authAccount) };


      // hotelAddress Field Functions 
      bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
      void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
      inline string getHotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
      inline Result& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline Result& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // hotelName Field Functions 
      bool hasHotelName() const { return this->hotelName_ != nullptr;};
      void deleteHotelName() { this->hotelName_ = nullptr;};
      inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
      inline Result& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    protected:
      shared_ptr<vector<Result::AuthAccount>> authAccount_ {};
      shared_ptr<string> hotelAddress_ {};
      shared_ptr<string> hotelId_ {};
      shared_ptr<string> hotelName_ {};
    };

    virtual bool empty() const override { return this->extentions_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // extentions Field Functions 
    bool hasExtentions() const { return this->extentions_ != nullptr;};
    void deleteExtentions() { this->extentions_ = nullptr;};
    inline     const Darabonba::Json & getExtentions() const { DARABONBA_GET(extentions_) };
    Darabonba::Json & getExtentions() { DARABONBA_GET(extentions_) };
    inline ListHotelInfoResponseBody& setExtentions(const Darabonba::Json & extentions) { DARABONBA_SET_VALUE(extentions_, extentions) };
    inline ListHotelInfoResponseBody& setExtentions(Darabonba::Json && extentions) { DARABONBA_SET_RVALUE(extentions_, extentions) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotelInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotelInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListHotelInfoResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListHotelInfoResponseBody::Result>) };
    inline vector<ListHotelInfoResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListHotelInfoResponseBody::Result>) };
    inline ListHotelInfoResponseBody& setResult(const vector<ListHotelInfoResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListHotelInfoResponseBody& setResult(vector<ListHotelInfoResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListHotelInfoResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    Darabonba::Json extentions_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListHotelInfoResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERDEVICELISTBYTMEUSERIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERDEVICELISTBYTMEUSERIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class QueryUserDeviceListByTmeUserIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserDeviceListByTmeUserIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserDeviceListByTmeUserIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUserDeviceListByTmeUserIdResponseBody() = default ;
    QueryUserDeviceListByTmeUserIdResponseBody(const QueryUserDeviceListByTmeUserIdResponseBody &) = default ;
    QueryUserDeviceListByTmeUserIdResponseBody(QueryUserDeviceListByTmeUserIdResponseBody &&) = default ;
    QueryUserDeviceListByTmeUserIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserDeviceListByTmeUserIdResponseBody() = default ;
    QueryUserDeviceListByTmeUserIdResponseBody& operator=(const QueryUserDeviceListByTmeUserIdResponseBody &) = default ;
    QueryUserDeviceListByTmeUserIdResponseBody& operator=(QueryUserDeviceListByTmeUserIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AligenieUserInfoList, aligenieUserInfoList_);
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Sp, sp_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AligenieUserInfoList, aligenieUserInfoList_);
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Sp, sp_);
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
      class AligenieUserInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AligenieUserInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(AuthorizedDeviceList, authorizedDeviceList_);
          DARABONBA_PTR_TO_JSON(OpenUserId, openUserId_);
          DARABONBA_PTR_TO_JSON(UserNickname, userNickname_);
        };
        friend void from_json(const Darabonba::Json& j, AligenieUserInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthorizedDeviceList, authorizedDeviceList_);
          DARABONBA_PTR_FROM_JSON(OpenUserId, openUserId_);
          DARABONBA_PTR_FROM_JSON(UserNickname, userNickname_);
        };
        AligenieUserInfoList() = default ;
        AligenieUserInfoList(const AligenieUserInfoList &) = default ;
        AligenieUserInfoList(AligenieUserInfoList &&) = default ;
        AligenieUserInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AligenieUserInfoList() = default ;
        AligenieUserInfoList& operator=(const AligenieUserInfoList &) = default ;
        AligenieUserInfoList& operator=(AligenieUserInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AuthorizedDeviceList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthorizedDeviceList& obj) { 
            DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
            DARABONBA_PTR_TO_JSON(Online, online_);
            DARABONBA_PTR_TO_JSON(OpenDeviceId, openDeviceId_);
            DARABONBA_PTR_TO_JSON(TmeDeviceId, tmeDeviceId_);
            DARABONBA_PTR_TO_JSON(TmeProductId, tmeProductId_);
          };
          friend void from_json(const Darabonba::Json& j, AuthorizedDeviceList& obj) { 
            DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
            DARABONBA_PTR_FROM_JSON(Online, online_);
            DARABONBA_PTR_FROM_JSON(OpenDeviceId, openDeviceId_);
            DARABONBA_PTR_FROM_JSON(TmeDeviceId, tmeDeviceId_);
            DARABONBA_PTR_FROM_JSON(TmeProductId, tmeProductId_);
          };
          AuthorizedDeviceList() = default ;
          AuthorizedDeviceList(const AuthorizedDeviceList &) = default ;
          AuthorizedDeviceList(AuthorizedDeviceList &&) = default ;
          AuthorizedDeviceList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthorizedDeviceList() = default ;
          AuthorizedDeviceList& operator=(const AuthorizedDeviceList &) = default ;
          AuthorizedDeviceList& operator=(AuthorizedDeviceList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->online_ == nullptr && this->openDeviceId_ == nullptr && this->tmeDeviceId_ == nullptr && this->tmeProductId_ == nullptr; };
          // deviceName Field Functions 
          bool hasDeviceName() const { return this->deviceName_ != nullptr;};
          void deleteDeviceName() { this->deviceName_ = nullptr;};
          inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
          inline AuthorizedDeviceList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


          // online Field Functions 
          bool hasOnline() const { return this->online_ != nullptr;};
          void deleteOnline() { this->online_ = nullptr;};
          inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
          inline AuthorizedDeviceList& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


          // openDeviceId Field Functions 
          bool hasOpenDeviceId() const { return this->openDeviceId_ != nullptr;};
          void deleteOpenDeviceId() { this->openDeviceId_ = nullptr;};
          inline string getOpenDeviceId() const { DARABONBA_PTR_GET_DEFAULT(openDeviceId_, "") };
          inline AuthorizedDeviceList& setOpenDeviceId(string openDeviceId) { DARABONBA_PTR_SET_VALUE(openDeviceId_, openDeviceId) };


          // tmeDeviceId Field Functions 
          bool hasTmeDeviceId() const { return this->tmeDeviceId_ != nullptr;};
          void deleteTmeDeviceId() { this->tmeDeviceId_ = nullptr;};
          inline string getTmeDeviceId() const { DARABONBA_PTR_GET_DEFAULT(tmeDeviceId_, "") };
          inline AuthorizedDeviceList& setTmeDeviceId(string tmeDeviceId) { DARABONBA_PTR_SET_VALUE(tmeDeviceId_, tmeDeviceId) };


          // tmeProductId Field Functions 
          bool hasTmeProductId() const { return this->tmeProductId_ != nullptr;};
          void deleteTmeProductId() { this->tmeProductId_ = nullptr;};
          inline string getTmeProductId() const { DARABONBA_PTR_GET_DEFAULT(tmeProductId_, "") };
          inline AuthorizedDeviceList& setTmeProductId(string tmeProductId) { DARABONBA_PTR_SET_VALUE(tmeProductId_, tmeProductId) };


        protected:
          // device name
          shared_ptr<string> deviceName_ {};
          // Indicates whether the device is online
          shared_ptr<bool> online_ {};
          // Device ID
          shared_ptr<string> openDeviceId_ {};
          // Device ID exposed to TME
          shared_ptr<string> tmeDeviceId_ {};
          // TME product ID
          shared_ptr<string> tmeProductId_ {};
        };

        virtual bool empty() const override { return this->authorizedDeviceList_ == nullptr
        && this->openUserId_ == nullptr && this->userNickname_ == nullptr; };
        // authorizedDeviceList Field Functions 
        bool hasAuthorizedDeviceList() const { return this->authorizedDeviceList_ != nullptr;};
        void deleteAuthorizedDeviceList() { this->authorizedDeviceList_ = nullptr;};
        inline const vector<AligenieUserInfoList::AuthorizedDeviceList> & getAuthorizedDeviceList() const { DARABONBA_PTR_GET_CONST(authorizedDeviceList_, vector<AligenieUserInfoList::AuthorizedDeviceList>) };
        inline vector<AligenieUserInfoList::AuthorizedDeviceList> getAuthorizedDeviceList() { DARABONBA_PTR_GET(authorizedDeviceList_, vector<AligenieUserInfoList::AuthorizedDeviceList>) };
        inline AligenieUserInfoList& setAuthorizedDeviceList(const vector<AligenieUserInfoList::AuthorizedDeviceList> & authorizedDeviceList) { DARABONBA_PTR_SET_VALUE(authorizedDeviceList_, authorizedDeviceList) };
        inline AligenieUserInfoList& setAuthorizedDeviceList(vector<AligenieUserInfoList::AuthorizedDeviceList> && authorizedDeviceList) { DARABONBA_PTR_SET_RVALUE(authorizedDeviceList_, authorizedDeviceList) };


        // openUserId Field Functions 
        bool hasOpenUserId() const { return this->openUserId_ != nullptr;};
        void deleteOpenUserId() { this->openUserId_ = nullptr;};
        inline string getOpenUserId() const { DARABONBA_PTR_GET_DEFAULT(openUserId_, "") };
        inline AligenieUserInfoList& setOpenUserId(string openUserId) { DARABONBA_PTR_SET_VALUE(openUserId_, openUserId) };


        // userNickname Field Functions 
        bool hasUserNickname() const { return this->userNickname_ != nullptr;};
        void deleteUserNickname() { this->userNickname_ = nullptr;};
        inline string getUserNickname() const { DARABONBA_PTR_GET_DEFAULT(userNickname_, "") };
        inline AligenieUserInfoList& setUserNickname(string userNickname) { DARABONBA_PTR_SET_VALUE(userNickname_, userNickname) };


      protected:
        // User Authorization device List
        shared_ptr<vector<AligenieUserInfoList::AuthorizedDeviceList>> authorizedDeviceList_ {};
        // User ID
        shared_ptr<string> openUserId_ {};
        // User nickname
        shared_ptr<string> userNickname_ {};
      };

      virtual bool empty() const override { return this->aligenieUserInfoList_ == nullptr
        && this->encodeKey_ == nullptr && this->encodeType_ == nullptr && this->sp_ == nullptr; };
      // aligenieUserInfoList Field Functions 
      bool hasAligenieUserInfoList() const { return this->aligenieUserInfoList_ != nullptr;};
      void deleteAligenieUserInfoList() { this->aligenieUserInfoList_ = nullptr;};
      inline const vector<Result::AligenieUserInfoList> & getAligenieUserInfoList() const { DARABONBA_PTR_GET_CONST(aligenieUserInfoList_, vector<Result::AligenieUserInfoList>) };
      inline vector<Result::AligenieUserInfoList> getAligenieUserInfoList() { DARABONBA_PTR_GET(aligenieUserInfoList_, vector<Result::AligenieUserInfoList>) };
      inline Result& setAligenieUserInfoList(const vector<Result::AligenieUserInfoList> & aligenieUserInfoList) { DARABONBA_PTR_SET_VALUE(aligenieUserInfoList_, aligenieUserInfoList) };
      inline Result& setAligenieUserInfoList(vector<Result::AligenieUserInfoList> && aligenieUserInfoList) { DARABONBA_PTR_SET_RVALUE(aligenieUserInfoList_, aligenieUserInfoList) };


      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline Result& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline Result& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // sp Field Functions 
      bool hasSp() const { return this->sp_ != nullptr;};
      void deleteSp() { this->sp_ = nullptr;};
      inline string getSp() const { DARABONBA_PTR_GET_DEFAULT(sp_, "") };
      inline Result& setSp(string sp) { DARABONBA_PTR_SET_VALUE(sp_, sp) };


    protected:
      // Tmall Genie User List
      shared_ptr<vector<Result::AligenieUserInfoList>> aligenieUserInfoList_ {};
      // entity key (pass-through by third party)
      shared_ptr<string> encodeKey_ {};
      // entity Type (pass-through by third party)
      shared_ptr<string> encodeType_ {};
      // "KG": KuGou  
      // "KW": Kuwo  
      // "QM": QQ Music
      shared_ptr<string> sp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryUserDeviceListByTmeUserIdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryUserDeviceListByTmeUserIdResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryUserDeviceListByTmeUserIdResponseBody::Result) };
    inline QueryUserDeviceListByTmeUserIdResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryUserDeviceListByTmeUserIdResponseBody::Result) };
    inline QueryUserDeviceListByTmeUserIdResponseBody& setResult(const QueryUserDeviceListByTmeUserIdResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryUserDeviceListByTmeUserIdResponseBody& setResult(QueryUserDeviceListByTmeUserIdResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUserDeviceListByTmeUserIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Response code
    shared_ptr<int32_t> code_ {};
    // Response message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Response Result
    shared_ptr<QueryUserDeviceListByTmeUserIdResponseBody::Result> result_ {};
    // Flag indicating whether the invocation succeeded
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

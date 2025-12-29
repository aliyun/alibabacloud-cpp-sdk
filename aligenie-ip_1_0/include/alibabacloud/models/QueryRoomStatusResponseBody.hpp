// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYROOMSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYROOMSTATUSRESPONSEBODY_HPP_
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
  class QueryRoomStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRoomStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRoomStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    QueryRoomStatusResponseBody() = default ;
    QueryRoomStatusResponseBody(const QueryRoomStatusResponseBody &) = default ;
    QueryRoomStatusResponseBody(QueryRoomStatusResponseBody &&) = default ;
    QueryRoomStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRoomStatusResponseBody() = default ;
    QueryRoomStatusResponseBody& operator=(const QueryRoomStatusResponseBody &) = default ;
    QueryRoomStatusResponseBody& operator=(QueryRoomStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_TO_JSON(SceneList, sceneList_);
        DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_FROM_JSON(SceneList, sceneList_);
        DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
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
      class StatusList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatusList& obj) { 
          DARABONBA_PTR_TO_JSON(StatusName, statusName_);
          DARABONBA_PTR_TO_JSON(StatusValue, statusValue_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, StatusList& obj) { 
          DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
          DARABONBA_PTR_FROM_JSON(StatusValue, statusValue_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        StatusList() = default ;
        StatusList(const StatusList &) = default ;
        StatusList(StatusList &&) = default ;
        StatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatusList() = default ;
        StatusList& operator=(const StatusList &) = default ;
        StatusList& operator=(StatusList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->statusName_ == nullptr
        && this->statusValue_ == nullptr && this->updateTime_ == nullptr; };
        // statusName Field Functions 
        bool hasStatusName() const { return this->statusName_ != nullptr;};
        void deleteStatusName() { this->statusName_ = nullptr;};
        inline string getStatusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
        inline StatusList& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


        // statusValue Field Functions 
        bool hasStatusValue() const { return this->statusValue_ != nullptr;};
        void deleteStatusValue() { this->statusValue_ = nullptr;};
        inline string getStatusValue() const { DARABONBA_PTR_GET_DEFAULT(statusValue_, "") };
        inline StatusList& setStatusValue(string statusValue) { DARABONBA_PTR_SET_VALUE(statusValue_, statusValue) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline StatusList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> statusName_ {};
        shared_ptr<string> statusValue_ {};
        shared_ptr<string> updateTime_ {};
      };

      class SceneList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SceneList& obj) { 
          DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        };
        friend void from_json(const Darabonba::Json& j, SceneList& obj) { 
          DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        };
        SceneList() = default ;
        SceneList(const SceneList &) = default ;
        SceneList(SceneList &&) = default ;
        SceneList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SceneList() = default ;
        SceneList& operator=(const SceneList &) = default ;
        SceneList& operator=(SceneList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sceneName_ == nullptr; };
        // sceneName Field Functions 
        bool hasSceneName() const { return this->sceneName_ != nullptr;};
        void deleteSceneName() { this->sceneName_ = nullptr;};
        inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
        inline SceneList& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      protected:
        shared_ptr<string> sceneName_ {};
      };

      virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->roomNo_ == nullptr && this->sceneList_ == nullptr && this->statusList_ == nullptr; };
      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline Result& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline Result& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      // sceneList Field Functions 
      bool hasSceneList() const { return this->sceneList_ != nullptr;};
      void deleteSceneList() { this->sceneList_ = nullptr;};
      inline const vector<Result::SceneList> & getSceneList() const { DARABONBA_PTR_GET_CONST(sceneList_, vector<Result::SceneList>) };
      inline vector<Result::SceneList> getSceneList() { DARABONBA_PTR_GET(sceneList_, vector<Result::SceneList>) };
      inline Result& setSceneList(const vector<Result::SceneList> & sceneList) { DARABONBA_PTR_SET_VALUE(sceneList_, sceneList) };
      inline Result& setSceneList(vector<Result::SceneList> && sceneList) { DARABONBA_PTR_SET_RVALUE(sceneList_, sceneList) };


      // statusList Field Functions 
      bool hasStatusList() const { return this->statusList_ != nullptr;};
      void deleteStatusList() { this->statusList_ = nullptr;};
      inline const vector<Result::StatusList> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<Result::StatusList>) };
      inline vector<Result::StatusList> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<Result::StatusList>) };
      inline Result& setStatusList(const vector<Result::StatusList> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
      inline Result& setStatusList(vector<Result::StatusList> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    protected:
      shared_ptr<string> hotelId_ {};
      shared_ptr<string> roomNo_ {};
      shared_ptr<vector<Result::SceneList>> sceneList_ {};
      shared_ptr<vector<Result::StatusList>> statusList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryRoomStatusResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRoomStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRoomStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryRoomStatusResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryRoomStatusResponseBody::Result) };
    inline QueryRoomStatusResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryRoomStatusResponseBody::Result) };
    inline QueryRoomStatusResponseBody& setResult(const QueryRoomStatusResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryRoomStatusResponseBody& setResult(QueryRoomStatusResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryRoomStatusResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryRoomStatusResponseBody::Result> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif

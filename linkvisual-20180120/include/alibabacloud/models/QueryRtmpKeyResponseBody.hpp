// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRTMPKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRTMPKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryRtmpKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRtmpKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRtmpKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryRtmpKeyResponseBody() = default ;
    QueryRtmpKeyResponseBody(const QueryRtmpKeyResponseBody &) = default ;
    QueryRtmpKeyResponseBody(QueryRtmpKeyResponseBody &&) = default ;
    QueryRtmpKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRtmpKeyResponseBody() = default ;
    QueryRtmpKeyResponseBody& operator=(const QueryRtmpKeyResponseBody &) = default ;
    QueryRtmpKeyResponseBody& operator=(QueryRtmpKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PullAuthKey, pullAuthKey_);
        DARABONBA_PTR_TO_JSON(PullKeyExpireTime, pullKeyExpireTime_);
        DARABONBA_PTR_TO_JSON(PushAuthKey, pushAuthKey_);
        DARABONBA_PTR_TO_JSON(PushKeyExpireTime, pushKeyExpireTime_);
        DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PullAuthKey, pullAuthKey_);
        DARABONBA_PTR_FROM_JSON(PullKeyExpireTime, pullKeyExpireTime_);
        DARABONBA_PTR_FROM_JSON(PushAuthKey, pushAuthKey_);
        DARABONBA_PTR_FROM_JSON(PushKeyExpireTime, pushKeyExpireTime_);
        DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
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
      virtual bool empty() const override { return this->pullAuthKey_ == nullptr
        && this->pullKeyExpireTime_ == nullptr && this->pushAuthKey_ == nullptr && this->pushKeyExpireTime_ == nullptr && this->streamName_ == nullptr; };
      // pullAuthKey Field Functions 
      bool hasPullAuthKey() const { return this->pullAuthKey_ != nullptr;};
      void deletePullAuthKey() { this->pullAuthKey_ = nullptr;};
      inline string getPullAuthKey() const { DARABONBA_PTR_GET_DEFAULT(pullAuthKey_, "") };
      inline Data& setPullAuthKey(string pullAuthKey) { DARABONBA_PTR_SET_VALUE(pullAuthKey_, pullAuthKey) };


      // pullKeyExpireTime Field Functions 
      bool hasPullKeyExpireTime() const { return this->pullKeyExpireTime_ != nullptr;};
      void deletePullKeyExpireTime() { this->pullKeyExpireTime_ = nullptr;};
      inline int32_t getPullKeyExpireTime() const { DARABONBA_PTR_GET_DEFAULT(pullKeyExpireTime_, 0) };
      inline Data& setPullKeyExpireTime(int32_t pullKeyExpireTime) { DARABONBA_PTR_SET_VALUE(pullKeyExpireTime_, pullKeyExpireTime) };


      // pushAuthKey Field Functions 
      bool hasPushAuthKey() const { return this->pushAuthKey_ != nullptr;};
      void deletePushAuthKey() { this->pushAuthKey_ = nullptr;};
      inline string getPushAuthKey() const { DARABONBA_PTR_GET_DEFAULT(pushAuthKey_, "") };
      inline Data& setPushAuthKey(string pushAuthKey) { DARABONBA_PTR_SET_VALUE(pushAuthKey_, pushAuthKey) };


      // pushKeyExpireTime Field Functions 
      bool hasPushKeyExpireTime() const { return this->pushKeyExpireTime_ != nullptr;};
      void deletePushKeyExpireTime() { this->pushKeyExpireTime_ = nullptr;};
      inline int32_t getPushKeyExpireTime() const { DARABONBA_PTR_GET_DEFAULT(pushKeyExpireTime_, 0) };
      inline Data& setPushKeyExpireTime(int32_t pushKeyExpireTime) { DARABONBA_PTR_SET_VALUE(pushKeyExpireTime_, pushKeyExpireTime) };


      // streamName Field Functions 
      bool hasStreamName() const { return this->streamName_ != nullptr;};
      void deleteStreamName() { this->streamName_ = nullptr;};
      inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
      inline Data& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    protected:
      shared_ptr<string> pullAuthKey_ {};
      shared_ptr<int32_t> pullKeyExpireTime_ {};
      shared_ptr<string> pushAuthKey_ {};
      shared_ptr<int32_t> pushKeyExpireTime_ {};
      shared_ptr<string> streamName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryRtmpKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryRtmpKeyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryRtmpKeyResponseBody::Data) };
    inline QueryRtmpKeyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryRtmpKeyResponseBody::Data) };
    inline QueryRtmpKeyResponseBody& setData(const QueryRtmpKeyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryRtmpKeyResponseBody& setData(QueryRtmpKeyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryRtmpKeyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRtmpKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryRtmpKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryRtmpKeyResponseBody::Data> data_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVESTREAMINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVESTREAMINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryLiveStreamingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveStreamingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveStreamingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryLiveStreamingResponseBody() = default ;
    QueryLiveStreamingResponseBody(const QueryLiveStreamingResponseBody &) = default ;
    QueryLiveStreamingResponseBody(QueryLiveStreamingResponseBody &&) = default ;
    QueryLiveStreamingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveStreamingResponseBody() = default ;
    QueryLiveStreamingResponseBody& operator=(const QueryLiveStreamingResponseBody &) = default ;
    QueryLiveStreamingResponseBody& operator=(QueryLiveStreamingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(RelayDecryptKey, relayDecryptKey_);
        DARABONBA_PTR_TO_JSON(StunInfo, stunInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(RelayDecryptKey, relayDecryptKey_);
        DARABONBA_PTR_FROM_JSON(StunInfo, stunInfo_);
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
      virtual bool empty() const override { return this->path_ == nullptr
        && this->relayDecryptKey_ == nullptr && this->stunInfo_ == nullptr; };
      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Data& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // relayDecryptKey Field Functions 
      bool hasRelayDecryptKey() const { return this->relayDecryptKey_ != nullptr;};
      void deleteRelayDecryptKey() { this->relayDecryptKey_ = nullptr;};
      inline string getRelayDecryptKey() const { DARABONBA_PTR_GET_DEFAULT(relayDecryptKey_, "") };
      inline Data& setRelayDecryptKey(string relayDecryptKey) { DARABONBA_PTR_SET_VALUE(relayDecryptKey_, relayDecryptKey) };


      // stunInfo Field Functions 
      bool hasStunInfo() const { return this->stunInfo_ != nullptr;};
      void deleteStunInfo() { this->stunInfo_ = nullptr;};
      inline string getStunInfo() const { DARABONBA_PTR_GET_DEFAULT(stunInfo_, "") };
      inline Data& setStunInfo(string stunInfo) { DARABONBA_PTR_SET_VALUE(stunInfo_, stunInfo) };


    protected:
      // The live streaming playback URL.
      // >The playback URL is valid for 10 seconds.
      shared_ptr<string> path_ {};
      shared_ptr<string> relayDecryptKey_ {};
      shared_ptr<string> stunInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryLiveStreamingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryLiveStreamingResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryLiveStreamingResponseBody::Data) };
    inline QueryLiveStreamingResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryLiveStreamingResponseBody::Data) };
    inline QueryLiveStreamingResponseBody& setData(const QueryLiveStreamingResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryLiveStreamingResponseBody& setData(QueryLiveStreamingResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryLiveStreamingResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLiveStreamingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryLiveStreamingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // - **200**: The call is successful.
    // - Other values: error codes. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The playback URL information.
    shared_ptr<QueryLiveStreamingResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The globally unique ID that is generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // - **true**: The call is successful.
    // - **false**: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif

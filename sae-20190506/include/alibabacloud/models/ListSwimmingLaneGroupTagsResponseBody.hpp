// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSwimmingLaneGroupTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGroupTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGroupTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListSwimmingLaneGroupTagsResponseBody() = default ;
    ListSwimmingLaneGroupTagsResponseBody(const ListSwimmingLaneGroupTagsResponseBody &) = default ;
    ListSwimmingLaneGroupTagsResponseBody(ListSwimmingLaneGroupTagsResponseBody &&) = default ;
    ListSwimmingLaneGroupTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGroupTagsResponseBody() = default ;
    ListSwimmingLaneGroupTagsResponseBody& operator=(const ListSwimmingLaneGroupTagsResponseBody &) = default ;
    ListSwimmingLaneGroupTagsResponseBody& operator=(ListSwimmingLaneGroupTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      virtual bool empty() const override { return this->metadata_ == nullptr
        && this->tag_ == nullptr; };
      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
      inline Data& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // The metadata.
      shared_ptr<string> metadata_ {};
      // The label of the lane.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSwimmingLaneGroupTagsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSwimmingLaneGroupTagsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSwimmingLaneGroupTagsResponseBody::Data>) };
    inline vector<ListSwimmingLaneGroupTagsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSwimmingLaneGroupTagsResponseBody::Data>) };
    inline ListSwimmingLaneGroupTagsResponseBody& setData(const vector<ListSwimmingLaneGroupTagsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSwimmingLaneGroupTagsResponseBody& setData(vector<ListSwimmingLaneGroupTagsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSwimmingLaneGroupTagsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSwimmingLaneGroupTagsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSwimmingLaneGroupTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSwimmingLaneGroupTagsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListSwimmingLaneGroupTagsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code or the error code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: Redirection.
    // *   **4xx**: Request error.
    // *   **5xx**: Server error.
    shared_ptr<string> code_ {};
    // Responses.
    shared_ptr<vector<ListSwimmingLaneGroupTagsResponseBody::Data>> data_ {};
    // Error code. Valid values:
    // 
    // *   If the request is successful, no **ErrorCode** fields are returned.
    // *   Request failed: **ErrorCode** fields are returned. For more information, see **Error codes**.
    shared_ptr<string> errorCode_ {};
    // Additional information. Valid values:
    // 
    // *   The error message returned because the request is normal and **success** is returned.
    // *   If the request is abnormal, the specific exception error code is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Whether the data is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: Failed.
    shared_ptr<bool> success_ {};
    // The ID of the trace. This parameter is used to query the exact call information.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif

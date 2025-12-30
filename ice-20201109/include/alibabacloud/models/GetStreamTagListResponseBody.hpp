// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTREAMTAGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTREAMTAGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetStreamTagListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStreamTagListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamTagList, streamTagList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetStreamTagListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamTagList, streamTagList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetStreamTagListResponseBody() = default ;
    GetStreamTagListResponseBody(const GetStreamTagListResponseBody &) = default ;
    GetStreamTagListResponseBody(GetStreamTagListResponseBody &&) = default ;
    GetStreamTagListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStreamTagListResponseBody() = default ;
    GetStreamTagListResponseBody& operator=(const GetStreamTagListResponseBody &) = default ;
    GetStreamTagListResponseBody& operator=(GetStreamTagListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamTagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamTagList& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, StreamTagList& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      StreamTagList() = default ;
      StreamTagList(const StreamTagList &) = default ;
      StreamTagList(StreamTagList &&) = default ;
      StreamTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamTagList() = default ;
      StreamTagList& operator=(const StreamTagList &) = default ;
      StreamTagList& operator=(StreamTagList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->userData_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline StreamTagList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline StreamTagList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline StreamTagList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The end time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The start time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The user-defined data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->streamTagList_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetStreamTagListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetStreamTagListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStreamTagListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamTagList Field Functions 
    bool hasStreamTagList() const { return this->streamTagList_ != nullptr;};
    void deleteStreamTagList() { this->streamTagList_ = nullptr;};
    inline const vector<GetStreamTagListResponseBody::StreamTagList> & getStreamTagList() const { DARABONBA_PTR_GET_CONST(streamTagList_, vector<GetStreamTagListResponseBody::StreamTagList>) };
    inline vector<GetStreamTagListResponseBody::StreamTagList> getStreamTagList() { DARABONBA_PTR_GET(streamTagList_, vector<GetStreamTagListResponseBody::StreamTagList>) };
    inline GetStreamTagListResponseBody& setStreamTagList(const vector<GetStreamTagListResponseBody::StreamTagList> & streamTagList) { DARABONBA_PTR_SET_VALUE(streamTagList_, streamTagList) };
    inline GetStreamTagListResponseBody& setStreamTagList(vector<GetStreamTagListResponseBody::StreamTagList> && streamTagList) { DARABONBA_PTR_SET_RVALUE(streamTagList_, streamTagList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetStreamTagListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetStreamTagListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The return code.
    shared_ptr<string> code_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The tag information.
    shared_ptr<vector<GetStreamTagListResponseBody::StreamTagList>> streamTagList_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
    // The total number of entries that are returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

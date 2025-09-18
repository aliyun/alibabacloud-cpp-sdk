// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTREAMTAGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTREAMTAGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStreamTagListResponseBodyStreamTagList.hpp>
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
    virtual bool empty() const override { this->code_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->streamTagList_ != nullptr && this->success_ != nullptr && this->total_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetStreamTagListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetStreamTagListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStreamTagListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamTagList Field Functions 
    bool hasStreamTagList() const { return this->streamTagList_ != nullptr;};
    void deleteStreamTagList() { this->streamTagList_ = nullptr;};
    inline const vector<GetStreamTagListResponseBodyStreamTagList> & streamTagList() const { DARABONBA_PTR_GET_CONST(streamTagList_, vector<GetStreamTagListResponseBodyStreamTagList>) };
    inline vector<GetStreamTagListResponseBodyStreamTagList> streamTagList() { DARABONBA_PTR_GET(streamTagList_, vector<GetStreamTagListResponseBodyStreamTagList>) };
    inline GetStreamTagListResponseBody& setStreamTagList(const vector<GetStreamTagListResponseBodyStreamTagList> & streamTagList) { DARABONBA_PTR_SET_VALUE(streamTagList_, streamTagList) };
    inline GetStreamTagListResponseBody& setStreamTagList(vector<GetStreamTagListResponseBodyStreamTagList> && streamTagList) { DARABONBA_PTR_SET_RVALUE(streamTagList_, streamTagList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetStreamTagListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetStreamTagListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetStreamTagListResponseBodyStreamTagList>> streamTagList_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

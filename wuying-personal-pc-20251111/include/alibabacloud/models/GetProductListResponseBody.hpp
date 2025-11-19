// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProductListResponseBodyDisplayInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class GetProductListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DisplayInfo, displayInfo_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DisplayInfo, displayInfo_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    GetProductListResponseBody() = default ;
    GetProductListResponseBody(const GetProductListResponseBody &) = default ;
    GetProductListResponseBody(GetProductListResponseBody &&) = default ;
    GetProductListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductListResponseBody() = default ;
    GetProductListResponseBody& operator=(const GetProductListResponseBody &) = default ;
    GetProductListResponseBody& operator=(GetProductListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->displayInfo_ == nullptr && return this->maxResults_ == nullptr && return this->message_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr
        && return this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetProductListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // displayInfo Field Functions 
    bool hasDisplayInfo() const { return this->displayInfo_ != nullptr;};
    void deleteDisplayInfo() { this->displayInfo_ = nullptr;};
    inline const GetProductListResponseBodyDisplayInfo & displayInfo() const { DARABONBA_PTR_GET_CONST(displayInfo_, GetProductListResponseBodyDisplayInfo) };
    inline GetProductListResponseBodyDisplayInfo displayInfo() { DARABONBA_PTR_GET(displayInfo_, GetProductListResponseBodyDisplayInfo) };
    inline GetProductListResponseBody& setDisplayInfo(const GetProductListResponseBodyDisplayInfo & displayInfo) { DARABONBA_PTR_SET_VALUE(displayInfo_, displayInfo) };
    inline GetProductListResponseBody& setDisplayInfo(GetProductListResponseBodyDisplayInfo && displayInfo) { DARABONBA_PTR_SET_RVALUE(displayInfo_, displayInfo) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetProductListResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetProductListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetProductListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProductListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetProductListResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<GetProductListResponseBodyDisplayInfo> displayInfo_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif

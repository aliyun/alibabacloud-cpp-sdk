// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagResourcesResponseBodyTagResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    ListTagResourcesResponseBody() = default ;
    ListTagResourcesResponseBody(const ListTagResourcesResponseBody &) = default ;
    ListTagResourcesResponseBody(ListTagResourcesResponseBody &&) = default ;
    ListTagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesResponseBody() = default ;
    ListTagResourcesResponseBody& operator=(const ListTagResourcesResponseBody &) = default ;
    ListTagResourcesResponseBody& operator=(ListTagResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->tagResources_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTagResourcesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTagResourcesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTagResourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTagResourcesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const vector<ListTagResourcesResponseBodyTagResources> & tagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, vector<ListTagResourcesResponseBodyTagResources>) };
    inline vector<ListTagResourcesResponseBodyTagResources> tagResources() { DARABONBA_PTR_GET(tagResources_, vector<ListTagResourcesResponseBodyTagResources>) };
    inline ListTagResourcesResponseBody& setTagResources(const vector<ListTagResourcesResponseBodyTagResources> & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline ListTagResourcesResponseBody& setTagResources(vector<ListTagResourcesResponseBodyTagResources> && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

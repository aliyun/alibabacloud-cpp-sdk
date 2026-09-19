// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATECACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATECACHERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PublicTemplateCache.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class ListTemplateCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(templateCaches, templateCaches_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(templateCaches, templateCaches_);
    };
    ListTemplateCacheResponseBody() = default ;
    ListTemplateCacheResponseBody(const ListTemplateCacheResponseBody &) = default ;
    ListTemplateCacheResponseBody(ListTemplateCacheResponseBody &&) = default ;
    ListTemplateCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateCacheResponseBody() = default ;
    ListTemplateCacheResponseBody& operator=(const ListTemplateCacheResponseBody &) = default ;
    ListTemplateCacheResponseBody& operator=(ListTemplateCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->templateCaches_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTemplateCacheResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTemplateCacheResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTemplateCacheResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTemplateCacheResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplateCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateCaches Field Functions 
    bool hasTemplateCaches() const { return this->templateCaches_ != nullptr;};
    void deleteTemplateCaches() { this->templateCaches_ = nullptr;};
    inline const vector<PublicTemplateCache> & getTemplateCaches() const { DARABONBA_PTR_GET_CONST(templateCaches_, vector<PublicTemplateCache>) };
    inline vector<PublicTemplateCache> getTemplateCaches() { DARABONBA_PTR_GET(templateCaches_, vector<PublicTemplateCache>) };
    inline ListTemplateCacheResponseBody& setTemplateCaches(const vector<PublicTemplateCache> & templateCaches) { DARABONBA_PTR_SET_VALUE(templateCaches_, templateCaches) };
    inline ListTemplateCacheResponseBody& setTemplateCaches(vector<PublicTemplateCache> && templateCaches) { DARABONBA_PTR_SET_RVALUE(templateCaches_, templateCaches) };


  protected:
    // The error code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The maximum number of entries per page used in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The pagination token for the next page. This parameter is empty if no more results are available.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The list of template cache objects.
    shared_ptr<vector<PublicTemplateCache>> templateCaches_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif

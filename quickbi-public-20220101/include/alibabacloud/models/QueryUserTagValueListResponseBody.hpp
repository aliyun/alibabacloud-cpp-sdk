// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERTAGVALUELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERTAGVALUELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserTagValueListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserTagValueListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserTagValueListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUserTagValueListResponseBody() = default ;
    QueryUserTagValueListResponseBody(const QueryUserTagValueListResponseBody &) = default ;
    QueryUserTagValueListResponseBody(QueryUserTagValueListResponseBody &&) = default ;
    QueryUserTagValueListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserTagValueListResponseBody() = default ;
    QueryUserTagValueListResponseBody& operator=(const QueryUserTagValueListResponseBody &) = default ;
    QueryUserTagValueListResponseBody& operator=(QueryUserTagValueListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
        DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
      virtual bool empty() const override { return this->tagId_ == nullptr
        && this->tagName_ == nullptr && this->tagValue_ == nullptr; };
      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
      inline Result& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline Result& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Result& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // Tag ID.
      shared_ptr<string> tagId_ {};
      // Tag name.
      shared_ptr<string> tagName_ {};
      // The value of the tag.
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserTagValueListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryUserTagValueListResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryUserTagValueListResponseBody::Result>) };
    inline vector<QueryUserTagValueListResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryUserTagValueListResponseBody::Result>) };
    inline QueryUserTagValueListResponseBody& setResult(const vector<QueryUserTagValueListResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryUserTagValueListResponseBody& setResult(vector<QueryUserTagValueListResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUserTagValueListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The result of the request for a list of user tags and their values.
    shared_ptr<vector<QueryUserTagValueListResponseBody::Result>> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

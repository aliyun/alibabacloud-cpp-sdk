// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGVALUELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGVALUELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeTagValueListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagValueListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TagValues, tagValues_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagValueListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TagValues, tagValues_);
    };
    DescribeTagValueListResponseBody() = default ;
    DescribeTagValueListResponseBody(const DescribeTagValueListResponseBody &) = default ;
    DescribeTagValueListResponseBody(DescribeTagValueListResponseBody &&) = default ;
    DescribeTagValueListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagValueListResponseBody() = default ;
    DescribeTagValueListResponseBody& operator=(const DescribeTagValueListResponseBody &) = default ;
    DescribeTagValueListResponseBody& operator=(DescribeTagValueListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagValues& obj) { 
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, TagValues& obj) { 
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      TagValues() = default ;
      TagValues(const TagValues &) = default ;
      TagValues(TagValues &&) = default ;
      TagValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagValues() = default ;
      TagValues& operator=(const TagValues &) = default ;
      TagValues& operator=(TagValues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagValue_ == nullptr; };
      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline const vector<string> & getTagValue() const { DARABONBA_PTR_GET_CONST(tagValue_, vector<string>) };
      inline vector<string> getTagValue() { DARABONBA_PTR_GET(tagValue_, vector<string>) };
      inline TagValues& setTagValue(const vector<string> & tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };
      inline TagValues& setTagValue(vector<string> && tagValue) { DARABONBA_PTR_SET_RVALUE(tagValue_, tagValue) };


    protected:
      shared_ptr<vector<string>> tagValue_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tagValues_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeTagValueListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTagValueListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagValueListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeTagValueListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tagValues Field Functions 
    bool hasTagValues() const { return this->tagValues_ != nullptr;};
    void deleteTagValues() { this->tagValues_ = nullptr;};
    inline const DescribeTagValueListResponseBody::TagValues & getTagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, DescribeTagValueListResponseBody::TagValues) };
    inline DescribeTagValueListResponseBody::TagValues getTagValues() { DARABONBA_PTR_GET(tagValues_, DescribeTagValueListResponseBody::TagValues) };
    inline DescribeTagValueListResponseBody& setTagValues(const DescribeTagValueListResponseBody::TagValues & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
    inline DescribeTagValueListResponseBody& setTagValues(DescribeTagValueListResponseBody::TagValues && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    shared_ptr<DescribeTagValueListResponseBody::TagValues> tagValues_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

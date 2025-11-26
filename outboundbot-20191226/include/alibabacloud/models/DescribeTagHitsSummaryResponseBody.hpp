// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGHITSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGHITSSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagHitsSummaryResponseBodyTagGroups.hpp>
#include <alibabacloud/models/DescribeTagHitsSummaryResponseBodyTagHitsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeTagHitsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagHitsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TagGroups, tagGroups_);
      DARABONBA_PTR_TO_JSON(TagHitsList, tagHitsList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagHitsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TagGroups, tagGroups_);
      DARABONBA_PTR_FROM_JSON(TagHitsList, tagHitsList_);
    };
    DescribeTagHitsSummaryResponseBody() = default ;
    DescribeTagHitsSummaryResponseBody(const DescribeTagHitsSummaryResponseBody &) = default ;
    DescribeTagHitsSummaryResponseBody(DescribeTagHitsSummaryResponseBody &&) = default ;
    DescribeTagHitsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagHitsSummaryResponseBody() = default ;
    DescribeTagHitsSummaryResponseBody& operator=(const DescribeTagHitsSummaryResponseBody &) = default ;
    DescribeTagHitsSummaryResponseBody& operator=(DescribeTagHitsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->tagGroups_ == nullptr
        && return this->tagHitsList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeTagHitsSummaryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeTagHitsSummaryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTagHitsSummaryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagHitsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeTagHitsSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tagGroups Field Functions 
    bool hasTagGroups() const { return this->tagGroups_ != nullptr;};
    void deleteTagGroups() { this->tagGroups_ = nullptr;};
    inline const vector<DescribeTagHitsSummaryResponseBodyTagGroups> & tagGroups() const { DARABONBA_PTR_GET_CONST(tagGroups_, vector<DescribeTagHitsSummaryResponseBodyTagGroups>) };
    inline vector<DescribeTagHitsSummaryResponseBodyTagGroups> tagGroups() { DARABONBA_PTR_GET(tagGroups_, vector<DescribeTagHitsSummaryResponseBodyTagGroups>) };
    inline DescribeTagHitsSummaryResponseBody& setTagGroups(const vector<DescribeTagHitsSummaryResponseBodyTagGroups> & tagGroups) { DARABONBA_PTR_SET_VALUE(tagGroups_, tagGroups) };
    inline DescribeTagHitsSummaryResponseBody& setTagGroups(vector<DescribeTagHitsSummaryResponseBodyTagGroups> && tagGroups) { DARABONBA_PTR_SET_RVALUE(tagGroups_, tagGroups) };


    // tagHitsList Field Functions 
    bool hasTagHitsList() const { return this->tagHitsList_ != nullptr;};
    void deleteTagHitsList() { this->tagHitsList_ = nullptr;};
    inline const vector<DescribeTagHitsSummaryResponseBodyTagHitsList> & tagHitsList() const { DARABONBA_PTR_GET_CONST(tagHitsList_, vector<DescribeTagHitsSummaryResponseBodyTagHitsList>) };
    inline vector<DescribeTagHitsSummaryResponseBodyTagHitsList> tagHitsList() { DARABONBA_PTR_GET(tagHitsList_, vector<DescribeTagHitsSummaryResponseBodyTagHitsList>) };
    inline DescribeTagHitsSummaryResponseBody& setTagHitsList(const vector<DescribeTagHitsSummaryResponseBodyTagHitsList> & tagHitsList) { DARABONBA_PTR_SET_VALUE(tagHitsList_, tagHitsList) };
    inline DescribeTagHitsSummaryResponseBody& setTagHitsList(vector<DescribeTagHitsSummaryResponseBodyTagHitsList> && tagHitsList) { DARABONBA_PTR_SET_RVALUE(tagHitsList_, tagHitsList) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<DescribeTagHitsSummaryResponseBodyTagGroups>> tagGroups_ = nullptr;
    std::shared_ptr<vector<DescribeTagHitsSummaryResponseBodyTagHitsList>> tagHitsList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

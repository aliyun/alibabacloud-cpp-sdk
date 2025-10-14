// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDynamicTagRuleListResponseBodyTagGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeDynamicTagRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicTagRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TagGroupList, tagGroupList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicTagRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TagGroupList, tagGroupList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDynamicTagRuleListResponseBody() = default ;
    DescribeDynamicTagRuleListResponseBody(const DescribeDynamicTagRuleListResponseBody &) = default ;
    DescribeDynamicTagRuleListResponseBody(DescribeDynamicTagRuleListResponseBody &&) = default ;
    DescribeDynamicTagRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicTagRuleListResponseBody() = default ;
    DescribeDynamicTagRuleListResponseBody& operator=(const DescribeDynamicTagRuleListResponseBody &) = default ;
    DescribeDynamicTagRuleListResponseBody& operator=(DescribeDynamicTagRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->tagGroupList_ == nullptr && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDynamicTagRuleListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDynamicTagRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeDynamicTagRuleListResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeDynamicTagRuleListResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDynamicTagRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDynamicTagRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tagGroupList Field Functions 
    bool hasTagGroupList() const { return this->tagGroupList_ != nullptr;};
    void deleteTagGroupList() { this->tagGroupList_ = nullptr;};
    inline const DescribeDynamicTagRuleListResponseBodyTagGroupList & tagGroupList() const { DARABONBA_PTR_GET_CONST(tagGroupList_, DescribeDynamicTagRuleListResponseBodyTagGroupList) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupList tagGroupList() { DARABONBA_PTR_GET(tagGroupList_, DescribeDynamicTagRuleListResponseBodyTagGroupList) };
    inline DescribeDynamicTagRuleListResponseBody& setTagGroupList(const DescribeDynamicTagRuleListResponseBodyTagGroupList & tagGroupList) { DARABONBA_PTR_SET_VALUE(tagGroupList_, tagGroupList) };
    inline DescribeDynamicTagRuleListResponseBody& setTagGroupList(DescribeDynamicTagRuleListResponseBodyTagGroupList && tagGroupList) { DARABONBA_PTR_SET_RVALUE(tagGroupList_, tagGroupList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeDynamicTagRuleListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // *   true: The call was successful.
    // *   false: The call failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The tag rules of application groups.
    std::shared_ptr<DescribeDynamicTagRuleListResponseBodyTagGroupList> tagGroupList_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

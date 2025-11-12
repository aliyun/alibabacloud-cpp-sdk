// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeContactGroupListResponseBodyContactGroupList.hpp>
#include <alibabacloud/models/DescribeContactGroupListResponseBodyContactGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ContactGroupList, contactGroupList_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ContactGroupList, contactGroupList_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeContactGroupListResponseBody() = default ;
    DescribeContactGroupListResponseBody(const DescribeContactGroupListResponseBody &) = default ;
    DescribeContactGroupListResponseBody(DescribeContactGroupListResponseBody &&) = default ;
    DescribeContactGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactGroupListResponseBody() = default ;
    DescribeContactGroupListResponseBody& operator=(const DescribeContactGroupListResponseBody &) = default ;
    DescribeContactGroupListResponseBody& operator=(DescribeContactGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->contactGroupList_ == nullptr && return this->contactGroups_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeContactGroupListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contactGroupList Field Functions 
    bool hasContactGroupList() const { return this->contactGroupList_ != nullptr;};
    void deleteContactGroupList() { this->contactGroupList_ = nullptr;};
    inline const DescribeContactGroupListResponseBodyContactGroupList & contactGroupList() const { DARABONBA_PTR_GET_CONST(contactGroupList_, DescribeContactGroupListResponseBodyContactGroupList) };
    inline DescribeContactGroupListResponseBodyContactGroupList contactGroupList() { DARABONBA_PTR_GET(contactGroupList_, DescribeContactGroupListResponseBodyContactGroupList) };
    inline DescribeContactGroupListResponseBody& setContactGroupList(const DescribeContactGroupListResponseBodyContactGroupList & contactGroupList) { DARABONBA_PTR_SET_VALUE(contactGroupList_, contactGroupList) };
    inline DescribeContactGroupListResponseBody& setContactGroupList(DescribeContactGroupListResponseBodyContactGroupList && contactGroupList) { DARABONBA_PTR_SET_RVALUE(contactGroupList_, contactGroupList) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const DescribeContactGroupListResponseBodyContactGroups & contactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, DescribeContactGroupListResponseBodyContactGroups) };
    inline DescribeContactGroupListResponseBodyContactGroups contactGroups() { DARABONBA_PTR_GET(contactGroups_, DescribeContactGroupListResponseBodyContactGroups) };
    inline DescribeContactGroupListResponseBody& setContactGroups(const DescribeContactGroupListResponseBodyContactGroups & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline DescribeContactGroupListResponseBody& setContactGroups(DescribeContactGroupListResponseBodyContactGroups && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeContactGroupListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContactGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeContactGroupListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeContactGroupListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Status code. Note that 200 indicates success.
    std::shared_ptr<string> code_ = nullptr;
    // List of alarm contact groups.
    std::shared_ptr<DescribeContactGroupListResponseBodyContactGroupList> contactGroupList_ = nullptr;
    // List of alarm contact groups.
    std::shared_ptr<DescribeContactGroupListResponseBodyContactGroups> contactGroups_ = nullptr;
    // Return message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and problem localization.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the operation was successful. Values:
    // 
    // - true: Success.
    // 
    // - false: Failure.
    std::shared_ptr<bool> success_ = nullptr;
    // Total number of records.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

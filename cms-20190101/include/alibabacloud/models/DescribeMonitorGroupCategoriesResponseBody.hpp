// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPCATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPCATEGORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupCategoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupCategoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MonitorGroupCategories, monitorGroupCategories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupCategoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MonitorGroupCategories, monitorGroupCategories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMonitorGroupCategoriesResponseBody() = default ;
    DescribeMonitorGroupCategoriesResponseBody(const DescribeMonitorGroupCategoriesResponseBody &) = default ;
    DescribeMonitorGroupCategoriesResponseBody(DescribeMonitorGroupCategoriesResponseBody &&) = default ;
    DescribeMonitorGroupCategoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupCategoriesResponseBody() = default ;
    DescribeMonitorGroupCategoriesResponseBody& operator=(const DescribeMonitorGroupCategoriesResponseBody &) = default ;
    DescribeMonitorGroupCategoriesResponseBody& operator=(DescribeMonitorGroupCategoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->monitorGroupCategories_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeMonitorGroupCategoriesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitorGroupCategoriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // monitorGroupCategories Field Functions 
    bool hasMonitorGroupCategories() const { return this->monitorGroupCategories_ != nullptr;};
    void deleteMonitorGroupCategories() { this->monitorGroupCategories_ = nullptr;};
    inline const DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories & monitorGroupCategories() const { DARABONBA_PTR_GET_CONST(monitorGroupCategories_, DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories) };
    inline DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories monitorGroupCategories() { DARABONBA_PTR_GET(monitorGroupCategories_, DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories) };
    inline DescribeMonitorGroupCategoriesResponseBody& setMonitorGroupCategories(const DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories & monitorGroupCategories) { DARABONBA_PTR_SET_VALUE(monitorGroupCategories_, monitorGroupCategories) };
    inline DescribeMonitorGroupCategoriesResponseBody& setMonitorGroupCategories(DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories && monitorGroupCategories) { DARABONBA_PTR_SET_RVALUE(monitorGroupCategories_, monitorGroupCategories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorGroupCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitorGroupCategoriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The cloud services to which the resources in the application group belong and the number of resources that belong to the cloud service.
    std::shared_ptr<DescribeMonitorGroupCategoriesResponseBodyMonitorGroupCategories> monitorGroupCategories_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

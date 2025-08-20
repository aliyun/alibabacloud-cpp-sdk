// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYTASKSSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYTASKSSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHistoryTasksStatResponseBodyAccessDeniedDetail.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHistoryTasksStatResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeHistoryTasksStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryTasksStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryTasksStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeHistoryTasksStatResponseBody() = default ;
    DescribeHistoryTasksStatResponseBody(const DescribeHistoryTasksStatResponseBody &) = default ;
    DescribeHistoryTasksStatResponseBody(DescribeHistoryTasksStatResponseBody &&) = default ;
    DescribeHistoryTasksStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryTasksStatResponseBody() = default ;
    DescribeHistoryTasksStatResponseBody& operator=(const DescribeHistoryTasksStatResponseBody &) = default ;
    DescribeHistoryTasksStatResponseBody& operator=(DescribeHistoryTasksStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->code_ != nullptr && this->httpStatusCode_ != nullptr && this->items_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeHistoryTasksStatResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeHistoryTasksStatResponseBodyAccessDeniedDetail) };
    inline DescribeHistoryTasksStatResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeHistoryTasksStatResponseBodyAccessDeniedDetail) };
    inline DescribeHistoryTasksStatResponseBody& setAccessDeniedDetail(const DescribeHistoryTasksStatResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeHistoryTasksStatResponseBody& setAccessDeniedDetail(DescribeHistoryTasksStatResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHistoryTasksStatResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeHistoryTasksStatResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeHistoryTasksStatResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeHistoryTasksStatResponseBodyItems>) };
    inline vector<DescribeHistoryTasksStatResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeHistoryTasksStatResponseBodyItems>) };
    inline DescribeHistoryTasksStatResponseBody& setItems(const vector<DescribeHistoryTasksStatResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeHistoryTasksStatResponseBody& setItems(vector<DescribeHistoryTasksStatResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHistoryTasksStatResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHistoryTasksStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeHistoryTasksStatResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<DescribeHistoryTasksStatResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<vector<DescribeHistoryTasksStatResponseBodyItems>> items_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

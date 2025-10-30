// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPERATEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OperateInstanceResponseBodyInstanceStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OperateInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceStatusList, instanceStatusList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, OperateInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceStatusList, instanceStatusList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    OperateInstanceResponseBody() = default ;
    OperateInstanceResponseBody(const OperateInstanceResponseBody &) = default ;
    OperateInstanceResponseBody(OperateInstanceResponseBody &&) = default ;
    OperateInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateInstanceResponseBody() = default ;
    OperateInstanceResponseBody& operator=(const OperateInstanceResponseBody &) = default ;
    OperateInstanceResponseBody& operator=(OperateInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->instanceStatusList_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline OperateInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline OperateInstanceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceStatusList Field Functions 
    bool hasInstanceStatusList() const { return this->instanceStatusList_ != nullptr;};
    void deleteInstanceStatusList() { this->instanceStatusList_ = nullptr;};
    inline const vector<OperateInstanceResponseBodyInstanceStatusList> & instanceStatusList() const { DARABONBA_PTR_GET_CONST(instanceStatusList_, vector<OperateInstanceResponseBodyInstanceStatusList>) };
    inline vector<OperateInstanceResponseBodyInstanceStatusList> instanceStatusList() { DARABONBA_PTR_GET(instanceStatusList_, vector<OperateInstanceResponseBodyInstanceStatusList>) };
    inline OperateInstanceResponseBody& setInstanceStatusList(const vector<OperateInstanceResponseBodyInstanceStatusList> & instanceStatusList) { DARABONBA_PTR_SET_VALUE(instanceStatusList_, instanceStatusList) };
    inline OperateInstanceResponseBody& setInstanceStatusList(vector<OperateInstanceResponseBodyInstanceStatusList> && instanceStatusList) { DARABONBA_PTR_SET_RVALUE(instanceStatusList_, instanceStatusList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline OperateInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OperateInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline OperateInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<vector<OperateInstanceResponseBodyInstanceStatusList>> instanceStatusList_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

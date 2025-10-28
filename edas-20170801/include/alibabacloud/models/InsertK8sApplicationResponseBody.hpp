// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTK8SAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSERTK8SAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsertK8sApplicationResponseBodyApplicationInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertK8sApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertK8sApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationInfo, applicationInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertK8sApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationInfo, applicationInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InsertK8sApplicationResponseBody() = default ;
    InsertK8sApplicationResponseBody(const InsertK8sApplicationResponseBody &) = default ;
    InsertK8sApplicationResponseBody(InsertK8sApplicationResponseBody &&) = default ;
    InsertK8sApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertK8sApplicationResponseBody() = default ;
    InsertK8sApplicationResponseBody& operator=(const InsertK8sApplicationResponseBody &) = default ;
    InsertK8sApplicationResponseBody& operator=(InsertK8sApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationInfo_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // applicationInfo Field Functions 
    bool hasApplicationInfo() const { return this->applicationInfo_ != nullptr;};
    void deleteApplicationInfo() { this->applicationInfo_ = nullptr;};
    inline const InsertK8sApplicationResponseBodyApplicationInfo & applicationInfo() const { DARABONBA_PTR_GET_CONST(applicationInfo_, InsertK8sApplicationResponseBodyApplicationInfo) };
    inline InsertK8sApplicationResponseBodyApplicationInfo applicationInfo() { DARABONBA_PTR_GET(applicationInfo_, InsertK8sApplicationResponseBodyApplicationInfo) };
    inline InsertK8sApplicationResponseBody& setApplicationInfo(const InsertK8sApplicationResponseBodyApplicationInfo & applicationInfo) { DARABONBA_PTR_SET_VALUE(applicationInfo_, applicationInfo) };
    inline InsertK8sApplicationResponseBody& setApplicationInfo(InsertK8sApplicationResponseBodyApplicationInfo && applicationInfo) { DARABONBA_PTR_SET_RVALUE(applicationInfo_, applicationInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InsertK8sApplicationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsertK8sApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsertK8sApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the application.
    std::shared_ptr<InsertK8sApplicationResponseBodyApplicationInfo> applicationInfo_ = nullptr;
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

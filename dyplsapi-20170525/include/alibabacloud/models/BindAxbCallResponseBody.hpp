// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXBCALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDAXBCALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BindAXBCallResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAXBCallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAXBCallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BindAXBCallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BindAXBCallResponseBody() = default ;
    BindAXBCallResponseBody(const BindAXBCallResponseBody &) = default ;
    BindAXBCallResponseBody(BindAXBCallResponseBody &&) = default ;
    BindAXBCallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAXBCallResponseBody() = default ;
    BindAXBCallResponseBody& operator=(const BindAXBCallResponseBody &) = default ;
    BindAXBCallResponseBody& operator=(BindAXBCallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->code_ == nullptr && return this->data_ == nullptr && return this->message_ == nullptr && return this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline BindAXBCallResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BindAXBCallResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BindAXBCallResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, BindAXBCallResponseBodyData) };
    inline BindAXBCallResponseBodyData data() { DARABONBA_PTR_GET(data_, BindAXBCallResponseBodyData) };
    inline BindAXBCallResponseBody& setData(const BindAXBCallResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BindAXBCallResponseBody& setData(BindAXBCallResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindAXBCallResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BindAXBCallResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // 返回状态码 0000表示成功 其他表示失败
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<BindAXBCallResponseBodyData> data_ = nullptr;
    // 返回信息
    std::shared_ptr<string> message_ = nullptr;
    // 返回是否成功 true  表示成功 false表示失败
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif

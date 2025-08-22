// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERETCODEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERETCODEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRetcodeAppResponseBodyRetcodeAppDataBean.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateRetcodeAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRetcodeAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetcodeAppDataBean, retcodeAppDataBean_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRetcodeAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppDataBean, retcodeAppDataBean_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateRetcodeAppResponseBody() = default ;
    CreateRetcodeAppResponseBody(const CreateRetcodeAppResponseBody &) = default ;
    CreateRetcodeAppResponseBody(CreateRetcodeAppResponseBody &&) = default ;
    CreateRetcodeAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRetcodeAppResponseBody() = default ;
    CreateRetcodeAppResponseBody& operator=(const CreateRetcodeAppResponseBody &) = default ;
    CreateRetcodeAppResponseBody& operator=(CreateRetcodeAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->retcodeAppDataBean_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateRetcodeAppResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline CreateRetcodeAppResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateRetcodeAppResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRetcodeAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retcodeAppDataBean Field Functions 
    bool hasRetcodeAppDataBean() const { return this->retcodeAppDataBean_ != nullptr;};
    void deleteRetcodeAppDataBean() { this->retcodeAppDataBean_ = nullptr;};
    inline const CreateRetcodeAppResponseBodyRetcodeAppDataBean & retcodeAppDataBean() const { DARABONBA_PTR_GET_CONST(retcodeAppDataBean_, CreateRetcodeAppResponseBodyRetcodeAppDataBean) };
    inline CreateRetcodeAppResponseBodyRetcodeAppDataBean retcodeAppDataBean() { DARABONBA_PTR_GET(retcodeAppDataBean_, CreateRetcodeAppResponseBodyRetcodeAppDataBean) };
    inline CreateRetcodeAppResponseBody& setRetcodeAppDataBean(const CreateRetcodeAppResponseBodyRetcodeAppDataBean & retcodeAppDataBean) { DARABONBA_PTR_SET_VALUE(retcodeAppDataBean_, retcodeAppDataBean) };
    inline CreateRetcodeAppResponseBody& setRetcodeAppDataBean(CreateRetcodeAppResponseBodyRetcodeAppDataBean && retcodeAppDataBean) { DARABONBA_PTR_SET_RVALUE(retcodeAppDataBean_, retcodeAppDataBean) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateRetcodeAppResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. The status code 200 indicates that the request was successful. If another status code is returned, the request failed.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The response parameters.
    std::shared_ptr<string> data_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the Browser Monitoring task.
    std::shared_ptr<CreateRetcodeAppResponseBodyRetcodeAppDataBean> retcodeAppDataBean_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // - true: The call was successful.
    // - false: The call failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

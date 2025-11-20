// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLPLUGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLPLUGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InstallPluginResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class InstallPluginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallPluginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallPluginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    InstallPluginResponseBody() = default ;
    InstallPluginResponseBody(const InstallPluginResponseBody &) = default ;
    InstallPluginResponseBody(InstallPluginResponseBody &&) = default ;
    InstallPluginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallPluginResponseBody() = default ;
    InstallPluginResponseBody& operator=(const InstallPluginResponseBody &) = default ;
    InstallPluginResponseBody& operator=(InstallPluginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InstallPluginResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const InstallPluginResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, InstallPluginResponseBodyData) };
    inline InstallPluginResponseBodyData data() { DARABONBA_PTR_GET(data_, InstallPluginResponseBodyData) };
    inline InstallPluginResponseBody& setData(const InstallPluginResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InstallPluginResponseBody& setData(InstallPluginResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InstallPluginResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstallPluginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    std::shared_ptr<string> code_ = nullptr;
    // The response payload.
    std::shared_ptr<InstallPluginResponseBodyData> data_ = nullptr;
    // The status message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAGENTFORCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAGENTFORCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InstallAgentForClusterResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InstallAgentForClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAgentForClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAgentForClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    InstallAgentForClusterResponseBody() = default ;
    InstallAgentForClusterResponseBody(const InstallAgentForClusterResponseBody &) = default ;
    InstallAgentForClusterResponseBody(InstallAgentForClusterResponseBody &&) = default ;
    InstallAgentForClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAgentForClusterResponseBody() = default ;
    InstallAgentForClusterResponseBody& operator=(const InstallAgentForClusterResponseBody &) = default ;
    InstallAgentForClusterResponseBody& operator=(InstallAgentForClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->code_ != nullptr && this->data_ != nullptr && this->message_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstallAgentForClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InstallAgentForClusterResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const InstallAgentForClusterResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, InstallAgentForClusterResponseBodyData) };
    inline InstallAgentForClusterResponseBodyData data() { DARABONBA_PTR_GET(data_, InstallAgentForClusterResponseBodyData) };
    inline InstallAgentForClusterResponseBody& setData(const InstallAgentForClusterResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InstallAgentForClusterResponseBody& setData(InstallAgentForClusterResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InstallAgentForClusterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<InstallAgentForClusterResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif

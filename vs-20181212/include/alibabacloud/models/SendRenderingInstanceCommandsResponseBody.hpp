// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDRENDERINGINSTANCECOMMANDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDRENDERINGINSTANCECOMMANDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class SendRenderingInstanceCommandsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendRenderingInstanceCommandsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CmdId, cmdId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, SendRenderingInstanceCommandsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CmdId, cmdId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    SendRenderingInstanceCommandsResponseBody() = default ;
    SendRenderingInstanceCommandsResponseBody(const SendRenderingInstanceCommandsResponseBody &) = default ;
    SendRenderingInstanceCommandsResponseBody(SendRenderingInstanceCommandsResponseBody &&) = default ;
    SendRenderingInstanceCommandsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendRenderingInstanceCommandsResponseBody() = default ;
    SendRenderingInstanceCommandsResponseBody& operator=(const SendRenderingInstanceCommandsResponseBody &) = default ;
    SendRenderingInstanceCommandsResponseBody& operator=(SendRenderingInstanceCommandsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmdId_ == nullptr
        && return this->requestId_ == nullptr && return this->result_ == nullptr; };
    // cmdId Field Functions 
    bool hasCmdId() const { return this->cmdId_ != nullptr;};
    void deleteCmdId() { this->cmdId_ = nullptr;};
    inline string cmdId() const { DARABONBA_PTR_GET_DEFAULT(cmdId_, "") };
    inline SendRenderingInstanceCommandsResponseBody& setCmdId(string cmdId) { DARABONBA_PTR_SET_VALUE(cmdId_, cmdId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendRenderingInstanceCommandsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline SendRenderingInstanceCommandsResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> cmdId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif

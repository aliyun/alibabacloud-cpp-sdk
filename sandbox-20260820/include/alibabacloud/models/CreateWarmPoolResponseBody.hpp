// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWARMPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWARMPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicWarmPoolConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class CreateWarmPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWarmPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(warmPool, warmPool_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWarmPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(warmPool, warmPool_);
    };
    CreateWarmPoolResponseBody() = default ;
    CreateWarmPoolResponseBody(const CreateWarmPoolResponseBody &) = default ;
    CreateWarmPoolResponseBody(CreateWarmPoolResponseBody &&) = default ;
    CreateWarmPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWarmPoolResponseBody() = default ;
    CreateWarmPoolResponseBody& operator=(const CreateWarmPoolResponseBody &) = default ;
    CreateWarmPoolResponseBody& operator=(CreateWarmPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->warmPool_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateWarmPoolResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateWarmPoolResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWarmPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // warmPool Field Functions 
    bool hasWarmPool() const { return this->warmPool_ != nullptr;};
    void deleteWarmPool() { this->warmPool_ = nullptr;};
    inline const PublicWarmPoolConfig & getWarmPool() const { DARABONBA_PTR_GET_CONST(warmPool_, PublicWarmPoolConfig) };
    inline PublicWarmPoolConfig getWarmPool() { DARABONBA_PTR_GET(warmPool_, PublicWarmPoolConfig) };
    inline CreateWarmPoolResponseBody& setWarmPool(const PublicWarmPoolConfig & warmPool) { DARABONBA_PTR_SET_VALUE(warmPool_, warmPool) };
    inline CreateWarmPoolResponseBody& setWarmPool(PublicWarmPoolConfig && warmPool) { DARABONBA_PTR_SET_RVALUE(warmPool_, warmPool) };


  protected:
    // The response business code.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The warm pool configuration or current status.
    shared_ptr<PublicWarmPoolConfig> warmPool_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif

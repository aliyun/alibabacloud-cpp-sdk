// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGETOGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGETOGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SendMessageToGroupResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendMessageToGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageToGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageToGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    SendMessageToGroupResponseBody() = default ;
    SendMessageToGroupResponseBody(const SendMessageToGroupResponseBody &) = default ;
    SendMessageToGroupResponseBody(SendMessageToGroupResponseBody &&) = default ;
    SendMessageToGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageToGroupResponseBody() = default ;
    SendMessageToGroupResponseBody& operator=(const SendMessageToGroupResponseBody &) = default ;
    SendMessageToGroupResponseBody& operator=(SendMessageToGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendMessageToGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const SendMessageToGroupResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, SendMessageToGroupResponseBodyResult) };
    inline SendMessageToGroupResponseBodyResult result() { DARABONBA_PTR_GET(result_, SendMessageToGroupResponseBodyResult) };
    inline SendMessageToGroupResponseBody& setResult(const SendMessageToGroupResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline SendMessageToGroupResponseBody& setResult(SendMessageToGroupResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The data returned.
    std::shared_ptr<SendMessageToGroupResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

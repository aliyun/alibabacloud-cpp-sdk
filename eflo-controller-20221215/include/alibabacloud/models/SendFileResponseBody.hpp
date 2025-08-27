// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class SendFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SendFileResponseBody() = default ;
    SendFileResponseBody(const SendFileResponseBody &) = default ;
    SendFileResponseBody(SendFileResponseBody &&) = default ;
    SendFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendFileResponseBody() = default ;
    SendFileResponseBody& operator=(const SendFileResponseBody &) = default ;
    SendFileResponseBody& operator=(SendFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->invokeId_ != nullptr
        && this->requestId_ != nullptr; };
    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline SendFileResponseBody& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the execution.
    std::shared_ptr<string> invokeId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif

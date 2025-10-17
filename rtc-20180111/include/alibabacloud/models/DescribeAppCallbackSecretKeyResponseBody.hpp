// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPCALLBACKSECRETKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPCALLBACKSECRETKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppCallbackSecretKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppCallbackSecretKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackSecretKey, callbackSecretKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppCallbackSecretKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackSecretKey, callbackSecretKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAppCallbackSecretKeyResponseBody() = default ;
    DescribeAppCallbackSecretKeyResponseBody(const DescribeAppCallbackSecretKeyResponseBody &) = default ;
    DescribeAppCallbackSecretKeyResponseBody(DescribeAppCallbackSecretKeyResponseBody &&) = default ;
    DescribeAppCallbackSecretKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppCallbackSecretKeyResponseBody() = default ;
    DescribeAppCallbackSecretKeyResponseBody& operator=(const DescribeAppCallbackSecretKeyResponseBody &) = default ;
    DescribeAppCallbackSecretKeyResponseBody& operator=(DescribeAppCallbackSecretKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackSecretKey_ == nullptr
        && return this->requestId_ == nullptr; };
    // callbackSecretKey Field Functions 
    bool hasCallbackSecretKey() const { return this->callbackSecretKey_ != nullptr;};
    void deleteCallbackSecretKey() { this->callbackSecretKey_ = nullptr;};
    inline string callbackSecretKey() const { DARABONBA_PTR_GET_DEFAULT(callbackSecretKey_, "") };
    inline DescribeAppCallbackSecretKeyResponseBody& setCallbackSecretKey(string callbackSecretKey) { DARABONBA_PTR_SET_VALUE(callbackSecretKey_, callbackSecretKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppCallbackSecretKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> callbackSecretKey_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif

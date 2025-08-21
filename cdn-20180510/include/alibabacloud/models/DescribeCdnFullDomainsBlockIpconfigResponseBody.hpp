// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNFULLDOMAINSBLOCKIPCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNFULLDOMAINSBLOCKIPCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnFullDomainsBlockIPConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnFullDomainsBlockIPConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnFullDomainsBlockIPConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnFullDomainsBlockIPConfigResponseBody() = default ;
    DescribeCdnFullDomainsBlockIPConfigResponseBody(const DescribeCdnFullDomainsBlockIPConfigResponseBody &) = default ;
    DescribeCdnFullDomainsBlockIPConfigResponseBody(DescribeCdnFullDomainsBlockIPConfigResponseBody &&) = default ;
    DescribeCdnFullDomainsBlockIPConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnFullDomainsBlockIPConfigResponseBody() = default ;
    DescribeCdnFullDomainsBlockIPConfigResponseBody& operator=(const DescribeCdnFullDomainsBlockIPConfigResponseBody &) = default ;
    DescribeCdnFullDomainsBlockIPConfigResponseBody& operator=(DescribeCdnFullDomainsBlockIPConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeCdnFullDomainsBlockIPConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCdnFullDomainsBlockIPConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnFullDomainsBlockIPConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // The value of Code is not 0 in the following scenarios:
    // 
    // *   The format of the IP address is invalid.
    // *   The number of IP addresses exceeds the upper limit.
    // *   Other abnormal scenarios.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned results. If the operation is successful, URLs of OSS objects are returned. If the operation fails, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETACCESSKEYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETACCESSKEYPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetAccessKeyPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAccessKeyPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeyPolicy, accessKeyPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetAccessKeyPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeyPolicy, accessKeyPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetAccessKeyPolicyResponseBody() = default ;
    SetAccessKeyPolicyResponseBody(const SetAccessKeyPolicyResponseBody &) = default ;
    SetAccessKeyPolicyResponseBody(SetAccessKeyPolicyResponseBody &&) = default ;
    SetAccessKeyPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAccessKeyPolicyResponseBody() = default ;
    SetAccessKeyPolicyResponseBody& operator=(const SetAccessKeyPolicyResponseBody &) = default ;
    SetAccessKeyPolicyResponseBody& operator=(SetAccessKeyPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeyPolicy_ == nullptr && this->requestId_ == nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline SetAccessKeyPolicyResponseBody& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeyPolicy Field Functions 
    bool hasAccessKeyPolicy() const { return this->accessKeyPolicy_ != nullptr;};
    void deleteAccessKeyPolicy() { this->accessKeyPolicy_ = nullptr;};
    inline string getAccessKeyPolicy() const { DARABONBA_PTR_GET_DEFAULT(accessKeyPolicy_, "") };
    inline SetAccessKeyPolicyResponseBody& setAccessKeyPolicy(string accessKeyPolicy) { DARABONBA_PTR_SET_VALUE(accessKeyPolicy_, accessKeyPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetAccessKeyPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The AccessKey ID.
    shared_ptr<string> accessKeyId_ {};
    // The network access restriction policy.
    // 
    // A JSON-formatted string. For more information, see the AccessKeyPolicy structure description.
    shared_ptr<string> accessKeyPolicy_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

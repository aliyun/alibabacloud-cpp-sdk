// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYPOLICYFORACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYPOLICYFORACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccessKeyPolicyForAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyPolicyForAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyPolicy, accessKeyPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyPolicyForAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyPolicy, accessKeyPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyPolicyForAccountResponseBody() = default ;
    GetAccessKeyPolicyForAccountResponseBody(const GetAccessKeyPolicyForAccountResponseBody &) = default ;
    GetAccessKeyPolicyForAccountResponseBody(GetAccessKeyPolicyForAccountResponseBody &&) = default ;
    GetAccessKeyPolicyForAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyPolicyForAccountResponseBody() = default ;
    GetAccessKeyPolicyForAccountResponseBody& operator=(const GetAccessKeyPolicyForAccountResponseBody &) = default ;
    GetAccessKeyPolicyForAccountResponseBody& operator=(GetAccessKeyPolicyForAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKeyPolicy_ == nullptr
        && this->requestId_ == nullptr; };
    // accessKeyPolicy Field Functions 
    bool hasAccessKeyPolicy() const { return this->accessKeyPolicy_ != nullptr;};
    void deleteAccessKeyPolicy() { this->accessKeyPolicy_ = nullptr;};
    inline string getAccessKeyPolicy() const { DARABONBA_PTR_GET_DEFAULT(accessKeyPolicy_, "") };
    inline GetAccessKeyPolicyForAccountResponseBody& setAccessKeyPolicy(string accessKeyPolicy) { DARABONBA_PTR_SET_VALUE(accessKeyPolicy_, accessKeyPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyPolicyForAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The network access restriction policy. The value is a JSON-formatted string. For more information about the AccessKeyPolicy structure, see the SetAccessKeyPolicy documentation.
    shared_ptr<string> accessKeyPolicy_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

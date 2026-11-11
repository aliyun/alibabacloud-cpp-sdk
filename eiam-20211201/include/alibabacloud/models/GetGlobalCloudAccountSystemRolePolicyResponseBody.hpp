// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGLOBALCLOUDACCOUNTSYSTEMROLEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGLOBALCLOUDACCOUNTSYSTEMROLEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetGlobalCloudAccountSystemRolePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGlobalCloudAccountSystemRolePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGlobalCloudAccountSystemRolePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGlobalCloudAccountSystemRolePolicyResponseBody() = default ;
    GetGlobalCloudAccountSystemRolePolicyResponseBody(const GetGlobalCloudAccountSystemRolePolicyResponseBody &) = default ;
    GetGlobalCloudAccountSystemRolePolicyResponseBody(GetGlobalCloudAccountSystemRolePolicyResponseBody &&) = default ;
    GetGlobalCloudAccountSystemRolePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGlobalCloudAccountSystemRolePolicyResponseBody() = default ;
    GetGlobalCloudAccountSystemRolePolicyResponseBody& operator=(const GetGlobalCloudAccountSystemRolePolicyResponseBody &) = default ;
    GetGlobalCloudAccountSystemRolePolicyResponseBody& operator=(GetGlobalCloudAccountSystemRolePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyDocument_ == nullptr
        && this->requestId_ == nullptr; };
    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline GetGlobalCloudAccountSystemRolePolicyResponseBody& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGlobalCloudAccountSystemRolePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The access policy document for the global cloud account system role (JSON character string).
    // 
    // This parameter is required.
    shared_ptr<string> policyDocument_ {};
    // The unique identifier of the request.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

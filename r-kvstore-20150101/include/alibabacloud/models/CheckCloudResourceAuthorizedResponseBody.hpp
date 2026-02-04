// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCLOUDRESOURCEAUTHORIZEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCLOUDRESOURCEAUTHORIZEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class CheckCloudResourceAuthorizedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCloudResourceAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCloudResourceAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckCloudResourceAuthorizedResponseBody() = default ;
    CheckCloudResourceAuthorizedResponseBody(const CheckCloudResourceAuthorizedResponseBody &) = default ;
    CheckCloudResourceAuthorizedResponseBody(CheckCloudResourceAuthorizedResponseBody &&) = default ;
    CheckCloudResourceAuthorizedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCloudResourceAuthorizedResponseBody() = default ;
    CheckCloudResourceAuthorizedResponseBody& operator=(const CheckCloudResourceAuthorizedResponseBody &) = default ;
    CheckCloudResourceAuthorizedResponseBody& operator=(CheckCloudResourceAuthorizedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationState_ == nullptr
        && this->requestId_ == nullptr; };
    // authorizationState Field Functions 
    bool hasAuthorizationState() const { return this->authorizationState_ != nullptr;};
    void deleteAuthorizationState() { this->authorizationState_ = nullptr;};
    inline int32_t getAuthorizationState() const { DARABONBA_PTR_GET_DEFAULT(authorizationState_, 0) };
    inline CheckCloudResourceAuthorizedResponseBody& setAuthorizationState(int32_t authorizationState) { DARABONBA_PTR_SET_VALUE(authorizationState_, authorizationState) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCloudResourceAuthorizedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the instance is authorized to use KMS. Valid values:
    // 
    // *   **0**: The instance is authorized to use KMS.
    // *   **1**: The instance is not authorized to use KMS.
    // *   **2**: KMS is not activated. For more information, see [Activate KMS](https://help.aliyun.com/document_detail/153781.html).
    shared_ptr<int32_t> authorizationState_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif

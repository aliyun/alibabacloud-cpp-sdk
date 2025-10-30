// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdatePrivateAccessPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdatePrivateAccessPolicyResponseBody() = default ;
    UpdatePrivateAccessPolicyResponseBody(const UpdatePrivateAccessPolicyResponseBody &) = default ;
    UpdatePrivateAccessPolicyResponseBody(UpdatePrivateAccessPolicyResponseBody &&) = default ;
    UpdatePrivateAccessPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateAccessPolicyResponseBody() = default ;
    UpdatePrivateAccessPolicyResponseBody& operator=(const UpdatePrivateAccessPolicyResponseBody &) = default ;
    UpdatePrivateAccessPolicyResponseBody& operator=(UpdatePrivateAccessPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePrivateAccessPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

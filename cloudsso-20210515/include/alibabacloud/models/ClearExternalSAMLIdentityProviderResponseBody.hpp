// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEAREXTERNALSAMLIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLEAREXTERNALSAMLIDENTITYPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ClearExternalSAMLIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearExternalSAMLIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClearExternalSAMLIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClearExternalSAMLIdentityProviderResponseBody() = default ;
    ClearExternalSAMLIdentityProviderResponseBody(const ClearExternalSAMLIdentityProviderResponseBody &) = default ;
    ClearExternalSAMLIdentityProviderResponseBody(ClearExternalSAMLIdentityProviderResponseBody &&) = default ;
    ClearExternalSAMLIdentityProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearExternalSAMLIdentityProviderResponseBody() = default ;
    ClearExternalSAMLIdentityProviderResponseBody& operator=(const ClearExternalSAMLIdentityProviderResponseBody &) = default ;
    ClearExternalSAMLIdentityProviderResponseBody& operator=(ClearExternalSAMLIdentityProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClearExternalSAMLIdentityProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif

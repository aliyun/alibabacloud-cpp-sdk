// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPIKEYCREDENTIALPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPIKEYCREDENTIALPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class DeleteAPIKeyCredentialProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAPIKeyCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAPIKeyCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAPIKeyCredentialProviderResponseBody() = default ;
    DeleteAPIKeyCredentialProviderResponseBody(const DeleteAPIKeyCredentialProviderResponseBody &) = default ;
    DeleteAPIKeyCredentialProviderResponseBody(DeleteAPIKeyCredentialProviderResponseBody &&) = default ;
    DeleteAPIKeyCredentialProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAPIKeyCredentialProviderResponseBody() = default ;
    DeleteAPIKeyCredentialProviderResponseBody& operator=(const DeleteAPIKeyCredentialProviderResponseBody &) = default ;
    DeleteAPIKeyCredentialProviderResponseBody& operator=(DeleteAPIKeyCredentialProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAPIKeyCredentialProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif

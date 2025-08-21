// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESAMLPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESAMLPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateSAMLProviderResponseBodySAMLProvider.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateSAMLProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSAMLProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SAMLProvider, SAMLProvider_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSAMLProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SAMLProvider, SAMLProvider_);
    };
    UpdateSAMLProviderResponseBody() = default ;
    UpdateSAMLProviderResponseBody(const UpdateSAMLProviderResponseBody &) = default ;
    UpdateSAMLProviderResponseBody(UpdateSAMLProviderResponseBody &&) = default ;
    UpdateSAMLProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSAMLProviderResponseBody() = default ;
    UpdateSAMLProviderResponseBody& operator=(const UpdateSAMLProviderResponseBody &) = default ;
    UpdateSAMLProviderResponseBody& operator=(UpdateSAMLProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->SAMLProvider_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateSAMLProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SAMLProvider Field Functions 
    bool hasSAMLProvider() const { return this->SAMLProvider_ != nullptr;};
    void deleteSAMLProvider() { this->SAMLProvider_ = nullptr;};
    inline const UpdateSAMLProviderResponseBodySAMLProvider & SAMLProvider() const { DARABONBA_PTR_GET_CONST(SAMLProvider_, UpdateSAMLProviderResponseBodySAMLProvider) };
    inline UpdateSAMLProviderResponseBodySAMLProvider SAMLProvider() { DARABONBA_PTR_GET(SAMLProvider_, UpdateSAMLProviderResponseBodySAMLProvider) };
    inline UpdateSAMLProviderResponseBody& setSAMLProvider(const UpdateSAMLProviderResponseBodySAMLProvider & SAMLProvider) { DARABONBA_PTR_SET_VALUE(SAMLProvider_, SAMLProvider) };
    inline UpdateSAMLProviderResponseBody& setSAMLProvider(UpdateSAMLProviderResponseBodySAMLProvider && SAMLProvider) { DARABONBA_PTR_SET_RVALUE(SAMLProvider_, SAMLProvider) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the IdP.
    std::shared_ptr<UpdateSAMLProviderResponseBodySAMLProvider> SAMLProvider_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

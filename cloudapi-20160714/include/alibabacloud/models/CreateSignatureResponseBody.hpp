// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIGNATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESIGNATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateSignatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSignatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSignatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
    };
    CreateSignatureResponseBody() = default ;
    CreateSignatureResponseBody(const CreateSignatureResponseBody &) = default ;
    CreateSignatureResponseBody(CreateSignatureResponseBody &&) = default ;
    CreateSignatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSignatureResponseBody() = default ;
    CreateSignatureResponseBody& operator=(const CreateSignatureResponseBody &) = default ;
    CreateSignatureResponseBody& operator=(CreateSignatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->signatureId_ == nullptr && return this->signatureName_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSignatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signatureId Field Functions 
    bool hasSignatureId() const { return this->signatureId_ != nullptr;};
    void deleteSignatureId() { this->signatureId_ = nullptr;};
    inline string signatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
    inline CreateSignatureResponseBody& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


    // signatureName Field Functions 
    bool hasSignatureName() const { return this->signatureName_ != nullptr;};
    void deleteSignatureName() { this->signatureName_ = nullptr;};
    inline string signatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
    inline CreateSignatureResponseBody& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the back-end signature key.
    std::shared_ptr<string> signatureId_ = nullptr;
    // The name of the back-end signature key.
    std::shared_ptr<string> signatureName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

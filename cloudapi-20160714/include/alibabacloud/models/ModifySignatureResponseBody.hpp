// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSIGNATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSIGNATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifySignatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySignatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySignatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
    };
    ModifySignatureResponseBody() = default ;
    ModifySignatureResponseBody(const ModifySignatureResponseBody &) = default ;
    ModifySignatureResponseBody(ModifySignatureResponseBody &&) = default ;
    ModifySignatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySignatureResponseBody() = default ;
    ModifySignatureResponseBody& operator=(const ModifySignatureResponseBody &) = default ;
    ModifySignatureResponseBody& operator=(ModifySignatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->signatureId_ == nullptr && this->signatureName_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySignatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signatureId Field Functions 
    bool hasSignatureId() const { return this->signatureId_ != nullptr;};
    void deleteSignatureId() { this->signatureId_ = nullptr;};
    inline string getSignatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
    inline ModifySignatureResponseBody& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


    // signatureName Field Functions 
    bool hasSignatureName() const { return this->signatureName_ != nullptr;};
    void deleteSignatureName() { this->signatureName_ = nullptr;};
    inline string getSignatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
    inline ModifySignatureResponseBody& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the key.
    shared_ptr<string> signatureId_ {};
    // The name of the key.
    shared_ptr<string> signatureName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

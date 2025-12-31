// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEPRIVATEKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEPRIVATEKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeCertificatePrivateKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificatePrivateKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedData, encryptedData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificatePrivateKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedData, encryptedData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCertificatePrivateKeyResponseBody() = default ;
    DescribeCertificatePrivateKeyResponseBody(const DescribeCertificatePrivateKeyResponseBody &) = default ;
    DescribeCertificatePrivateKeyResponseBody(DescribeCertificatePrivateKeyResponseBody &&) = default ;
    DescribeCertificatePrivateKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificatePrivateKeyResponseBody() = default ;
    DescribeCertificatePrivateKeyResponseBody& operator=(const DescribeCertificatePrivateKeyResponseBody &) = default ;
    DescribeCertificatePrivateKeyResponseBody& operator=(DescribeCertificatePrivateKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptedData_ == nullptr
        && this->requestId_ == nullptr; };
    // encryptedData Field Functions 
    bool hasEncryptedData() const { return this->encryptedData_ != nullptr;};
    void deleteEncryptedData() { this->encryptedData_ = nullptr;};
    inline string getEncryptedData() const { DARABONBA_PTR_GET_DEFAULT(encryptedData_, "") };
    inline DescribeCertificatePrivateKeyResponseBody& setEncryptedData(string encryptedData) { DARABONBA_PTR_SET_VALUE(encryptedData_, encryptedData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCertificatePrivateKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the encrypted private key.
    shared_ptr<string> encryptedData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif

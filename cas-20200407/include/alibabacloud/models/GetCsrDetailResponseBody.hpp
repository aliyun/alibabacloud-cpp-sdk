// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCSRDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCSRDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetCsrDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCsrDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCsrDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCsrDetailResponseBody() = default ;
    GetCsrDetailResponseBody(const GetCsrDetailResponseBody &) = default ;
    GetCsrDetailResponseBody(GetCsrDetailResponseBody &&) = default ;
    GetCsrDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCsrDetailResponseBody() = default ;
    GetCsrDetailResponseBody& operator=(const GetCsrDetailResponseBody &) = default ;
    GetCsrDetailResponseBody& operator=(GetCsrDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->csr_ != nullptr
        && this->privateKey_ != nullptr && this->requestId_ != nullptr; };
    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline GetCsrDetailResponseBody& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline GetCsrDetailResponseBody& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCsrDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the CSR.
    std::shared_ptr<string> csr_ = nullptr;
    // The private key. Specify a Base64-encoded string.
    std::shared_ptr<string> privateKey_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

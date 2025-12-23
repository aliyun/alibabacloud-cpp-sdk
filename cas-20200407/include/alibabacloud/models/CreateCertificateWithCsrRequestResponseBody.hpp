// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECERTIFICATEWITHCSRREQUESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECERTIFICATEWITHCSRREQUESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateCertificateWithCsrRequestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCertificateWithCsrRequestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCertificateWithCsrRequestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCertificateWithCsrRequestResponseBody() = default ;
    CreateCertificateWithCsrRequestResponseBody(const CreateCertificateWithCsrRequestResponseBody &) = default ;
    CreateCertificateWithCsrRequestResponseBody(CreateCertificateWithCsrRequestResponseBody &&) = default ;
    CreateCertificateWithCsrRequestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCertificateWithCsrRequestResponseBody() = default ;
    CreateCertificateWithCsrRequestResponseBody& operator=(const CreateCertificateWithCsrRequestResponseBody &) = default ;
    CreateCertificateWithCsrRequestResponseBody& operator=(CreateCertificateWithCsrRequestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && return this->requestId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateCertificateWithCsrRequestResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCertificateWithCsrRequestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the certificate application order.
    // 
    // >  You can use the ID to query the status of the certificate application. For more information, see [DescribeCertificateState](https://help.aliyun.com/document_detail/164111.html).
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

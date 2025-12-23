// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECERTIFICATEREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECERTIFICATEREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DeleteCertificateRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCertificateRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCertificateRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    DeleteCertificateRequestRequest() = default ;
    DeleteCertificateRequestRequest(const DeleteCertificateRequestRequest &) = default ;
    DeleteCertificateRequestRequest(DeleteCertificateRequestRequest &&) = default ;
    DeleteCertificateRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCertificateRequestRequest() = default ;
    DeleteCertificateRequestRequest& operator=(const DeleteCertificateRequestRequest &) = default ;
    DeleteCertificateRequestRequest& operator=(DeleteCertificateRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DeleteCertificateRequestRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The ID of the certificate application order that you want to delete.
    // 
    // >  After you call the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/455296.html), [CreateCertificateRequest](https://help.aliyun.com/document_detail/455292.html), or [CreateCertificateWithCsrRequest](https://help.aliyun.com/document_detail/455801.html) operation to submit a certificate application, you can obtain the ID of the certificate application order from the **OrderId** response parameter. You can also call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/455804.html) operation to obtain the order ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

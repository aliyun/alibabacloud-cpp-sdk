// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATESTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATESTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribeCertificateStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificateStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificateStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    DescribeCertificateStateRequest() = default ;
    DescribeCertificateStateRequest(const DescribeCertificateStateRequest &) = default ;
    DescribeCertificateStateRequest(DescribeCertificateStateRequest &&) = default ;
    DescribeCertificateStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificateStateRequest() = default ;
    DescribeCertificateStateRequest& operator=(const DescribeCertificateStateRequest &) = default ;
    DescribeCertificateStateRequest& operator=(DescribeCertificateStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DescribeCertificateStateRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // The ID of the certificate application order that you want to query.
    // 
    // >  You can call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/455804.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeClientCertificateStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientCertificateStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientCertificateStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
    };
    DescribeClientCertificateStatusRequest() = default ;
    DescribeClientCertificateStatusRequest(const DescribeClientCertificateStatusRequest &) = default ;
    DescribeClientCertificateStatusRequest(DescribeClientCertificateStatusRequest &&) = default ;
    DescribeClientCertificateStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientCertificateStatusRequest() = default ;
    DescribeClientCertificateStatusRequest& operator=(const DescribeClientCertificateStatusRequest &) = default ;
    DescribeClientCertificateStatusRequest& operator=(DescribeClientCertificateStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribeClientCertificateStatusRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    // The unique identifier of the client or server-side certificate that you want to query. Separate multiple identifiers with commas (,).
    // 
    // > Call [ListClientCertificate](https://help.aliyun.com/document_detail/465990.html) to query the unique identifiers of all client and server-side certificates.
    // 
    // This parameter is required.
    shared_ptr<string> identifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif

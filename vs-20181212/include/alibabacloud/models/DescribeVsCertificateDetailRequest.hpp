// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCERTIFICATEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCERTIFICATEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsCertificateDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsCertificateDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsCertificateDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DescribeVsCertificateDetailRequest() = default ;
    DescribeVsCertificateDetailRequest(const DescribeVsCertificateDetailRequest &) = default ;
    DescribeVsCertificateDetailRequest(DescribeVsCertificateDetailRequest &&) = default ;
    DescribeVsCertificateDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsCertificateDetailRequest() = default ;
    DescribeVsCertificateDetailRequest& operator=(const DescribeVsCertificateDetailRequest &) = default ;
    DescribeVsCertificateDetailRequest& operator=(DescribeVsCertificateDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certName_ == nullptr
        && this->ownerId_ == nullptr; };
    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeVsCertificateDetailRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVsCertificateDetailRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> certName_ {};
    shared_ptr<int64_t> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif

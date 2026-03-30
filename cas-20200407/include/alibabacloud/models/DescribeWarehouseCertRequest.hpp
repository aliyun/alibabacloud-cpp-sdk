// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAREHOUSECERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAREHOUSECERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribeWarehouseCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWarehouseCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWarehouseCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
    };
    DescribeWarehouseCertRequest() = default ;
    DescribeWarehouseCertRequest(const DescribeWarehouseCertRequest &) = default ;
    DescribeWarehouseCertRequest(DescribeWarehouseCertRequest &&) = default ;
    DescribeWarehouseCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWarehouseCertRequest() = default ;
    DescribeWarehouseCertRequest& operator=(const DescribeWarehouseCertRequest &) = default ;
    DescribeWarehouseCertRequest& operator=(DescribeWarehouseCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIdentifier_ == nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DescribeWarehouseCertRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


  protected:
    shared_ptr<string> certIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

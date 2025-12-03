// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATESRESPONSEBODYCACERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATESRESPONSEBODYCACERTIFICATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCACertificatesResponseBodyCACertificatesCACertificate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeCACertificatesResponseBodyCACertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCACertificatesResponseBodyCACertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CACertificate, CACertificate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCACertificatesResponseBodyCACertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CACertificate, CACertificate_);
    };
    DescribeCACertificatesResponseBodyCACertificates() = default ;
    DescribeCACertificatesResponseBodyCACertificates(const DescribeCACertificatesResponseBodyCACertificates &) = default ;
    DescribeCACertificatesResponseBodyCACertificates(DescribeCACertificatesResponseBodyCACertificates &&) = default ;
    DescribeCACertificatesResponseBodyCACertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCACertificatesResponseBodyCACertificates() = default ;
    DescribeCACertificatesResponseBodyCACertificates& operator=(const DescribeCACertificatesResponseBodyCACertificates &) = default ;
    DescribeCACertificatesResponseBodyCACertificates& operator=(DescribeCACertificatesResponseBodyCACertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CACertificate_ == nullptr; };
    // CACertificate Field Functions 
    bool hasCACertificate() const { return this->CACertificate_ != nullptr;};
    void deleteCACertificate() { this->CACertificate_ = nullptr;};
    inline const vector<Models::DescribeCACertificatesResponseBodyCACertificatesCACertificate> & CACertificate() const { DARABONBA_PTR_GET_CONST(CACertificate_, vector<Models::DescribeCACertificatesResponseBodyCACertificatesCACertificate>) };
    inline vector<Models::DescribeCACertificatesResponseBodyCACertificatesCACertificate> CACertificate() { DARABONBA_PTR_GET(CACertificate_, vector<Models::DescribeCACertificatesResponseBodyCACertificatesCACertificate>) };
    inline DescribeCACertificatesResponseBodyCACertificates& setCACertificate(const vector<Models::DescribeCACertificatesResponseBodyCACertificatesCACertificate> & CACertificate) { DARABONBA_PTR_SET_VALUE(CACertificate_, CACertificate) };
    inline DescribeCACertificatesResponseBodyCACertificates& setCACertificate(vector<Models::DescribeCACertificatesResponseBodyCACertificatesCACertificate> && CACertificate) { DARABONBA_PTR_SET_RVALUE(CACertificate_, CACertificate) };


  protected:
    std::shared_ptr<vector<Models::DescribeCACertificatesResponseBodyCACertificatesCACertificate>> CACertificate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif

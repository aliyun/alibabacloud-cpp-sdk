// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNCERTIFICATECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNCERTIFICATECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class AssignCertificateCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignCertificateCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertTotalCount, certTotalCount_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, AssignCertificateCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertTotalCount, certTotalCount_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    AssignCertificateCountRequest() = default ;
    AssignCertificateCountRequest(const AssignCertificateCountRequest &) = default ;
    AssignCertificateCountRequest(AssignCertificateCountRequest &&) = default ;
    AssignCertificateCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignCertificateCountRequest() = default ;
    AssignCertificateCountRequest& operator=(const AssignCertificateCountRequest &) = default ;
    AssignCertificateCountRequest& operator=(AssignCertificateCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certTotalCount_ == nullptr
        && this->id_ == nullptr; };
    // certTotalCount Field Functions 
    bool hasCertTotalCount() const { return this->certTotalCount_ != nullptr;};
    void deleteCertTotalCount() { this->certTotalCount_ = nullptr;};
    inline int32_t getCertTotalCount() const { DARABONBA_PTR_GET_DEFAULT(certTotalCount_, 0) };
    inline AssignCertificateCountRequest& setCertTotalCount(int32_t certTotalCount) { DARABONBA_PTR_SET_VALUE(certTotalCount_, certTotalCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AssignCertificateCountRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<int32_t> certTotalCount_ {};
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif

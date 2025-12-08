// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNCERTIFICATECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNCERTIFICATECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class AssignCertificateCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignCertificateCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertCount, certCount_);
      DARABONBA_PTR_TO_JSON(CurrentYearFreeCertCount, currentYearFreeCertCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssignCertificateCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCount, certCount_);
      DARABONBA_PTR_FROM_JSON(CurrentYearFreeCertCount, currentYearFreeCertCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssignCertificateCountResponseBody() = default ;
    AssignCertificateCountResponseBody(const AssignCertificateCountResponseBody &) = default ;
    AssignCertificateCountResponseBody(AssignCertificateCountResponseBody &&) = default ;
    AssignCertificateCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignCertificateCountResponseBody() = default ;
    AssignCertificateCountResponseBody& operator=(const AssignCertificateCountResponseBody &) = default ;
    AssignCertificateCountResponseBody& operator=(AssignCertificateCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certCount_ == nullptr
        && return this->currentYearFreeCertCount_ == nullptr && return this->requestId_ == nullptr; };
    // certCount Field Functions 
    bool hasCertCount() const { return this->certCount_ != nullptr;};
    void deleteCertCount() { this->certCount_ = nullptr;};
    inline int32_t certCount() const { DARABONBA_PTR_GET_DEFAULT(certCount_, 0) };
    inline AssignCertificateCountResponseBody& setCertCount(int32_t certCount) { DARABONBA_PTR_SET_VALUE(certCount_, certCount) };


    // currentYearFreeCertCount Field Functions 
    bool hasCurrentYearFreeCertCount() const { return this->currentYearFreeCertCount_ != nullptr;};
    void deleteCurrentYearFreeCertCount() { this->currentYearFreeCertCount_ = nullptr;};
    inline int32_t currentYearFreeCertCount() const { DARABONBA_PTR_GET_DEFAULT(currentYearFreeCertCount_, 0) };
    inline AssignCertificateCountResponseBody& setCurrentYearFreeCertCount(int32_t currentYearFreeCertCount) { DARABONBA_PTR_SET_VALUE(currentYearFreeCertCount_, currentYearFreeCertCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssignCertificateCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> certCount_ = nullptr;
    std::shared_ptr<int32_t> currentYearFreeCertCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCERTIFICATERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_APPLYCERTIFICATERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ApplyCertificateResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCertificateResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCertificateResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ApplyCertificateResponseBodyResult() = default ;
    ApplyCertificateResponseBodyResult(const ApplyCertificateResponseBodyResult &) = default ;
    ApplyCertificateResponseBodyResult(ApplyCertificateResponseBodyResult &&) = default ;
    ApplyCertificateResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCertificateResponseBodyResult() = default ;
    ApplyCertificateResponseBodyResult& operator=(const ApplyCertificateResponseBodyResult &) = default ;
    ApplyCertificateResponseBodyResult& operator=(ApplyCertificateResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->id_ != nullptr && this->status_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ApplyCertificateResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ApplyCertificateResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ApplyCertificateResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Certificate domain.
    std::shared_ptr<string> domain_ = nullptr;
    // Certificate ID.
    std::shared_ptr<string> id_ = nullptr;
    // Status of the certificate application.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

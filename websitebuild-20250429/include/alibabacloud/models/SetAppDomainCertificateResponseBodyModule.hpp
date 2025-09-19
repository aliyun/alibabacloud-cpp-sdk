// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPDOMAINCERTIFICATERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_SETAPPDOMAINCERTIFICATERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SetAppDomainCertificateResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAppDomainCertificateResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SetAppDomainCertificateResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SetAppDomainCertificateResponseBodyModule() = default ;
    SetAppDomainCertificateResponseBodyModule(const SetAppDomainCertificateResponseBodyModule &) = default ;
    SetAppDomainCertificateResponseBodyModule(SetAppDomainCertificateResponseBodyModule &&) = default ;
    SetAppDomainCertificateResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAppDomainCertificateResponseBodyModule() = default ;
    SetAppDomainCertificateResponseBodyModule& operator=(const SetAppDomainCertificateResponseBodyModule &) = default ;
    SetAppDomainCertificateResponseBodyModule& operator=(SetAppDomainCertificateResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->success_ != nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SetAppDomainCertificateResponseBodyModule& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif

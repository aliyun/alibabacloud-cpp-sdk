// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAPPDOMAINRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_BINDAPPDOMAINRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class BindAppDomainResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAppDomainResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BindAppDomainResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BindAppDomainResponseBodyModule() = default ;
    BindAppDomainResponseBodyModule(const BindAppDomainResponseBodyModule &) = default ;
    BindAppDomainResponseBodyModule(BindAppDomainResponseBodyModule &&) = default ;
    BindAppDomainResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAppDomainResponseBodyModule() = default ;
    BindAppDomainResponseBodyModule& operator=(const BindAppDomainResponseBodyModule &) = default ;
    BindAppDomainResponseBodyModule& operator=(BindAppDomainResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->success_ != nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BindAppDomainResponseBodyModule& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPDOMAINREDIRECTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPDOMAINREDIRECTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DeleteAppDomainRedirectResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppDomainRedirectResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppDomainRedirectResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteAppDomainRedirectResponseBodyModule() = default ;
    DeleteAppDomainRedirectResponseBodyModule(const DeleteAppDomainRedirectResponseBodyModule &) = default ;
    DeleteAppDomainRedirectResponseBodyModule(DeleteAppDomainRedirectResponseBodyModule &&) = default ;
    DeleteAppDomainRedirectResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppDomainRedirectResponseBodyModule() = default ;
    DeleteAppDomainRedirectResponseBodyModule& operator=(const DeleteAppDomainRedirectResponseBodyModule &) = default ;
    DeleteAppDomainRedirectResponseBodyModule& operator=(DeleteAppDomainRedirectResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->success_ == nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteAppDomainRedirectResponseBodyModule& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif

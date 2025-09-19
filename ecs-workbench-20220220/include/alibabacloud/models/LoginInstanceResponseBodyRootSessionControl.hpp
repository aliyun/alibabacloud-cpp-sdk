// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODYROOTSESSIONCONTROL_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODYROOTSESSIONCONTROL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceResponseBodyRootSessionControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceResponseBodyRootSessionControl& obj) { 
      DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceResponseBodyRootSessionControl& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
    };
    LoginInstanceResponseBodyRootSessionControl() = default ;
    LoginInstanceResponseBodyRootSessionControl(const LoginInstanceResponseBodyRootSessionControl &) = default ;
    LoginInstanceResponseBodyRootSessionControl(LoginInstanceResponseBodyRootSessionControl &&) = default ;
    LoginInstanceResponseBodyRootSessionControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceResponseBodyRootSessionControl() = default ;
    LoginInstanceResponseBodyRootSessionControl& operator=(const LoginInstanceResponseBodyRootSessionControl &) = default ;
    LoginInstanceResponseBodyRootSessionControl& operator=(LoginInstanceResponseBodyRootSessionControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseUrl_ != nullptr; };
    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string baseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline LoginInstanceResponseBodyRootSessionControl& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


  protected:
    std::shared_ptr<string> baseUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif

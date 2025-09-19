// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTUSERACCOUNTOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTUSERACCOUNTOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceRequestUserAccountOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceRequestUserAccountOptions& obj) { 
      DARABONBA_PTR_TO_JSON(LoginLimit, loginLimit_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceRequestUserAccountOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginLimit, loginLimit_);
    };
    LoginInstanceRequestUserAccountOptions() = default ;
    LoginInstanceRequestUserAccountOptions(const LoginInstanceRequestUserAccountOptions &) = default ;
    LoginInstanceRequestUserAccountOptions(LoginInstanceRequestUserAccountOptions &&) = default ;
    LoginInstanceRequestUserAccountOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceRequestUserAccountOptions() = default ;
    LoginInstanceRequestUserAccountOptions& operator=(const LoginInstanceRequestUserAccountOptions &) = default ;
    LoginInstanceRequestUserAccountOptions& operator=(LoginInstanceRequestUserAccountOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loginLimit_ != nullptr; };
    // loginLimit Field Functions 
    bool hasLoginLimit() const { return this->loginLimit_ != nullptr;};
    void deleteLoginLimit() { this->loginLimit_ = nullptr;};
    inline int64_t loginLimit() const { DARABONBA_PTR_GET_DEFAULT(loginLimit_, 0L) };
    inline LoginInstanceRequestUserAccountOptions& setLoginLimit(int64_t loginLimit) { DARABONBA_PTR_SET_VALUE(loginLimit_, loginLimit) };


  protected:
    std::shared_ptr<int64_t> loginLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif

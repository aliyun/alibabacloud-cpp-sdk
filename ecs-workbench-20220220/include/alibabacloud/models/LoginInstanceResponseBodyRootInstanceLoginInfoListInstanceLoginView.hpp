// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODYROOTINSTANCELOGININFOLISTINSTANCELOGINVIEW_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODYROOTINSTANCELOGININFOLISTINSTANCELOGINVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultViewUrl, defaultViewUrl_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultViewUrl, defaultViewUrl_);
    };
    LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView() = default ;
    LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView(const LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView &) = default ;
    LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView(LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView &&) = default ;
    LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView() = default ;
    LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView& operator=(const LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView &) = default ;
    LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView& operator=(LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultViewUrl_ != nullptr; };
    // defaultViewUrl Field Functions 
    bool hasDefaultViewUrl() const { return this->defaultViewUrl_ != nullptr;};
    void deleteDefaultViewUrl() { this->defaultViewUrl_ = nullptr;};
    inline string defaultViewUrl() const { DARABONBA_PTR_GET_DEFAULT(defaultViewUrl_, "") };
    inline LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView& setDefaultViewUrl(string defaultViewUrl) { DARABONBA_PTR_SET_VALUE(defaultViewUrl_, defaultViewUrl) };


  protected:
    std::shared_ptr<string> defaultViewUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif

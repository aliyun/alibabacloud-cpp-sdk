// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEAUTHENTICATIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEAUTHENTICATIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ValidateAuthenticationTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateAuthenticationTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateAuthenticationTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
    };
    ValidateAuthenticationTokenResponseBody() = default ;
    ValidateAuthenticationTokenResponseBody(const ValidateAuthenticationTokenResponseBody &) = default ;
    ValidateAuthenticationTokenResponseBody(ValidateAuthenticationTokenResponseBody &&) = default ;
    ValidateAuthenticationTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateAuthenticationTokenResponseBody() = default ;
    ValidateAuthenticationTokenResponseBody& operator=(const ValidateAuthenticationTokenResponseBody &) = default ;
    ValidateAuthenticationTokenResponseBody& operator=(ValidateAuthenticationTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ValidateAuthenticationTokenResponseBody& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


  protected:
    shared_ptr<bool> active_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif

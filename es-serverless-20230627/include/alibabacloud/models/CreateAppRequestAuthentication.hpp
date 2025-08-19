// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUESTAUTHENTICATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUESTAUTHENTICATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppRequestAuthenticationBasicAuth.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class CreateAppRequestAuthentication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequestAuthentication& obj) { 
      DARABONBA_PTR_TO_JSON(basicAuth, basicAuth_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequestAuthentication& obj) { 
      DARABONBA_PTR_FROM_JSON(basicAuth, basicAuth_);
    };
    CreateAppRequestAuthentication() = default ;
    CreateAppRequestAuthentication(const CreateAppRequestAuthentication &) = default ;
    CreateAppRequestAuthentication(CreateAppRequestAuthentication &&) = default ;
    CreateAppRequestAuthentication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequestAuthentication() = default ;
    CreateAppRequestAuthentication& operator=(const CreateAppRequestAuthentication &) = default ;
    CreateAppRequestAuthentication& operator=(CreateAppRequestAuthentication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->basicAuth_ != nullptr; };
    // basicAuth Field Functions 
    bool hasBasicAuth() const { return this->basicAuth_ != nullptr;};
    void deleteBasicAuth() { this->basicAuth_ = nullptr;};
    inline const vector<Models::CreateAppRequestAuthenticationBasicAuth> & basicAuth() const { DARABONBA_PTR_GET_CONST(basicAuth_, vector<Models::CreateAppRequestAuthenticationBasicAuth>) };
    inline vector<Models::CreateAppRequestAuthenticationBasicAuth> basicAuth() { DARABONBA_PTR_GET(basicAuth_, vector<Models::CreateAppRequestAuthenticationBasicAuth>) };
    inline CreateAppRequestAuthentication& setBasicAuth(const vector<Models::CreateAppRequestAuthenticationBasicAuth> & basicAuth) { DARABONBA_PTR_SET_VALUE(basicAuth_, basicAuth) };
    inline CreateAppRequestAuthentication& setBasicAuth(vector<Models::CreateAppRequestAuthenticationBasicAuth> && basicAuth) { DARABONBA_PTR_SET_RVALUE(basicAuth_, basicAuth) };


  protected:
    std::shared_ptr<vector<Models::CreateAppRequestAuthenticationBasicAuth>> basicAuth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif

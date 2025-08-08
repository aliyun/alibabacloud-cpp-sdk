// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZATION_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AuthorizationParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class Authorization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Authorization& obj) { 
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Authorization& obj) { 
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    Authorization() = default ;
    Authorization(const Authorization &) = default ;
    Authorization(Authorization &&) = default ;
    Authorization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Authorization() = default ;
    Authorization& operator=(const Authorization &) = default ;
    Authorization& operator=(Authorization &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameters_ != nullptr
        && this->type_ != nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const AuthorizationParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, AuthorizationParameters) };
    inline AuthorizationParameters parameters() { DARABONBA_PTR_GET(parameters_, AuthorizationParameters) };
    inline Authorization& setParameters(const AuthorizationParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline Authorization& setParameters(AuthorizationParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Authorization& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<AuthorizationParameters> parameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif

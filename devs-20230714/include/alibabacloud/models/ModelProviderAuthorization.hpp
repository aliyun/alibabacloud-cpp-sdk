// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELPROVIDERAUTHORIZATION_HPP_
#define ALIBABACLOUD_MODELS_MODELPROVIDERAUTHORIZATION_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelProviderAuthorization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelProviderAuthorization& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModelProviderAuthorization& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModelProviderAuthorization() = default ;
    ModelProviderAuthorization(const ModelProviderAuthorization &) = default ;
    ModelProviderAuthorization(ModelProviderAuthorization &&) = default ;
    ModelProviderAuthorization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelProviderAuthorization() = default ;
    ModelProviderAuthorization& operator=(const ModelProviderAuthorization &) = default ;
    ModelProviderAuthorization& operator=(ModelProviderAuthorization &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authConfig_ != nullptr
        && this->type_ != nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const map<string, string> & authConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, map<string, string>) };
    inline map<string, string> authConfig() { DARABONBA_PTR_GET(authConfig_, map<string, string>) };
    inline ModelProviderAuthorization& setAuthConfig(const map<string, string> & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline ModelProviderAuthorization& setAuthConfig(map<string, string> && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModelProviderAuthorization& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<map<string, string>> authConfig_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif

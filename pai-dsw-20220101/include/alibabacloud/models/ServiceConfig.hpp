// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CodeServerAuth, codeServerAuth_);
      DARABONBA_PTR_TO_JSON(CodeServerPassword, codeServerPassword_);
      DARABONBA_PTR_TO_JSON(JupyterServerAuth, jupyterServerAuth_);
      DARABONBA_PTR_TO_JSON(JupyterServerPassword, jupyterServerPassword_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeServerAuth, codeServerAuth_);
      DARABONBA_PTR_FROM_JSON(CodeServerPassword, codeServerPassword_);
      DARABONBA_PTR_FROM_JSON(JupyterServerAuth, jupyterServerAuth_);
      DARABONBA_PTR_FROM_JSON(JupyterServerPassword, jupyterServerPassword_);
    };
    ServiceConfig() = default ;
    ServiceConfig(const ServiceConfig &) = default ;
    ServiceConfig(ServiceConfig &&) = default ;
    ServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceConfig() = default ;
    ServiceConfig& operator=(const ServiceConfig &) = default ;
    ServiceConfig& operator=(ServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeServerAuth_ == nullptr
        && this->codeServerPassword_ == nullptr && this->jupyterServerAuth_ == nullptr && this->jupyterServerPassword_ == nullptr; };
    // codeServerAuth Field Functions 
    bool hasCodeServerAuth() const { return this->codeServerAuth_ != nullptr;};
    void deleteCodeServerAuth() { this->codeServerAuth_ = nullptr;};
    inline string getCodeServerAuth() const { DARABONBA_PTR_GET_DEFAULT(codeServerAuth_, "") };
    inline ServiceConfig& setCodeServerAuth(string codeServerAuth) { DARABONBA_PTR_SET_VALUE(codeServerAuth_, codeServerAuth) };


    // codeServerPassword Field Functions 
    bool hasCodeServerPassword() const { return this->codeServerPassword_ != nullptr;};
    void deleteCodeServerPassword() { this->codeServerPassword_ = nullptr;};
    inline string getCodeServerPassword() const { DARABONBA_PTR_GET_DEFAULT(codeServerPassword_, "") };
    inline ServiceConfig& setCodeServerPassword(string codeServerPassword) { DARABONBA_PTR_SET_VALUE(codeServerPassword_, codeServerPassword) };


    // jupyterServerAuth Field Functions 
    bool hasJupyterServerAuth() const { return this->jupyterServerAuth_ != nullptr;};
    void deleteJupyterServerAuth() { this->jupyterServerAuth_ = nullptr;};
    inline string getJupyterServerAuth() const { DARABONBA_PTR_GET_DEFAULT(jupyterServerAuth_, "") };
    inline ServiceConfig& setJupyterServerAuth(string jupyterServerAuth) { DARABONBA_PTR_SET_VALUE(jupyterServerAuth_, jupyterServerAuth) };


    // jupyterServerPassword Field Functions 
    bool hasJupyterServerPassword() const { return this->jupyterServerPassword_ != nullptr;};
    void deleteJupyterServerPassword() { this->jupyterServerPassword_ = nullptr;};
    inline string getJupyterServerPassword() const { DARABONBA_PTR_GET_DEFAULT(jupyterServerPassword_, "") };
    inline ServiceConfig& setJupyterServerPassword(string jupyterServerPassword) { DARABONBA_PTR_SET_VALUE(jupyterServerPassword_, jupyterServerPassword) };


  protected:
    shared_ptr<string> codeServerAuth_ {};
    shared_ptr<string> codeServerPassword_ {};
    shared_ptr<string> jupyterServerAuth_ {};
    shared_ptr<string> jupyterServerPassword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENDERSERVICESBYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RENDERSERVICESBYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/Devs20230714.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class RenderServicesByTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenderServicesByTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(changedServiceNames, changedServiceNames_);
      DARABONBA_PTR_TO_JSON(services, services_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, RenderServicesByTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(changedServiceNames, changedServiceNames_);
      DARABONBA_PTR_FROM_JSON(services, services_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    RenderServicesByTemplateResponseBody() = default ;
    RenderServicesByTemplateResponseBody(const RenderServicesByTemplateResponseBody &) = default ;
    RenderServicesByTemplateResponseBody(RenderServicesByTemplateResponseBody &&) = default ;
    RenderServicesByTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenderServicesByTemplateResponseBody() = default ;
    RenderServicesByTemplateResponseBody& operator=(const RenderServicesByTemplateResponseBody &) = default ;
    RenderServicesByTemplateResponseBody& operator=(RenderServicesByTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changedServiceNames_ != nullptr
        && this->services_ != nullptr && this->variables_ != nullptr; };
    // changedServiceNames Field Functions 
    bool hasChangedServiceNames() const { return this->changedServiceNames_ != nullptr;};
    void deleteChangedServiceNames() { this->changedServiceNames_ = nullptr;};
    inline const map<string, string> & changedServiceNames() const { DARABONBA_PTR_GET_CONST(changedServiceNames_, map<string, string>) };
    inline map<string, string> changedServiceNames() { DARABONBA_PTR_GET(changedServiceNames_, map<string, string>) };
    inline RenderServicesByTemplateResponseBody& setChangedServiceNames(const map<string, string> & changedServiceNames) { DARABONBA_PTR_SET_VALUE(changedServiceNames_, changedServiceNames) };
    inline RenderServicesByTemplateResponseBody& setChangedServiceNames(map<string, string> && changedServiceNames) { DARABONBA_PTR_SET_RVALUE(changedServiceNames_, changedServiceNames) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const map<string, ServiceConfig> & services() const { DARABONBA_PTR_GET_CONST(services_, map<string, ServiceConfig>) };
    inline map<string, ServiceConfig> services() { DARABONBA_PTR_GET(services_, map<string, ServiceConfig>) };
    inline RenderServicesByTemplateResponseBody& setServices(const map<string, ServiceConfig> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline RenderServicesByTemplateResponseBody& setServices(map<string, ServiceConfig> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const map<string, Variable> & variables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, Variable>) };
    inline map<string, Variable> variables() { DARABONBA_PTR_GET(variables_, map<string, Variable>) };
    inline RenderServicesByTemplateResponseBody& setVariables(const map<string, Variable> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline RenderServicesByTemplateResponseBody& setVariables(map<string, Variable> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<map<string, string>> changedServiceNames_ = nullptr;
    std::shared_ptr<map<string, ServiceConfig>> services_ = nullptr;
    std::shared_ptr<map<string, Variable>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif

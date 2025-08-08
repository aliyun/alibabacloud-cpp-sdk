// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEVARIABLEVALUEMAP_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEVARIABLEVALUEMAP_HPP_
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
  class TemplateVariableValueMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateVariableValueMap& obj) { 
      DARABONBA_PTR_TO_JSON(services, services_);
      DARABONBA_ANY_TO_JSON(shared, shared_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateVariableValueMap& obj) { 
      DARABONBA_PTR_FROM_JSON(services, services_);
      DARABONBA_ANY_FROM_JSON(shared, shared_);
    };
    TemplateVariableValueMap() = default ;
    TemplateVariableValueMap(const TemplateVariableValueMap &) = default ;
    TemplateVariableValueMap(TemplateVariableValueMap &&) = default ;
    TemplateVariableValueMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateVariableValueMap() = default ;
    TemplateVariableValueMap& operator=(const TemplateVariableValueMap &) = default ;
    TemplateVariableValueMap& operator=(TemplateVariableValueMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->services_ != nullptr
        && this->shared_ != nullptr; };
    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const map<string, Darabonba::Json> & services() const { DARABONBA_PTR_GET_CONST(services_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> services() { DARABONBA_PTR_GET(services_, map<string, Darabonba::Json>) };
    inline TemplateVariableValueMap& setServices(const map<string, Darabonba::Json> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline TemplateVariableValueMap& setServices(map<string, Darabonba::Json> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline     const Darabonba::Json & shared() const { DARABONBA_GET(shared_) };
    Darabonba::Json & shared() { DARABONBA_GET(shared_) };
    inline TemplateVariableValueMap& setShared(const Darabonba::Json & shared) { DARABONBA_SET_VALUE(shared_, shared) };
    inline TemplateVariableValueMap& setShared(Darabonba::Json & shared) { DARABONBA_SET_RVALUE(shared_, shared) };


  protected:
    std::shared_ptr<map<string, Darabonba::Json>> services_ = nullptr;
    Darabonba::Json shared_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif

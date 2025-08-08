// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEPARAMETERSCHEMAROLEEXTENSION_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEPARAMETERSCHEMAROLEEXTENSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TemplateParameterSchemaRoleExtension : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateParameterSchemaRoleExtension& obj) { 
      DARABONBA_PTR_TO_JSON(authorities, authorities_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(service, service_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateParameterSchemaRoleExtension& obj) { 
      DARABONBA_PTR_FROM_JSON(authorities, authorities_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(service, service_);
    };
    TemplateParameterSchemaRoleExtension() = default ;
    TemplateParameterSchemaRoleExtension(const TemplateParameterSchemaRoleExtension &) = default ;
    TemplateParameterSchemaRoleExtension(TemplateParameterSchemaRoleExtension &&) = default ;
    TemplateParameterSchemaRoleExtension(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateParameterSchemaRoleExtension() = default ;
    TemplateParameterSchemaRoleExtension& operator=(const TemplateParameterSchemaRoleExtension &) = default ;
    TemplateParameterSchemaRoleExtension& operator=(TemplateParameterSchemaRoleExtension &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorities_ != nullptr
        && this->name_ != nullptr && this->service_ != nullptr; };
    // authorities Field Functions 
    bool hasAuthorities() const { return this->authorities_ != nullptr;};
    void deleteAuthorities() { this->authorities_ = nullptr;};
    inline const vector<string> & authorities() const { DARABONBA_PTR_GET_CONST(authorities_, vector<string>) };
    inline vector<string> authorities() { DARABONBA_PTR_GET(authorities_, vector<string>) };
    inline TemplateParameterSchemaRoleExtension& setAuthorities(const vector<string> & authorities) { DARABONBA_PTR_SET_VALUE(authorities_, authorities) };
    inline TemplateParameterSchemaRoleExtension& setAuthorities(vector<string> && authorities) { DARABONBA_PTR_SET_RVALUE(authorities_, authorities) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TemplateParameterSchemaRoleExtension& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline TemplateParameterSchemaRoleExtension& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    std::shared_ptr<vector<string>> authorities_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif

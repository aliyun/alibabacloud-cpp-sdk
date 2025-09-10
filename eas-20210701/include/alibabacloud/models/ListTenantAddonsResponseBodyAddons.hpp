// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTADDONSRESPONSEBODYADDONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTADDONSRESPONSEBODYADDONS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListTenantAddonsResponseBodyAddons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantAddonsResponseBodyAddons& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantAddonsResponseBodyAddons& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListTenantAddonsResponseBodyAddons() = default ;
    ListTenantAddonsResponseBodyAddons(const ListTenantAddonsResponseBodyAddons &) = default ;
    ListTenantAddonsResponseBodyAddons(ListTenantAddonsResponseBodyAddons &&) = default ;
    ListTenantAddonsResponseBodyAddons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantAddonsResponseBodyAddons() = default ;
    ListTenantAddonsResponseBodyAddons& operator=(const ListTenantAddonsResponseBodyAddons &) = default ;
    ListTenantAddonsResponseBodyAddons& operator=(ListTenantAddonsResponseBodyAddons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->name_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const map<string, string> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
    inline map<string, string> attributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
    inline ListTenantAddonsResponseBodyAddons& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline ListTenantAddonsResponseBodyAddons& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTenantAddonsResponseBodyAddons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The attributes of the plug-in.
    std::shared_ptr<map<string, string>> attributes_ = nullptr;
    // The name of the plug-in.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif

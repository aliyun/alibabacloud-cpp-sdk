// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOG_HPP_
#define ALIBABACLOUD_MODELS_CATALOG_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Catalog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Catalog& obj) { 
      DARABONBA_PTR_TO_JSON(extensionConf, extensionConf_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_ANY_TO_JSON(properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, Catalog& obj) { 
      DARABONBA_PTR_FROM_JSON(extensionConf, extensionConf_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_ANY_FROM_JSON(properties, properties_);
    };
    Catalog() = default ;
    Catalog(const Catalog &) = default ;
    Catalog(Catalog &&) = default ;
    Catalog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Catalog() = default ;
    Catalog& operator=(const Catalog &) = default ;
    Catalog& operator=(Catalog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extensionConf_ == nullptr
        && return this->name_ == nullptr && return this->properties_ == nullptr; };
    // extensionConf Field Functions 
    bool hasExtensionConf() const { return this->extensionConf_ != nullptr;};
    void deleteExtensionConf() { this->extensionConf_ = nullptr;};
    inline const map<string, string> & extensionConf() const { DARABONBA_PTR_GET_CONST(extensionConf_, map<string, string>) };
    inline map<string, string> extensionConf() { DARABONBA_PTR_GET(extensionConf_, map<string, string>) };
    inline Catalog& setExtensionConf(const map<string, string> & extensionConf) { DARABONBA_PTR_SET_VALUE(extensionConf_, extensionConf) };
    inline Catalog& setExtensionConf(map<string, string> && extensionConf) { DARABONBA_PTR_SET_RVALUE(extensionConf_, extensionConf) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Catalog& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline Catalog& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline Catalog& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


  protected:
    std::shared_ptr<map<string, string>> extensionConf_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    Darabonba::Json properties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif

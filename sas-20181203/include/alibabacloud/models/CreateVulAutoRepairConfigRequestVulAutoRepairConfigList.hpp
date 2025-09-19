// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVULAUTOREPAIRCONFIGREQUESTVULAUTOREPAIRCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVULAUTOREPAIRCONFIGREQUESTVULAUTOREPAIRCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateVulAutoRepairConfigRequestVulAutoRepairConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVulAutoRepairConfigRequestVulAutoRepairConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVulAutoRepairConfigRequestVulAutoRepairConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateVulAutoRepairConfigRequestVulAutoRepairConfigList() = default ;
    CreateVulAutoRepairConfigRequestVulAutoRepairConfigList(const CreateVulAutoRepairConfigRequestVulAutoRepairConfigList &) = default ;
    CreateVulAutoRepairConfigRequestVulAutoRepairConfigList(CreateVulAutoRepairConfigRequestVulAutoRepairConfigList &&) = default ;
    CreateVulAutoRepairConfigRequestVulAutoRepairConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVulAutoRepairConfigRequestVulAutoRepairConfigList() = default ;
    CreateVulAutoRepairConfigRequestVulAutoRepairConfigList& operator=(const CreateVulAutoRepairConfigRequestVulAutoRepairConfigList &) = default ;
    CreateVulAutoRepairConfigRequestVulAutoRepairConfigList& operator=(CreateVulAutoRepairConfigRequestVulAutoRepairConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->name_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline CreateVulAutoRepairConfigRequestVulAutoRepairConfigList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateVulAutoRepairConfigRequestVulAutoRepairConfigList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The alias of the vulnerability.
    // 
    // This parameter is required.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The name of the vulnerability.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

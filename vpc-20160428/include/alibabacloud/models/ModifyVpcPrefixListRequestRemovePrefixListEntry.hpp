// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCPREFIXLISTREQUESTREMOVEPREFIXLISTENTRY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCPREFIXLISTREQUESTREMOVEPREFIXLISTENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpcPrefixListRequestRemovePrefixListEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcPrefixListRequestRemovePrefixListEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcPrefixListRequestRemovePrefixListEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    ModifyVpcPrefixListRequestRemovePrefixListEntry() = default ;
    ModifyVpcPrefixListRequestRemovePrefixListEntry(const ModifyVpcPrefixListRequestRemovePrefixListEntry &) = default ;
    ModifyVpcPrefixListRequestRemovePrefixListEntry(ModifyVpcPrefixListRequestRemovePrefixListEntry &&) = default ;
    ModifyVpcPrefixListRequestRemovePrefixListEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcPrefixListRequestRemovePrefixListEntry() = default ;
    ModifyVpcPrefixListRequestRemovePrefixListEntry& operator=(const ModifyVpcPrefixListRequestRemovePrefixListEntry &) = default ;
    ModifyVpcPrefixListRequestRemovePrefixListEntry& operator=(ModifyVpcPrefixListRequestRemovePrefixListEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->description_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ModifyVpcPrefixListRequestRemovePrefixListEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVpcPrefixListRequestRemovePrefixListEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The CIDR block that you want to delete from the prefix list.
    std::shared_ptr<string> cidr_ = nullptr;
    // The description of the CIDR block that you want to delete.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREFIXLISTREQUESTREMOVEENTRY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREFIXLISTREQUESTREMOVEENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyPrefixListRequestRemoveEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrefixListRequestRemoveEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrefixListRequestRemoveEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
    };
    ModifyPrefixListRequestRemoveEntry() = default ;
    ModifyPrefixListRequestRemoveEntry(const ModifyPrefixListRequestRemoveEntry &) = default ;
    ModifyPrefixListRequestRemoveEntry(ModifyPrefixListRequestRemoveEntry &&) = default ;
    ModifyPrefixListRequestRemoveEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrefixListRequestRemoveEntry() = default ;
    ModifyPrefixListRequestRemoveEntry& operator=(const ModifyPrefixListRequestRemoveEntry &) = default ;
    ModifyPrefixListRequestRemoveEntry& operator=(ModifyPrefixListRequestRemoveEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidr_ != nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ModifyPrefixListRequestRemoveEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


  protected:
    // The CIDR block in entry N to be deleted from the prefix list. Valid values of N: 0 to 200.
    // 
    // Take note of the following items when you delete the entries:
    // 
    // *   You cannot specify duplicate CIDR blocks.
    // *   The CIDR blocks cannot be the same as the `AddEntry.N.Cidr` values.
    // 
    // This parameter is required.
    std::shared_ptr<string> cidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

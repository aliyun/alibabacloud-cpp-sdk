// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREFIXLISTREQUESTADDENTRY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREFIXLISTREQUESTADDENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyPrefixListRequestAddEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrefixListRequestAddEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrefixListRequestAddEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    ModifyPrefixListRequestAddEntry() = default ;
    ModifyPrefixListRequestAddEntry(const ModifyPrefixListRequestAddEntry &) = default ;
    ModifyPrefixListRequestAddEntry(ModifyPrefixListRequestAddEntry &&) = default ;
    ModifyPrefixListRequestAddEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrefixListRequestAddEntry() = default ;
    ModifyPrefixListRequestAddEntry& operator=(const ModifyPrefixListRequestAddEntry &) = default ;
    ModifyPrefixListRequestAddEntry& operator=(ModifyPrefixListRequestAddEntry &&) = default ;
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
    inline ModifyPrefixListRequestAddEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPrefixListRequestAddEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The CIDR block in entry N to be added to the prefix list. Valid values of N: 0 to 200.
    // 
    // Take note of the following items when you add the entries:
    // 
    // *   The total number of entries in the prefix list cannot exceed the maximum number of entries you specified for the prefix list. You can call the [DescribePrefixListAttributes](https://help.aliyun.com/document_detail/205872.html) operation to query the maximum number of entries that the prefix list can contain.
    // *   You cannot specify duplicate CIDR blocks.
    // *   The CIDR blocks cannot be the same as the `RemoveEntry.N.Cidr` values.
    // 
    // This parameter is required.
    std::shared_ptr<string> cidr_ = nullptr;
    // The description in entry N. The description must be 2 to 32 characters in length and cannot start with `http://` or `https://`. Valid values of N: 0 to 200.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

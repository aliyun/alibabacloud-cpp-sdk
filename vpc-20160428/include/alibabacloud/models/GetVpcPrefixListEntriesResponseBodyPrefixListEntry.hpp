// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCPREFIXLISTENTRIESRESPONSEBODYPREFIXLISTENTRY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCPREFIXLISTENTRIESRESPONSEBODYPREFIXLISTENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpcPrefixListEntriesResponseBodyPrefixListEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcPrefixListEntriesResponseBodyPrefixListEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcPrefixListEntriesResponseBodyPrefixListEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetVpcPrefixListEntriesResponseBodyPrefixListEntry() = default ;
    GetVpcPrefixListEntriesResponseBodyPrefixListEntry(const GetVpcPrefixListEntriesResponseBodyPrefixListEntry &) = default ;
    GetVpcPrefixListEntriesResponseBodyPrefixListEntry(GetVpcPrefixListEntriesResponseBodyPrefixListEntry &&) = default ;
    GetVpcPrefixListEntriesResponseBodyPrefixListEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcPrefixListEntriesResponseBodyPrefixListEntry() = default ;
    GetVpcPrefixListEntriesResponseBodyPrefixListEntry& operator=(const GetVpcPrefixListEntriesResponseBodyPrefixListEntry &) = default ;
    GetVpcPrefixListEntriesResponseBodyPrefixListEntry& operator=(GetVpcPrefixListEntriesResponseBodyPrefixListEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->description_ == nullptr && return this->prefixListId_ == nullptr && return this->regionId_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline GetVpcPrefixListEntriesResponseBodyPrefixListEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetVpcPrefixListEntriesResponseBodyPrefixListEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string prefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline GetVpcPrefixListEntriesResponseBodyPrefixListEntry& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpcPrefixListEntriesResponseBodyPrefixListEntry& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The CIDR blocks specified in the prefix list.
    std::shared_ptr<string> cidr_ = nullptr;
    // The description of the prefix list.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the prefix list.
    std::shared_ptr<string> prefixListId_ = nullptr;
    // The region ID of the prefix list.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif

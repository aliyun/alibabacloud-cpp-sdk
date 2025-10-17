// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTATTRIBUTESRESPONSEBODYENTRIESENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTATTRIBUTESRESPONSEBODYENTRIESENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePrefixListAttributesResponseBodyEntriesEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListAttributesResponseBodyEntriesEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListAttributesResponseBodyEntriesEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    DescribePrefixListAttributesResponseBodyEntriesEntry() = default ;
    DescribePrefixListAttributesResponseBodyEntriesEntry(const DescribePrefixListAttributesResponseBodyEntriesEntry &) = default ;
    DescribePrefixListAttributesResponseBodyEntriesEntry(DescribePrefixListAttributesResponseBodyEntriesEntry &&) = default ;
    DescribePrefixListAttributesResponseBodyEntriesEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListAttributesResponseBodyEntriesEntry() = default ;
    DescribePrefixListAttributesResponseBodyEntriesEntry& operator=(const DescribePrefixListAttributesResponseBodyEntriesEntry &) = default ;
    DescribePrefixListAttributesResponseBodyEntriesEntry& operator=(DescribePrefixListAttributesResponseBodyEntriesEntry &&) = default ;
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
    inline DescribePrefixListAttributesResponseBodyEntriesEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePrefixListAttributesResponseBodyEntriesEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The CIDR block in entry N.
    std::shared_ptr<string> cidr_ = nullptr;
    // The description in entry N.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

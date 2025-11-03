// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCPREFIXLISTREQUESTPREFIXLISTENTRIES_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCPREFIXLISTREQUESTPREFIXLISTENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpcPrefixListRequestPrefixListEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcPrefixListRequestPrefixListEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcPrefixListRequestPrefixListEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    CreateVpcPrefixListRequestPrefixListEntries() = default ;
    CreateVpcPrefixListRequestPrefixListEntries(const CreateVpcPrefixListRequestPrefixListEntries &) = default ;
    CreateVpcPrefixListRequestPrefixListEntries(CreateVpcPrefixListRequestPrefixListEntries &&) = default ;
    CreateVpcPrefixListRequestPrefixListEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcPrefixListRequestPrefixListEntries() = default ;
    CreateVpcPrefixListRequestPrefixListEntries& operator=(const CreateVpcPrefixListRequestPrefixListEntries &) = default ;
    CreateVpcPrefixListRequestPrefixListEntries& operator=(CreateVpcPrefixListRequestPrefixListEntries &&) = default ;
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
    inline CreateVpcPrefixListRequestPrefixListEntries& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVpcPrefixListRequestPrefixListEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The CIDR block specified in the prefix list.
    std::shared_ptr<string> cidr_ = nullptr;
    // The description of the CIDR block specified in the prefix list.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif

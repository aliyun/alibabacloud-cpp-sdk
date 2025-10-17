// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPREFIXLISTREQUESTENTRY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPREFIXLISTREQUESTENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreatePrefixListRequestEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrefixListRequestEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrefixListRequestEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    CreatePrefixListRequestEntry() = default ;
    CreatePrefixListRequestEntry(const CreatePrefixListRequestEntry &) = default ;
    CreatePrefixListRequestEntry(CreatePrefixListRequestEntry &&) = default ;
    CreatePrefixListRequestEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrefixListRequestEntry() = default ;
    CreatePrefixListRequestEntry& operator=(const CreatePrefixListRequestEntry &) = default ;
    CreatePrefixListRequestEntry& operator=(CreatePrefixListRequestEntry &&) = default ;
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
    inline CreatePrefixListRequestEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePrefixListRequestEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The CIDR block in entry N. Valid values of N: 0 to 200. Notes:
    // 
    // *   The total number of entries cannot exceed the `MaxEntries` value.
    // *   CIDR block types are determined by the IP address family. You cannot combine IPv4 and IPv6 CIDR blocks in a single prefix list.
    // *   CIDR blocks must be unique across all entries in a prefix list. For example, you cannot specify 192.168.1.0/24 twice in the entries of the prefix list.
    // *   You can set a single IP address. The system automatically converts the IP address to a CIDR block. For example, if you set 192.168.1.100, the system automatically converts it to 192.168.1.100/32.
    // *   If you use an IPv6 CIDR block, the system automatically converts the CIDR block to zero and the letters to lowercase. For example, if you specify 2001:0DB8:0000:0000:0000:0000:0000:0000/32, the system converts it to 2001:db8::/32.
    // 
    // For more information about CIDR blocks, see [What is CIDR?](https://help.aliyun.com/document_detail/185311.html#598efe6ef1v00)
    // 
    // By default, this parameter is left empty.
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

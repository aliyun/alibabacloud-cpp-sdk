// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKRESPONSEBODYCHECKRECORDACLSACLADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKRESPONSEBODYCHECKRECORDACLSACLADDRESSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Note, note_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
    };
    DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses() = default ;
    DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses(const DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses &) = default ;
    DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses(DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses &&) = default ;
    DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses() = default ;
    DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses& operator=(const DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses &) = default ;
    DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses& operator=(DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->note_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline DescribeAclCheckResponseBodyCheckRecordAclsAclAddresses& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> note_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

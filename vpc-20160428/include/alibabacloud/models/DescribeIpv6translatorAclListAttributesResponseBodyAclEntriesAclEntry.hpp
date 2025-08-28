// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESPONSEBODYACLENTRIESACLENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESPONSEBODYACLENTRIESACLENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntryComment, aclEntryComment_);
      DARABONBA_PTR_TO_JSON(AclEntryId, aclEntryId_);
      DARABONBA_PTR_TO_JSON(AclEntryIp, aclEntryIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntryComment, aclEntryComment_);
      DARABONBA_PTR_FROM_JSON(AclEntryId, aclEntryId_);
      DARABONBA_PTR_FROM_JSON(AclEntryIp, aclEntryIp_);
    };
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry() = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry(const DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry &) = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry(DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry &&) = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry() = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry& operator=(const DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry &) = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry& operator=(DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclEntryComment_ != nullptr
        && this->aclEntryId_ != nullptr && this->aclEntryIp_ != nullptr; };
    // aclEntryComment Field Functions 
    bool hasAclEntryComment() const { return this->aclEntryComment_ != nullptr;};
    void deleteAclEntryComment() { this->aclEntryComment_ = nullptr;};
    inline string aclEntryComment() const { DARABONBA_PTR_GET_DEFAULT(aclEntryComment_, "") };
    inline DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry& setAclEntryComment(string aclEntryComment) { DARABONBA_PTR_SET_VALUE(aclEntryComment_, aclEntryComment) };


    // aclEntryId Field Functions 
    bool hasAclEntryId() const { return this->aclEntryId_ != nullptr;};
    void deleteAclEntryId() { this->aclEntryId_ = nullptr;};
    inline string aclEntryId() const { DARABONBA_PTR_GET_DEFAULT(aclEntryId_, "") };
    inline DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry& setAclEntryId(string aclEntryId) { DARABONBA_PTR_SET_VALUE(aclEntryId_, aclEntryId) };


    // aclEntryIp Field Functions 
    bool hasAclEntryIp() const { return this->aclEntryIp_ != nullptr;};
    void deleteAclEntryIp() { this->aclEntryIp_ = nullptr;};
    inline string aclEntryIp() const { DARABONBA_PTR_GET_DEFAULT(aclEntryIp_, "") };
    inline DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry& setAclEntryIp(string aclEntryIp) { DARABONBA_PTR_SET_VALUE(aclEntryIp_, aclEntryIp) };


  protected:
    // The remarks of the ACL entry.
    std::shared_ptr<string> aclEntryComment_ = nullptr;
    // The ID of the ACL entry.
    std::shared_ptr<string> aclEntryId_ = nullptr;
    // The IP address specified in the ACL entry.
    std::shared_ptr<string> aclEntryIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif

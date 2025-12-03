// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODYACLENTRYSACLENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODYACLENTRYSACLENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntryComment, aclEntryComment_);
      DARABONBA_PTR_TO_JSON(AclEntryIp, aclEntryIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntryComment, aclEntryComment_);
      DARABONBA_PTR_FROM_JSON(AclEntryIp, aclEntryIp_);
    };
    DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry() = default ;
    DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry(const DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry &) = default ;
    DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry(DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry &&) = default ;
    DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry() = default ;
    DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry& operator=(const DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry &) = default ;
    DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry& operator=(DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntryComment_ == nullptr
        && return this->aclEntryIp_ == nullptr; };
    // aclEntryComment Field Functions 
    bool hasAclEntryComment() const { return this->aclEntryComment_ != nullptr;};
    void deleteAclEntryComment() { this->aclEntryComment_ = nullptr;};
    inline string aclEntryComment() const { DARABONBA_PTR_GET_DEFAULT(aclEntryComment_, "") };
    inline DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry& setAclEntryComment(string aclEntryComment) { DARABONBA_PTR_SET_VALUE(aclEntryComment_, aclEntryComment) };


    // aclEntryIp Field Functions 
    bool hasAclEntryIp() const { return this->aclEntryIp_ != nullptr;};
    void deleteAclEntryIp() { this->aclEntryIp_ = nullptr;};
    inline string aclEntryIp() const { DARABONBA_PTR_GET_DEFAULT(aclEntryIp_, "") };
    inline DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry& setAclEntryIp(string aclEntryIp) { DARABONBA_PTR_SET_VALUE(aclEntryIp_, aclEntryIp) };


  protected:
    // The entry description.
    std::shared_ptr<string> aclEntryComment_ = nullptr;
    // The ACL entry.
    std::shared_ptr<string> aclEntryIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

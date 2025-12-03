// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSRESPONSEBODYACLSACL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSRESPONSEBODYACLSACL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAccessControlListsResponseBodyAclsAcl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListsResponseBodyAclsAcl& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListsResponseBodyAclsAcl& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
    };
    DescribeAccessControlListsResponseBodyAclsAcl() = default ;
    DescribeAccessControlListsResponseBodyAclsAcl(const DescribeAccessControlListsResponseBodyAclsAcl &) = default ;
    DescribeAccessControlListsResponseBodyAclsAcl(DescribeAccessControlListsResponseBodyAclsAcl &&) = default ;
    DescribeAccessControlListsResponseBodyAclsAcl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListsResponseBodyAclsAcl() = default ;
    DescribeAccessControlListsResponseBodyAclsAcl& operator=(const DescribeAccessControlListsResponseBodyAclsAcl &) = default ;
    DescribeAccessControlListsResponseBodyAclsAcl& operator=(DescribeAccessControlListsResponseBodyAclsAcl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclName_ == nullptr && return this->addressIPVersion_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeAccessControlListsResponseBodyAclsAcl& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeAccessControlListsResponseBodyAclsAcl& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeAccessControlListsResponseBodyAclsAcl& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


  protected:
    // The ID of the access control policy.
    std::shared_ptr<string> aclId_ = nullptr;
    // The name of the access control policy.
    std::shared_ptr<string> aclName_ = nullptr;
    // 访问控制策略组的IP版本。
    // - **IPv4**。
    // - **IPv6**。
    std::shared_ptr<string> addressIPVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

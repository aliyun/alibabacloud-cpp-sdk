// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDRESSBOOKRESPONSEBODYACLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDRESSBOOKRESPONSEBODYACLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAddressBookResponseBodyAclsAddresses.hpp>
#include <alibabacloud/models/DescribeAddressBookResponseBodyAclsTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAddressBookResponseBodyAcls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddressBookResponseBodyAcls& obj) { 
      DARABONBA_PTR_TO_JSON(AddressList, addressList_);
      DARABONBA_PTR_TO_JSON(AddressListCount, addressListCount_);
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(AutoAddTagEcs, autoAddTagEcs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_TO_JSON(ReferenceCount, referenceCount_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TagRelation, tagRelation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddressBookResponseBodyAcls& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressList, addressList_);
      DARABONBA_PTR_FROM_JSON(AddressListCount, addressListCount_);
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(AutoAddTagEcs, autoAddTagEcs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_FROM_JSON(ReferenceCount, referenceCount_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TagRelation, tagRelation_);
    };
    DescribeAddressBookResponseBodyAcls() = default ;
    DescribeAddressBookResponseBodyAcls(const DescribeAddressBookResponseBodyAcls &) = default ;
    DescribeAddressBookResponseBodyAcls(DescribeAddressBookResponseBodyAcls &&) = default ;
    DescribeAddressBookResponseBodyAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddressBookResponseBodyAcls() = default ;
    DescribeAddressBookResponseBodyAcls& operator=(const DescribeAddressBookResponseBodyAcls &) = default ;
    DescribeAddressBookResponseBodyAcls& operator=(DescribeAddressBookResponseBodyAcls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressList_ != nullptr
        && this->addressListCount_ != nullptr && this->addresses_ != nullptr && this->autoAddTagEcs_ != nullptr && this->description_ != nullptr && this->groupName_ != nullptr
        && this->groupType_ != nullptr && this->groupUuid_ != nullptr && this->referenceCount_ != nullptr && this->tagList_ != nullptr && this->tagRelation_ != nullptr; };
    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline const vector<string> & addressList() const { DARABONBA_PTR_GET_CONST(addressList_, vector<string>) };
    inline vector<string> addressList() { DARABONBA_PTR_GET(addressList_, vector<string>) };
    inline DescribeAddressBookResponseBodyAcls& setAddressList(const vector<string> & addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };
    inline DescribeAddressBookResponseBodyAcls& setAddressList(vector<string> && addressList) { DARABONBA_PTR_SET_RVALUE(addressList_, addressList) };


    // addressListCount Field Functions 
    bool hasAddressListCount() const { return this->addressListCount_ != nullptr;};
    void deleteAddressListCount() { this->addressListCount_ = nullptr;};
    inline int32_t addressListCount() const { DARABONBA_PTR_GET_DEFAULT(addressListCount_, 0) };
    inline DescribeAddressBookResponseBodyAcls& setAddressListCount(int32_t addressListCount) { DARABONBA_PTR_SET_VALUE(addressListCount_, addressListCount) };


    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<Models::DescribeAddressBookResponseBodyAclsAddresses> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Models::DescribeAddressBookResponseBodyAclsAddresses>) };
    inline vector<Models::DescribeAddressBookResponseBodyAclsAddresses> addresses() { DARABONBA_PTR_GET(addresses_, vector<Models::DescribeAddressBookResponseBodyAclsAddresses>) };
    inline DescribeAddressBookResponseBodyAcls& setAddresses(const vector<Models::DescribeAddressBookResponseBodyAclsAddresses> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline DescribeAddressBookResponseBodyAcls& setAddresses(vector<Models::DescribeAddressBookResponseBodyAclsAddresses> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // autoAddTagEcs Field Functions 
    bool hasAutoAddTagEcs() const { return this->autoAddTagEcs_ != nullptr;};
    void deleteAutoAddTagEcs() { this->autoAddTagEcs_ = nullptr;};
    inline int32_t autoAddTagEcs() const { DARABONBA_PTR_GET_DEFAULT(autoAddTagEcs_, 0) };
    inline DescribeAddressBookResponseBodyAcls& setAutoAddTagEcs(int32_t autoAddTagEcs) { DARABONBA_PTR_SET_VALUE(autoAddTagEcs_, autoAddTagEcs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAddressBookResponseBodyAcls& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeAddressBookResponseBodyAcls& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeAddressBookResponseBodyAcls& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // groupUuid Field Functions 
    bool hasGroupUuid() const { return this->groupUuid_ != nullptr;};
    void deleteGroupUuid() { this->groupUuid_ = nullptr;};
    inline string groupUuid() const { DARABONBA_PTR_GET_DEFAULT(groupUuid_, "") };
    inline DescribeAddressBookResponseBodyAcls& setGroupUuid(string groupUuid) { DARABONBA_PTR_SET_VALUE(groupUuid_, groupUuid) };


    // referenceCount Field Functions 
    bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
    void deleteReferenceCount() { this->referenceCount_ = nullptr;};
    inline int32_t referenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
    inline DescribeAddressBookResponseBodyAcls& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<Models::DescribeAddressBookResponseBodyAclsTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Models::DescribeAddressBookResponseBodyAclsTagList>) };
    inline vector<Models::DescribeAddressBookResponseBodyAclsTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<Models::DescribeAddressBookResponseBodyAclsTagList>) };
    inline DescribeAddressBookResponseBodyAcls& setTagList(const vector<Models::DescribeAddressBookResponseBodyAclsTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeAddressBookResponseBodyAcls& setTagList(vector<Models::DescribeAddressBookResponseBodyAclsTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // tagRelation Field Functions 
    bool hasTagRelation() const { return this->tagRelation_ != nullptr;};
    void deleteTagRelation() { this->tagRelation_ = nullptr;};
    inline string tagRelation() const { DARABONBA_PTR_GET_DEFAULT(tagRelation_, "") };
    inline DescribeAddressBookResponseBodyAcls& setTagRelation(string tagRelation) { DARABONBA_PTR_SET_VALUE(tagRelation_, tagRelation) };


  protected:
    // The addresses in the address book.
    std::shared_ptr<vector<string>> addressList_ = nullptr;
    // The number of addresses in the address book.
    std::shared_ptr<int32_t> addressListCount_ = nullptr;
    // A list of addresses in the address book, each with a single address description.
    std::shared_ptr<vector<Models::DescribeAddressBookResponseBodyAclsAddresses>> addresses_ = nullptr;
    // Indicates whether the public IP addresses of ECS instances are automatically added to the address book if the instances match the specified tags. The setting takes effect on both newly purchased ECS instances whose tag settings are complete and ECS instances whose tag settings are modified. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> autoAddTagEcs_ = nullptr;
    // The description of the address book.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the address book.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the address book. Valid values:
    // 
    // *   **ip**: IP address book
    // *   **domain**: domain address book
    // *   **port**: port address book
    // *   **tag**: ECS tag-based address book
    // *   **allCloud**: cloud service address book
    // *   **threat**: threat intelligence address book
    std::shared_ptr<string> groupType_ = nullptr;
    // The UUID of the address book.
    std::shared_ptr<string> groupUuid_ = nullptr;
    // The number of times that the address book is referenced.
    std::shared_ptr<int32_t> referenceCount_ = nullptr;
    // The details about the ECS tags that can be automatically added to the address book.
    std::shared_ptr<vector<Models::DescribeAddressBookResponseBodyAclsTagList>> tagList_ = nullptr;
    // The logical relationship among ECS tags. Valid values:
    // 
    // *   **and**: Only the public IP addresses of ECS instances that match all the specified tags can be added to the address book.
    // *   **or**: The public IP addresses of ECS instances that match any of the specified tags can be added to the address book.
    std::shared_ptr<string> tagRelation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

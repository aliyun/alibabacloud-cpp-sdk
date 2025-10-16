// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYADDRESSBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYADDRESSBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAddressBookRequestAckLabels.hpp>
#include <alibabacloud/models/ModifyAddressBookRequestTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyAddressBookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAddressBookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_TO_JSON(AckNamespaces, ackNamespaces_);
      DARABONBA_PTR_TO_JSON(AddressList, addressList_);
      DARABONBA_PTR_TO_JSON(AutoAddTagEcs, autoAddTagEcs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TagRelation, tagRelation_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAddressBookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_FROM_JSON(AckNamespaces, ackNamespaces_);
      DARABONBA_PTR_FROM_JSON(AddressList, addressList_);
      DARABONBA_PTR_FROM_JSON(AutoAddTagEcs, autoAddTagEcs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ModifyMode, modifyMode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TagRelation, tagRelation_);
    };
    ModifyAddressBookRequest() = default ;
    ModifyAddressBookRequest(const ModifyAddressBookRequest &) = default ;
    ModifyAddressBookRequest(ModifyAddressBookRequest &&) = default ;
    ModifyAddressBookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAddressBookRequest() = default ;
    ModifyAddressBookRequest& operator=(const ModifyAddressBookRequest &) = default ;
    ModifyAddressBookRequest& operator=(ModifyAddressBookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ackLabels_ == nullptr
        && return this->ackNamespaces_ == nullptr && return this->addressList_ == nullptr && return this->autoAddTagEcs_ == nullptr && return this->description_ == nullptr && return this->groupName_ == nullptr
        && return this->groupUuid_ == nullptr && return this->lang_ == nullptr && return this->modifyMode_ == nullptr && return this->sourceIp_ == nullptr && return this->tagList_ == nullptr
        && return this->tagRelation_ == nullptr; };
    // ackLabels Field Functions 
    bool hasAckLabels() const { return this->ackLabels_ != nullptr;};
    void deleteAckLabels() { this->ackLabels_ = nullptr;};
    inline const vector<ModifyAddressBookRequestAckLabels> & ackLabels() const { DARABONBA_PTR_GET_CONST(ackLabels_, vector<ModifyAddressBookRequestAckLabels>) };
    inline vector<ModifyAddressBookRequestAckLabels> ackLabels() { DARABONBA_PTR_GET(ackLabels_, vector<ModifyAddressBookRequestAckLabels>) };
    inline ModifyAddressBookRequest& setAckLabels(const vector<ModifyAddressBookRequestAckLabels> & ackLabels) { DARABONBA_PTR_SET_VALUE(ackLabels_, ackLabels) };
    inline ModifyAddressBookRequest& setAckLabels(vector<ModifyAddressBookRequestAckLabels> && ackLabels) { DARABONBA_PTR_SET_RVALUE(ackLabels_, ackLabels) };


    // ackNamespaces Field Functions 
    bool hasAckNamespaces() const { return this->ackNamespaces_ != nullptr;};
    void deleteAckNamespaces() { this->ackNamespaces_ = nullptr;};
    inline const vector<string> & ackNamespaces() const { DARABONBA_PTR_GET_CONST(ackNamespaces_, vector<string>) };
    inline vector<string> ackNamespaces() { DARABONBA_PTR_GET(ackNamespaces_, vector<string>) };
    inline ModifyAddressBookRequest& setAckNamespaces(const vector<string> & ackNamespaces) { DARABONBA_PTR_SET_VALUE(ackNamespaces_, ackNamespaces) };
    inline ModifyAddressBookRequest& setAckNamespaces(vector<string> && ackNamespaces) { DARABONBA_PTR_SET_RVALUE(ackNamespaces_, ackNamespaces) };


    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline string addressList() const { DARABONBA_PTR_GET_DEFAULT(addressList_, "") };
    inline ModifyAddressBookRequest& setAddressList(string addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };


    // autoAddTagEcs Field Functions 
    bool hasAutoAddTagEcs() const { return this->autoAddTagEcs_ != nullptr;};
    void deleteAutoAddTagEcs() { this->autoAddTagEcs_ = nullptr;};
    inline string autoAddTagEcs() const { DARABONBA_PTR_GET_DEFAULT(autoAddTagEcs_, "") };
    inline ModifyAddressBookRequest& setAutoAddTagEcs(string autoAddTagEcs) { DARABONBA_PTR_SET_VALUE(autoAddTagEcs_, autoAddTagEcs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAddressBookRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyAddressBookRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupUuid Field Functions 
    bool hasGroupUuid() const { return this->groupUuid_ != nullptr;};
    void deleteGroupUuid() { this->groupUuid_ = nullptr;};
    inline string groupUuid() const { DARABONBA_PTR_GET_DEFAULT(groupUuid_, "") };
    inline ModifyAddressBookRequest& setGroupUuid(string groupUuid) { DARABONBA_PTR_SET_VALUE(groupUuid_, groupUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyAddressBookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string modifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyAddressBookRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyAddressBookRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<ModifyAddressBookRequestTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<ModifyAddressBookRequestTagList>) };
    inline vector<ModifyAddressBookRequestTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<ModifyAddressBookRequestTagList>) };
    inline ModifyAddressBookRequest& setTagList(const vector<ModifyAddressBookRequestTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline ModifyAddressBookRequest& setTagList(vector<ModifyAddressBookRequestTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // tagRelation Field Functions 
    bool hasTagRelation() const { return this->tagRelation_ != nullptr;};
    void deleteTagRelation() { this->tagRelation_ = nullptr;};
    inline string tagRelation() const { DARABONBA_PTR_GET_DEFAULT(tagRelation_, "") };
    inline ModifyAddressBookRequest& setTagRelation(string tagRelation) { DARABONBA_PTR_SET_VALUE(tagRelation_, tagRelation) };


  protected:
    std::shared_ptr<vector<ModifyAddressBookRequestAckLabels>> ackLabels_ = nullptr;
    std::shared_ptr<vector<string>> ackNamespaces_ = nullptr;
    // The addresses in the address book. Separate multiple addresses with commas (,). If you set GroupType to **ip**, **port**, or **domain**, you must specify this parameter.
    // 
    // *   If you set GroupType to **ip**, you must specify IP addresses for the address book. Example: 1.2.XX.XX/32,1.2.XX.XX/24.
    // *   If you set GroupType to **port**, you must specify port numbers or port ranges for the address book. Example: 80/80,100/200.
    // *   If you set GroupType to **domain**, you must specify domain names for the address book. Example: demo1.aliyun.com,demo2.aliyun.com.
    std::shared_ptr<string> addressList_ = nullptr;
    // Specifies whether to automatically add public IP addresses of Elastic Compute Service (ECS) instances to the address book if the instances match the specified tags. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<string> autoAddTagEcs_ = nullptr;
    // The description of the address book.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the address book.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the address book.
    // 
    // >  To modify the address book, you must provide the ID of the address book. You can call the [DescribeAddressBook](https://help.aliyun.com/document_detail/138869.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupUuid_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Modification mode with the following values:
    // 
    // - **Cover**: Use the value of the AddressList parameter to overwrite the original address book.
    // - **Append**: After the original address book, append addresses using the value of the AddressList parameter.
    // - **Delete**: Delete addresses using the value of the AddressList parameter from the address book.
    // 
    // >When GroupType is **ip**, **ipv6**, **port**, or **domain**, if this parameter is not configured, the default is to use the **Cover** method to modify the address book.
    // >Notice: When GroupType is **tag**, this parameter must be empty.</notice>
    std::shared_ptr<string> modifyMode_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The ECS tags that you want to match.
    std::shared_ptr<vector<ModifyAddressBookRequestTagList>> tagList_ = nullptr;
    // The logical relationship among ECS tags. Valid values:
    // 
    // *   **and**: Only the public IP addresses of ECS instances that match all the specified tags can be added to the address book.
    // *   **or**: The public IP addresses of ECS instances that match one of the specified tags can be added to the address book.
    std::shared_ptr<string> tagRelation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDADDRESSBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDADDRESSBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddAddressBookRequestTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class AddAddressBookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAddressBookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressList, addressList_);
      DARABONBA_PTR_TO_JSON(AutoAddTagEcs, autoAddTagEcs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TagRelation, tagRelation_);
    };
    friend void from_json(const Darabonba::Json& j, AddAddressBookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressList, addressList_);
      DARABONBA_PTR_FROM_JSON(AutoAddTagEcs, autoAddTagEcs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TagRelation, tagRelation_);
    };
    AddAddressBookRequest() = default ;
    AddAddressBookRequest(const AddAddressBookRequest &) = default ;
    AddAddressBookRequest(AddAddressBookRequest &&) = default ;
    AddAddressBookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAddressBookRequest() = default ;
    AddAddressBookRequest& operator=(const AddAddressBookRequest &) = default ;
    AddAddressBookRequest& operator=(AddAddressBookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressList_ != nullptr
        && this->autoAddTagEcs_ != nullptr && this->description_ != nullptr && this->groupName_ != nullptr && this->groupType_ != nullptr && this->lang_ != nullptr
        && this->sourceIp_ != nullptr && this->tagList_ != nullptr && this->tagRelation_ != nullptr; };
    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline string addressList() const { DARABONBA_PTR_GET_DEFAULT(addressList_, "") };
    inline AddAddressBookRequest& setAddressList(string addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };


    // autoAddTagEcs Field Functions 
    bool hasAutoAddTagEcs() const { return this->autoAddTagEcs_ != nullptr;};
    void deleteAutoAddTagEcs() { this->autoAddTagEcs_ = nullptr;};
    inline string autoAddTagEcs() const { DARABONBA_PTR_GET_DEFAULT(autoAddTagEcs_, "") };
    inline AddAddressBookRequest& setAutoAddTagEcs(string autoAddTagEcs) { DARABONBA_PTR_SET_VALUE(autoAddTagEcs_, autoAddTagEcs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddAddressBookRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline AddAddressBookRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline AddAddressBookRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddAddressBookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline AddAddressBookRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<AddAddressBookRequestTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<AddAddressBookRequestTagList>) };
    inline vector<AddAddressBookRequestTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<AddAddressBookRequestTagList>) };
    inline AddAddressBookRequest& setTagList(const vector<AddAddressBookRequestTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline AddAddressBookRequest& setTagList(vector<AddAddressBookRequestTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // tagRelation Field Functions 
    bool hasTagRelation() const { return this->tagRelation_ != nullptr;};
    void deleteTagRelation() { this->tagRelation_ = nullptr;};
    inline string tagRelation() const { DARABONBA_PTR_GET_DEFAULT(tagRelation_, "") };
    inline AddAddressBookRequest& setTagRelation(string tagRelation) { DARABONBA_PTR_SET_VALUE(tagRelation_, tagRelation) };


  protected:
    // The addresses that you want to add to the address book. Separate multiple addresses with commas (,).
    // 
    // >  If you set GroupType to `ip`, `port` or `domain`, you must specify AddressList.
    // 
    // *   If you set GroupType to `ip`, you must add IP addresses to the address book. Example: 192.0.XX.XX/32,192.0.XX.XX/24.
    // *   If you set GroupType to `port`, you must add port numbers or port ranges to the address book. Example: 80,100/200.
    // *   If you set GroupType to `domain`, you must add domain names to the address book. Example: example.com,aliyundoc.com.
    std::shared_ptr<string> addressList_ = nullptr;
    // Specifies whether to automatically add public IP addresses of ECS instances to the address book if the instances match the specified tags. Valid values:
    // 
    // *   **1**: yes
    // *   **0** (default): no
    std::shared_ptr<string> autoAddTagEcs_ = nullptr;
    // The description of the address book.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the address book.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the address book. Valid values:
    // 
    // *   **ip**: IP address book
    // *   **domain**: domain address book
    // *   **port**: port address book
    // *   **tag**: ECS tag-based address book
    // 
    // This parameter is required.
    std::shared_ptr<string> groupType_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The ECS tags that you want to match.
    std::shared_ptr<vector<AddAddressBookRequestTagList>> tagList_ = nullptr;
    // The logical relation among the ECS tags that you want to match. Valid values:
    // 
    // *   **and** (default): Only the public IP addresses of ECS instances that match all the specified tags can be added to the address book.
    // *   **or**: The public IP addresses of ECS instances that match one of the specified tags can be added to the address book.
    std::shared_ptr<string> tagRelation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

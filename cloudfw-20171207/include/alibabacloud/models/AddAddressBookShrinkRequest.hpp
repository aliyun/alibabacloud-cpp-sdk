// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDADDRESSBOOKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDADDRESSBOOKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class AddAddressBookShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAddressBookShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AckClusterConnectorId, ackClusterConnectorId_);
      DARABONBA_PTR_TO_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_TO_JSON(AckNamespaces, ackNamespaces_);
      DARABONBA_PTR_TO_JSON(AddressList, addressList_);
      DARABONBA_PTR_TO_JSON(AssetMemberUids, assetMemberUidsShrink_);
      DARABONBA_PTR_TO_JSON(AssetRegionResourceTypes, assetRegionResourceTypesShrink_);
      DARABONBA_PTR_TO_JSON(AutoAddTagEcs, autoAddTagEcs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TagRelation, tagRelation_);
    };
    friend void from_json(const Darabonba::Json& j, AddAddressBookShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AckClusterConnectorId, ackClusterConnectorId_);
      DARABONBA_PTR_FROM_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_FROM_JSON(AckNamespaces, ackNamespaces_);
      DARABONBA_PTR_FROM_JSON(AddressList, addressList_);
      DARABONBA_PTR_FROM_JSON(AssetMemberUids, assetMemberUidsShrink_);
      DARABONBA_PTR_FROM_JSON(AssetRegionResourceTypes, assetRegionResourceTypesShrink_);
      DARABONBA_PTR_FROM_JSON(AutoAddTagEcs, autoAddTagEcs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TagRelation, tagRelation_);
    };
    AddAddressBookShrinkRequest() = default ;
    AddAddressBookShrinkRequest(const AddAddressBookShrinkRequest &) = default ;
    AddAddressBookShrinkRequest(AddAddressBookShrinkRequest &&) = default ;
    AddAddressBookShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAddressBookShrinkRequest() = default ;
    AddAddressBookShrinkRequest& operator=(const AddAddressBookShrinkRequest &) = default ;
    AddAddressBookShrinkRequest& operator=(AddAddressBookShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagList& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, TagList& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      TagList() = default ;
      TagList(const TagList &) = default ;
      TagList(TagList &&) = default ;
      TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagList() = default ;
      TagList& operator=(const TagList &) = default ;
      TagList& operator=(TagList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline TagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The key of the ECS tag.
      shared_ptr<string> tagKey_ {};
      // The value of the ECS tag.
      shared_ptr<string> tagValue_ {};
    };

    class AckLabels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AckLabels& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AckLabels& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AckLabels() = default ;
      AckLabels(const AckLabels &) = default ;
      AckLabels(AckLabels &&) = default ;
      AckLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AckLabels() = default ;
      AckLabels& operator=(const AckLabels &) = default ;
      AckLabels& operator=(AckLabels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline AckLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AckLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the ACK cluster pod label.
      shared_ptr<string> key_ {};
      // The value of the ACK cluster pod label.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->ackClusterConnectorId_ == nullptr
        && this->ackLabels_ == nullptr && this->ackNamespaces_ == nullptr && this->addressList_ == nullptr && this->assetMemberUidsShrink_ == nullptr && this->assetRegionResourceTypesShrink_ == nullptr
        && this->autoAddTagEcs_ == nullptr && this->description_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->lang_ == nullptr
        && this->sourceIp_ == nullptr && this->tagList_ == nullptr && this->tagRelation_ == nullptr; };
    // ackClusterConnectorId Field Functions 
    bool hasAckClusterConnectorId() const { return this->ackClusterConnectorId_ != nullptr;};
    void deleteAckClusterConnectorId() { this->ackClusterConnectorId_ = nullptr;};
    inline string getAckClusterConnectorId() const { DARABONBA_PTR_GET_DEFAULT(ackClusterConnectorId_, "") };
    inline AddAddressBookShrinkRequest& setAckClusterConnectorId(string ackClusterConnectorId) { DARABONBA_PTR_SET_VALUE(ackClusterConnectorId_, ackClusterConnectorId) };


    // ackLabels Field Functions 
    bool hasAckLabels() const { return this->ackLabels_ != nullptr;};
    void deleteAckLabels() { this->ackLabels_ = nullptr;};
    inline const vector<AddAddressBookShrinkRequest::AckLabels> & getAckLabels() const { DARABONBA_PTR_GET_CONST(ackLabels_, vector<AddAddressBookShrinkRequest::AckLabels>) };
    inline vector<AddAddressBookShrinkRequest::AckLabels> getAckLabels() { DARABONBA_PTR_GET(ackLabels_, vector<AddAddressBookShrinkRequest::AckLabels>) };
    inline AddAddressBookShrinkRequest& setAckLabels(const vector<AddAddressBookShrinkRequest::AckLabels> & ackLabels) { DARABONBA_PTR_SET_VALUE(ackLabels_, ackLabels) };
    inline AddAddressBookShrinkRequest& setAckLabels(vector<AddAddressBookShrinkRequest::AckLabels> && ackLabels) { DARABONBA_PTR_SET_RVALUE(ackLabels_, ackLabels) };


    // ackNamespaces Field Functions 
    bool hasAckNamespaces() const { return this->ackNamespaces_ != nullptr;};
    void deleteAckNamespaces() { this->ackNamespaces_ = nullptr;};
    inline const vector<string> & getAckNamespaces() const { DARABONBA_PTR_GET_CONST(ackNamespaces_, vector<string>) };
    inline vector<string> getAckNamespaces() { DARABONBA_PTR_GET(ackNamespaces_, vector<string>) };
    inline AddAddressBookShrinkRequest& setAckNamespaces(const vector<string> & ackNamespaces) { DARABONBA_PTR_SET_VALUE(ackNamespaces_, ackNamespaces) };
    inline AddAddressBookShrinkRequest& setAckNamespaces(vector<string> && ackNamespaces) { DARABONBA_PTR_SET_RVALUE(ackNamespaces_, ackNamespaces) };


    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline string getAddressList() const { DARABONBA_PTR_GET_DEFAULT(addressList_, "") };
    inline AddAddressBookShrinkRequest& setAddressList(string addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };


    // assetMemberUidsShrink Field Functions 
    bool hasAssetMemberUidsShrink() const { return this->assetMemberUidsShrink_ != nullptr;};
    void deleteAssetMemberUidsShrink() { this->assetMemberUidsShrink_ = nullptr;};
    inline string getAssetMemberUidsShrink() const { DARABONBA_PTR_GET_DEFAULT(assetMemberUidsShrink_, "") };
    inline AddAddressBookShrinkRequest& setAssetMemberUidsShrink(string assetMemberUidsShrink) { DARABONBA_PTR_SET_VALUE(assetMemberUidsShrink_, assetMemberUidsShrink) };


    // assetRegionResourceTypesShrink Field Functions 
    bool hasAssetRegionResourceTypesShrink() const { return this->assetRegionResourceTypesShrink_ != nullptr;};
    void deleteAssetRegionResourceTypesShrink() { this->assetRegionResourceTypesShrink_ = nullptr;};
    inline string getAssetRegionResourceTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(assetRegionResourceTypesShrink_, "") };
    inline AddAddressBookShrinkRequest& setAssetRegionResourceTypesShrink(string assetRegionResourceTypesShrink) { DARABONBA_PTR_SET_VALUE(assetRegionResourceTypesShrink_, assetRegionResourceTypesShrink) };


    // autoAddTagEcs Field Functions 
    bool hasAutoAddTagEcs() const { return this->autoAddTagEcs_ != nullptr;};
    void deleteAutoAddTagEcs() { this->autoAddTagEcs_ = nullptr;};
    inline string getAutoAddTagEcs() const { DARABONBA_PTR_GET_DEFAULT(autoAddTagEcs_, "") };
    inline AddAddressBookShrinkRequest& setAutoAddTagEcs(string autoAddTagEcs) { DARABONBA_PTR_SET_VALUE(autoAddTagEcs_, autoAddTagEcs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddAddressBookShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline AddAddressBookShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline AddAddressBookShrinkRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddAddressBookShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline AddAddressBookShrinkRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<AddAddressBookShrinkRequest::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<AddAddressBookShrinkRequest::TagList>) };
    inline vector<AddAddressBookShrinkRequest::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<AddAddressBookShrinkRequest::TagList>) };
    inline AddAddressBookShrinkRequest& setTagList(const vector<AddAddressBookShrinkRequest::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline AddAddressBookShrinkRequest& setTagList(vector<AddAddressBookShrinkRequest::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // tagRelation Field Functions 
    bool hasTagRelation() const { return this->tagRelation_ != nullptr;};
    void deleteTagRelation() { this->tagRelation_ = nullptr;};
    inline string getTagRelation() const { DARABONBA_PTR_GET_DEFAULT(tagRelation_, "") };
    inline AddAddressBookShrinkRequest& setTagRelation(string tagRelation) { DARABONBA_PTR_SET_VALUE(tagRelation_, tagRelation) };


  protected:
    // The ACK cluster connector ID. You can obtain the value from the following operation:
    // - [DescribeAckClusterConnectors](~~DescribeAckClusterConnectors~~): Lists ACK cluster connectors.
    shared_ptr<string> ackClusterConnectorId_ {};
    // The list of ACK cluster pod labels.
    // 
    // > A maximum of 10 labels are supported.
    shared_ptr<vector<AddAddressBookShrinkRequest::AckLabels>> ackLabels_ {};
    // The list of ACK cluster pod namespaces.
    // > A maximum of 10 namespaces are supported.
    shared_ptr<vector<string>> ackNamespaces_ {};
    // The addresses in the address book. Separate multiple addresses with commas (,). Use a space to separate an address from its description within a single address element.
    // 
    // > This parameter is required when GroupType is set to `ip`, `port`, or `domain`.
    // 
    // - When GroupType is set to `ip`, enter IP addresses in the address list. Example: 192.0.XX.XX/32 Development CIDR block,10.0.0.X/24,192.0.XX.XX/24 Test CIDR block.
    // 
    // - When GroupType is set to `port`, enter ports or port ranges in the address list. Example: 80 HTTP port,100/200,3306 Database port.
    // 
    // - When GroupType is set to `domain`, enter domain names in the address list. Example: example.com Test domain name,aliyundoc.com,www.aliyun.com Alibaba Cloud official website.
    shared_ptr<string> addressList_ {};
    // The list of member accounts for the asset address book.
    shared_ptr<string> assetMemberUidsShrink_ {};
    // The list of regions and resource types for the asset address book.
    shared_ptr<string> assetRegionResourceTypesShrink_ {};
    // Indicates whether to automatically add the public IP addresses of Elastic Compute Service (ECS) instances that match the specified tags to the address book.
    shared_ptr<string> autoAddTagEcs_ {};
    // The description of the address book.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The name of the address book.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The type of the address book.
    // 
    // This parameter is required.
    shared_ptr<string> groupType_ {};
    // The language type of the address book description.
    shared_ptr<string> lang_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The ECS tag list.
    shared_ptr<vector<AddAddressBookShrinkRequest::TagList>> tagList_ {};
    // The logical relationship among multiple ECS tags to match.
    shared_ptr<string> tagRelation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

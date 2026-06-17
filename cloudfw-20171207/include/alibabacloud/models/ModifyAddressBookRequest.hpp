// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYADDRESSBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYADDRESSBOOKREQUEST_HPP_
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
      // The tag key of the ECS instance.
      shared_ptr<string> tagKey_ {};
      // The tag value of the ECS instance.
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

    virtual bool empty() const override { return this->ackLabels_ == nullptr
        && this->ackNamespaces_ == nullptr && this->addressList_ == nullptr && this->autoAddTagEcs_ == nullptr && this->description_ == nullptr && this->groupName_ == nullptr
        && this->groupUuid_ == nullptr && this->lang_ == nullptr && this->modifyMode_ == nullptr && this->sourceIp_ == nullptr && this->tagList_ == nullptr
        && this->tagRelation_ == nullptr; };
    // ackLabels Field Functions 
    bool hasAckLabels() const { return this->ackLabels_ != nullptr;};
    void deleteAckLabels() { this->ackLabels_ = nullptr;};
    inline const vector<ModifyAddressBookRequest::AckLabels> & getAckLabels() const { DARABONBA_PTR_GET_CONST(ackLabels_, vector<ModifyAddressBookRequest::AckLabels>) };
    inline vector<ModifyAddressBookRequest::AckLabels> getAckLabels() { DARABONBA_PTR_GET(ackLabels_, vector<ModifyAddressBookRequest::AckLabels>) };
    inline ModifyAddressBookRequest& setAckLabels(const vector<ModifyAddressBookRequest::AckLabels> & ackLabels) { DARABONBA_PTR_SET_VALUE(ackLabels_, ackLabels) };
    inline ModifyAddressBookRequest& setAckLabels(vector<ModifyAddressBookRequest::AckLabels> && ackLabels) { DARABONBA_PTR_SET_RVALUE(ackLabels_, ackLabels) };


    // ackNamespaces Field Functions 
    bool hasAckNamespaces() const { return this->ackNamespaces_ != nullptr;};
    void deleteAckNamespaces() { this->ackNamespaces_ = nullptr;};
    inline const vector<string> & getAckNamespaces() const { DARABONBA_PTR_GET_CONST(ackNamespaces_, vector<string>) };
    inline vector<string> getAckNamespaces() { DARABONBA_PTR_GET(ackNamespaces_, vector<string>) };
    inline ModifyAddressBookRequest& setAckNamespaces(const vector<string> & ackNamespaces) { DARABONBA_PTR_SET_VALUE(ackNamespaces_, ackNamespaces) };
    inline ModifyAddressBookRequest& setAckNamespaces(vector<string> && ackNamespaces) { DARABONBA_PTR_SET_RVALUE(ackNamespaces_, ackNamespaces) };


    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline string getAddressList() const { DARABONBA_PTR_GET_DEFAULT(addressList_, "") };
    inline ModifyAddressBookRequest& setAddressList(string addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };


    // autoAddTagEcs Field Functions 
    bool hasAutoAddTagEcs() const { return this->autoAddTagEcs_ != nullptr;};
    void deleteAutoAddTagEcs() { this->autoAddTagEcs_ = nullptr;};
    inline string getAutoAddTagEcs() const { DARABONBA_PTR_GET_DEFAULT(autoAddTagEcs_, "") };
    inline ModifyAddressBookRequest& setAutoAddTagEcs(string autoAddTagEcs) { DARABONBA_PTR_SET_VALUE(autoAddTagEcs_, autoAddTagEcs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAddressBookRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyAddressBookRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupUuid Field Functions 
    bool hasGroupUuid() const { return this->groupUuid_ != nullptr;};
    void deleteGroupUuid() { this->groupUuid_ = nullptr;};
    inline string getGroupUuid() const { DARABONBA_PTR_GET_DEFAULT(groupUuid_, "") };
    inline ModifyAddressBookRequest& setGroupUuid(string groupUuid) { DARABONBA_PTR_SET_VALUE(groupUuid_, groupUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyAddressBookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // modifyMode Field Functions 
    bool hasModifyMode() const { return this->modifyMode_ != nullptr;};
    void deleteModifyMode() { this->modifyMode_ = nullptr;};
    inline string getModifyMode() const { DARABONBA_PTR_GET_DEFAULT(modifyMode_, "") };
    inline ModifyAddressBookRequest& setModifyMode(string modifyMode) { DARABONBA_PTR_SET_VALUE(modifyMode_, modifyMode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyAddressBookRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<ModifyAddressBookRequest::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<ModifyAddressBookRequest::TagList>) };
    inline vector<ModifyAddressBookRequest::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<ModifyAddressBookRequest::TagList>) };
    inline ModifyAddressBookRequest& setTagList(const vector<ModifyAddressBookRequest::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline ModifyAddressBookRequest& setTagList(vector<ModifyAddressBookRequest::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // tagRelation Field Functions 
    bool hasTagRelation() const { return this->tagRelation_ != nullptr;};
    void deleteTagRelation() { this->tagRelation_ = nullptr;};
    inline string getTagRelation() const { DARABONBA_PTR_GET_DEFAULT(tagRelation_, "") };
    inline ModifyAddressBookRequest& setTagRelation(string tagRelation) { DARABONBA_PTR_SET_VALUE(tagRelation_, tagRelation) };


  protected:
    // A list of ACK cluster pod labels.
    // 
    // > Up to 10 labels are allowed.
    shared_ptr<vector<ModifyAddressBookRequest::AckLabels>> ackLabels_ {};
    // A list of ACK cluster pod namespaces.
    // 
    // > Up to 10 namespaces are allowed.
    shared_ptr<vector<string>> ackNamespaces_ {};
    // A list of addresses in the address book. Separate multiple addresses with commas. Within each address element, separate the address and its description with a space. You must specify this parameter when GroupType is **ip**, **port**, or **domain**.
    // 
    // - When GroupType is **ip**, specify IP addresses. Example: 1.2.XX.XX/32 development CIDR block, 10.0.0.X/24,1.2.XX.XX/24 test CIDR block.
    // 
    // - When GroupType is **port**, specify ports or port ranges. Example: 80/80 HTTP port, 100/200,3306 database port.
    // 
    // - When GroupType is **domain**, specify domain names. Example: demo1.aliyun.com test domain, demo2.aliyun.com,www\\.aliyun.com Alibaba Cloud official website.
    shared_ptr<string> addressList_ {};
    // Specifies whether to automatically add public IP addresses of new ECS instances that match the specified tags to the address book.
    shared_ptr<string> autoAddTagEcs_ {};
    // The description of the address book.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The name of the address book.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The unique ID of the address book.
    // 
    // > Obtain this value from [DescribeAddressBook](~~DescribeAddressBook~~).
    // 
    // This parameter is required.
    shared_ptr<string> groupUuid_ {};
    // The language type.
    shared_ptr<string> lang_ {};
    // The modification mode.
    // 
    // > When GroupType is **ip**, **ipv6**, **port**, or **domain**, the default mode is **Cover** if this parameter is not specified.
    // > >Notice: When GroupType is **tag**, this parameter must be empty.
    shared_ptr<string> modifyMode_ {};
    // The source IP address of the requester.
    shared_ptr<string> sourceIp_ {};
    // A list of ECS tags.
    shared_ptr<vector<ModifyAddressBookRequest::TagList>> tagList_ {};
    // The relationship between multiple ECS tags.
    shared_ptr<string> tagRelation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

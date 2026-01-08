// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDADDRESSBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDADDRESSBOOKREQUEST_HPP_
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
  class AddAddressBookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAddressBookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AckClusterConnectorId, ackClusterConnectorId_);
      DARABONBA_PTR_TO_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_TO_JSON(AckNamespaces, ackNamespaces_);
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
      DARABONBA_PTR_FROM_JSON(AckClusterConnectorId, ackClusterConnectorId_);
      DARABONBA_PTR_FROM_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_FROM_JSON(AckNamespaces, ackNamespaces_);
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->ackClusterConnectorId_ == nullptr
        && this->ackLabels_ == nullptr && this->ackNamespaces_ == nullptr && this->addressList_ == nullptr && this->autoAddTagEcs_ == nullptr && this->description_ == nullptr
        && this->groupName_ == nullptr && this->groupType_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr && this->tagList_ == nullptr
        && this->tagRelation_ == nullptr; };
    // ackClusterConnectorId Field Functions 
    bool hasAckClusterConnectorId() const { return this->ackClusterConnectorId_ != nullptr;};
    void deleteAckClusterConnectorId() { this->ackClusterConnectorId_ = nullptr;};
    inline string getAckClusterConnectorId() const { DARABONBA_PTR_GET_DEFAULT(ackClusterConnectorId_, "") };
    inline AddAddressBookRequest& setAckClusterConnectorId(string ackClusterConnectorId) { DARABONBA_PTR_SET_VALUE(ackClusterConnectorId_, ackClusterConnectorId) };


    // ackLabels Field Functions 
    bool hasAckLabels() const { return this->ackLabels_ != nullptr;};
    void deleteAckLabels() { this->ackLabels_ = nullptr;};
    inline const vector<AddAddressBookRequest::AckLabels> & getAckLabels() const { DARABONBA_PTR_GET_CONST(ackLabels_, vector<AddAddressBookRequest::AckLabels>) };
    inline vector<AddAddressBookRequest::AckLabels> getAckLabels() { DARABONBA_PTR_GET(ackLabels_, vector<AddAddressBookRequest::AckLabels>) };
    inline AddAddressBookRequest& setAckLabels(const vector<AddAddressBookRequest::AckLabels> & ackLabels) { DARABONBA_PTR_SET_VALUE(ackLabels_, ackLabels) };
    inline AddAddressBookRequest& setAckLabels(vector<AddAddressBookRequest::AckLabels> && ackLabels) { DARABONBA_PTR_SET_RVALUE(ackLabels_, ackLabels) };


    // ackNamespaces Field Functions 
    bool hasAckNamespaces() const { return this->ackNamespaces_ != nullptr;};
    void deleteAckNamespaces() { this->ackNamespaces_ = nullptr;};
    inline const vector<string> & getAckNamespaces() const { DARABONBA_PTR_GET_CONST(ackNamespaces_, vector<string>) };
    inline vector<string> getAckNamespaces() { DARABONBA_PTR_GET(ackNamespaces_, vector<string>) };
    inline AddAddressBookRequest& setAckNamespaces(const vector<string> & ackNamespaces) { DARABONBA_PTR_SET_VALUE(ackNamespaces_, ackNamespaces) };
    inline AddAddressBookRequest& setAckNamespaces(vector<string> && ackNamespaces) { DARABONBA_PTR_SET_RVALUE(ackNamespaces_, ackNamespaces) };


    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline string getAddressList() const { DARABONBA_PTR_GET_DEFAULT(addressList_, "") };
    inline AddAddressBookRequest& setAddressList(string addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };


    // autoAddTagEcs Field Functions 
    bool hasAutoAddTagEcs() const { return this->autoAddTagEcs_ != nullptr;};
    void deleteAutoAddTagEcs() { this->autoAddTagEcs_ = nullptr;};
    inline string getAutoAddTagEcs() const { DARABONBA_PTR_GET_DEFAULT(autoAddTagEcs_, "") };
    inline AddAddressBookRequest& setAutoAddTagEcs(string autoAddTagEcs) { DARABONBA_PTR_SET_VALUE(autoAddTagEcs_, autoAddTagEcs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddAddressBookRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline AddAddressBookRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline AddAddressBookRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddAddressBookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline AddAddressBookRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<AddAddressBookRequest::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<AddAddressBookRequest::TagList>) };
    inline vector<AddAddressBookRequest::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<AddAddressBookRequest::TagList>) };
    inline AddAddressBookRequest& setTagList(const vector<AddAddressBookRequest::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline AddAddressBookRequest& setTagList(vector<AddAddressBookRequest::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // tagRelation Field Functions 
    bool hasTagRelation() const { return this->tagRelation_ != nullptr;};
    void deleteTagRelation() { this->tagRelation_ = nullptr;};
    inline string getTagRelation() const { DARABONBA_PTR_GET_DEFAULT(tagRelation_, "") };
    inline AddAddressBookRequest& setTagRelation(string tagRelation) { DARABONBA_PTR_SET_VALUE(tagRelation_, tagRelation) };


  protected:
    shared_ptr<string> ackClusterConnectorId_ {};
    shared_ptr<vector<AddAddressBookRequest::AckLabels>> ackLabels_ {};
    shared_ptr<vector<string>> ackNamespaces_ {};
    // The addresses that you want to add to the address book. Separate multiple addresses with commas (,).
    // 
    // >  If you set GroupType to `ip`, `port` or `domain`, you must specify AddressList.
    // 
    // *   If you set GroupType to `ip`, you must add IP addresses to the address book. Example: 192.0.XX.XX/32,192.0.XX.XX/24.
    // *   If you set GroupType to `port`, you must add port numbers or port ranges to the address book. Example: 80,100/200.
    // *   If you set GroupType to `domain`, you must add domain names to the address book. Example: example.com,aliyundoc.com.
    shared_ptr<string> addressList_ {};
    // Specifies whether to automatically add public IP addresses of ECS instances to the address book if the instances match the specified tags. Valid values:
    // 
    // *   **1**: yes
    // *   **0** (default): no
    shared_ptr<string> autoAddTagEcs_ {};
    // The description of the address book.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The name of the address book.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The type of the address book. Valid values:
    // 
    // *   **ip**: IP address book
    // *   **domain**: domain address book
    // *   **port**: port address book
    // *   **tag**: ECS tag-based address book
    // 
    // This parameter is required.
    shared_ptr<string> groupType_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The ECS tags that you want to match.
    shared_ptr<vector<AddAddressBookRequest::TagList>> tagList_ {};
    // The logical relation among the ECS tags that you want to match. Valid values:
    // 
    // *   **and** (default): Only the public IP addresses of ECS instances that match all the specified tags can be added to the address book.
    // *   **or**: The public IP addresses of ECS instances that match one of the specified tags can be added to the address book.
    shared_ptr<string> tagRelation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

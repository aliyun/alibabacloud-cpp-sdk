// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateVSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
    };
    CreateVSwitchRequest() = default ;
    CreateVSwitchRequest(const CreateVSwitchRequest &) = default ;
    CreateVSwitchRequest(CreateVSwitchRequest &&) = default ;
    CreateVSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVSwitchRequest() = default ;
    CreateVSwitchRequest& operator=(const CreateVSwitchRequest &) = default ;
    CreateVSwitchRequest& operator=(CreateVSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      // 
      // - The tag key cannot start with `aliyun`, `acs:`, `http://`, or `https://`.
      // 
      // - The tag key can be up to 64 characters long.
      // 
      // - The tag key cannot be an empty string.
      shared_ptr<string> key_ {};
      // The value of the tag. It can be up to 128 characters long, can be an empty string, and cannot start with `acs:` or contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->ipv6CidrBlock_ == nullptr && this->networkId_ == nullptr && this->tag_ == nullptr
        && this->vSwitchName_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateVSwitchRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVSwitchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateVSwitchRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline CreateVSwitchRequest& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline CreateVSwitchRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVSwitchRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVSwitchRequest::Tag>) };
    inline vector<CreateVSwitchRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateVSwitchRequest::Tag>) };
    inline CreateVSwitchRequest& setTag(const vector<CreateVSwitchRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVSwitchRequest& setTag(vector<CreateVSwitchRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline CreateVSwitchRequest& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


  protected:
    // The CIDR block of the VSwitch. The following requirements apply:
    // 
    // - The prefix length must be an integer from 16 to 29.
    // 
    // - The CIDR block of the VSwitch must be a subset of the CIDR block of the VPC to which the VSwitch belongs.
    // 
    // - The CIDR block of the VSwitch cannot be the same as the destination CIDR block of an existing route in the VPC, but it can be a subset of the destination CIDR block.
    // 
    // This parameter is required.
    shared_ptr<string> cidrBlock_ {};
    // The description of the VSwitch.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter or a Chinese character, and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The ID of the ENS node.
    // 
    // This parameter is required.
    shared_ptr<string> ensRegionId_ {};
    shared_ptr<string> ipv6CidrBlock_ {};
    // The ID of the network to which the VSwitch belongs.
    shared_ptr<string> networkId_ {};
    // The tags of the resource. You can specify up to 20 tags.
    shared_ptr<vector<CreateVSwitchRequest::Tag>> tag_ {};
    // The name of the VSwitch. The following requirements apply:
    // 
    // - The name must be 2 to 128 characters in length.
    // 
    // - The name must start with a letter or a Chinese character, and cannot start with `http://` or `https://`. The name can contain digits, colons (:), underscores (_), and hyphens (-).
    // 
    // Default value: an empty string.
    shared_ptr<string> vSwitchName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

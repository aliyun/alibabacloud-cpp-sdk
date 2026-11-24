// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTROUTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTROUTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class CreateExpressConnectRouterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExpressConnectRouterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlibabaSideAsn, alibabaSideAsn_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExpressConnectRouterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlibabaSideAsn, alibabaSideAsn_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateExpressConnectRouterRequest() = default ;
    CreateExpressConnectRouterRequest(const CreateExpressConnectRouterRequest &) = default ;
    CreateExpressConnectRouterRequest(CreateExpressConnectRouterRequest &&) = default ;
    CreateExpressConnectRouterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExpressConnectRouterRequest() = default ;
    CreateExpressConnectRouterRequest& operator=(const CreateExpressConnectRouterRequest &) = default ;
    CreateExpressConnectRouterRequest& operator=(CreateExpressConnectRouterRequest &&) = default ;
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
      // The tag key of the resource. If you specify this parameter, it cannot be an empty string. The tag key can be up to 128 characters in length, and cannot start with `aliyun` or `acs:`, or contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the listener. Valid values of N: **1** to **20**. If specified, the value can be an empty string. The value can be up to 128 characters in length. It cannot start with `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->alibabaSideAsn_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->name_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tag_ == nullptr && this->version_ == nullptr; };
    // alibabaSideAsn Field Functions 
    bool hasAlibabaSideAsn() const { return this->alibabaSideAsn_ != nullptr;};
    void deleteAlibabaSideAsn() { this->alibabaSideAsn_ = nullptr;};
    inline int64_t getAlibabaSideAsn() const { DARABONBA_PTR_GET_DEFAULT(alibabaSideAsn_, 0L) };
    inline CreateExpressConnectRouterRequest& setAlibabaSideAsn(int64_t alibabaSideAsn) { DARABONBA_PTR_SET_VALUE(alibabaSideAsn_, alibabaSideAsn) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateExpressConnectRouterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateExpressConnectRouterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateExpressConnectRouterRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateExpressConnectRouterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateExpressConnectRouterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateExpressConnectRouterRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateExpressConnectRouterRequest::Tag>) };
    inline vector<CreateExpressConnectRouterRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateExpressConnectRouterRequest::Tag>) };
    inline CreateExpressConnectRouterRequest& setTag(const vector<CreateExpressConnectRouterRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateExpressConnectRouterRequest& setTag(vector<CreateExpressConnectRouterRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateExpressConnectRouterRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The Autonomous System Number (ASN) of the Express Connect Router (ECR) instance. Valid values: 45104 (default), 64512 to 65534, and 4200000000 to 4294967294. The value 65025 is reserved by Alibaba Cloud.
    // 
    // This parameter is required.
    shared_ptr<int64_t> alibabaSideAsn_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the token from your client to ensure that the token is unique across different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // The description of the Express Connect Router (ECR) instance.
    // 
    // > The description can be empty or 0 to 256 characters in length, and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // Specifies whether it is only a dry run for this request. Valid values:
    // 
    // - **true**: Sends a check request without modifying service resources.
    // 
    // - **false** (default): Sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The name of the Express Connect Router (ECR) instance.
    // > The name can be empty or 0 to 128 characters in length, and cannot start with http:// or https://.
    shared_ptr<string> name_ {};
    // The ID of the resource group to which the Express Connect Router (ECR) instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    // 
    // You can add up to 20 tags.
    shared_ptr<vector<CreateExpressConnectRouterRequest::Tag>> tag_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateRouteMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateRouteMapRequest() = default ;
    CreateRouteMapRequest(const CreateRouteMapRequest &) = default ;
    CreateRouteMapRequest(CreateRouteMapRequest &&) = default ;
    CreateRouteMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteMapRequest() = default ;
    CreateRouteMapRequest& operator=(const CreateRouteMapRequest &) = default ;
    CreateRouteMapRequest& operator=(CreateRouteMapRequest &&) = default ;
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
      // The tag key of the resource.
      // 
      // If you specify this parameter, it cannot be an empty string. The tag key can be up to 64 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      // 
      // You can specify up to 20 tag keys at a time.
      shared_ptr<string> key_ {};
      // The tag value of the resource.
      // 
      // If you specify this parameter, it cannot be empty. The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      // 
      // Each tag key corresponds to a tag value. You can specify up to 20 tag values at a time.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->direction_ == nullptr && this->dryRun_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRouteMapRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRouteMapRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline CreateRouteMapRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateRouteMapRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRouteMapRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateRouteMapRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateRouteMapRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateRouteMapRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateRouteMapRequest::Tag>) };
    inline vector<CreateRouteMapRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateRouteMapRequest::Tag>) };
    inline CreateRouteMapRequest& setTag(const vector<CreateRouteMapRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateRouteMapRequest& setTag(vector<CreateRouteMapRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a parameter value on your client to ensure that the value is unique across different requests. The client token only supports ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The description of the route map.
    // 
    // The description can be empty or 1 to 256 characters in length. It cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The direction of the route map. Valid values:
    // 
    // - **Inbound**: inbound. The direction in which the instance route table receives routes from the associated network instance. This affects the routes that the current instance can learn from the associated network instance.
    // - **Outbound**: outbound. The direction in which the instance route table sends routes to the associated network instance. This affects the routes that the current instance advertises to the associated network instance.
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // Specifies whether to perform a dry run on the request, including permission and instance status checks. Valid values:
    // 
    // - **false** (default): sends a normal request. After the check is passed, the route map is directly created.
    // - **true**: sends a dry run request. Only the check is performed, and the route map is not created. Check items include whether required parameters are specified and the request format. If the check fails, the corresponding error is returned. If the check is passed, the error code `DryRunOperation` is returned.
    shared_ptr<bool> dryRun_ {};
    // The name of the route map.
    // 
    // The name can be empty or 1 to 128 characters in length. It cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    // Policy priority of the route map. Valid values: **1** to **100**. A smaller value indicates a higher priority.
    // 
    // > Policy priority of a route map must be unique within an Alibaba Cloud account. When a route map is executed, the system matches route map rules starting from the route map with the smallest priority value based on policy priority of the route map rules. Therefore, when you specify policy priority of a route map, make sure that policy priority meets your expected matching order.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tag information.
    // 
    // You can specify up to 20 tags at a time.
    shared_ptr<vector<CreateRouteMapRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif

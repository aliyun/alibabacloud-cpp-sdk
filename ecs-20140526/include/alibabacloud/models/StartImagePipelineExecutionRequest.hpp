// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTIMAGEPIPELINEEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTIMAGEPIPELINEEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class StartImagePipelineExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartImagePipelineExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImagePipelineId, imagePipelineId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TemplateTag, templateTag_);
    };
    friend void from_json(const Darabonba::Json& j, StartImagePipelineExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImagePipelineId, imagePipelineId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TemplateTag, templateTag_);
    };
    StartImagePipelineExecutionRequest() = default ;
    StartImagePipelineExecutionRequest(const StartImagePipelineExecutionRequest &) = default ;
    StartImagePipelineExecutionRequest(StartImagePipelineExecutionRequest &&) = default ;
    StartImagePipelineExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartImagePipelineExecutionRequest() = default ;
    StartImagePipelineExecutionRequest& operator=(const StartImagePipelineExecutionRequest &) = default ;
    StartImagePipelineExecutionRequest& operator=(StartImagePipelineExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateTag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateTag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateTag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TemplateTag() = default ;
      TemplateTag(const TemplateTag &) = default ;
      TemplateTag(TemplateTag &&) = default ;
      TemplateTag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateTag() = default ;
      TemplateTag& operator=(const TemplateTag &) = default ;
      TemplateTag& operator=(TemplateTag &&) = default ;
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
      inline TemplateTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline TemplateTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // >  This parameter is deprecated.
      shared_ptr<string> key_ {};
      // >  This parameter is deprecated.
      shared_ptr<string> value_ {};
    };

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
      // The key of tag N. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of tag N. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length. The tag value cannot start with `acs:` or contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->imagePipelineId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->templateTag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartImagePipelineExecutionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imagePipelineId Field Functions 
    bool hasImagePipelineId() const { return this->imagePipelineId_ != nullptr;};
    void deleteImagePipelineId() { this->imagePipelineId_ = nullptr;};
    inline string getImagePipelineId() const { DARABONBA_PTR_GET_DEFAULT(imagePipelineId_, "") };
    inline StartImagePipelineExecutionRequest& setImagePipelineId(string imagePipelineId) { DARABONBA_PTR_SET_VALUE(imagePipelineId_, imagePipelineId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline StartImagePipelineExecutionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartImagePipelineExecutionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartImagePipelineExecutionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline StartImagePipelineExecutionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline StartImagePipelineExecutionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<StartImagePipelineExecutionRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<StartImagePipelineExecutionRequest::Tag>) };
    inline vector<StartImagePipelineExecutionRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<StartImagePipelineExecutionRequest::Tag>) };
    inline StartImagePipelineExecutionRequest& setTag(const vector<StartImagePipelineExecutionRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline StartImagePipelineExecutionRequest& setTag(vector<StartImagePipelineExecutionRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // templateTag Field Functions 
    bool hasTemplateTag() const { return this->templateTag_ != nullptr;};
    void deleteTemplateTag() { this->templateTag_ = nullptr;};
    inline const vector<StartImagePipelineExecutionRequest::TemplateTag> & getTemplateTag() const { DARABONBA_PTR_GET_CONST(templateTag_, vector<StartImagePipelineExecutionRequest::TemplateTag>) };
    inline vector<StartImagePipelineExecutionRequest::TemplateTag> getTemplateTag() { DARABONBA_PTR_GET(templateTag_, vector<StartImagePipelineExecutionRequest::TemplateTag>) };
    inline StartImagePipelineExecutionRequest& setTemplateTag(const vector<StartImagePipelineExecutionRequest::TemplateTag> & templateTag) { DARABONBA_PTR_SET_VALUE(templateTag_, templateTag) };
    inline StartImagePipelineExecutionRequest& setTemplateTag(vector<StartImagePipelineExecutionRequest::TemplateTag> && templateTag) { DARABONBA_PTR_SET_RVALUE(templateTag_, templateTag) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among requests. **The token can contain only ASCII characters and cannot exceed 64 characters in length.** For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The ID of the image template.
    // 
    // This parameter is required.
    shared_ptr<string> imagePipelineId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent list of regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags.
    shared_ptr<vector<StartImagePipelineExecutionRequest::Tag>> tag_ {};
    // >  This parameter is deprecated.
    shared_ptr<vector<StartImagePipelineExecutionRequest::TemplateTag>> templateTag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

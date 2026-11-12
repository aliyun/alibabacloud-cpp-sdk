// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class CreateCustomImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataSnapshotId, dataSnapshotId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SystemSnapshotId, systemSnapshotId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataSnapshotId, dataSnapshotId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SystemSnapshotId, systemSnapshotId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateCustomImageRequest() = default ;
    CreateCustomImageRequest(const CreateCustomImageRequest &) = default ;
    CreateCustomImageRequest(CreateCustomImageRequest &&) = default ;
    CreateCustomImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomImageRequest() = default ;
    CreateCustomImageRequest& operator=(const CreateCustomImageRequest &) = default ;
    CreateCustomImageRequest& operator=(CreateCustomImageRequest &&) = default ;
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
      // The key of tag N that is added to the custom image. Valid values of N: 1 to 20. The tag key cannot be an empty string. It can be up to 64 characters in length, and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The value of tag N that is added to the custom image. Valid values of N: 1 to 20. The tag value can be an empty string. It can be up to 64 characters in length, and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dataSnapshotId_ == nullptr && this->description_ == nullptr && this->imageName_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->systemSnapshotId_ == nullptr && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCustomImageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataSnapshotId Field Functions 
    bool hasDataSnapshotId() const { return this->dataSnapshotId_ != nullptr;};
    void deleteDataSnapshotId() { this->dataSnapshotId_ = nullptr;};
    inline string getDataSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(dataSnapshotId_, "") };
    inline CreateCustomImageRequest& setDataSnapshotId(string dataSnapshotId) { DARABONBA_PTR_SET_VALUE(dataSnapshotId_, dataSnapshotId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCustomImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateCustomImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCustomImageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCustomImageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCustomImageRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // systemSnapshotId Field Functions 
    bool hasSystemSnapshotId() const { return this->systemSnapshotId_ != nullptr;};
    void deleteSystemSnapshotId() { this->systemSnapshotId_ = nullptr;};
    inline string getSystemSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(systemSnapshotId_, "") };
    inline CreateCustomImageRequest& setSystemSnapshotId(string systemSnapshotId) { DARABONBA_PTR_SET_VALUE(systemSnapshotId_, systemSnapshotId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCustomImageRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCustomImageRequest::Tag>) };
    inline vector<CreateCustomImageRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateCustomImageRequest::Tag>) };
    inline CreateCustomImageRequest& setTag(const vector<CreateCustomImageRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCustomImageRequest& setTag(vector<CreateCustomImageRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The ID of the data disk snapshot.
    shared_ptr<string> dataSnapshotId_ {};
    // The description of the image.
    shared_ptr<string> description_ {};
    // The name of the custom image. The name must be 2 to 128 characters in length and must start with a letter, a Chinese character, or a digit. It can contain digits, colons (:), underscores (_), and hyphens (-). Default value: empty.
    // 
    // This parameter is required.
    shared_ptr<string> imageName_ {};
    // The instance ID of the specified Simple Application Server.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query available regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the system disk snapshot.
    shared_ptr<string> systemSnapshotId_ {};
    // The list of tags. You can specify up to 20 tags.
    shared_ptr<vector<CreateCustomImageRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif

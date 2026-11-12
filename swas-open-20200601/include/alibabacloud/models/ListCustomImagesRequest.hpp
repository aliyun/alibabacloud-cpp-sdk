// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIMAGESREQUEST_HPP_
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
  class ListCustomImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataSnapshotId, dataSnapshotId_);
      DARABONBA_PTR_TO_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_TO_JSON(ImageNames, imageNames_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Share, share_);
      DARABONBA_PTR_TO_JSON(SystemSnapshotId, systemSnapshotId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataSnapshotId, dataSnapshotId_);
      DARABONBA_PTR_FROM_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_FROM_JSON(ImageNames, imageNames_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Share, share_);
      DARABONBA_PTR_FROM_JSON(SystemSnapshotId, systemSnapshotId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListCustomImagesRequest() = default ;
    ListCustomImagesRequest(const ListCustomImagesRequest &) = default ;
    ListCustomImagesRequest(ListCustomImagesRequest &&) = default ;
    ListCustomImagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomImagesRequest() = default ;
    ListCustomImagesRequest& operator=(const ListCustomImagesRequest &) = default ;
    ListCustomImagesRequest& operator=(ListCustomImagesRequest &&) = default ;
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
      // The tag key of the custom image. Valid values of the tag key length: 1 to 64. Valid values of N: 1 to 20.
      shared_ptr<string> key_ {};
      // The tag value of the custom image. Valid values of the tag value length: 1 to 64. Valid values of N: 1 to 20.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dataSnapshotId_ == nullptr && this->imageIds_ == nullptr && this->imageNames_ == nullptr && this->instanceId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->share_ == nullptr && this->systemSnapshotId_ == nullptr
        && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListCustomImagesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataSnapshotId Field Functions 
    bool hasDataSnapshotId() const { return this->dataSnapshotId_ != nullptr;};
    void deleteDataSnapshotId() { this->dataSnapshotId_ = nullptr;};
    inline string getDataSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(dataSnapshotId_, "") };
    inline ListCustomImagesRequest& setDataSnapshotId(string dataSnapshotId) { DARABONBA_PTR_SET_VALUE(dataSnapshotId_, dataSnapshotId) };


    // imageIds Field Functions 
    bool hasImageIds() const { return this->imageIds_ != nullptr;};
    void deleteImageIds() { this->imageIds_ = nullptr;};
    inline string getImageIds() const { DARABONBA_PTR_GET_DEFAULT(imageIds_, "") };
    inline ListCustomImagesRequest& setImageIds(string imageIds) { DARABONBA_PTR_SET_VALUE(imageIds_, imageIds) };


    // imageNames Field Functions 
    bool hasImageNames() const { return this->imageNames_ != nullptr;};
    void deleteImageNames() { this->imageNames_ = nullptr;};
    inline string getImageNames() const { DARABONBA_PTR_GET_DEFAULT(imageNames_, "") };
    inline ListCustomImagesRequest& setImageNames(string imageNames) { DARABONBA_PTR_SET_VALUE(imageNames_, imageNames) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCustomImagesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomImagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomImagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCustomImagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListCustomImagesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // share Field Functions 
    bool hasShare() const { return this->share_ != nullptr;};
    void deleteShare() { this->share_ = nullptr;};
    inline bool getShare() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
    inline ListCustomImagesRequest& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


    // systemSnapshotId Field Functions 
    bool hasSystemSnapshotId() const { return this->systemSnapshotId_ != nullptr;};
    void deleteSystemSnapshotId() { this->systemSnapshotId_ = nullptr;};
    inline string getSystemSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(systemSnapshotId_, "") };
    inline ListCustomImagesRequest& setSystemSnapshotId(string systemSnapshotId) { DARABONBA_PTR_SET_VALUE(systemSnapshotId_, systemSnapshotId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListCustomImagesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListCustomImagesRequest::Tag>) };
    inline vector<ListCustomImagesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListCustomImagesRequest::Tag>) };
    inline ListCustomImagesRequest& setTag(const vector<ListCustomImagesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListCustomImagesRequest& setTag(vector<ListCustomImagesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request. A client token is generated from your client and must be unique among different requests. **ClientToken** supports only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The data cloud disk snapshot ID.
    shared_ptr<string> dataSnapshotId_ {};
    // The image IDs of the simple application servers. The value can be a JSON array that consists of up to 100 instance IDs. Separate multiple instance IDs with commas (,).
    shared_ptr<string> imageIds_ {};
    // The image names of the simple application servers. The value can be a JSON array that consists of up to 100 instance IDs. Separate multiple instance IDs with commas (,).
    shared_ptr<string> imageNames_ {};
    // The instance ID of the simple application server from which the image was created.
    shared_ptr<string> instanceId_ {};
    // The page number of the snapshot list.
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for a paged query.
    // 
    // - Maximum value: 100.
    // - Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the simple application servers. You can call [ListRegions](https://help.aliyun.com/document_detail/189315.html) to query the list of supported regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to query shared images. Valid values:
    // 
    // - False: The response does not include shared images.
    // 
    // - True: Only shared images are returned.
    // 
    // If this parameter is not specified, all images are returned by default.
    shared_ptr<bool> share_ {};
    // The system cloud disk snapshot ID.
    shared_ptr<string> systemSnapshotId_ {};
    // The tags of the custom images.
    shared_ptr<vector<ListCustomImagesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif

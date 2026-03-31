// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCEINVENTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCEINVENTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceInventoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceInventoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceInventory, resourceInventory_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceInventoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceInventory, resourceInventory_);
    };
    GetAggregateResourceInventoryResponseBody() = default ;
    GetAggregateResourceInventoryResponseBody(const GetAggregateResourceInventoryResponseBody &) = default ;
    GetAggregateResourceInventoryResponseBody(GetAggregateResourceInventoryResponseBody &&) = default ;
    GetAggregateResourceInventoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceInventoryResponseBody() = default ;
    GetAggregateResourceInventoryResponseBody& operator=(const GetAggregateResourceInventoryResponseBody &) = default ;
    GetAggregateResourceInventoryResponseBody& operator=(GetAggregateResourceInventoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceInventory : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceInventory& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(ResourceInventoryGenerateTime, resourceInventoryGenerateTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceInventory& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(ResourceInventoryGenerateTime, resourceInventoryGenerateTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ResourceInventory() = default ;
      ResourceInventory(const ResourceInventory &) = default ;
      ResourceInventory(ResourceInventory &&) = default ;
      ResourceInventory(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceInventory() = default ;
      ResourceInventory& operator=(const ResourceInventory &) = default ;
      ResourceInventory& operator=(ResourceInventory &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->resourceInventoryGenerateTime_ == nullptr && this->status_ == nullptr; };
      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline ResourceInventory& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // resourceInventoryGenerateTime Field Functions 
      bool hasResourceInventoryGenerateTime() const { return this->resourceInventoryGenerateTime_ != nullptr;};
      void deleteResourceInventoryGenerateTime() { this->resourceInventoryGenerateTime_ = nullptr;};
      inline int64_t getResourceInventoryGenerateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceInventoryGenerateTime_, 0L) };
      inline ResourceInventory& setResourceInventoryGenerateTime(int64_t resourceInventoryGenerateTime) { DARABONBA_PTR_SET_VALUE(resourceInventoryGenerateTime_, resourceInventoryGenerateTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceInventory& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The download URL of the resource inventory.
      shared_ptr<string> downloadUrl_ {};
      // The time when the resource inventory was generated. The value is a timestamp.
      // 
      // Unit: milliseconds.
      shared_ptr<int64_t> resourceInventoryGenerateTime_ {};
      // The generation status of the resource inventory. Valid values:
      // 
      // *   CREATING: The resource inventory is being generated.
      // *   COMPLETE: The resource inventory is generated.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceInventory_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceInventoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceInventory Field Functions 
    bool hasResourceInventory() const { return this->resourceInventory_ != nullptr;};
    void deleteResourceInventory() { this->resourceInventory_ = nullptr;};
    inline const GetAggregateResourceInventoryResponseBody::ResourceInventory & getResourceInventory() const { DARABONBA_PTR_GET_CONST(resourceInventory_, GetAggregateResourceInventoryResponseBody::ResourceInventory) };
    inline GetAggregateResourceInventoryResponseBody::ResourceInventory getResourceInventory() { DARABONBA_PTR_GET(resourceInventory_, GetAggregateResourceInventoryResponseBody::ResourceInventory) };
    inline GetAggregateResourceInventoryResponseBody& setResourceInventory(const GetAggregateResourceInventoryResponseBody::ResourceInventory & resourceInventory) { DARABONBA_PTR_SET_VALUE(resourceInventory_, resourceInventory) };
    inline GetAggregateResourceInventoryResponseBody& setResourceInventory(GetAggregateResourceInventoryResponseBody::ResourceInventory && resourceInventory) { DARABONBA_PTR_SET_RVALUE(resourceInventory_, resourceInventory) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the resource inventory.
    shared_ptr<GetAggregateResourceInventoryResponseBody::ResourceInventory> resourceInventory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif

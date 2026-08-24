// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHKVCACHESTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHKVCACHESTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class DetachKVCacheStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachKVCacheStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DetachKVCacheStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
    };
    DetachKVCacheStoreRequest() = default ;
    DetachKVCacheStoreRequest(const DetachKVCacheStoreRequest &) = default ;
    DetachKVCacheStoreRequest(DetachKVCacheStoreRequest &&) = default ;
    DetachKVCacheStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachKVCacheStoreRequest() = default ;
    DetachKVCacheStoreRequest& operator=(const DetachKVCacheStoreRequest &) = default ;
    DetachKVCacheStoreRequest& operator=(DetachKVCacheStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceIds& obj) { 
        DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
      };
      ResourceIds() = default ;
      ResourceIds(const ResourceIds &) = default ;
      ResourceIds(ResourceIds &&) = default ;
      ResourceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceIds() = default ;
      ResourceIds& operator=(const ResourceIds &) = default ;
      ResourceIds& operator=(ResourceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->kvcsId_ == nullptr
        && this->vscId_ == nullptr; };
      // kvcsId Field Functions 
      bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
      void deleteKvcsId() { this->kvcsId_ = nullptr;};
      inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
      inline ResourceIds& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline ResourceIds& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


    protected:
      // KVCacheStore KvcsId
      // 
      // This parameter is required.
      shared_ptr<string> kvcsId_ {};
      // The VSC ID on the compute side.
      // 
      // This parameter is required.
      shared_ptr<string> vscId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->regionId_ == nullptr && this->resourceIds_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachKVCacheStoreRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachKVCacheStoreRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<DetachKVCacheStoreRequest::ResourceIds> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<DetachKVCacheStoreRequest::ResourceIds>) };
    inline vector<DetachKVCacheStoreRequest::ResourceIds> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<DetachKVCacheStoreRequest::ResourceIds>) };
    inline DetachKVCacheStoreRequest& setResourceIds(const vector<DetachKVCacheStoreRequest::ResourceIds> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DetachKVCacheStoreRequest& setResourceIds(vector<DetachKVCacheStoreRequest::ResourceIds> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


  protected:
    // A string generated by the server that serves as a unique identifier for the client request.
    shared_ptr<string> clientToken_ {};
    // The region ID, such as cn-hangzhou.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of resources to unmount. A maximum of 100 resources can be specified.
    // 
    // This parameter is required.
    shared_ptr<vector<DetachKVCacheStoreRequest::ResourceIds>> resourceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif

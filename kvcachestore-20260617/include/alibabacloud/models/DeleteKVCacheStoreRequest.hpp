// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKVCACHESTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEKVCACHESTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class DeleteKVCacheStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKVCacheStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKVCacheStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteKVCacheStoreRequest() = default ;
    DeleteKVCacheStoreRequest(const DeleteKVCacheStoreRequest &) = default ;
    DeleteKVCacheStoreRequest(DeleteKVCacheStoreRequest &&) = default ;
    DeleteKVCacheStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKVCacheStoreRequest() = default ;
    DeleteKVCacheStoreRequest& operator=(const DeleteKVCacheStoreRequest &) = default ;
    DeleteKVCacheStoreRequest& operator=(DeleteKVCacheStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kvcsId_ == nullptr
        && this->regionId_ == nullptr; };
    // kvcsId Field Functions 
    bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
    void deleteKvcsId() { this->kvcsId_ = nullptr;};
    inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
    inline DeleteKVCacheStoreRequest& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteKVCacheStoreRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The KvCacheStore instance ID. Only instances in the following states can be deleted: Available and Stopped. Instances in other states cannot be deleted.
    // 
    // This parameter is required.
    shared_ptr<string> kvcsId_ {};
    // The region ID, such as cn-hangzhou.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif

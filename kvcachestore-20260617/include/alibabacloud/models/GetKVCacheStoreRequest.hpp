// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKVCACHESTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKVCACHESTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class GetKVCacheStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKVCacheStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKVCacheStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetKVCacheStoreRequest() = default ;
    GetKVCacheStoreRequest(const GetKVCacheStoreRequest &) = default ;
    GetKVCacheStoreRequest(GetKVCacheStoreRequest &&) = default ;
    GetKVCacheStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKVCacheStoreRequest() = default ;
    GetKVCacheStoreRequest& operator=(const GetKVCacheStoreRequest &) = default ;
    GetKVCacheStoreRequest& operator=(GetKVCacheStoreRequest &&) = default ;
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
    inline GetKVCacheStoreRequest& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetKVCacheStoreRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> kvcsId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif

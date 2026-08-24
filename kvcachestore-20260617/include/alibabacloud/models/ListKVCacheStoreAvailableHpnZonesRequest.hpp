// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKVCACHESTOREAVAILABLEHPNZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKVCACHESTOREAVAILABLEHPNZONESREQUEST_HPP_
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
  class ListKVCacheStoreAvailableHpnZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKVCacheStoreAvailableHpnZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KvcsIds, kvcsIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKVCacheStoreAvailableHpnZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KvcsIds, kvcsIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListKVCacheStoreAvailableHpnZonesRequest() = default ;
    ListKVCacheStoreAvailableHpnZonesRequest(const ListKVCacheStoreAvailableHpnZonesRequest &) = default ;
    ListKVCacheStoreAvailableHpnZonesRequest(ListKVCacheStoreAvailableHpnZonesRequest &&) = default ;
    ListKVCacheStoreAvailableHpnZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKVCacheStoreAvailableHpnZonesRequest() = default ;
    ListKVCacheStoreAvailableHpnZonesRequest& operator=(const ListKVCacheStoreAvailableHpnZonesRequest &) = default ;
    ListKVCacheStoreAvailableHpnZonesRequest& operator=(ListKVCacheStoreAvailableHpnZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kvcsIds_ == nullptr
        && this->regionId_ == nullptr; };
    // kvcsIds Field Functions 
    bool hasKvcsIds() const { return this->kvcsIds_ != nullptr;};
    void deleteKvcsIds() { this->kvcsIds_ = nullptr;};
    inline const vector<string> & getKvcsIds() const { DARABONBA_PTR_GET_CONST(kvcsIds_, vector<string>) };
    inline vector<string> getKvcsIds() { DARABONBA_PTR_GET(kvcsIds_, vector<string>) };
    inline ListKVCacheStoreAvailableHpnZonesRequest& setKvcsIds(const vector<string> & kvcsIds) { DARABONBA_PTR_SET_VALUE(kvcsIds_, kvcsIds) };
    inline ListKVCacheStoreAvailableHpnZonesRequest& setKvcsIds(vector<string> && kvcsIds) { DARABONBA_PTR_SET_RVALUE(kvcsIds_, kvcsIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListKVCacheStoreAvailableHpnZonesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> kvcsIds_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif

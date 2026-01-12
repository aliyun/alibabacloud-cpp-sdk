// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESDGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AttachInstanceSDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstanceSDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LoadOpt, loadOpt_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstanceSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LoadOpt, loadOpt_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    AttachInstanceSDGRequest() = default ;
    AttachInstanceSDGRequest(const AttachInstanceSDGRequest &) = default ;
    AttachInstanceSDGRequest(AttachInstanceSDGRequest &&) = default ;
    AttachInstanceSDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstanceSDGRequest() = default ;
    AttachInstanceSDGRequest& operator=(const AttachInstanceSDGRequest &) = default ;
    AttachInstanceSDGRequest& operator=(AttachInstanceSDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoadOpt : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadOpt& obj) { 
        DARABONBA_PTR_TO_JSON(BlockRwSplit, blockRwSplit_);
        DARABONBA_PTR_TO_JSON(BlockRwSplitSize, blockRwSplitSize_);
        DARABONBA_PTR_TO_JSON(Cache, cache_);
        DARABONBA_PTR_TO_JSON(CacheSize, cacheSize_);
      };
      friend void from_json(const Darabonba::Json& j, LoadOpt& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockRwSplit, blockRwSplit_);
        DARABONBA_PTR_FROM_JSON(BlockRwSplitSize, blockRwSplitSize_);
        DARABONBA_PTR_FROM_JSON(Cache, cache_);
        DARABONBA_PTR_FROM_JSON(CacheSize, cacheSize_);
      };
      LoadOpt() = default ;
      LoadOpt(const LoadOpt &) = default ;
      LoadOpt(LoadOpt &&) = default ;
      LoadOpt(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadOpt() = default ;
      LoadOpt& operator=(const LoadOpt &) = default ;
      LoadOpt& operator=(LoadOpt &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blockRwSplit_ == nullptr
        && this->blockRwSplitSize_ == nullptr && this->cache_ == nullptr && this->cacheSize_ == nullptr; };
      // blockRwSplit Field Functions 
      bool hasBlockRwSplit() const { return this->blockRwSplit_ != nullptr;};
      void deleteBlockRwSplit() { this->blockRwSplit_ = nullptr;};
      inline bool getBlockRwSplit() const { DARABONBA_PTR_GET_DEFAULT(blockRwSplit_, false) };
      inline LoadOpt& setBlockRwSplit(bool blockRwSplit) { DARABONBA_PTR_SET_VALUE(blockRwSplit_, blockRwSplit) };


      // blockRwSplitSize Field Functions 
      bool hasBlockRwSplitSize() const { return this->blockRwSplitSize_ != nullptr;};
      void deleteBlockRwSplitSize() { this->blockRwSplitSize_ = nullptr;};
      inline int32_t getBlockRwSplitSize() const { DARABONBA_PTR_GET_DEFAULT(blockRwSplitSize_, 0) };
      inline LoadOpt& setBlockRwSplitSize(int32_t blockRwSplitSize) { DARABONBA_PTR_SET_VALUE(blockRwSplitSize_, blockRwSplitSize) };


      // cache Field Functions 
      bool hasCache() const { return this->cache_ != nullptr;};
      void deleteCache() { this->cache_ = nullptr;};
      inline bool getCache() const { DARABONBA_PTR_GET_DEFAULT(cache_, false) };
      inline LoadOpt& setCache(bool cache) { DARABONBA_PTR_SET_VALUE(cache_, cache) };


      // cacheSize Field Functions 
      bool hasCacheSize() const { return this->cacheSize_ != nullptr;};
      void deleteCacheSize() { this->cacheSize_ = nullptr;};
      inline int32_t getCacheSize() const { DARABONBA_PTR_GET_DEFAULT(cacheSize_, 0) };
      inline LoadOpt& setCacheSize(int32_t cacheSize) { DARABONBA_PTR_SET_VALUE(cacheSize_, cacheSize) };


    protected:
      shared_ptr<bool> blockRwSplit_ {};
      shared_ptr<int32_t> blockRwSplitSize_ {};
      shared_ptr<bool> cache_ {};
      shared_ptr<int32_t> cacheSize_ {};
    };

    virtual bool empty() const override { return this->diskAccessProtocol_ == nullptr
        && this->diskType_ == nullptr && this->instanceIds_ == nullptr && this->loadOpt_ == nullptr && this->SDGId_ == nullptr; };
    // diskAccessProtocol Field Functions 
    bool hasDiskAccessProtocol() const { return this->diskAccessProtocol_ != nullptr;};
    void deleteDiskAccessProtocol() { this->diskAccessProtocol_ = nullptr;};
    inline string getDiskAccessProtocol() const { DARABONBA_PTR_GET_DEFAULT(diskAccessProtocol_, "") };
    inline AttachInstanceSDGRequest& setDiskAccessProtocol(string diskAccessProtocol) { DARABONBA_PTR_SET_VALUE(diskAccessProtocol_, diskAccessProtocol) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline AttachInstanceSDGRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline AttachInstanceSDGRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline AttachInstanceSDGRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // loadOpt Field Functions 
    bool hasLoadOpt() const { return this->loadOpt_ != nullptr;};
    void deleteLoadOpt() { this->loadOpt_ = nullptr;};
    inline const AttachInstanceSDGRequest::LoadOpt & getLoadOpt() const { DARABONBA_PTR_GET_CONST(loadOpt_, AttachInstanceSDGRequest::LoadOpt) };
    inline AttachInstanceSDGRequest::LoadOpt getLoadOpt() { DARABONBA_PTR_GET(loadOpt_, AttachInstanceSDGRequest::LoadOpt) };
    inline AttachInstanceSDGRequest& setLoadOpt(const AttachInstanceSDGRequest::LoadOpt & loadOpt) { DARABONBA_PTR_SET_VALUE(loadOpt_, loadOpt) };
    inline AttachInstanceSDGRequest& setLoadOpt(AttachInstanceSDGRequest::LoadOpt && loadOpt) { DARABONBA_PTR_SET_RVALUE(loadOpt_, loadOpt) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string getSDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline AttachInstanceSDGRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    shared_ptr<string> diskAccessProtocol_ {};
    shared_ptr<string> diskType_ {};
    // The IDs of the instances.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<AttachInstanceSDGRequest::LoadOpt> loadOpt_ {};
    // The ID of the SDG.
    // 
    // This parameter is required.
    shared_ptr<string> SDGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

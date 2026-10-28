// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKVCACHESTOREATTACHINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKVCACHESTOREATTACHINFOREQUEST_HPP_
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
  class ListKVCacheStoreAttachInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKVCacheStoreAttachInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KvcsIds, kvcsIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VscId, vscId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKVCacheStoreAttachInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KvcsIds, kvcsIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VscId, vscId_);
    };
    ListKVCacheStoreAttachInfoRequest() = default ;
    ListKVCacheStoreAttachInfoRequest(const ListKVCacheStoreAttachInfoRequest &) = default ;
    ListKVCacheStoreAttachInfoRequest(ListKVCacheStoreAttachInfoRequest &&) = default ;
    ListKVCacheStoreAttachInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKVCacheStoreAttachInfoRequest() = default ;
    ListKVCacheStoreAttachInfoRequest& operator=(const ListKVCacheStoreAttachInfoRequest &) = default ;
    ListKVCacheStoreAttachInfoRequest& operator=(ListKVCacheStoreAttachInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kvcsIds_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->vscId_ == nullptr; };
    // kvcsIds Field Functions 
    bool hasKvcsIds() const { return this->kvcsIds_ != nullptr;};
    void deleteKvcsIds() { this->kvcsIds_ = nullptr;};
    inline const vector<string> & getKvcsIds() const { DARABONBA_PTR_GET_CONST(kvcsIds_, vector<string>) };
    inline vector<string> getKvcsIds() { DARABONBA_PTR_GET(kvcsIds_, vector<string>) };
    inline ListKVCacheStoreAttachInfoRequest& setKvcsIds(const vector<string> & kvcsIds) { DARABONBA_PTR_SET_VALUE(kvcsIds_, kvcsIds) };
    inline ListKVCacheStoreAttachInfoRequest& setKvcsIds(vector<string> && kvcsIds) { DARABONBA_PTR_SET_RVALUE(kvcsIds_, kvcsIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListKVCacheStoreAttachInfoRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKVCacheStoreAttachInfoRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKVCacheStoreAttachInfoRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKVCacheStoreAttachInfoRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListKVCacheStoreAttachInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vscId Field Functions 
    bool hasVscId() const { return this->vscId_ != nullptr;};
    void deleteVscId() { this->vscId_ = nullptr;};
    inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
    inline ListKVCacheStoreAttachInfoRequest& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


  protected:
    // The list of KvcsIds of the KVCacheStores to query. You can specify up to 100 KvcsIds.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> kvcsIds_ {};
    // The maximum number of entries to return in a single call. Valid values: 1 to 500.
    // 
    // Default value: 10.
    shared_ptr<int64_t> maxResults_ {};
    // The query token. Set the value to the NextToken value returned from the last call to this operation. You do not need to specify this parameter for the first call. If NextToken is specified, the PageSize and PageNumber request parameters become invalid, and the TotalCount value in the response is invalid.
    shared_ptr<string> nextToken_ {};
    // The page number for a paging query. This parameter is used together with PageSize. If the specified page number exceeds the total number of pages, the last page is returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for a paging query.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID, such as cn-hangzhou.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the compute-side VSC. If you specify this parameter, the mount records are filtered by the specified VSC.
    shared_ptr<string> vscId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif

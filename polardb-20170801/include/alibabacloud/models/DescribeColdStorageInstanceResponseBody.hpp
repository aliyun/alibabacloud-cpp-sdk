// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeColdStorageInstanceResponseBodyOssClusterInfoList.hpp>
#include <alibabacloud/models/DescribeColdStorageInstanceResponseBodyTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeColdStorageInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColdStorageInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(OssClusterEnabled, ossClusterEnabled_);
      DARABONBA_PTR_TO_JSON(OssClusterInfoList, ossClusterInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportOssCluster, supportOssCluster_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TotalRecord, totalRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColdStorageInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(OssClusterEnabled, ossClusterEnabled_);
      DARABONBA_PTR_FROM_JSON(OssClusterInfoList, ossClusterInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportOssCluster, supportOssCluster_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TotalRecord, totalRecord_);
    };
    DescribeColdStorageInstanceResponseBody() = default ;
    DescribeColdStorageInstanceResponseBody(const DescribeColdStorageInstanceResponseBody &) = default ;
    DescribeColdStorageInstanceResponseBody(DescribeColdStorageInstanceResponseBody &&) = default ;
    DescribeColdStorageInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColdStorageInstanceResponseBody() = default ;
    DescribeColdStorageInstanceResponseBody& operator=(const DescribeColdStorageInstanceResponseBody &) = default ;
    DescribeColdStorageInstanceResponseBody& operator=(DescribeColdStorageInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->objectType_ != nullptr && this->ossClusterEnabled_ != nullptr && this->ossClusterInfoList_ != nullptr && this->pageNumber_ != nullptr
        && this->pageRecordCount_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->supportOssCluster_ != nullptr && this->tables_ != nullptr
        && this->totalRecord_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeColdStorageInstanceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeColdStorageInstanceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline DescribeColdStorageInstanceResponseBody& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // ossClusterEnabled Field Functions 
    bool hasOssClusterEnabled() const { return this->ossClusterEnabled_ != nullptr;};
    void deleteOssClusterEnabled() { this->ossClusterEnabled_ = nullptr;};
    inline string ossClusterEnabled() const { DARABONBA_PTR_GET_DEFAULT(ossClusterEnabled_, "") };
    inline DescribeColdStorageInstanceResponseBody& setOssClusterEnabled(string ossClusterEnabled) { DARABONBA_PTR_SET_VALUE(ossClusterEnabled_, ossClusterEnabled) };


    // ossClusterInfoList Field Functions 
    bool hasOssClusterInfoList() const { return this->ossClusterInfoList_ != nullptr;};
    void deleteOssClusterInfoList() { this->ossClusterInfoList_ = nullptr;};
    inline const vector<DescribeColdStorageInstanceResponseBodyOssClusterInfoList> & ossClusterInfoList() const { DARABONBA_PTR_GET_CONST(ossClusterInfoList_, vector<DescribeColdStorageInstanceResponseBodyOssClusterInfoList>) };
    inline vector<DescribeColdStorageInstanceResponseBodyOssClusterInfoList> ossClusterInfoList() { DARABONBA_PTR_GET(ossClusterInfoList_, vector<DescribeColdStorageInstanceResponseBodyOssClusterInfoList>) };
    inline DescribeColdStorageInstanceResponseBody& setOssClusterInfoList(const vector<DescribeColdStorageInstanceResponseBodyOssClusterInfoList> & ossClusterInfoList) { DARABONBA_PTR_SET_VALUE(ossClusterInfoList_, ossClusterInfoList) };
    inline DescribeColdStorageInstanceResponseBody& setOssClusterInfoList(vector<DescribeColdStorageInstanceResponseBodyOssClusterInfoList> && ossClusterInfoList) { DARABONBA_PTR_SET_RVALUE(ossClusterInfoList_, ossClusterInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeColdStorageInstanceResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeColdStorageInstanceResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeColdStorageInstanceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColdStorageInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportOssCluster Field Functions 
    bool hasSupportOssCluster() const { return this->supportOssCluster_ != nullptr;};
    void deleteSupportOssCluster() { this->supportOssCluster_ = nullptr;};
    inline string supportOssCluster() const { DARABONBA_PTR_GET_DEFAULT(supportOssCluster_, "") };
    inline DescribeColdStorageInstanceResponseBody& setSupportOssCluster(string supportOssCluster) { DARABONBA_PTR_SET_VALUE(supportOssCluster_, supportOssCluster) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<DescribeColdStorageInstanceResponseBodyTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<DescribeColdStorageInstanceResponseBodyTables>) };
    inline vector<DescribeColdStorageInstanceResponseBodyTables> tables() { DARABONBA_PTR_GET(tables_, vector<DescribeColdStorageInstanceResponseBodyTables>) };
    inline DescribeColdStorageInstanceResponseBody& setTables(const vector<DescribeColdStorageInstanceResponseBodyTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeColdStorageInstanceResponseBody& setTables(vector<DescribeColdStorageInstanceResponseBodyTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // totalRecord Field Functions 
    bool hasTotalRecord() const { return this->totalRecord_ != nullptr;};
    void deleteTotalRecord() { this->totalRecord_ = nullptr;};
    inline int32_t totalRecord() const { DARABONBA_PTR_GET_DEFAULT(totalRecord_, 0) };
    inline DescribeColdStorageInstanceResponseBody& setTotalRecord(int32_t totalRecord) { DARABONBA_PTR_SET_VALUE(totalRecord_, totalRecord) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
    std::shared_ptr<string> ossClusterEnabled_ = nullptr;
    std::shared_ptr<vector<DescribeColdStorageInstanceResponseBodyOssClusterInfoList>> ossClusterInfoList_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> supportOssCluster_ = nullptr;
    std::shared_ptr<vector<DescribeColdStorageInstanceResponseBodyTables>> tables_ = nullptr;
    std::shared_ptr<int32_t> totalRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

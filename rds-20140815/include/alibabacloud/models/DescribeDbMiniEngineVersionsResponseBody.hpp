// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBMiniEngineVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBMiniEngineVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_TO_JSON(MinorVersionItems, minorVersionItems_);
      DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBMiniEngineVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_FROM_JSON(MinorVersionItems, minorVersionItems_);
      DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBMiniEngineVersionsResponseBody() = default ;
    DescribeDBMiniEngineVersionsResponseBody(const DescribeDBMiniEngineVersionsResponseBody &) = default ;
    DescribeDBMiniEngineVersionsResponseBody(DescribeDBMiniEngineVersionsResponseBody &&) = default ;
    DescribeDBMiniEngineVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBMiniEngineVersionsResponseBody() = default ;
    DescribeDBMiniEngineVersionsResponseBody& operator=(const DescribeDBMiniEngineVersionsResponseBody &) = default ;
    DescribeDBMiniEngineVersionsResponseBody& operator=(DescribeDBMiniEngineVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MinorVersionItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MinorVersionItems& obj) { 
        DARABONBA_PTR_TO_JSON(CommunityMinorVersion, communityMinorVersion_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(ExpireStatus, expireStatus_);
        DARABONBA_PTR_TO_JSON(IsHotfixVersion, isHotfixVersion_);
        DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, MinorVersionItems& obj) { 
        DARABONBA_PTR_FROM_JSON(CommunityMinorVersion, communityMinorVersion_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(ExpireStatus, expireStatus_);
        DARABONBA_PTR_FROM_JSON(IsHotfixVersion, isHotfixVersion_);
        DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      MinorVersionItems() = default ;
      MinorVersionItems(const MinorVersionItems &) = default ;
      MinorVersionItems(MinorVersionItems &&) = default ;
      MinorVersionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MinorVersionItems() = default ;
      MinorVersionItems& operator=(const MinorVersionItems &) = default ;
      MinorVersionItems& operator=(MinorVersionItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->communityMinorVersion_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expireDate_ == nullptr && this->expireStatus_ == nullptr && this->isHotfixVersion_ == nullptr
        && this->minorVersion_ == nullptr && this->nodeType_ == nullptr && this->releaseNote_ == nullptr && this->releaseType_ == nullptr && this->statusDesc_ == nullptr
        && this->tag_ == nullptr; };
      // communityMinorVersion Field Functions 
      bool hasCommunityMinorVersion() const { return this->communityMinorVersion_ != nullptr;};
      void deleteCommunityMinorVersion() { this->communityMinorVersion_ = nullptr;};
      inline string getCommunityMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(communityMinorVersion_, "") };
      inline MinorVersionItems& setCommunityMinorVersion(string communityMinorVersion) { DARABONBA_PTR_SET_VALUE(communityMinorVersion_, communityMinorVersion) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline MinorVersionItems& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline MinorVersionItems& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline MinorVersionItems& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // expireStatus Field Functions 
      bool hasExpireStatus() const { return this->expireStatus_ != nullptr;};
      void deleteExpireStatus() { this->expireStatus_ = nullptr;};
      inline string getExpireStatus() const { DARABONBA_PTR_GET_DEFAULT(expireStatus_, "") };
      inline MinorVersionItems& setExpireStatus(string expireStatus) { DARABONBA_PTR_SET_VALUE(expireStatus_, expireStatus) };


      // isHotfixVersion Field Functions 
      bool hasIsHotfixVersion() const { return this->isHotfixVersion_ != nullptr;};
      void deleteIsHotfixVersion() { this->isHotfixVersion_ = nullptr;};
      inline bool getIsHotfixVersion() const { DARABONBA_PTR_GET_DEFAULT(isHotfixVersion_, false) };
      inline MinorVersionItems& setIsHotfixVersion(bool isHotfixVersion) { DARABONBA_PTR_SET_VALUE(isHotfixVersion_, isHotfixVersion) };


      // minorVersion Field Functions 
      bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
      void deleteMinorVersion() { this->minorVersion_ = nullptr;};
      inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
      inline MinorVersionItems& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline MinorVersionItems& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // releaseNote Field Functions 
      bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
      void deleteReleaseNote() { this->releaseNote_ = nullptr;};
      inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
      inline MinorVersionItems& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


      // releaseType Field Functions 
      bool hasReleaseType() const { return this->releaseType_ != nullptr;};
      void deleteReleaseType() { this->releaseType_ = nullptr;};
      inline string getReleaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
      inline MinorVersionItems& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline MinorVersionItems& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline MinorVersionItems& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // The PostgreSQL version to which the minor engine version corresponds. For more information, see [Release notes for AliPG](https://help.aliyun.com/document_detail/126002.html).
      // 
      // >  This parameter is available only for instances that run **PostgreSQL**.
      shared_ptr<string> communityMinorVersion_ {};
      // The database engine that corresponds to the minor engine version.
      shared_ptr<string> engine_ {};
      // The database engine version that corresponds to the minor engine version.
      shared_ptr<string> engineVersion_ {};
      // The expiration time of the minor engine version.
      shared_ptr<string> expireDate_ {};
      // The expiration status of the minor engine version. Valid values:
      // 
      // *   **vaild**
      // *   **expired**
      // 
      // >  If the minor engine version is in the Offline state, the minor engine version is discontinued. In this case, ignore the expiration status. If the minor engine version is in the Online state and the expiration state is expired, the minor engine version expires. If the expiration state is vaild, the minor engine version is still in its lifecycle.
      shared_ptr<string> expireStatus_ {};
      // An internal parameter. You do not need to specify this parameter.
      shared_ptr<bool> isHotfixVersion_ {};
      // The minor engine version.
      shared_ptr<string> minorVersion_ {};
      // The RDS edition of the instance that runs the minor engine version. Valid values:
      // 
      // *   **Basic**: RDS Basic Edition
      // *   **HighAvailability**: RDS High-availability Edition
      // *   **Finance**: RDS Enterprise Edition
      shared_ptr<string> nodeType_ {};
      // The URL of the release notes for the minor engine version.
      shared_ptr<string> releaseNote_ {};
      // The release type. Valid values:
      // 
      // *   **LTS**: a long-term version
      // *   **BETA**: a preview version
      shared_ptr<string> releaseType_ {};
      // The status of the minor engine version. Valid values:
      // 
      // *   **Offline**: discontinued
      // *   **Online**: available
      // 
      // >  If the minor engine version is in the Offline state, the minor engine version is discontinued. In this case, ignore the expiration status. If the minor engine version is in the Online state and the expiration state is expired, the minor engine version expires. If the expiration state is vaild, the minor engine version is still in its lifecycle.
      shared_ptr<string> statusDesc_ {};
      // The tag that corresponds to the minor engine version. Valid values:
      // 
      // *   **pgsql_docker_image**: tag of common instances
      // *   **pgsql_babelfish_image**: tag of instances for which Babelfish is enabled
      // 
      // >  This parameter is available only for instances that run **PostgreSQL**.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->maxRecordsPerPage_ == nullptr && this->minorVersionItems_ == nullptr && this->pageNumbers_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBMiniEngineVersionsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // maxRecordsPerPage Field Functions 
    bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
    void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
    inline int32_t getMaxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
    inline DescribeDBMiniEngineVersionsResponseBody& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


    // minorVersionItems Field Functions 
    bool hasMinorVersionItems() const { return this->minorVersionItems_ != nullptr;};
    void deleteMinorVersionItems() { this->minorVersionItems_ = nullptr;};
    inline const vector<DescribeDBMiniEngineVersionsResponseBody::MinorVersionItems> & getMinorVersionItems() const { DARABONBA_PTR_GET_CONST(minorVersionItems_, vector<DescribeDBMiniEngineVersionsResponseBody::MinorVersionItems>) };
    inline vector<DescribeDBMiniEngineVersionsResponseBody::MinorVersionItems> getMinorVersionItems() { DARABONBA_PTR_GET(minorVersionItems_, vector<DescribeDBMiniEngineVersionsResponseBody::MinorVersionItems>) };
    inline DescribeDBMiniEngineVersionsResponseBody& setMinorVersionItems(const vector<DescribeDBMiniEngineVersionsResponseBody::MinorVersionItems> & minorVersionItems) { DARABONBA_PTR_SET_VALUE(minorVersionItems_, minorVersionItems) };
    inline DescribeDBMiniEngineVersionsResponseBody& setMinorVersionItems(vector<DescribeDBMiniEngineVersionsResponseBody::MinorVersionItems> && minorVersionItems) { DARABONBA_PTR_SET_RVALUE(minorVersionItems_, minorVersionItems) };


    // pageNumbers Field Functions 
    bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
    void deletePageNumbers() { this->pageNumbers_ = nullptr;};
    inline int32_t getPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(pageNumbers_, 0) };
    inline DescribeDBMiniEngineVersionsResponseBody& setPageNumbers(int32_t pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBMiniEngineVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDBMiniEngineVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxRecordsPerPage_ {};
    // The details of the minor engine version.
    shared_ptr<vector<DescribeDBMiniEngineVersionsResponseBody::MinorVersionItems>> minorVersionItems_ {};
    // The page number returned.
    shared_ptr<int32_t> pageNumbers_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

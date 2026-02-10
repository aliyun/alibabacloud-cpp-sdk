// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomBlockInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomBlockInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomBlockInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomBlockInstancesResponseBody() = default ;
    DescribeCustomBlockInstancesResponseBody(const DescribeCustomBlockInstancesResponseBody &) = default ;
    DescribeCustomBlockInstancesResponseBody(DescribeCustomBlockInstancesResponseBody &&) = default ;
    DescribeCustomBlockInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomBlockInstancesResponseBody() = default ;
    DescribeCustomBlockInstancesResponseBody& operator=(const DescribeCustomBlockInstancesResponseBody &) = default ;
    DescribeCustomBlockInstancesResponseBody& operator=(DescribeCustomBlockInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of servers to which the defense rule is applied.
      shared_ptr<int32_t> totalCount_ {};
    };

    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(AliNetOnline, aliNetOnline_);
        DARABONBA_PTR_TO_JSON(BlockType, blockType_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SuccessInfo, successInfo_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliNetOnline, aliNetOnline_);
        DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SuccessInfo, successInfo_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliNetOnline_ == nullptr
        && this->blockType_ == nullptr && this->errorCode_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr
        && this->status_ == nullptr && this->successInfo_ == nullptr && this->uuid_ == nullptr; };
      // aliNetOnline Field Functions 
      bool hasAliNetOnline() const { return this->aliNetOnline_ != nullptr;};
      void deleteAliNetOnline() { this->aliNetOnline_ = nullptr;};
      inline bool getAliNetOnline() const { DARABONBA_PTR_GET_DEFAULT(aliNetOnline_, false) };
      inline InstanceList& setAliNetOnline(bool aliNetOnline) { DARABONBA_PTR_SET_VALUE(aliNetOnline_, aliNetOnline) };


      // blockType Field Functions 
      bool hasBlockType() const { return this->blockType_ != nullptr;};
      void deleteBlockType() { this->blockType_ = nullptr;};
      inline string getBlockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
      inline InstanceList& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline InstanceList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline InstanceList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline InstanceList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline InstanceList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline InstanceList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // successInfo Field Functions 
      bool hasSuccessInfo() const { return this->successInfo_ != nullptr;};
      void deleteSuccessInfo() { this->successInfo_ = nullptr;};
      inline string getSuccessInfo() const { DARABONBA_PTR_GET_DEFAULT(successInfo_, "") };
      inline InstanceList& setSuccessInfo(string successInfo) { DARABONBA_PTR_SET_VALUE(successInfo_, successInfo) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline InstanceList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The status of the host network extension. Valid values:
      // 
      // *   **true**: online
      // *   **false**: offline
      shared_ptr<bool> aliNetOnline_ {};
      // The blocking type. Valid values:
      // 
      // *   **group**: security group
      // *   **alinet**: host network extension
      shared_ptr<string> blockType_ {};
      // The error code returned.
      shared_ptr<string> errorCode_ {};
      // The name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // Indicates whether the rule is enabled for the server.
      // 
      // *   **2**: enabling failed
      // *   **1**: enabled
      // *   **0**: disabled
      shared_ptr<int32_t> status_ {};
      // The information that is returned after brute-force attacks are blocked.
      shared_ptr<string> successInfo_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->instanceList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<DescribeCustomBlockInstancesResponseBody::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<DescribeCustomBlockInstancesResponseBody::InstanceList>) };
    inline vector<DescribeCustomBlockInstancesResponseBody::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<DescribeCustomBlockInstancesResponseBody::InstanceList>) };
    inline DescribeCustomBlockInstancesResponseBody& setInstanceList(const vector<DescribeCustomBlockInstancesResponseBody::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline DescribeCustomBlockInstancesResponseBody& setInstanceList(vector<DescribeCustomBlockInstancesResponseBody::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeCustomBlockInstancesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeCustomBlockInstancesResponseBody::PageInfo) };
    inline DescribeCustomBlockInstancesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeCustomBlockInstancesResponseBody::PageInfo) };
    inline DescribeCustomBlockInstancesResponseBody& setPageInfo(const DescribeCustomBlockInstancesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCustomBlockInstancesResponseBody& setPageInfo(DescribeCustomBlockInstancesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomBlockInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The server ID.
    shared_ptr<vector<DescribeCustomBlockInstancesResponseBody::InstanceList>> instanceList_ {};
    // The pagination information.
    shared_ptr<DescribeCustomBlockInstancesResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

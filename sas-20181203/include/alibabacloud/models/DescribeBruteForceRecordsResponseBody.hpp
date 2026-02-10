// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCERECORDSRESPONSEBODY_HPP_
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
  class DescribeBruteForceRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBruteForceRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineList, machineList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBruteForceRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineList, machineList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBruteForceRecordsResponseBody() = default ;
    DescribeBruteForceRecordsResponseBody(const DescribeBruteForceRecordsResponseBody &) = default ;
    DescribeBruteForceRecordsResponseBody(DescribeBruteForceRecordsResponseBody &&) = default ;
    DescribeBruteForceRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBruteForceRecordsResponseBody() = default ;
    DescribeBruteForceRecordsResponseBody& operator=(const DescribeBruteForceRecordsResponseBody &) = default ;
    DescribeBruteForceRecordsResponseBody& operator=(DescribeBruteForceRecordsResponseBody &&) = default ;
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
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class MachineList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MachineList& obj) { 
        DARABONBA_PTR_TO_JSON(AliNetOnline, aliNetOnline_);
        DARABONBA_PTR_TO_JSON(BlockExpireDate, blockExpireDate_);
        DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
        DARABONBA_PTR_TO_JSON(BlockType, blockType_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, MachineList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliNetOnline, aliNetOnline_);
        DARABONBA_PTR_FROM_JSON(BlockExpireDate, blockExpireDate_);
        DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
        DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      MachineList() = default ;
      MachineList(const MachineList &) = default ;
      MachineList(MachineList &&) = default ;
      MachineList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MachineList() = default ;
      MachineList& operator=(const MachineList &) = default ;
      MachineList& operator=(MachineList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliNetOnline_ == nullptr
        && this->blockExpireDate_ == nullptr && this->blockIp_ == nullptr && this->blockType_ == nullptr && this->errorCode_ == nullptr && this->id_ == nullptr
        && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->port_ == nullptr && this->ruleName_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->uuid_ == nullptr; };
      // aliNetOnline Field Functions 
      bool hasAliNetOnline() const { return this->aliNetOnline_ != nullptr;};
      void deleteAliNetOnline() { this->aliNetOnline_ = nullptr;};
      inline bool getAliNetOnline() const { DARABONBA_PTR_GET_DEFAULT(aliNetOnline_, false) };
      inline MachineList& setAliNetOnline(bool aliNetOnline) { DARABONBA_PTR_SET_VALUE(aliNetOnline_, aliNetOnline) };


      // blockExpireDate Field Functions 
      bool hasBlockExpireDate() const { return this->blockExpireDate_ != nullptr;};
      void deleteBlockExpireDate() { this->blockExpireDate_ = nullptr;};
      inline int64_t getBlockExpireDate() const { DARABONBA_PTR_GET_DEFAULT(blockExpireDate_, 0L) };
      inline MachineList& setBlockExpireDate(int64_t blockExpireDate) { DARABONBA_PTR_SET_VALUE(blockExpireDate_, blockExpireDate) };


      // blockIp Field Functions 
      bool hasBlockIp() const { return this->blockIp_ != nullptr;};
      void deleteBlockIp() { this->blockIp_ = nullptr;};
      inline string getBlockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
      inline MachineList& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


      // blockType Field Functions 
      bool hasBlockType() const { return this->blockType_ != nullptr;};
      void deleteBlockType() { this->blockType_ = nullptr;};
      inline string getBlockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
      inline MachineList& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline MachineList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline MachineList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline MachineList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline MachineList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline MachineList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline MachineList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline MachineList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline MachineList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline MachineList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline MachineList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The status of the host network extension. Valid values:
      // 
      // *   **true**: online
      // *   **false**: offline
      shared_ptr<bool> aliNetOnline_ {};
      // The timestamp when the block action on the IP address becomes invalid.
      shared_ptr<int64_t> blockExpireDate_ {};
      // The IP address that is blocked.
      shared_ptr<string> blockIp_ {};
      // The blocking type. Valid values:
      // 
      // *   **group**: security group
      // *   **alinet**: host network extension
      shared_ptr<string> blockType_ {};
      // The error code returned when the defense rule fails to block the IP address.
      shared_ptr<string> errorCode_ {};
      // The ID of the primary key that is recorded in the defense rule.
      shared_ptr<int64_t> id_ {};
      // The instance name of the server.
      shared_ptr<string> instanceName_ {};
      // The public IP address.
      shared_ptr<string> internetIp_ {};
      // The private IP address.
      shared_ptr<string> intranetIp_ {};
      // The port that is attacked.
      shared_ptr<string> port_ {};
      // The name of the defense rule.
      shared_ptr<string> ruleName_ {};
      // The type of the defense rule. Valid values:
      // 
      // *   **userRule**: custom rule
      // *   **blinkRule**: system rule
      shared_ptr<string> source_ {};
      // The status of the defense rule. Valid values:
      // 
      // *   **0**: invalid
      // *   **1**: enabled
      // *   **2**: failed
      shared_ptr<int32_t> status_ {};
      // The UUID of the server on which the defense rule takes effect.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->machineList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // machineList Field Functions 
    bool hasMachineList() const { return this->machineList_ != nullptr;};
    void deleteMachineList() { this->machineList_ = nullptr;};
    inline const vector<DescribeBruteForceRecordsResponseBody::MachineList> & getMachineList() const { DARABONBA_PTR_GET_CONST(machineList_, vector<DescribeBruteForceRecordsResponseBody::MachineList>) };
    inline vector<DescribeBruteForceRecordsResponseBody::MachineList> getMachineList() { DARABONBA_PTR_GET(machineList_, vector<DescribeBruteForceRecordsResponseBody::MachineList>) };
    inline DescribeBruteForceRecordsResponseBody& setMachineList(const vector<DescribeBruteForceRecordsResponseBody::MachineList> & machineList) { DARABONBA_PTR_SET_VALUE(machineList_, machineList) };
    inline DescribeBruteForceRecordsResponseBody& setMachineList(vector<DescribeBruteForceRecordsResponseBody::MachineList> && machineList) { DARABONBA_PTR_SET_RVALUE(machineList_, machineList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeBruteForceRecordsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeBruteForceRecordsResponseBody::PageInfo) };
    inline DescribeBruteForceRecordsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeBruteForceRecordsResponseBody::PageInfo) };
    inline DescribeBruteForceRecordsResponseBody& setPageInfo(const DescribeBruteForceRecordsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeBruteForceRecordsResponseBody& setPageInfo(DescribeBruteForceRecordsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBruteForceRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IP addresses.
    shared_ptr<vector<DescribeBruteForceRecordsResponseBody::MachineList>> machineList_ {};
    // The pagination information.
    shared_ptr<DescribeBruteForceRecordsResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEMGVULITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEMGVULITEMRESPONSEBODY_HPP_
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
  class DescribeEmgVulItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEmgVulItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupedVulItems, groupedVulItems_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEmgVulItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupedVulItems, groupedVulItems_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEmgVulItemResponseBody() = default ;
    DescribeEmgVulItemResponseBody(const DescribeEmgVulItemResponseBody &) = default ;
    DescribeEmgVulItemResponseBody(DescribeEmgVulItemResponseBody &&) = default ;
    DescribeEmgVulItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEmgVulItemResponseBody() = default ;
    DescribeEmgVulItemResponseBody& operator=(const DescribeEmgVulItemResponseBody &) = default ;
    DescribeEmgVulItemResponseBody& operator=(DescribeEmgVulItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupedVulItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupedVulItems& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtLastCheck, gmtLastCheck_);
        DARABONBA_PTR_TO_JSON(GmtPublish, gmtPublish_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PendingCount, pendingCount_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RaspDefend, raspDefend_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, GroupedVulItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtLastCheck, gmtLastCheck_);
        DARABONBA_PTR_FROM_JSON(GmtPublish, gmtPublish_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PendingCount, pendingCount_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RaspDefend, raspDefend_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      GroupedVulItems() = default ;
      GroupedVulItems(const GroupedVulItems &) = default ;
      GroupedVulItems(GroupedVulItems &&) = default ;
      GroupedVulItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupedVulItems() = default ;
      GroupedVulItems& operator=(const GroupedVulItems &) = default ;
      GroupedVulItems& operator=(GroupedVulItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->checkType_ == nullptr && this->description_ == nullptr && this->gmtLastCheck_ == nullptr && this->gmtPublish_ == nullptr && this->name_ == nullptr
        && this->pendingCount_ == nullptr && this->progress_ == nullptr && this->raspDefend_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline GroupedVulItems& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline GroupedVulItems& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline GroupedVulItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtLastCheck Field Functions 
      bool hasGmtLastCheck() const { return this->gmtLastCheck_ != nullptr;};
      void deleteGmtLastCheck() { this->gmtLastCheck_ = nullptr;};
      inline int64_t getGmtLastCheck() const { DARABONBA_PTR_GET_DEFAULT(gmtLastCheck_, 0L) };
      inline GroupedVulItems& setGmtLastCheck(int64_t gmtLastCheck) { DARABONBA_PTR_SET_VALUE(gmtLastCheck_, gmtLastCheck) };


      // gmtPublish Field Functions 
      bool hasGmtPublish() const { return this->gmtPublish_ != nullptr;};
      void deleteGmtPublish() { this->gmtPublish_ = nullptr;};
      inline int64_t getGmtPublish() const { DARABONBA_PTR_GET_DEFAULT(gmtPublish_, 0L) };
      inline GroupedVulItems& setGmtPublish(int64_t gmtPublish) { DARABONBA_PTR_SET_VALUE(gmtPublish_, gmtPublish) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline GroupedVulItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pendingCount Field Functions 
      bool hasPendingCount() const { return this->pendingCount_ != nullptr;};
      void deletePendingCount() { this->pendingCount_ = nullptr;};
      inline int32_t getPendingCount() const { DARABONBA_PTR_GET_DEFAULT(pendingCount_, 0) };
      inline GroupedVulItems& setPendingCount(int32_t pendingCount) { DARABONBA_PTR_SET_VALUE(pendingCount_, pendingCount) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline GroupedVulItems& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // raspDefend Field Functions 
      bool hasRaspDefend() const { return this->raspDefend_ != nullptr;};
      void deleteRaspDefend() { this->raspDefend_ = nullptr;};
      inline int32_t getRaspDefend() const { DARABONBA_PTR_GET_DEFAULT(raspDefend_, 0) };
      inline GroupedVulItems& setRaspDefend(int32_t raspDefend) { DARABONBA_PTR_SET_VALUE(raspDefend_, raspDefend) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline GroupedVulItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline GroupedVulItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the vulnerability.
      shared_ptr<string> aliasName_ {};
      // The check type.
      shared_ptr<int32_t> checkType_ {};
      // The description of the vulnerability.
      shared_ptr<string> description_ {};
      // The timestamp of the most recent vulnerability detection. Unit: milliseconds.
      shared_ptr<int64_t> gmtLastCheck_ {};
      // The timestamp when the vulnerability was published. Unit: milliseconds.
      shared_ptr<int64_t> gmtPublish_ {};
      // The name of the scan rule.
      shared_ptr<string> name_ {};
      // The number of unfixed vulnerabilities.
      shared_ptr<int32_t> pendingCount_ {};
      // The detection progress of the vulnerability. Value range: 0 to 100.
      // > This parameter is displayed only for emergency vulnerabilities that are in the detecting state.
      shared_ptr<int32_t> progress_ {};
      // Indicates whether Runtime Application Self-Protection (RASP) real-time protection is supported. Valid values:
      // - **0**: Not supported.
      // - **1**: Supported.
      // > If this property is not present, RASP real-time protection is not supported.
      shared_ptr<int32_t> raspDefend_ {};
      // The detection status of the vulnerability. Valid values:
      // - **10**: not detected
      // - **20**: detecting
      // - **30**: detection completed.
      shared_ptr<int32_t> status_ {};
      // The detection method of the vulnerability. Valid values:
      // - **python**: version detection (server software version detection). Detects whether your server has disclosed software vulnerabilities.
      // - **scan**: network scanning (network traffic detection). Detects whether your public assets (Internet-accessible servers) have vulnerabilities.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->groupedVulItems_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeEmgVulItemResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupedVulItems Field Functions 
    bool hasGroupedVulItems() const { return this->groupedVulItems_ != nullptr;};
    void deleteGroupedVulItems() { this->groupedVulItems_ = nullptr;};
    inline const vector<DescribeEmgVulItemResponseBody::GroupedVulItems> & getGroupedVulItems() const { DARABONBA_PTR_GET_CONST(groupedVulItems_, vector<DescribeEmgVulItemResponseBody::GroupedVulItems>) };
    inline vector<DescribeEmgVulItemResponseBody::GroupedVulItems> getGroupedVulItems() { DARABONBA_PTR_GET(groupedVulItems_, vector<DescribeEmgVulItemResponseBody::GroupedVulItems>) };
    inline DescribeEmgVulItemResponseBody& setGroupedVulItems(const vector<DescribeEmgVulItemResponseBody::GroupedVulItems> & groupedVulItems) { DARABONBA_PTR_SET_VALUE(groupedVulItems_, groupedVulItems) };
    inline DescribeEmgVulItemResponseBody& setGroupedVulItems(vector<DescribeEmgVulItemResponseBody::GroupedVulItems> && groupedVulItems) { DARABONBA_PTR_SET_RVALUE(groupedVulItems_, groupedVulItems) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEmgVulItemResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEmgVulItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEmgVulItemResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page. The value starts from **1**. Default value: **1**, which indicates that the first page is returned.
    shared_ptr<int32_t> currentPage_ {};
    // The information about the emergency vulnerabilities.
    shared_ptr<vector<DescribeEmgVulItemResponseBody::GroupedVulItems>> groupedVulItems_ {};
    // The number of emergency vulnerability entries per page in a paged query. Default value: **10**, which indicates that 10 emergency vulnerability entries are displayed per page. Paging is used to display the results.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is a unique identifier generated by Alibaba Cloud for the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of emergency vulnerabilities returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKRESULTRESPONSEBODY_HPP_
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
  class DescribeRiskCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRiskCheckResultResponseBody() = default ;
    DescribeRiskCheckResultResponseBody(const DescribeRiskCheckResultResponseBody &) = default ;
    DescribeRiskCheckResultResponseBody(DescribeRiskCheckResultResponseBody &&) = default ;
    DescribeRiskCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckResultResponseBody() = default ;
    DescribeRiskCheckResultResponseBody& operator=(const DescribeRiskCheckResultResponseBody &) = default ;
    DescribeRiskCheckResultResponseBody& operator=(DescribeRiskCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(AffectedCount, affectedCount_);
        DARABONBA_PTR_TO_JSON(CheckTime, checkTime_);
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
        DARABONBA_PTR_TO_JSON(RemainingTime, remainingTime_);
        DARABONBA_PTR_TO_JSON(RepairStatus, repairStatus_);
        DARABONBA_PTR_TO_JSON(RiskAssertType, riskAssertType_);
        DARABONBA_PTR_TO_JSON(RiskItemResources, riskItemResources_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Sort, sort_);
        DARABONBA_PTR_TO_JSON(StartStatus, startStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(AffectedCount, affectedCount_);
        DARABONBA_PTR_FROM_JSON(CheckTime, checkTime_);
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
        DARABONBA_PTR_FROM_JSON(RemainingTime, remainingTime_);
        DARABONBA_PTR_FROM_JSON(RepairStatus, repairStatus_);
        DARABONBA_PTR_FROM_JSON(RiskAssertType, riskAssertType_);
        DARABONBA_PTR_FROM_JSON(RiskItemResources, riskItemResources_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Sort, sort_);
        DARABONBA_PTR_FROM_JSON(StartStatus, startStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RiskItemResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskItemResources& obj) { 
          DARABONBA_ANY_TO_JSON(ContentResource, contentResource_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        };
        friend void from_json(const Darabonba::Json& j, RiskItemResources& obj) { 
          DARABONBA_ANY_FROM_JSON(ContentResource, contentResource_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        };
        RiskItemResources() = default ;
        RiskItemResources(const RiskItemResources &) = default ;
        RiskItemResources(RiskItemResources &&) = default ;
        RiskItemResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskItemResources() = default ;
        RiskItemResources& operator=(const RiskItemResources &) = default ;
        RiskItemResources& operator=(RiskItemResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contentResource_ == nullptr
        && this->resourceName_ == nullptr; };
        // contentResource Field Functions 
        bool hasContentResource() const { return this->contentResource_ != nullptr;};
        void deleteContentResource() { this->contentResource_ = nullptr;};
        inline         const Darabonba::Json & getContentResource() const { DARABONBA_GET(contentResource_) };
        Darabonba::Json & getContentResource() { DARABONBA_GET(contentResource_) };
        inline RiskItemResources& setContentResource(const Darabonba::Json & contentResource) { DARABONBA_SET_VALUE(contentResource_, contentResource) };
        inline RiskItemResources& setContentResource(Darabonba::Json && contentResource) { DARABONBA_SET_RVALUE(contentResource_, contentResource) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline RiskItemResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      protected:
        // The details about the check results.
        Darabonba::Json contentResource_ {};
        // The title in the details. Valid values:
        // 
        // *   **bestPractice**: description
        // *   **influence**: risk
        // *   **suggestion**: solution
        // *   **helpResource**: reference
        shared_ptr<string> resourceName_ {};
      };

      virtual bool empty() const override { return this->affectedCount_ == nullptr
        && this->checkTime_ == nullptr && this->itemId_ == nullptr && this->remainingTime_ == nullptr && this->repairStatus_ == nullptr && this->riskAssertType_ == nullptr
        && this->riskItemResources_ == nullptr && this->riskLevel_ == nullptr && this->sort_ == nullptr && this->startStatus_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
      // affectedCount Field Functions 
      bool hasAffectedCount() const { return this->affectedCount_ != nullptr;};
      void deleteAffectedCount() { this->affectedCount_ = nullptr;};
      inline int32_t getAffectedCount() const { DARABONBA_PTR_GET_DEFAULT(affectedCount_, 0) };
      inline List& setAffectedCount(int32_t affectedCount) { DARABONBA_PTR_SET_VALUE(affectedCount_, affectedCount) };


      // checkTime Field Functions 
      bool hasCheckTime() const { return this->checkTime_ != nullptr;};
      void deleteCheckTime() { this->checkTime_ = nullptr;};
      inline int64_t getCheckTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, 0L) };
      inline List& setCheckTime(int64_t checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
      inline List& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // remainingTime Field Functions 
      bool hasRemainingTime() const { return this->remainingTime_ != nullptr;};
      void deleteRemainingTime() { this->remainingTime_ = nullptr;};
      inline int32_t getRemainingTime() const { DARABONBA_PTR_GET_DEFAULT(remainingTime_, 0) };
      inline List& setRemainingTime(int32_t remainingTime) { DARABONBA_PTR_SET_VALUE(remainingTime_, remainingTime) };


      // repairStatus Field Functions 
      bool hasRepairStatus() const { return this->repairStatus_ != nullptr;};
      void deleteRepairStatus() { this->repairStatus_ = nullptr;};
      inline string getRepairStatus() const { DARABONBA_PTR_GET_DEFAULT(repairStatus_, "") };
      inline List& setRepairStatus(string repairStatus) { DARABONBA_PTR_SET_VALUE(repairStatus_, repairStatus) };


      // riskAssertType Field Functions 
      bool hasRiskAssertType() const { return this->riskAssertType_ != nullptr;};
      void deleteRiskAssertType() { this->riskAssertType_ = nullptr;};
      inline string getRiskAssertType() const { DARABONBA_PTR_GET_DEFAULT(riskAssertType_, "") };
      inline List& setRiskAssertType(string riskAssertType) { DARABONBA_PTR_SET_VALUE(riskAssertType_, riskAssertType) };


      // riskItemResources Field Functions 
      bool hasRiskItemResources() const { return this->riskItemResources_ != nullptr;};
      void deleteRiskItemResources() { this->riskItemResources_ = nullptr;};
      inline const vector<List::RiskItemResources> & getRiskItemResources() const { DARABONBA_PTR_GET_CONST(riskItemResources_, vector<List::RiskItemResources>) };
      inline vector<List::RiskItemResources> getRiskItemResources() { DARABONBA_PTR_GET(riskItemResources_, vector<List::RiskItemResources>) };
      inline List& setRiskItemResources(const vector<List::RiskItemResources> & riskItemResources) { DARABONBA_PTR_SET_VALUE(riskItemResources_, riskItemResources) };
      inline List& setRiskItemResources(vector<List::RiskItemResources> && riskItemResources) { DARABONBA_PTR_SET_RVALUE(riskItemResources_, riskItemResources) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline List& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // sort Field Functions 
      bool hasSort() const { return this->sort_ != nullptr;};
      void deleteSort() { this->sort_ = nullptr;};
      inline int32_t getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, 0) };
      inline List& setSort(int32_t sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


      // startStatus Field Functions 
      bool hasStartStatus() const { return this->startStatus_ != nullptr;};
      void deleteStartStatus() { this->startStatus_ = nullptr;};
      inline string getStartStatus() const { DARABONBA_PTR_GET_DEFAULT(startStatus_, "") };
      inline List& setStartStatus(string startStatus) { DARABONBA_PTR_SET_VALUE(startStatus_, startStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline List& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline List& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline List& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of affected assets.
      shared_ptr<int32_t> affectedCount_ {};
      // The timestamp when the last check was performed. Unit: milliseconds.
      shared_ptr<int64_t> checkTime_ {};
      // The ID of the check item. For more information about the check item, see the check item table in the "Response parameters" section of this topic.
      shared_ptr<int64_t> itemId_ {};
      // The time when the next check will be performed.
      shared_ptr<int32_t> remainingTime_ {};
      // Indicates whether the risks that are detected based on the check item can be fixed. Valid values:
      // 
      // *   **enabled**: yes
      // *   **disabled**: no
      shared_ptr<string> repairStatus_ {};
      // The type of the affected assets.
      shared_ptr<string> riskAssertType_ {};
      // An array that consists of the details about the check item.
      shared_ptr<vector<List::RiskItemResources>> riskItemResources_ {};
      // The risk level of the check item. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> riskLevel_ {};
      // The sequence number in the check results. The check items are sorted based on the sequence number.
      shared_ptr<int32_t> sort_ {};
      // Indicates whether the check item is supported by the edition of Security Center that you purchase. Valid values:
      // 
      // *   **enabled**: yes
      // *   **disable**: no
      shared_ptr<string> startStatus_ {};
      // The status of the check results. Valid values:
      // 
      // *   **pass**
      // *   **failed**
      // *   **running**
      // *   **waiting**
      // *   **ignored**
      // *   **falsePositive**
      shared_ptr<string> status_ {};
      // The ID of the check task.
      shared_ptr<int64_t> taskId_ {};
      // The name of the check item.
      shared_ptr<string> title_ {};
      // The type of the check item. Valid values:
      // 
      // *   Identity authentication and permissions
      // *   Network access control
      // *   Log audit
      // *   Data security
      // *   Monitoring and alerting
      // *   Basic security protection
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->list_ == nullptr && this->pageCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeRiskCheckResultResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRiskCheckResultResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeRiskCheckResultResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeRiskCheckResultResponseBody::List>) };
    inline vector<DescribeRiskCheckResultResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<DescribeRiskCheckResultResponseBody::List>) };
    inline DescribeRiskCheckResultResponseBody& setList(const vector<DescribeRiskCheckResultResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeRiskCheckResultResponseBody& setList(vector<DescribeRiskCheckResultResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
    inline DescribeRiskCheckResultResponseBody& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRiskCheckResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRiskCheckResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The check items.
    shared_ptr<vector<DescribeRiskCheckResultResponseBody::List>> list_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> pageCount_ {};
    // The number of entries returned per page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

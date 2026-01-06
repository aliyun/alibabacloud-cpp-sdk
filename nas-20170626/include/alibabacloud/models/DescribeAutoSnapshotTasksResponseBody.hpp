// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAutoSnapshotTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotTasks, autoSnapshotTasks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotTasks, autoSnapshotTasks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoSnapshotTasksResponseBody() = default ;
    DescribeAutoSnapshotTasksResponseBody(const DescribeAutoSnapshotTasksResponseBody &) = default ;
    DescribeAutoSnapshotTasksResponseBody(DescribeAutoSnapshotTasksResponseBody &&) = default ;
    DescribeAutoSnapshotTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotTasksResponseBody() = default ;
    DescribeAutoSnapshotTasksResponseBody& operator=(const DescribeAutoSnapshotTasksResponseBody &) = default ;
    DescribeAutoSnapshotTasksResponseBody& operator=(DescribeAutoSnapshotTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoSnapshotTasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoSnapshotTasks& obj) { 
        DARABONBA_PTR_TO_JSON(AutoSnapshotTask, autoSnapshotTask_);
      };
      friend void from_json(const Darabonba::Json& j, AutoSnapshotTasks& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoSnapshotTask, autoSnapshotTask_);
      };
      AutoSnapshotTasks() = default ;
      AutoSnapshotTasks(const AutoSnapshotTasks &) = default ;
      AutoSnapshotTasks(AutoSnapshotTasks &&) = default ;
      AutoSnapshotTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoSnapshotTasks() = default ;
      AutoSnapshotTasks& operator=(const AutoSnapshotTasks &) = default ;
      AutoSnapshotTasks& operator=(AutoSnapshotTasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AutoSnapshotTask : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoSnapshotTask& obj) { 
          DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_TO_JSON(SourceFileSystemId, sourceFileSystemId_);
        };
        friend void from_json(const Darabonba::Json& j, AutoSnapshotTask& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_FROM_JSON(SourceFileSystemId, sourceFileSystemId_);
        };
        AutoSnapshotTask() = default ;
        AutoSnapshotTask(const AutoSnapshotTask &) = default ;
        AutoSnapshotTask(AutoSnapshotTask &&) = default ;
        AutoSnapshotTask(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoSnapshotTask() = default ;
        AutoSnapshotTask& operator=(const AutoSnapshotTask &) = default ;
        AutoSnapshotTask& operator=(AutoSnapshotTask &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && this->sourceFileSystemId_ == nullptr; };
        // autoSnapshotPolicyId Field Functions 
        bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
        void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
        inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
        inline AutoSnapshotTask& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


        // sourceFileSystemId Field Functions 
        bool hasSourceFileSystemId() const { return this->sourceFileSystemId_ != nullptr;};
        void deleteSourceFileSystemId() { this->sourceFileSystemId_ = nullptr;};
        inline string getSourceFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemId_, "") };
        inline AutoSnapshotTask& setSourceFileSystemId(string sourceFileSystemId) { DARABONBA_PTR_SET_VALUE(sourceFileSystemId_, sourceFileSystemId) };


      protected:
        // The ID of the automatic snapshot policy.
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // The ID of the file system.
        shared_ptr<string> sourceFileSystemId_ {};
      };

      virtual bool empty() const override { return this->autoSnapshotTask_ == nullptr; };
      // autoSnapshotTask Field Functions 
      bool hasAutoSnapshotTask() const { return this->autoSnapshotTask_ != nullptr;};
      void deleteAutoSnapshotTask() { this->autoSnapshotTask_ = nullptr;};
      inline const vector<AutoSnapshotTasks::AutoSnapshotTask> & getAutoSnapshotTask() const { DARABONBA_PTR_GET_CONST(autoSnapshotTask_, vector<AutoSnapshotTasks::AutoSnapshotTask>) };
      inline vector<AutoSnapshotTasks::AutoSnapshotTask> getAutoSnapshotTask() { DARABONBA_PTR_GET(autoSnapshotTask_, vector<AutoSnapshotTasks::AutoSnapshotTask>) };
      inline AutoSnapshotTasks& setAutoSnapshotTask(const vector<AutoSnapshotTasks::AutoSnapshotTask> & autoSnapshotTask) { DARABONBA_PTR_SET_VALUE(autoSnapshotTask_, autoSnapshotTask) };
      inline AutoSnapshotTasks& setAutoSnapshotTask(vector<AutoSnapshotTasks::AutoSnapshotTask> && autoSnapshotTask) { DARABONBA_PTR_SET_RVALUE(autoSnapshotTask_, autoSnapshotTask) };


    protected:
      shared_ptr<vector<AutoSnapshotTasks::AutoSnapshotTask>> autoSnapshotTask_ {};
    };

    virtual bool empty() const override { return this->autoSnapshotTasks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // autoSnapshotTasks Field Functions 
    bool hasAutoSnapshotTasks() const { return this->autoSnapshotTasks_ != nullptr;};
    void deleteAutoSnapshotTasks() { this->autoSnapshotTasks_ = nullptr;};
    inline const DescribeAutoSnapshotTasksResponseBody::AutoSnapshotTasks & getAutoSnapshotTasks() const { DARABONBA_PTR_GET_CONST(autoSnapshotTasks_, DescribeAutoSnapshotTasksResponseBody::AutoSnapshotTasks) };
    inline DescribeAutoSnapshotTasksResponseBody::AutoSnapshotTasks getAutoSnapshotTasks() { DARABONBA_PTR_GET(autoSnapshotTasks_, DescribeAutoSnapshotTasksResponseBody::AutoSnapshotTasks) };
    inline DescribeAutoSnapshotTasksResponseBody& setAutoSnapshotTasks(const DescribeAutoSnapshotTasksResponseBody::AutoSnapshotTasks & autoSnapshotTasks) { DARABONBA_PTR_SET_VALUE(autoSnapshotTasks_, autoSnapshotTasks) };
    inline DescribeAutoSnapshotTasksResponseBody& setAutoSnapshotTasks(DescribeAutoSnapshotTasksResponseBody::AutoSnapshotTasks && autoSnapshotTasks) { DARABONBA_PTR_SET_RVALUE(autoSnapshotTasks_, autoSnapshotTasks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoSnapshotTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoSnapshotTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoSnapshotTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAutoSnapshotTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried automatic snapshot tasks.
    shared_ptr<DescribeAutoSnapshotTasksResponseBody::AutoSnapshotTasks> autoSnapshotTasks_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of automatic snapshot tasks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

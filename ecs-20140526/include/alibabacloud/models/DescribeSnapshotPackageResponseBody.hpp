// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotPackages, snapshotPackages_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotPackages, snapshotPackages_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSnapshotPackageResponseBody() = default ;
    DescribeSnapshotPackageResponseBody(const DescribeSnapshotPackageResponseBody &) = default ;
    DescribeSnapshotPackageResponseBody(DescribeSnapshotPackageResponseBody &&) = default ;
    DescribeSnapshotPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotPackageResponseBody() = default ;
    DescribeSnapshotPackageResponseBody& operator=(const DescribeSnapshotPackageResponseBody &) = default ;
    DescribeSnapshotPackageResponseBody& operator=(DescribeSnapshotPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnapshotPackages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotPackages& obj) { 
        DARABONBA_PTR_TO_JSON(SnapshotPackage, snapshotPackage_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotPackages& obj) { 
        DARABONBA_PTR_FROM_JSON(SnapshotPackage, snapshotPackage_);
      };
      SnapshotPackages() = default ;
      SnapshotPackages(const SnapshotPackages &) = default ;
      SnapshotPackages(SnapshotPackages &&) = default ;
      SnapshotPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotPackages() = default ;
      SnapshotPackages& operator=(const SnapshotPackages &) = default ;
      SnapshotPackages& operator=(SnapshotPackages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SnapshotPackage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SnapshotPackage& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(InitCapacity, initCapacity_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, SnapshotPackage& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(InitCapacity, initCapacity_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        SnapshotPackage() = default ;
        SnapshotPackage(const SnapshotPackage &) = default ;
        SnapshotPackage(SnapshotPackage &&) = default ;
        SnapshotPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SnapshotPackage() = default ;
        SnapshotPackage& operator=(const SnapshotPackage &) = default ;
        SnapshotPackage& operator=(SnapshotPackage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->endTime_ == nullptr && this->initCapacity_ == nullptr && this->startTime_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline SnapshotPackage& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline SnapshotPackage& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // initCapacity Field Functions 
        bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
        void deleteInitCapacity() { this->initCapacity_ = nullptr;};
        inline int64_t getInitCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, 0L) };
        inline SnapshotPackage& setInitCapacity(int64_t initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline SnapshotPackage& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The name of the OSS storage plan.
        shared_ptr<string> displayName_ {};
        // The time when the OSS storage plan expires. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> endTime_ {};
        // The maximum storage capacity offered by the OSS storage plan.
        shared_ptr<int64_t> initCapacity_ {};
        // The time when the OSS storage plan was purchased. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->snapshotPackage_ == nullptr; };
      // snapshotPackage Field Functions 
      bool hasSnapshotPackage() const { return this->snapshotPackage_ != nullptr;};
      void deleteSnapshotPackage() { this->snapshotPackage_ = nullptr;};
      inline const vector<SnapshotPackages::SnapshotPackage> & getSnapshotPackage() const { DARABONBA_PTR_GET_CONST(snapshotPackage_, vector<SnapshotPackages::SnapshotPackage>) };
      inline vector<SnapshotPackages::SnapshotPackage> getSnapshotPackage() { DARABONBA_PTR_GET(snapshotPackage_, vector<SnapshotPackages::SnapshotPackage>) };
      inline SnapshotPackages& setSnapshotPackage(const vector<SnapshotPackages::SnapshotPackage> & snapshotPackage) { DARABONBA_PTR_SET_VALUE(snapshotPackage_, snapshotPackage) };
      inline SnapshotPackages& setSnapshotPackage(vector<SnapshotPackages::SnapshotPackage> && snapshotPackage) { DARABONBA_PTR_SET_RVALUE(snapshotPackage_, snapshotPackage) };


    protected:
      shared_ptr<vector<SnapshotPackages::SnapshotPackage>> snapshotPackage_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->snapshotPackages_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSnapshotPackageResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnapshotPackageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotPackages Field Functions 
    bool hasSnapshotPackages() const { return this->snapshotPackages_ != nullptr;};
    void deleteSnapshotPackages() { this->snapshotPackages_ = nullptr;};
    inline const DescribeSnapshotPackageResponseBody::SnapshotPackages & getSnapshotPackages() const { DARABONBA_PTR_GET_CONST(snapshotPackages_, DescribeSnapshotPackageResponseBody::SnapshotPackages) };
    inline DescribeSnapshotPackageResponseBody::SnapshotPackages getSnapshotPackages() { DARABONBA_PTR_GET(snapshotPackages_, DescribeSnapshotPackageResponseBody::SnapshotPackages) };
    inline DescribeSnapshotPackageResponseBody& setSnapshotPackages(const DescribeSnapshotPackageResponseBody::SnapshotPackages & snapshotPackages) { DARABONBA_PTR_SET_VALUE(snapshotPackages_, snapshotPackages) };
    inline DescribeSnapshotPackageResponseBody& setSnapshotPackages(DescribeSnapshotPackageResponseBody::SnapshotPackages && snapshotPackages) { DARABONBA_PTR_SET_RVALUE(snapshotPackages_, snapshotPackages) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSnapshotPackageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details about the OSS storage plans.
    shared_ptr<DescribeSnapshotPackageResponseBody::SnapshotPackages> snapshotPackages_ {};
    // The total number of OSS storage plans.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

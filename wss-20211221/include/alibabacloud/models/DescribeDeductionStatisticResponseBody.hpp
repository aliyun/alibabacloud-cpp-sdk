// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDUCTIONSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDUCTIONSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeDeductionStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeductionStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeductionStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDeductionStatisticResponseBody() = default ;
    DescribeDeductionStatisticResponseBody(const DescribeDeductionStatisticResponseBody &) = default ;
    DescribeDeductionStatisticResponseBody(DescribeDeductionStatisticResponseBody &&) = default ;
    DescribeDeductionStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeductionStatisticResponseBody() = default ;
    DescribeDeductionStatisticResponseBody& operator=(const DescribeDeductionStatisticResponseBody &) = default ;
    DescribeDeductionStatisticResponseBody& operator=(DescribeDeductionStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableCorePackages, availableCorePackages_);
        DARABONBA_PTR_TO_JSON(Deductions, deductions_);
        DARABONBA_PTR_TO_JSON(Usages, usages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableCorePackages, availableCorePackages_);
        DARABONBA_PTR_FROM_JSON(Deductions, deductions_);
        DARABONBA_PTR_FROM_JSON(Usages, usages_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Usages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usages& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumeSecond, consumeSecond_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, Usages& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumeSecond, consumeSecond_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        Usages() = default ;
        Usages(const Usages &) = default ;
        Usages(Usages &&) = default ;
        Usages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Usages() = default ;
        Usages& operator=(const Usages &) = default ;
        Usages& operator=(Usages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumeSecond_ == nullptr
        && this->period_ == nullptr && this->resourceType_ == nullptr; };
        // consumeSecond Field Functions 
        bool hasConsumeSecond() const { return this->consumeSecond_ != nullptr;};
        void deleteConsumeSecond() { this->consumeSecond_ = nullptr;};
        inline int64_t getConsumeSecond() const { DARABONBA_PTR_GET_DEFAULT(consumeSecond_, 0L) };
        inline Usages& setConsumeSecond(int64_t consumeSecond) { DARABONBA_PTR_SET_VALUE(consumeSecond_, consumeSecond) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
        inline Usages& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Usages& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        shared_ptr<int64_t> consumeSecond_ {};
        shared_ptr<string> period_ {};
        shared_ptr<string> resourceType_ {};
      };

      class Deductions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Deductions& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumeSecond, consumeSecond_);
          DARABONBA_PTR_TO_JSON(DeductionDate, deductionDate_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, Deductions& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumeSecond, consumeSecond_);
          DARABONBA_PTR_FROM_JSON(DeductionDate, deductionDate_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        Deductions() = default ;
        Deductions(const Deductions &) = default ;
        Deductions(Deductions &&) = default ;
        Deductions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Deductions() = default ;
        Deductions& operator=(const Deductions &) = default ;
        Deductions& operator=(Deductions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumeSecond_ == nullptr
        && this->deductionDate_ == nullptr && this->resourceType_ == nullptr; };
        // consumeSecond Field Functions 
        bool hasConsumeSecond() const { return this->consumeSecond_ != nullptr;};
        void deleteConsumeSecond() { this->consumeSecond_ = nullptr;};
        inline int64_t getConsumeSecond() const { DARABONBA_PTR_GET_DEFAULT(consumeSecond_, 0L) };
        inline Deductions& setConsumeSecond(int64_t consumeSecond) { DARABONBA_PTR_SET_VALUE(consumeSecond_, consumeSecond) };


        // deductionDate Field Functions 
        bool hasDeductionDate() const { return this->deductionDate_ != nullptr;};
        void deleteDeductionDate() { this->deductionDate_ = nullptr;};
        inline string getDeductionDate() const { DARABONBA_PTR_GET_DEFAULT(deductionDate_, "") };
        inline Deductions& setDeductionDate(string deductionDate) { DARABONBA_PTR_SET_VALUE(deductionDate_, deductionDate) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Deductions& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        shared_ptr<int64_t> consumeSecond_ {};
        shared_ptr<string> deductionDate_ {};
        shared_ptr<string> resourceType_ {};
      };

      class AvailableCorePackages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableCorePackages& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupResourceType, groupResourceType_);
          DARABONBA_PTR_TO_JSON(NoLx, noLx_);
          DARABONBA_PTR_TO_JSON(NoLxSource, noLxSource_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
          DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableCorePackages& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupResourceType, groupResourceType_);
          DARABONBA_PTR_FROM_JSON(NoLx, noLx_);
          DARABONBA_PTR_FROM_JSON(NoLxSource, noLxSource_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
          DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
        };
        AvailableCorePackages() = default ;
        AvailableCorePackages(const AvailableCorePackages &) = default ;
        AvailableCorePackages(AvailableCorePackages &&) = default ;
        AvailableCorePackages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailableCorePackages() = default ;
        AvailableCorePackages& operator=(const AvailableCorePackages &) = default ;
        AvailableCorePackages& operator=(AvailableCorePackages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->createTime_ == nullptr && this->endTime_ == nullptr && this->expiredTime_ == nullptr && this->groupId_ == nullptr && this->groupResourceType_ == nullptr
        && this->noLx_ == nullptr && this->noLxSource_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->totalTime_ == nullptr && this->usedTime_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline AvailableCorePackages& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AvailableCorePackages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline AvailableCorePackages& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline AvailableCorePackages& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline AvailableCorePackages& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupResourceType Field Functions 
        bool hasGroupResourceType() const { return this->groupResourceType_ != nullptr;};
        void deleteGroupResourceType() { this->groupResourceType_ = nullptr;};
        inline string getGroupResourceType() const { DARABONBA_PTR_GET_DEFAULT(groupResourceType_, "") };
        inline AvailableCorePackages& setGroupResourceType(string groupResourceType) { DARABONBA_PTR_SET_VALUE(groupResourceType_, groupResourceType) };


        // noLx Field Functions 
        bool hasNoLx() const { return this->noLx_ != nullptr;};
        void deleteNoLx() { this->noLx_ = nullptr;};
        inline bool getNoLx() const { DARABONBA_PTR_GET_DEFAULT(noLx_, false) };
        inline AvailableCorePackages& setNoLx(bool noLx) { DARABONBA_PTR_SET_VALUE(noLx_, noLx) };


        // noLxSource Field Functions 
        bool hasNoLxSource() const { return this->noLxSource_ != nullptr;};
        void deleteNoLxSource() { this->noLxSource_ = nullptr;};
        inline string getNoLxSource() const { DARABONBA_PTR_GET_DEFAULT(noLxSource_, "") };
        inline AvailableCorePackages& setNoLxSource(string noLxSource) { DARABONBA_PTR_SET_VALUE(noLxSource_, noLxSource) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline AvailableCorePackages& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline AvailableCorePackages& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline AvailableCorePackages& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AvailableCorePackages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // totalTime Field Functions 
        bool hasTotalTime() const { return this->totalTime_ != nullptr;};
        void deleteTotalTime() { this->totalTime_ = nullptr;};
        inline int64_t getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
        inline AvailableCorePackages& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


        // usedTime Field Functions 
        bool hasUsedTime() const { return this->usedTime_ != nullptr;};
        void deleteUsedTime() { this->usedTime_ = nullptr;};
        inline int64_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0L) };
        inline AvailableCorePackages& setUsedTime(int64_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


      protected:
        shared_ptr<int64_t> aliUid_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> expiredTime_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> groupResourceType_ {};
        shared_ptr<bool> noLx_ {};
        shared_ptr<string> noLxSource_ {};
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceType_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> totalTime_ {};
        shared_ptr<int64_t> usedTime_ {};
      };

      virtual bool empty() const override { return this->availableCorePackages_ == nullptr
        && this->deductions_ == nullptr && this->usages_ == nullptr; };
      // availableCorePackages Field Functions 
      bool hasAvailableCorePackages() const { return this->availableCorePackages_ != nullptr;};
      void deleteAvailableCorePackages() { this->availableCorePackages_ = nullptr;};
      inline const vector<Data::AvailableCorePackages> & getAvailableCorePackages() const { DARABONBA_PTR_GET_CONST(availableCorePackages_, vector<Data::AvailableCorePackages>) };
      inline vector<Data::AvailableCorePackages> getAvailableCorePackages() { DARABONBA_PTR_GET(availableCorePackages_, vector<Data::AvailableCorePackages>) };
      inline Data& setAvailableCorePackages(const vector<Data::AvailableCorePackages> & availableCorePackages) { DARABONBA_PTR_SET_VALUE(availableCorePackages_, availableCorePackages) };
      inline Data& setAvailableCorePackages(vector<Data::AvailableCorePackages> && availableCorePackages) { DARABONBA_PTR_SET_RVALUE(availableCorePackages_, availableCorePackages) };


      // deductions Field Functions 
      bool hasDeductions() const { return this->deductions_ != nullptr;};
      void deleteDeductions() { this->deductions_ = nullptr;};
      inline const vector<Data::Deductions> & getDeductions() const { DARABONBA_PTR_GET_CONST(deductions_, vector<Data::Deductions>) };
      inline vector<Data::Deductions> getDeductions() { DARABONBA_PTR_GET(deductions_, vector<Data::Deductions>) };
      inline Data& setDeductions(const vector<Data::Deductions> & deductions) { DARABONBA_PTR_SET_VALUE(deductions_, deductions) };
      inline Data& setDeductions(vector<Data::Deductions> && deductions) { DARABONBA_PTR_SET_RVALUE(deductions_, deductions) };


      // usages Field Functions 
      bool hasUsages() const { return this->usages_ != nullptr;};
      void deleteUsages() { this->usages_ = nullptr;};
      inline const vector<Data::Usages> & getUsages() const { DARABONBA_PTR_GET_CONST(usages_, vector<Data::Usages>) };
      inline vector<Data::Usages> getUsages() { DARABONBA_PTR_GET(usages_, vector<Data::Usages>) };
      inline Data& setUsages(const vector<Data::Usages> & usages) { DARABONBA_PTR_SET_VALUE(usages_, usages) };
      inline Data& setUsages(vector<Data::Usages> && usages) { DARABONBA_PTR_SET_RVALUE(usages_, usages) };


    protected:
      shared_ptr<vector<Data::AvailableCorePackages>> availableCorePackages_ {};
      shared_ptr<vector<Data::Deductions>> deductions_ {};
      shared_ptr<vector<Data::Usages>> usages_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDeductionStatisticResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDeductionStatisticResponseBody::Data) };
    inline DescribeDeductionStatisticResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDeductionStatisticResponseBody::Data) };
    inline DescribeDeductionStatisticResponseBody& setData(const DescribeDeductionStatisticResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDeductionStatisticResponseBody& setData(DescribeDeductionStatisticResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeductionStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDeductionStatisticResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif

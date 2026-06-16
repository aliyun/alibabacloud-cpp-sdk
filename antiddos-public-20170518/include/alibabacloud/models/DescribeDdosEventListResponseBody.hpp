// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DdosEventList, ddosEventList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosEventList, ddosEventList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDdosEventListResponseBody() = default ;
    DescribeDdosEventListResponseBody(const DescribeDdosEventListResponseBody &) = default ;
    DescribeDdosEventListResponseBody(DescribeDdosEventListResponseBody &&) = default ;
    DescribeDdosEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosEventListResponseBody() = default ;
    DescribeDdosEventListResponseBody& operator=(const DescribeDdosEventListResponseBody &) = default ;
    DescribeDdosEventListResponseBody& operator=(DescribeDdosEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DdosEventList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DdosEventList& obj) { 
        DARABONBA_PTR_TO_JSON(DdosEvent, ddosEvent_);
      };
      friend void from_json(const Darabonba::Json& j, DdosEventList& obj) { 
        DARABONBA_PTR_FROM_JSON(DdosEvent, ddosEvent_);
      };
      DdosEventList() = default ;
      DdosEventList(const DdosEventList &) = default ;
      DdosEventList(DdosEventList &&) = default ;
      DdosEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DdosEventList() = default ;
      DdosEventList& operator=(const DdosEventList &) = default ;
      DdosEventList& operator=(DdosEventList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DdosEvent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DdosEvent& obj) { 
          DARABONBA_PTR_TO_JSON(DdosStatus, ddosStatus_);
          DARABONBA_PTR_TO_JSON(DdosType, ddosType_);
          DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(UnBlackholeTime, unBlackholeTime_);
        };
        friend void from_json(const Darabonba::Json& j, DdosEvent& obj) { 
          DARABONBA_PTR_FROM_JSON(DdosStatus, ddosStatus_);
          DARABONBA_PTR_FROM_JSON(DdosType, ddosType_);
          DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(UnBlackholeTime, unBlackholeTime_);
        };
        DdosEvent() = default ;
        DdosEvent(const DdosEvent &) = default ;
        DdosEvent(DdosEvent &&) = default ;
        DdosEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DdosEvent() = default ;
        DdosEvent& operator=(const DdosEvent &) = default ;
        DdosEvent& operator=(DdosEvent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ddosStatus_ == nullptr
        && this->ddosType_ == nullptr && this->delayTime_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr && this->unBlackholeTime_ == nullptr; };
        // ddosStatus Field Functions 
        bool hasDdosStatus() const { return this->ddosStatus_ != nullptr;};
        void deleteDdosStatus() { this->ddosStatus_ = nullptr;};
        inline string getDdosStatus() const { DARABONBA_PTR_GET_DEFAULT(ddosStatus_, "") };
        inline DdosEvent& setDdosStatus(string ddosStatus) { DARABONBA_PTR_SET_VALUE(ddosStatus_, ddosStatus) };


        // ddosType Field Functions 
        bool hasDdosType() const { return this->ddosType_ != nullptr;};
        void deleteDdosType() { this->ddosType_ = nullptr;};
        inline string getDdosType() const { DARABONBA_PTR_GET_DEFAULT(ddosType_, "") };
        inline DdosEvent& setDdosType(string ddosType) { DARABONBA_PTR_SET_VALUE(ddosType_, ddosType) };


        // delayTime Field Functions 
        bool hasDelayTime() const { return this->delayTime_ != nullptr;};
        void deleteDelayTime() { this->delayTime_ = nullptr;};
        inline int64_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0L) };
        inline DdosEvent& setDelayTime(int64_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline DdosEvent& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline DdosEvent& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // unBlackholeTime Field Functions 
        bool hasUnBlackholeTime() const { return this->unBlackholeTime_ != nullptr;};
        void deleteUnBlackholeTime() { this->unBlackholeTime_ = nullptr;};
        inline int64_t getUnBlackholeTime() const { DARABONBA_PTR_GET_DEFAULT(unBlackholeTime_, 0L) };
        inline DdosEvent& setUnBlackholeTime(int64_t unBlackholeTime) { DARABONBA_PTR_SET_VALUE(unBlackholeTime_, unBlackholeTime) };


      protected:
        shared_ptr<string> ddosStatus_ {};
        shared_ptr<string> ddosType_ {};
        shared_ptr<int64_t> delayTime_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<int64_t> unBlackholeTime_ {};
      };

      virtual bool empty() const override { return this->ddosEvent_ == nullptr; };
      // ddosEvent Field Functions 
      bool hasDdosEvent() const { return this->ddosEvent_ != nullptr;};
      void deleteDdosEvent() { this->ddosEvent_ = nullptr;};
      inline const vector<DdosEventList::DdosEvent> & getDdosEvent() const { DARABONBA_PTR_GET_CONST(ddosEvent_, vector<DdosEventList::DdosEvent>) };
      inline vector<DdosEventList::DdosEvent> getDdosEvent() { DARABONBA_PTR_GET(ddosEvent_, vector<DdosEventList::DdosEvent>) };
      inline DdosEventList& setDdosEvent(const vector<DdosEventList::DdosEvent> & ddosEvent) { DARABONBA_PTR_SET_VALUE(ddosEvent_, ddosEvent) };
      inline DdosEventList& setDdosEvent(vector<DdosEventList::DdosEvent> && ddosEvent) { DARABONBA_PTR_SET_RVALUE(ddosEvent_, ddosEvent) };


    protected:
      shared_ptr<vector<DdosEventList::DdosEvent>> ddosEvent_ {};
    };

    virtual bool empty() const override { return this->ddosEventList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // ddosEventList Field Functions 
    bool hasDdosEventList() const { return this->ddosEventList_ != nullptr;};
    void deleteDdosEventList() { this->ddosEventList_ = nullptr;};
    inline const DescribeDdosEventListResponseBody::DdosEventList & getDdosEventList() const { DARABONBA_PTR_GET_CONST(ddosEventList_, DescribeDdosEventListResponseBody::DdosEventList) };
    inline DescribeDdosEventListResponseBody::DdosEventList getDdosEventList() { DARABONBA_PTR_GET(ddosEventList_, DescribeDdosEventListResponseBody::DdosEventList) };
    inline DescribeDdosEventListResponseBody& setDdosEventList(const DescribeDdosEventListResponseBody::DdosEventList & ddosEventList) { DARABONBA_PTR_SET_VALUE(ddosEventList_, ddosEventList) };
    inline DescribeDdosEventListResponseBody& setDdosEventList(DescribeDdosEventListResponseBody::DdosEventList && ddosEventList) { DARABONBA_PTR_SET_RVALUE(ddosEventList_, ddosEventList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeDdosEventListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<DescribeDdosEventListResponseBody::DdosEventList> ddosEventList_ {};
    // The ID of the request. Alibaba Cloud generates a unique ID for each request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of DDoS attack events found.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif

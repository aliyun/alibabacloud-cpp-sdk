// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORJOBSSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORJOBSSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorJobsStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorJobsStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorJobsStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDoctorJobsStatsResponseBody() = default ;
    ListDoctorJobsStatsResponseBody(const ListDoctorJobsStatsResponseBody &) = default ;
    ListDoctorJobsStatsResponseBody(ListDoctorJobsStatsResponseBody &&) = default ;
    ListDoctorJobsStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorJobsStatsResponseBody() = default ;
    ListDoctorJobsStatsResponseBody& operator=(const ListDoctorJobsStatsResponseBody &) = default ;
    ListDoctorJobsStatsResponseBody& operator=(ListDoctorJobsStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppsCount, appsCount_);
        DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
        DARABONBA_PTR_TO_JSON(Queue, queue_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(User, user_);
        DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppsCount, appsCount_);
        DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
        DARABONBA_PTR_FROM_JSON(Queue, queue_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(User, user_);
        DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
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
      class VcoreSeconds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VcoreSeconds& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, VcoreSeconds& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        VcoreSeconds() = default ;
        VcoreSeconds(const VcoreSeconds &) = default ;
        VcoreSeconds(VcoreSeconds &&) = default ;
        VcoreSeconds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VcoreSeconds() = default ;
        VcoreSeconds& operator=(const VcoreSeconds &) = default ;
        VcoreSeconds& operator=(VcoreSeconds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VcoreSeconds& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VcoreSeconds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline VcoreSeconds& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
        inline VcoreSeconds& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The description of the metric.
        shared_ptr<string> description_ {};
        // The name of the metric.
        shared_ptr<string> name_ {};
        // The unit of the metric.
        shared_ptr<string> unit_ {};
        // The value of the metric.
        shared_ptr<int64_t> value_ {};
      };

      class MemSeconds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemSeconds& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, MemSeconds& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        MemSeconds() = default ;
        MemSeconds(const MemSeconds &) = default ;
        MemSeconds(MemSeconds &&) = default ;
        MemSeconds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemSeconds() = default ;
        MemSeconds& operator=(const MemSeconds &) = default ;
        MemSeconds& operator=(MemSeconds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline MemSeconds& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MemSeconds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline MemSeconds& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
        inline MemSeconds& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The description of the metric.
        shared_ptr<string> description_ {};
        // The name of the metric.
        shared_ptr<string> name_ {};
        // The unit of the metric.
        shared_ptr<string> unit_ {};
        // The value of the metric.
        shared_ptr<int64_t> value_ {};
      };

      class AppsCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppsCount& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AppsCount& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AppsCount() = default ;
        AppsCount(const AppsCount &) = default ;
        AppsCount(AppsCount &&) = default ;
        AppsCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppsCount() = default ;
        AppsCount& operator=(const AppsCount &) = default ;
        AppsCount& operator=(AppsCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AppsCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AppsCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline AppsCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
        inline AppsCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The description of the metric.
        shared_ptr<string> description_ {};
        // The name of the metric.
        shared_ptr<string> name_ {};
        // The unit of the metric.
        shared_ptr<string> unit_ {};
        // The value of the metric.
        shared_ptr<int64_t> value_ {};
      };

      virtual bool empty() const override { return this->appsCount_ == nullptr
        && this->memSeconds_ == nullptr && this->queue_ == nullptr && this->type_ == nullptr && this->user_ == nullptr && this->vcoreSeconds_ == nullptr; };
      // appsCount Field Functions 
      bool hasAppsCount() const { return this->appsCount_ != nullptr;};
      void deleteAppsCount() { this->appsCount_ = nullptr;};
      inline const Data::AppsCount & getAppsCount() const { DARABONBA_PTR_GET_CONST(appsCount_, Data::AppsCount) };
      inline Data::AppsCount getAppsCount() { DARABONBA_PTR_GET(appsCount_, Data::AppsCount) };
      inline Data& setAppsCount(const Data::AppsCount & appsCount) { DARABONBA_PTR_SET_VALUE(appsCount_, appsCount) };
      inline Data& setAppsCount(Data::AppsCount && appsCount) { DARABONBA_PTR_SET_RVALUE(appsCount_, appsCount) };


      // memSeconds Field Functions 
      bool hasMemSeconds() const { return this->memSeconds_ != nullptr;};
      void deleteMemSeconds() { this->memSeconds_ = nullptr;};
      inline const Data::MemSeconds & getMemSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Data::MemSeconds) };
      inline Data::MemSeconds getMemSeconds() { DARABONBA_PTR_GET(memSeconds_, Data::MemSeconds) };
      inline Data& setMemSeconds(const Data::MemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
      inline Data& setMemSeconds(Data::MemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


      // queue Field Functions 
      bool hasQueue() const { return this->queue_ != nullptr;};
      void deleteQueue() { this->queue_ = nullptr;};
      inline string getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
      inline Data& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Data& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      // vcoreSeconds Field Functions 
      bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
      void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
      inline const Data::VcoreSeconds & getVcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Data::VcoreSeconds) };
      inline Data::VcoreSeconds getVcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Data::VcoreSeconds) };
      inline Data& setVcoreSeconds(const Data::VcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
      inline Data& setVcoreSeconds(Data::VcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


    protected:
      // The total number of jobs.
      shared_ptr<Data::AppsCount> appsCount_ {};
      // The aggregated amount of memory that is allocated to the job multiplied by the number of seconds the job has been running.
      shared_ptr<Data::MemSeconds> memSeconds_ {};
      // The YARN queue to which the job was submitted.
      shared_ptr<string> queue_ {};
      // The type of the compute engine.
      shared_ptr<string> type_ {};
      // The username that is used to submit the job.
      shared_ptr<string> user_ {};
      // The aggregated number of vCPUs that are allocated to the job multiplied by the number of seconds the job has been running.
      shared_ptr<Data::VcoreSeconds> vcoreSeconds_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDoctorJobsStatsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDoctorJobsStatsResponseBody::Data>) };
    inline vector<ListDoctorJobsStatsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDoctorJobsStatsResponseBody::Data>) };
    inline ListDoctorJobsStatsResponseBody& setData(const vector<ListDoctorJobsStatsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDoctorJobsStatsResponseBody& setData(vector<ListDoctorJobsStatsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorJobsStatsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorJobsStatsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDoctorJobsStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDoctorJobsStatsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The summary of job information.
    shared_ptr<vector<ListDoctorJobsStatsResponseBody::Data>> data_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

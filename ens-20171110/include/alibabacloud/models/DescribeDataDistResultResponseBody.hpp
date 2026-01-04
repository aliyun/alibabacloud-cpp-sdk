// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDistResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDistResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DistResults, distResults_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDistResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DistResults, distResults_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataDistResultResponseBody() = default ;
    DescribeDataDistResultResponseBody(const DescribeDataDistResultResponseBody &) = default ;
    DescribeDataDistResultResponseBody(DescribeDataDistResultResponseBody &&) = default ;
    DescribeDataDistResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDistResultResponseBody() = default ;
    DescribeDataDistResultResponseBody& operator=(const DescribeDataDistResultResponseBody &) = default ;
    DescribeDataDistResultResponseBody& operator=(DescribeDataDistResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DistResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DistResults& obj) { 
        DARABONBA_PTR_TO_JSON(DistResult, distResult_);
      };
      friend void from_json(const Darabonba::Json& j, DistResults& obj) { 
        DARABONBA_PTR_FROM_JSON(DistResult, distResult_);
      };
      DistResults() = default ;
      DistResults(const DistResults &) = default ;
      DistResults(DistResults &&) = default ;
      DistResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DistResults() = default ;
      DistResults& operator=(const DistResults &) = default ;
      DistResults& operator=(DistResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DistResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DistResult& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(StatusStats, statusStats_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, DistResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(StatusStats, statusStats_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        DistResult() = default ;
        DistResult(const DistResult &) = default ;
        DistResult(DistResult &&) = default ;
        DistResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DistResult() = default ;
        DistResult& operator=(const DistResult &) = default ;
        DistResult& operator=(DistResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StatusStats : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StatusStats& obj) { 
            DARABONBA_PTR_TO_JSON(StatusStat, statusStat_);
          };
          friend void from_json(const Darabonba::Json& j, StatusStats& obj) { 
            DARABONBA_PTR_FROM_JSON(StatusStat, statusStat_);
          };
          StatusStats() = default ;
          StatusStats(const StatusStats &) = default ;
          StatusStats(StatusStats &&) = default ;
          StatusStats(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StatusStats() = default ;
          StatusStats& operator=(const StatusStats &) = default ;
          StatusStats& operator=(StatusStats &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StatusStat : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StatusStat& obj) { 
              DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
              DARABONBA_PTR_TO_JSON(Instances, instances_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, StatusStat& obj) { 
              DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
              DARABONBA_PTR_FROM_JSON(Instances, instances_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            StatusStat() = default ;
            StatusStat(const StatusStat &) = default ;
            StatusStat(StatusStat &&) = default ;
            StatusStat(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StatusStat() = default ;
            StatusStat& operator=(const StatusStat &) = default ;
            StatusStat& operator=(StatusStat &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Instances : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Instances& obj) { 
                DARABONBA_PTR_TO_JSON(Instance, instance_);
              };
              friend void from_json(const Darabonba::Json& j, Instances& obj) { 
                DARABONBA_PTR_FROM_JSON(Instance, instance_);
              };
              Instances() = default ;
              Instances(const Instances &) = default ;
              Instances(Instances &&) = default ;
              Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Instances() = default ;
              Instances& operator=(const Instances &) = default ;
              Instances& operator=(Instances &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Instance : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Instance& obj) { 
                  DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
                  DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                  DARABONBA_PTR_TO_JSON(StatusDescrip, statusDescrip_);
                  DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
                };
                friend void from_json(const Darabonba::Json& j, Instance& obj) { 
                  DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
                  DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                  DARABONBA_PTR_FROM_JSON(StatusDescrip, statusDescrip_);
                  DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
                };
                Instance() = default ;
                Instance(const Instance &) = default ;
                Instance(Instance &&) = default ;
                Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Instance() = default ;
                Instance& operator=(const Instance &) = default ;
                Instance& operator=(Instance &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->startTime_ == nullptr && this->statusDescrip_ == nullptr && this->updateTime_ == nullptr; };
                // instanceId Field Functions 
                bool hasInstanceId() const { return this->instanceId_ != nullptr;};
                void deleteInstanceId() { this->instanceId_ = nullptr;};
                inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
                inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


                // startTime Field Functions 
                bool hasStartTime() const { return this->startTime_ != nullptr;};
                void deleteStartTime() { this->startTime_ = nullptr;};
                inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
                inline Instance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


                // statusDescrip Field Functions 
                bool hasStatusDescrip() const { return this->statusDescrip_ != nullptr;};
                void deleteStatusDescrip() { this->statusDescrip_ = nullptr;};
                inline string getStatusDescrip() const { DARABONBA_PTR_GET_DEFAULT(statusDescrip_, "") };
                inline Instance& setStatusDescrip(string statusDescrip) { DARABONBA_PTR_SET_VALUE(statusDescrip_, statusDescrip) };


                // updateTime Field Functions 
                bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
                void deleteUpdateTime() { this->updateTime_ = nullptr;};
                inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
                inline Instance& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


              protected:
                // The ID of the instance
                shared_ptr<string> instanceId_ {};
                // The start time of the distribution. The time is displayed in UTC.
                shared_ptr<string> startTime_ {};
                // The description of the distribution status.
                shared_ptr<string> statusDescrip_ {};
                // The time when the distribution status was last updated. The time is displayed in UTC.
                shared_ptr<string> updateTime_ {};
              };

              virtual bool empty() const override { return this->instance_ == nullptr; };
              // instance Field Functions 
              bool hasInstance() const { return this->instance_ != nullptr;};
              void deleteInstance() { this->instance_ = nullptr;};
              inline const vector<Instances::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Instances::Instance>) };
              inline vector<Instances::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Instances::Instance>) };
              inline Instances& setInstance(const vector<Instances::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
              inline Instances& setInstance(vector<Instances::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


            protected:
              shared_ptr<vector<Instances::Instance>> instance_ {};
            };

            virtual bool empty() const override { return this->instanceCount_ == nullptr
        && this->instances_ == nullptr && this->status_ == nullptr; };
            // instanceCount Field Functions 
            bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
            void deleteInstanceCount() { this->instanceCount_ = nullptr;};
            inline string getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, "") };
            inline StatusStat& setInstanceCount(string instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


            // instances Field Functions 
            bool hasInstances() const { return this->instances_ != nullptr;};
            void deleteInstances() { this->instances_ = nullptr;};
            inline const StatusStat::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, StatusStat::Instances) };
            inline StatusStat::Instances getInstances() { DARABONBA_PTR_GET(instances_, StatusStat::Instances) };
            inline StatusStat& setInstances(const StatusStat::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
            inline StatusStat& setInstances(StatusStat::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline StatusStat& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The number of associated edge instances.
            shared_ptr<string> instanceCount_ {};
            // The distribution status of the edge instance.
            shared_ptr<StatusStat::Instances> instances_ {};
            // The distribution status. The value is of the enumeration type. Valid values:
            // 
            // *   SUCCESS: The distribution is successful.
            // *   FAILED: The distribution failed.
            // *   DISTING: The data is being distributed.
            // *   POD_RESTARTING: The idle pod is being restarted.
            // *   DELETED: The data is cleared or removed.
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->statusStat_ == nullptr; };
          // statusStat Field Functions 
          bool hasStatusStat() const { return this->statusStat_ != nullptr;};
          void deleteStatusStat() { this->statusStat_ = nullptr;};
          inline const vector<StatusStats::StatusStat> & getStatusStat() const { DARABONBA_PTR_GET_CONST(statusStat_, vector<StatusStats::StatusStat>) };
          inline vector<StatusStats::StatusStat> getStatusStat() { DARABONBA_PTR_GET(statusStat_, vector<StatusStats::StatusStat>) };
          inline StatusStats& setStatusStat(const vector<StatusStats::StatusStat> & statusStat) { DARABONBA_PTR_SET_VALUE(statusStat_, statusStat) };
          inline StatusStats& setStatusStat(vector<StatusStats::StatusStat> && statusStat) { DARABONBA_PTR_SET_RVALUE(statusStat_, statusStat) };


        protected:
          shared_ptr<vector<StatusStats::StatusStat>> statusStat_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->statusStats_ == nullptr && this->version_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DistResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // statusStats Field Functions 
        bool hasStatusStats() const { return this->statusStats_ != nullptr;};
        void deleteStatusStats() { this->statusStats_ = nullptr;};
        inline const DistResult::StatusStats & getStatusStats() const { DARABONBA_PTR_GET_CONST(statusStats_, DistResult::StatusStats) };
        inline DistResult::StatusStats getStatusStats() { DARABONBA_PTR_GET(statusStats_, DistResult::StatusStats) };
        inline DistResult& setStatusStats(const DistResult::StatusStats & statusStats) { DARABONBA_PTR_SET_VALUE(statusStats_, statusStats) };
        inline DistResult& setStatusStats(DistResult::StatusStats && statusStats) { DARABONBA_PTR_SET_RVALUE(statusStats_, statusStats) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline DistResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the data file.
        shared_ptr<string> name_ {};
        // The distribution status statistics.
        shared_ptr<DistResult::StatusStats> statusStats_ {};
        // The version number of the data file.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->distResult_ == nullptr; };
      // distResult Field Functions 
      bool hasDistResult() const { return this->distResult_ != nullptr;};
      void deleteDistResult() { this->distResult_ = nullptr;};
      inline const vector<DistResults::DistResult> & getDistResult() const { DARABONBA_PTR_GET_CONST(distResult_, vector<DistResults::DistResult>) };
      inline vector<DistResults::DistResult> getDistResult() { DARABONBA_PTR_GET(distResult_, vector<DistResults::DistResult>) };
      inline DistResults& setDistResult(const vector<DistResults::DistResult> & distResult) { DARABONBA_PTR_SET_VALUE(distResult_, distResult) };
      inline DistResults& setDistResult(vector<DistResults::DistResult> && distResult) { DARABONBA_PTR_SET_RVALUE(distResult_, distResult) };


    protected:
      shared_ptr<vector<DistResults::DistResult>> distResult_ {};
    };

    virtual bool empty() const override { return this->distResults_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // distResults Field Functions 
    bool hasDistResults() const { return this->distResults_ != nullptr;};
    void deleteDistResults() { this->distResults_ = nullptr;};
    inline const DescribeDataDistResultResponseBody::DistResults & getDistResults() const { DARABONBA_PTR_GET_CONST(distResults_, DescribeDataDistResultResponseBody::DistResults) };
    inline DescribeDataDistResultResponseBody::DistResults getDistResults() { DARABONBA_PTR_GET(distResults_, DescribeDataDistResultResponseBody::DistResults) };
    inline DescribeDataDistResultResponseBody& setDistResults(const DescribeDataDistResultResponseBody::DistResults & distResults) { DARABONBA_PTR_SET_VALUE(distResults_, distResults) };
    inline DescribeDataDistResultResponseBody& setDistResults(DescribeDataDistResultResponseBody::DistResults && distResults) { DARABONBA_PTR_SET_RVALUE(distResults_, distResults) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDataDistResultResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataDistResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataDistResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataDistResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The distribution status of data files on edge instances.
    shared_ptr<DescribeDataDistResultResponseBody::DistResults> distResults_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAPUSHRESULTRESPONSEBODY_HPP_
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
  class DescribeDataPushResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataPushResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PushResults, pushResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataPushResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PushResults, pushResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataPushResultResponseBody() = default ;
    DescribeDataPushResultResponseBody(const DescribeDataPushResultResponseBody &) = default ;
    DescribeDataPushResultResponseBody(DescribeDataPushResultResponseBody &&) = default ;
    DescribeDataPushResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataPushResultResponseBody() = default ;
    DescribeDataPushResultResponseBody& operator=(const DescribeDataPushResultResponseBody &) = default ;
    DescribeDataPushResultResponseBody& operator=(DescribeDataPushResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PushResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushResults& obj) { 
        DARABONBA_PTR_TO_JSON(PushResult, pushResult_);
      };
      friend void from_json(const Darabonba::Json& j, PushResults& obj) { 
        DARABONBA_PTR_FROM_JSON(PushResult, pushResult_);
      };
      PushResults() = default ;
      PushResults(const PushResults &) = default ;
      PushResults(PushResults &&) = default ;
      PushResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushResults() = default ;
      PushResults& operator=(const PushResults &) = default ;
      PushResults& operator=(PushResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PushResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PushResult& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(StatusStatS, statusStatS_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, PushResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(StatusStatS, statusStatS_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        PushResult() = default ;
        PushResult(const PushResult &) = default ;
        PushResult(PushResult &&) = default ;
        PushResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PushResult() = default ;
        PushResult& operator=(const PushResult &) = default ;
        PushResult& operator=(PushResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StatusStatS : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StatusStatS& obj) { 
            DARABONBA_PTR_TO_JSON(StatusStat, statusStat_);
          };
          friend void from_json(const Darabonba::Json& j, StatusStatS& obj) { 
            DARABONBA_PTR_FROM_JSON(StatusStat, statusStat_);
          };
          StatusStatS() = default ;
          StatusStatS(const StatusStatS &) = default ;
          StatusStatS(StatusStatS &&) = default ;
          StatusStatS(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StatusStatS() = default ;
          StatusStatS& operator=(const StatusStatS &) = default ;
          StatusStatS& operator=(StatusStatS &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StatusStat : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StatusStat& obj) { 
              DARABONBA_PTR_TO_JSON(RegionIdCount, regionIdCount_);
              DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, StatusStat& obj) { 
              DARABONBA_PTR_FROM_JSON(RegionIdCount, regionIdCount_);
              DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
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
            class RegionIds : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RegionIds& obj) { 
                DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              };
              friend void from_json(const Darabonba::Json& j, RegionIds& obj) { 
                DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              };
              RegionIds() = default ;
              RegionIds(const RegionIds &) = default ;
              RegionIds(RegionIds &&) = default ;
              RegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RegionIds() = default ;
              RegionIds& operator=(const RegionIds &) = default ;
              RegionIds& operator=(RegionIds &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class RegionId : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const RegionId& obj) { 
                  DARABONBA_PTR_TO_JSON(RegionId, regionId_);
                  DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                  DARABONBA_PTR_TO_JSON(StatusDescrip, statusDescrip_);
                  DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
                };
                friend void from_json(const Darabonba::Json& j, RegionId& obj) { 
                  DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
                  DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                  DARABONBA_PTR_FROM_JSON(StatusDescrip, statusDescrip_);
                  DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
                };
                RegionId() = default ;
                RegionId(const RegionId &) = default ;
                RegionId(RegionId &&) = default ;
                RegionId(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~RegionId() = default ;
                RegionId& operator=(const RegionId &) = default ;
                RegionId& operator=(RegionId &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->regionId_ == nullptr
        && this->startTime_ == nullptr && this->statusDescrip_ == nullptr && this->updateTime_ == nullptr; };
                // regionId Field Functions 
                bool hasRegionId() const { return this->regionId_ != nullptr;};
                void deleteRegionId() { this->regionId_ = nullptr;};
                inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
                inline RegionId& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


                // startTime Field Functions 
                bool hasStartTime() const { return this->startTime_ != nullptr;};
                void deleteStartTime() { this->startTime_ = nullptr;};
                inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
                inline RegionId& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


                // statusDescrip Field Functions 
                bool hasStatusDescrip() const { return this->statusDescrip_ != nullptr;};
                void deleteStatusDescrip() { this->statusDescrip_ = nullptr;};
                inline string getStatusDescrip() const { DARABONBA_PTR_GET_DEFAULT(statusDescrip_, "") };
                inline RegionId& setStatusDescrip(string statusDescrip) { DARABONBA_PTR_SET_VALUE(statusDescrip_, statusDescrip) };


                // updateTime Field Functions 
                bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
                void deleteUpdateTime() { this->updateTime_ = nullptr;};
                inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
                inline RegionId& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


              protected:
                // The ID of the ENS node.
                shared_ptr<string> regionId_ {};
                // The start time of the push operation. The time is displayed in UTC.
                shared_ptr<string> startTime_ {};
                // The description of the status.
                shared_ptr<string> statusDescrip_ {};
                // The time when the status was last updated. The time is displayed in UTC.
                shared_ptr<string> updateTime_ {};
              };

              virtual bool empty() const override { return this->regionId_ == nullptr; };
              // regionId Field Functions 
              bool hasRegionId() const { return this->regionId_ != nullptr;};
              void deleteRegionId() { this->regionId_ = nullptr;};
              inline const vector<RegionIds::RegionId> & getRegionId() const { DARABONBA_PTR_GET_CONST(regionId_, vector<RegionIds::RegionId>) };
              inline vector<RegionIds::RegionId> getRegionId() { DARABONBA_PTR_GET(regionId_, vector<RegionIds::RegionId>) };
              inline RegionIds& setRegionId(const vector<RegionIds::RegionId> & regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };
              inline RegionIds& setRegionId(vector<RegionIds::RegionId> && regionId) { DARABONBA_PTR_SET_RVALUE(regionId_, regionId) };


            protected:
              shared_ptr<vector<RegionIds::RegionId>> regionId_ {};
            };

            virtual bool empty() const override { return this->regionIdCount_ == nullptr
        && this->regionIds_ == nullptr && this->status_ == nullptr; };
            // regionIdCount Field Functions 
            bool hasRegionIdCount() const { return this->regionIdCount_ != nullptr;};
            void deleteRegionIdCount() { this->regionIdCount_ = nullptr;};
            inline int32_t getRegionIdCount() const { DARABONBA_PTR_GET_DEFAULT(regionIdCount_, 0) };
            inline StatusStat& setRegionIdCount(int32_t regionIdCount) { DARABONBA_PTR_SET_VALUE(regionIdCount_, regionIdCount) };


            // regionIds Field Functions 
            bool hasRegionIds() const { return this->regionIds_ != nullptr;};
            void deleteRegionIds() { this->regionIds_ = nullptr;};
            inline const StatusStat::RegionIds & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, StatusStat::RegionIds) };
            inline StatusStat::RegionIds getRegionIds() { DARABONBA_PTR_GET(regionIds_, StatusStat::RegionIds) };
            inline StatusStat& setRegionIds(const StatusStat::RegionIds & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
            inline StatusStat& setRegionIds(StatusStat::RegionIds && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline StatusStat& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The total number of ENS nodes.
            shared_ptr<int32_t> regionIdCount_ {};
            // The push status of data files on the ENS node.
            shared_ptr<StatusStat::RegionIds> regionIds_ {};
            // The push status. The value is of the enumeration type. Valid values: SUCCESS FAILED PUSHING
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->statusStat_ == nullptr; };
          // statusStat Field Functions 
          bool hasStatusStat() const { return this->statusStat_ != nullptr;};
          void deleteStatusStat() { this->statusStat_ = nullptr;};
          inline const vector<StatusStatS::StatusStat> & getStatusStat() const { DARABONBA_PTR_GET_CONST(statusStat_, vector<StatusStatS::StatusStat>) };
          inline vector<StatusStatS::StatusStat> getStatusStat() { DARABONBA_PTR_GET(statusStat_, vector<StatusStatS::StatusStat>) };
          inline StatusStatS& setStatusStat(const vector<StatusStatS::StatusStat> & statusStat) { DARABONBA_PTR_SET_VALUE(statusStat_, statusStat) };
          inline StatusStatS& setStatusStat(vector<StatusStatS::StatusStat> && statusStat) { DARABONBA_PTR_SET_RVALUE(statusStat_, statusStat) };


        protected:
          shared_ptr<vector<StatusStatS::StatusStat>> statusStat_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->statusStatS_ == nullptr && this->version_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PushResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // statusStatS Field Functions 
        bool hasStatusStatS() const { return this->statusStatS_ != nullptr;};
        void deleteStatusStatS() { this->statusStatS_ = nullptr;};
        inline const PushResult::StatusStatS & getStatusStatS() const { DARABONBA_PTR_GET_CONST(statusStatS_, PushResult::StatusStatS) };
        inline PushResult::StatusStatS getStatusStatS() { DARABONBA_PTR_GET(statusStatS_, PushResult::StatusStatS) };
        inline PushResult& setStatusStatS(const PushResult::StatusStatS & statusStatS) { DARABONBA_PTR_SET_VALUE(statusStatS_, statusStatS) };
        inline PushResult& setStatusStatS(PushResult::StatusStatS && statusStatS) { DARABONBA_PTR_SET_RVALUE(statusStatS_, statusStatS) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline PushResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the data file.
        shared_ptr<string> name_ {};
        // The push status of data files.
        shared_ptr<PushResult::StatusStatS> statusStatS_ {};
        // The version number of the data file.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->pushResult_ == nullptr; };
      // pushResult Field Functions 
      bool hasPushResult() const { return this->pushResult_ != nullptr;};
      void deletePushResult() { this->pushResult_ = nullptr;};
      inline const vector<PushResults::PushResult> & getPushResult() const { DARABONBA_PTR_GET_CONST(pushResult_, vector<PushResults::PushResult>) };
      inline vector<PushResults::PushResult> getPushResult() { DARABONBA_PTR_GET(pushResult_, vector<PushResults::PushResult>) };
      inline PushResults& setPushResult(const vector<PushResults::PushResult> & pushResult) { DARABONBA_PTR_SET_VALUE(pushResult_, pushResult) };
      inline PushResults& setPushResult(vector<PushResults::PushResult> && pushResult) { DARABONBA_PTR_SET_RVALUE(pushResult_, pushResult) };


    protected:
      shared_ptr<vector<PushResults::PushResult>> pushResult_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->pushResults_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDataPushResultResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataPushResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pushResults Field Functions 
    bool hasPushResults() const { return this->pushResults_ != nullptr;};
    void deletePushResults() { this->pushResults_ = nullptr;};
    inline const DescribeDataPushResultResponseBody::PushResults & getPushResults() const { DARABONBA_PTR_GET_CONST(pushResults_, DescribeDataPushResultResponseBody::PushResults) };
    inline DescribeDataPushResultResponseBody::PushResults getPushResults() { DARABONBA_PTR_GET(pushResults_, DescribeDataPushResultResponseBody::PushResults) };
    inline DescribeDataPushResultResponseBody& setPushResults(const DescribeDataPushResultResponseBody::PushResults & pushResults) { DARABONBA_PTR_SET_VALUE(pushResults_, pushResults) };
    inline DescribeDataPushResultResponseBody& setPushResults(DescribeDataPushResultResponseBody::PushResults && pushResults) { DARABONBA_PTR_SET_RVALUE(pushResults_, pushResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataPushResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataPushResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The push results of data files.
    shared_ptr<DescribeDataPushResultResponseBody::PushResults> pushResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

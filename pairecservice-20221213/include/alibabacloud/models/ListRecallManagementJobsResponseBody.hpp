// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECALLMANAGEMENTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECALLMANAGEMENTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListRecallManagementJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecallManagementJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RecallManagementJobs, recallManagementJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecallManagementJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RecallManagementJobs, recallManagementJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecallManagementJobsResponseBody() = default ;
    ListRecallManagementJobsResponseBody(const ListRecallManagementJobsResponseBody &) = default ;
    ListRecallManagementJobsResponseBody(ListRecallManagementJobsResponseBody &&) = default ;
    ListRecallManagementJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecallManagementJobsResponseBody() = default ;
    ListRecallManagementJobsResponseBody& operator=(const ListRecallManagementJobsResponseBody &) = default ;
    ListRecallManagementJobsResponseBody& operator=(ListRecallManagementJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecallManagementJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecallManagementJobs& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(RecallManagementJobId, recallManagementJobId_);
        DARABONBA_PTR_TO_JSON(RecallManagementTableInfo, recallManagementTableInfo_);
        DARABONBA_PTR_TO_JSON(RecallManagerTableInfo, recallManagerTableInfo_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RecallManagementJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(RecallManagementJobId, recallManagementJobId_);
        DARABONBA_PTR_FROM_JSON(RecallManagementTableInfo, recallManagementTableInfo_);
        DARABONBA_PTR_FROM_JSON(RecallManagerTableInfo, recallManagerTableInfo_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RecallManagementJobs() = default ;
      RecallManagementJobs(const RecallManagementJobs &) = default ;
      RecallManagementJobs(RecallManagementJobs &&) = default ;
      RecallManagementJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecallManagementJobs() = default ;
      RecallManagementJobs& operator=(const RecallManagementJobs &) = default ;
      RecallManagementJobs& operator=(RecallManagementJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecallManagerTableInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecallManagerTableInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DataVersion, dataVersion_);
          DARABONBA_PTR_TO_JSON(RecallManagementTableVersionId, recallManagementTableVersionId_);
          DARABONBA_PTR_TO_JSON(SourceTableDataSize, sourceTableDataSize_);
          DARABONBA_PTR_TO_JSON(SourceTableRowCount, sourceTableRowCount_);
        };
        friend void from_json(const Darabonba::Json& j, RecallManagerTableInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DataVersion, dataVersion_);
          DARABONBA_PTR_FROM_JSON(RecallManagementTableVersionId, recallManagementTableVersionId_);
          DARABONBA_PTR_FROM_JSON(SourceTableDataSize, sourceTableDataSize_);
          DARABONBA_PTR_FROM_JSON(SourceTableRowCount, sourceTableRowCount_);
        };
        RecallManagerTableInfo() = default ;
        RecallManagerTableInfo(const RecallManagerTableInfo &) = default ;
        RecallManagerTableInfo(RecallManagerTableInfo &&) = default ;
        RecallManagerTableInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecallManagerTableInfo() = default ;
        RecallManagerTableInfo& operator=(const RecallManagerTableInfo &) = default ;
        RecallManagerTableInfo& operator=(RecallManagerTableInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataVersion_ == nullptr
        && this->recallManagementTableVersionId_ == nullptr && this->sourceTableDataSize_ == nullptr && this->sourceTableRowCount_ == nullptr; };
        // dataVersion Field Functions 
        bool hasDataVersion() const { return this->dataVersion_ != nullptr;};
        void deleteDataVersion() { this->dataVersion_ = nullptr;};
        inline string getDataVersion() const { DARABONBA_PTR_GET_DEFAULT(dataVersion_, "") };
        inline RecallManagerTableInfo& setDataVersion(string dataVersion) { DARABONBA_PTR_SET_VALUE(dataVersion_, dataVersion) };


        // recallManagementTableVersionId Field Functions 
        bool hasRecallManagementTableVersionId() const { return this->recallManagementTableVersionId_ != nullptr;};
        void deleteRecallManagementTableVersionId() { this->recallManagementTableVersionId_ = nullptr;};
        inline string getRecallManagementTableVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementTableVersionId_, "") };
        inline RecallManagerTableInfo& setRecallManagementTableVersionId(string recallManagementTableVersionId) { DARABONBA_PTR_SET_VALUE(recallManagementTableVersionId_, recallManagementTableVersionId) };


        // sourceTableDataSize Field Functions 
        bool hasSourceTableDataSize() const { return this->sourceTableDataSize_ != nullptr;};
        void deleteSourceTableDataSize() { this->sourceTableDataSize_ = nullptr;};
        inline string getSourceTableDataSize() const { DARABONBA_PTR_GET_DEFAULT(sourceTableDataSize_, "") };
        inline RecallManagerTableInfo& setSourceTableDataSize(string sourceTableDataSize) { DARABONBA_PTR_SET_VALUE(sourceTableDataSize_, sourceTableDataSize) };


        // sourceTableRowCount Field Functions 
        bool hasSourceTableRowCount() const { return this->sourceTableRowCount_ != nullptr;};
        void deleteSourceTableRowCount() { this->sourceTableRowCount_ = nullptr;};
        inline string getSourceTableRowCount() const { DARABONBA_PTR_GET_DEFAULT(sourceTableRowCount_, "") };
        inline RecallManagerTableInfo& setSourceTableRowCount(string sourceTableRowCount) { DARABONBA_PTR_SET_VALUE(sourceTableRowCount_, sourceTableRowCount) };


      protected:
        shared_ptr<string> dataVersion_ {};
        shared_ptr<string> recallManagementTableVersionId_ {};
        shared_ptr<string> sourceTableDataSize_ {};
        shared_ptr<string> sourceTableRowCount_ {};
      };

      class RecallManagementTableInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecallManagementTableInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DataVersion, dataVersion_);
          DARABONBA_PTR_TO_JSON(RecallManagementTableVersionId, recallManagementTableVersionId_);
          DARABONBA_PTR_TO_JSON(SourceTableDataSize, sourceTableDataSize_);
          DARABONBA_PTR_TO_JSON(SourceTableRowCount, sourceTableRowCount_);
        };
        friend void from_json(const Darabonba::Json& j, RecallManagementTableInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DataVersion, dataVersion_);
          DARABONBA_PTR_FROM_JSON(RecallManagementTableVersionId, recallManagementTableVersionId_);
          DARABONBA_PTR_FROM_JSON(SourceTableDataSize, sourceTableDataSize_);
          DARABONBA_PTR_FROM_JSON(SourceTableRowCount, sourceTableRowCount_);
        };
        RecallManagementTableInfo() = default ;
        RecallManagementTableInfo(const RecallManagementTableInfo &) = default ;
        RecallManagementTableInfo(RecallManagementTableInfo &&) = default ;
        RecallManagementTableInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecallManagementTableInfo() = default ;
        RecallManagementTableInfo& operator=(const RecallManagementTableInfo &) = default ;
        RecallManagementTableInfo& operator=(RecallManagementTableInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataVersion_ == nullptr
        && this->recallManagementTableVersionId_ == nullptr && this->sourceTableDataSize_ == nullptr && this->sourceTableRowCount_ == nullptr; };
        // dataVersion Field Functions 
        bool hasDataVersion() const { return this->dataVersion_ != nullptr;};
        void deleteDataVersion() { this->dataVersion_ = nullptr;};
        inline string getDataVersion() const { DARABONBA_PTR_GET_DEFAULT(dataVersion_, "") };
        inline RecallManagementTableInfo& setDataVersion(string dataVersion) { DARABONBA_PTR_SET_VALUE(dataVersion_, dataVersion) };


        // recallManagementTableVersionId Field Functions 
        bool hasRecallManagementTableVersionId() const { return this->recallManagementTableVersionId_ != nullptr;};
        void deleteRecallManagementTableVersionId() { this->recallManagementTableVersionId_ = nullptr;};
        inline string getRecallManagementTableVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementTableVersionId_, "") };
        inline RecallManagementTableInfo& setRecallManagementTableVersionId(string recallManagementTableVersionId) { DARABONBA_PTR_SET_VALUE(recallManagementTableVersionId_, recallManagementTableVersionId) };


        // sourceTableDataSize Field Functions 
        bool hasSourceTableDataSize() const { return this->sourceTableDataSize_ != nullptr;};
        void deleteSourceTableDataSize() { this->sourceTableDataSize_ = nullptr;};
        inline string getSourceTableDataSize() const { DARABONBA_PTR_GET_DEFAULT(sourceTableDataSize_, "") };
        inline RecallManagementTableInfo& setSourceTableDataSize(string sourceTableDataSize) { DARABONBA_PTR_SET_VALUE(sourceTableDataSize_, sourceTableDataSize) };


        // sourceTableRowCount Field Functions 
        bool hasSourceTableRowCount() const { return this->sourceTableRowCount_ != nullptr;};
        void deleteSourceTableRowCount() { this->sourceTableRowCount_ = nullptr;};
        inline string getSourceTableRowCount() const { DARABONBA_PTR_GET_DEFAULT(sourceTableRowCount_, "") };
        inline RecallManagementTableInfo& setSourceTableRowCount(string sourceTableRowCount) { DARABONBA_PTR_SET_VALUE(sourceTableRowCount_, sourceTableRowCount) };


      protected:
        shared_ptr<string> dataVersion_ {};
        shared_ptr<string> recallManagementTableVersionId_ {};
        shared_ptr<string> sourceTableDataSize_ {};
        shared_ptr<string> sourceTableRowCount_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->recallManagementJobId_ == nullptr && this->recallManagementTableInfo_ == nullptr && this->recallManagerTableInfo_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline RecallManagementJobs& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // recallManagementJobId Field Functions 
      bool hasRecallManagementJobId() const { return this->recallManagementJobId_ != nullptr;};
      void deleteRecallManagementJobId() { this->recallManagementJobId_ = nullptr;};
      inline string getRecallManagementJobId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementJobId_, "") };
      inline RecallManagementJobs& setRecallManagementJobId(string recallManagementJobId) { DARABONBA_PTR_SET_VALUE(recallManagementJobId_, recallManagementJobId) };


      // recallManagementTableInfo Field Functions 
      bool hasRecallManagementTableInfo() const { return this->recallManagementTableInfo_ != nullptr;};
      void deleteRecallManagementTableInfo() { this->recallManagementTableInfo_ = nullptr;};
      inline const RecallManagementJobs::RecallManagementTableInfo & getRecallManagementTableInfo() const { DARABONBA_PTR_GET_CONST(recallManagementTableInfo_, RecallManagementJobs::RecallManagementTableInfo) };
      inline RecallManagementJobs::RecallManagementTableInfo getRecallManagementTableInfo() { DARABONBA_PTR_GET(recallManagementTableInfo_, RecallManagementJobs::RecallManagementTableInfo) };
      inline RecallManagementJobs& setRecallManagementTableInfo(const RecallManagementJobs::RecallManagementTableInfo & recallManagementTableInfo) { DARABONBA_PTR_SET_VALUE(recallManagementTableInfo_, recallManagementTableInfo) };
      inline RecallManagementJobs& setRecallManagementTableInfo(RecallManagementJobs::RecallManagementTableInfo && recallManagementTableInfo) { DARABONBA_PTR_SET_RVALUE(recallManagementTableInfo_, recallManagementTableInfo) };


      // recallManagerTableInfo Field Functions 
      bool hasRecallManagerTableInfo() const { return this->recallManagerTableInfo_ != nullptr;};
      void deleteRecallManagerTableInfo() { this->recallManagerTableInfo_ = nullptr;};
      inline const RecallManagementJobs::RecallManagerTableInfo & getRecallManagerTableInfo() const { DARABONBA_PTR_GET_CONST(recallManagerTableInfo_, RecallManagementJobs::RecallManagerTableInfo) };
      inline RecallManagementJobs::RecallManagerTableInfo getRecallManagerTableInfo() { DARABONBA_PTR_GET(recallManagerTableInfo_, RecallManagementJobs::RecallManagerTableInfo) };
      inline RecallManagementJobs& setRecallManagerTableInfo(const RecallManagementJobs::RecallManagerTableInfo & recallManagerTableInfo) { DARABONBA_PTR_SET_VALUE(recallManagerTableInfo_, recallManagerTableInfo) };
      inline RecallManagementJobs& setRecallManagerTableInfo(RecallManagementJobs::RecallManagerTableInfo && recallManagerTableInfo) { DARABONBA_PTR_SET_RVALUE(recallManagerTableInfo_, recallManagerTableInfo) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline RecallManagementJobs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RecallManagementJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> endTime_ {};
      shared_ptr<string> recallManagementJobId_ {};
      shared_ptr<RecallManagementJobs::RecallManagementTableInfo> recallManagementTableInfo_ {};
      shared_ptr<RecallManagementJobs::RecallManagerTableInfo> recallManagerTableInfo_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->recallManagementJobs_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRecallManagementJobsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRecallManagementJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // recallManagementJobs Field Functions 
    bool hasRecallManagementJobs() const { return this->recallManagementJobs_ != nullptr;};
    void deleteRecallManagementJobs() { this->recallManagementJobs_ = nullptr;};
    inline const vector<ListRecallManagementJobsResponseBody::RecallManagementJobs> & getRecallManagementJobs() const { DARABONBA_PTR_GET_CONST(recallManagementJobs_, vector<ListRecallManagementJobsResponseBody::RecallManagementJobs>) };
    inline vector<ListRecallManagementJobsResponseBody::RecallManagementJobs> getRecallManagementJobs() { DARABONBA_PTR_GET(recallManagementJobs_, vector<ListRecallManagementJobsResponseBody::RecallManagementJobs>) };
    inline ListRecallManagementJobsResponseBody& setRecallManagementJobs(const vector<ListRecallManagementJobsResponseBody::RecallManagementJobs> & recallManagementJobs) { DARABONBA_PTR_SET_VALUE(recallManagementJobs_, recallManagementJobs) };
    inline ListRecallManagementJobsResponseBody& setRecallManagementJobs(vector<ListRecallManagementJobsResponseBody::RecallManagementJobs> && recallManagementJobs) { DARABONBA_PTR_SET_RVALUE(recallManagementJobs_, recallManagementJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecallManagementJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRecallManagementJobsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListRecallManagementJobsResponseBody::RecallManagementJobs>> recallManagementJobs_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

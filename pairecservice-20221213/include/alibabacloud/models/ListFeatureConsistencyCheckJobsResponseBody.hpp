// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSRESPONSEBODY_HPP_
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
  class ListFeatureConsistencyCheckJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobs, featureConsistencyCheckJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobs, featureConsistencyCheckJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFeatureConsistencyCheckJobsResponseBody() = default ;
    ListFeatureConsistencyCheckJobsResponseBody(const ListFeatureConsistencyCheckJobsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobsResponseBody(ListFeatureConsistencyCheckJobsResponseBody &&) = default ;
    ListFeatureConsistencyCheckJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobsResponseBody() = default ;
    ListFeatureConsistencyCheckJobsResponseBody& operator=(const ListFeatureConsistencyCheckJobsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobsResponseBody& operator=(ListFeatureConsistencyCheckJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FeatureConsistencyCheckJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FeatureConsistencyCheckJobs& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
        DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobConfigName, featureConsistencyCheckJobConfigName_);
        DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobId, featureConsistencyCheckJobId_);
        DARABONBA_PTR_TO_JSON(GmtEndTime, gmtEndTime_);
        DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_TO_JSON(Logs, logs_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, FeatureConsistencyCheckJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
        DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobConfigName, featureConsistencyCheckJobConfigName_);
        DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobId, featureConsistencyCheckJobId_);
        DARABONBA_PTR_FROM_JSON(GmtEndTime, gmtEndTime_);
        DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_FROM_JSON(Logs, logs_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      FeatureConsistencyCheckJobs() = default ;
      FeatureConsistencyCheckJobs(const FeatureConsistencyCheckJobs &) = default ;
      FeatureConsistencyCheckJobs(FeatureConsistencyCheckJobs &&) = default ;
      FeatureConsistencyCheckJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FeatureConsistencyCheckJobs() = default ;
      FeatureConsistencyCheckJobs& operator=(const FeatureConsistencyCheckJobs &) = default ;
      FeatureConsistencyCheckJobs& operator=(FeatureConsistencyCheckJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->featureConsistencyCheckJobConfigId_ == nullptr && this->featureConsistencyCheckJobConfigName_ == nullptr && this->featureConsistencyCheckJobId_ == nullptr && this->gmtEndTime_ == nullptr && this->gmtStartTime_ == nullptr
        && this->logs_ == nullptr && this->status_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline FeatureConsistencyCheckJobs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // featureConsistencyCheckJobConfigId Field Functions 
      bool hasFeatureConsistencyCheckJobConfigId() const { return this->featureConsistencyCheckJobConfigId_ != nullptr;};
      void deleteFeatureConsistencyCheckJobConfigId() { this->featureConsistencyCheckJobConfigId_ = nullptr;};
      inline string getFeatureConsistencyCheckJobConfigId() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckJobConfigId_, "") };
      inline FeatureConsistencyCheckJobs& setFeatureConsistencyCheckJobConfigId(string featureConsistencyCheckJobConfigId) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobConfigId_, featureConsistencyCheckJobConfigId) };


      // featureConsistencyCheckJobConfigName Field Functions 
      bool hasFeatureConsistencyCheckJobConfigName() const { return this->featureConsistencyCheckJobConfigName_ != nullptr;};
      void deleteFeatureConsistencyCheckJobConfigName() { this->featureConsistencyCheckJobConfigName_ = nullptr;};
      inline string getFeatureConsistencyCheckJobConfigName() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckJobConfigName_, "") };
      inline FeatureConsistencyCheckJobs& setFeatureConsistencyCheckJobConfigName(string featureConsistencyCheckJobConfigName) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobConfigName_, featureConsistencyCheckJobConfigName) };


      // featureConsistencyCheckJobId Field Functions 
      bool hasFeatureConsistencyCheckJobId() const { return this->featureConsistencyCheckJobId_ != nullptr;};
      void deleteFeatureConsistencyCheckJobId() { this->featureConsistencyCheckJobId_ = nullptr;};
      inline string getFeatureConsistencyCheckJobId() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckJobId_, "") };
      inline FeatureConsistencyCheckJobs& setFeatureConsistencyCheckJobId(string featureConsistencyCheckJobId) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobId_, featureConsistencyCheckJobId) };


      // gmtEndTime Field Functions 
      bool hasGmtEndTime() const { return this->gmtEndTime_ != nullptr;};
      void deleteGmtEndTime() { this->gmtEndTime_ = nullptr;};
      inline string getGmtEndTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEndTime_, "") };
      inline FeatureConsistencyCheckJobs& setGmtEndTime(string gmtEndTime) { DARABONBA_PTR_SET_VALUE(gmtEndTime_, gmtEndTime) };


      // gmtStartTime Field Functions 
      bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
      void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
      inline string getGmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
      inline FeatureConsistencyCheckJobs& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<string> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
      inline vector<string> getLogs() { DARABONBA_PTR_GET(logs_, vector<string>) };
      inline FeatureConsistencyCheckJobs& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline FeatureConsistencyCheckJobs& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FeatureConsistencyCheckJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> config_ {};
      shared_ptr<string> featureConsistencyCheckJobConfigId_ {};
      shared_ptr<string> featureConsistencyCheckJobConfigName_ {};
      shared_ptr<string> featureConsistencyCheckJobId_ {};
      shared_ptr<string> gmtEndTime_ {};
      shared_ptr<string> gmtStartTime_ {};
      shared_ptr<vector<string>> logs_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->featureConsistencyCheckJobs_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // featureConsistencyCheckJobs Field Functions 
    bool hasFeatureConsistencyCheckJobs() const { return this->featureConsistencyCheckJobs_ != nullptr;};
    void deleteFeatureConsistencyCheckJobs() { this->featureConsistencyCheckJobs_ = nullptr;};
    inline const vector<ListFeatureConsistencyCheckJobsResponseBody::FeatureConsistencyCheckJobs> & getFeatureConsistencyCheckJobs() const { DARABONBA_PTR_GET_CONST(featureConsistencyCheckJobs_, vector<ListFeatureConsistencyCheckJobsResponseBody::FeatureConsistencyCheckJobs>) };
    inline vector<ListFeatureConsistencyCheckJobsResponseBody::FeatureConsistencyCheckJobs> getFeatureConsistencyCheckJobs() { DARABONBA_PTR_GET(featureConsistencyCheckJobs_, vector<ListFeatureConsistencyCheckJobsResponseBody::FeatureConsistencyCheckJobs>) };
    inline ListFeatureConsistencyCheckJobsResponseBody& setFeatureConsistencyCheckJobs(const vector<ListFeatureConsistencyCheckJobsResponseBody::FeatureConsistencyCheckJobs> & featureConsistencyCheckJobs) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobs_, featureConsistencyCheckJobs) };
    inline ListFeatureConsistencyCheckJobsResponseBody& setFeatureConsistencyCheckJobs(vector<ListFeatureConsistencyCheckJobsResponseBody::FeatureConsistencyCheckJobs> && featureConsistencyCheckJobs) { DARABONBA_PTR_SET_RVALUE(featureConsistencyCheckJobs_, featureConsistencyCheckJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureConsistencyCheckJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListFeatureConsistencyCheckJobsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListFeatureConsistencyCheckJobsResponseBody::FeatureConsistencyCheckJobs>> featureConsistencyCheckJobs_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

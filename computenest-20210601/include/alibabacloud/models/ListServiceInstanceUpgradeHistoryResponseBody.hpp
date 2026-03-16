// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEUPGRADEHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEUPGRADEHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceUpgradeHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceUpgradeHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UpgradeHistory, upgradeHistory_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceUpgradeHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UpgradeHistory, upgradeHistory_);
    };
    ListServiceInstanceUpgradeHistoryResponseBody() = default ;
    ListServiceInstanceUpgradeHistoryResponseBody(const ListServiceInstanceUpgradeHistoryResponseBody &) = default ;
    ListServiceInstanceUpgradeHistoryResponseBody(ListServiceInstanceUpgradeHistoryResponseBody &&) = default ;
    ListServiceInstanceUpgradeHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceUpgradeHistoryResponseBody() = default ;
    ListServiceInstanceUpgradeHistoryResponseBody& operator=(const ListServiceInstanceUpgradeHistoryResponseBody &) = default ;
    ListServiceInstanceUpgradeHistoryResponseBody& operator=(ListServiceInstanceUpgradeHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpgradeHistory : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpgradeHistory& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FromVersion, fromVersion_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ToVersion, toVersion_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpgradeHistoryId, upgradeHistoryId_);
      };
      friend void from_json(const Darabonba::Json& j, UpgradeHistory& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FromVersion, fromVersion_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ToVersion, toVersion_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpgradeHistoryId, upgradeHistoryId_);
      };
      UpgradeHistory() = default ;
      UpgradeHistory(const UpgradeHistory &) = default ;
      UpgradeHistory(UpgradeHistory &&) = default ;
      UpgradeHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpgradeHistory() = default ;
      UpgradeHistory& operator=(const UpgradeHistory &) = default ;
      UpgradeHistory& operator=(UpgradeHistory &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->fromVersion_ == nullptr && this->results_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->toVersion_ == nullptr
        && this->type_ == nullptr && this->upgradeHistoryId_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline UpgradeHistory& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // fromVersion Field Functions 
      bool hasFromVersion() const { return this->fromVersion_ != nullptr;};
      void deleteFromVersion() { this->fromVersion_ = nullptr;};
      inline string getFromVersion() const { DARABONBA_PTR_GET_DEFAULT(fromVersion_, "") };
      inline UpgradeHistory& setFromVersion(string fromVersion) { DARABONBA_PTR_SET_VALUE(fromVersion_, fromVersion) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline string getResults() const { DARABONBA_PTR_GET_DEFAULT(results_, "") };
      inline UpgradeHistory& setResults(string results) { DARABONBA_PTR_SET_VALUE(results_, results) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline UpgradeHistory& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline UpgradeHistory& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // toVersion Field Functions 
      bool hasToVersion() const { return this->toVersion_ != nullptr;};
      void deleteToVersion() { this->toVersion_ = nullptr;};
      inline string getToVersion() const { DARABONBA_PTR_GET_DEFAULT(toVersion_, "") };
      inline UpgradeHistory& setToVersion(string toVersion) { DARABONBA_PTR_SET_VALUE(toVersion_, toVersion) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UpgradeHistory& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // upgradeHistoryId Field Functions 
      bool hasUpgradeHistoryId() const { return this->upgradeHistoryId_ != nullptr;};
      void deleteUpgradeHistoryId() { this->upgradeHistoryId_ = nullptr;};
      inline string getUpgradeHistoryId() const { DARABONBA_PTR_GET_DEFAULT(upgradeHistoryId_, "") };
      inline UpgradeHistory& setUpgradeHistoryId(string upgradeHistoryId) { DARABONBA_PTR_SET_VALUE(upgradeHistoryId_, upgradeHistoryId) };


    protected:
      // The time when the update ended.
      shared_ptr<string> endTime_ {};
      // The version before the upgrade.
      shared_ptr<string> fromVersion_ {};
      // The upgrade result.
      shared_ptr<string> results_ {};
      // The time when the update started.
      shared_ptr<string> startTime_ {};
      // The state of the update. Valid values:
      // 
      // *   upgrading: The service instance is being upgraded.
      // *   UpgradeSuccessful: The service instance is upgraded.
      // *   UpgradeFailed: The service instance failed to be upgraded.
      shared_ptr<string> status_ {};
      // The version after the upgrade.
      shared_ptr<string> toVersion_ {};
      // The update type.
      shared_ptr<string> type_ {};
      // The ID of the upgrade record.
      shared_ptr<string> upgradeHistoryId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->upgradeHistory_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // upgradeHistory Field Functions 
    bool hasUpgradeHistory() const { return this->upgradeHistory_ != nullptr;};
    void deleteUpgradeHistory() { this->upgradeHistory_ = nullptr;};
    inline const vector<ListServiceInstanceUpgradeHistoryResponseBody::UpgradeHistory> & getUpgradeHistory() const { DARABONBA_PTR_GET_CONST(upgradeHistory_, vector<ListServiceInstanceUpgradeHistoryResponseBody::UpgradeHistory>) };
    inline vector<ListServiceInstanceUpgradeHistoryResponseBody::UpgradeHistory> getUpgradeHistory() { DARABONBA_PTR_GET(upgradeHistory_, vector<ListServiceInstanceUpgradeHistoryResponseBody::UpgradeHistory>) };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setUpgradeHistory(const vector<ListServiceInstanceUpgradeHistoryResponseBody::UpgradeHistory> & upgradeHistory) { DARABONBA_PTR_SET_VALUE(upgradeHistory_, upgradeHistory) };
    inline ListServiceInstanceUpgradeHistoryResponseBody& setUpgradeHistory(vector<ListServiceInstanceUpgradeHistoryResponseBody::UpgradeHistory> && upgradeHistory) { DARABONBA_PTR_SET_RVALUE(upgradeHistory_, upgradeHistory) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
    // The upgrade history.
    shared_ptr<vector<ListServiceInstanceUpgradeHistoryResponseBody::UpgradeHistory>> upgradeHistory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

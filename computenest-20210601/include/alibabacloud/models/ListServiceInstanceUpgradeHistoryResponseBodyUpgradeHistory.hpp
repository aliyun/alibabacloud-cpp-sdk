// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEUPGRADEHISTORYRESPONSEBODYUPGRADEHISTORY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEUPGRADEHISTORYRESPONSEBODYUPGRADEHISTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FromVersion, fromVersion_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ToVersion, toVersion_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpgradeHistoryId, upgradeHistoryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FromVersion, fromVersion_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ToVersion, toVersion_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpgradeHistoryId, upgradeHistoryId_);
    };
    ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory() = default ;
    ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory(const ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory &) = default ;
    ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory(ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory &&) = default ;
    ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory() = default ;
    ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& operator=(const ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory &) = default ;
    ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& operator=(ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->fromVersion_ != nullptr && this->results_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->toVersion_ != nullptr
        && this->type_ != nullptr && this->upgradeHistoryId_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fromVersion Field Functions 
    bool hasFromVersion() const { return this->fromVersion_ != nullptr;};
    void deleteFromVersion() { this->fromVersion_ = nullptr;};
    inline string fromVersion() const { DARABONBA_PTR_GET_DEFAULT(fromVersion_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& setFromVersion(string fromVersion) { DARABONBA_PTR_SET_VALUE(fromVersion_, fromVersion) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline string results() const { DARABONBA_PTR_GET_DEFAULT(results_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& setResults(string results) { DARABONBA_PTR_SET_VALUE(results_, results) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // toVersion Field Functions 
    bool hasToVersion() const { return this->toVersion_ != nullptr;};
    void deleteToVersion() { this->toVersion_ = nullptr;};
    inline string toVersion() const { DARABONBA_PTR_GET_DEFAULT(toVersion_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& setToVersion(string toVersion) { DARABONBA_PTR_SET_VALUE(toVersion_, toVersion) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // upgradeHistoryId Field Functions 
    bool hasUpgradeHistoryId() const { return this->upgradeHistoryId_ != nullptr;};
    void deleteUpgradeHistoryId() { this->upgradeHistoryId_ = nullptr;};
    inline string upgradeHistoryId() const { DARABONBA_PTR_GET_DEFAULT(upgradeHistoryId_, "") };
    inline ListServiceInstanceUpgradeHistoryResponseBodyUpgradeHistory& setUpgradeHistoryId(string upgradeHistoryId) { DARABONBA_PTR_SET_VALUE(upgradeHistoryId_, upgradeHistoryId) };


  protected:
    // The time when the update ended.
    std::shared_ptr<string> endTime_ = nullptr;
    // The version before the upgrade.
    std::shared_ptr<string> fromVersion_ = nullptr;
    // The upgrade result.
    std::shared_ptr<string> results_ = nullptr;
    // The time when the update started.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the update. Valid values:
    // 
    // *   upgrading: The service instance is being upgraded.
    // *   UpgradeSuccessful: The service instance is upgraded.
    // *   UpgradeFailed: The service instance failed to be upgraded.
    std::shared_ptr<string> status_ = nullptr;
    // The version after the upgrade.
    std::shared_ptr<string> toVersion_ = nullptr;
    // The update type.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the upgrade record.
    std::shared_ptr<string> upgradeHistoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

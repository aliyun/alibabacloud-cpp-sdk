// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPIIMPACTSRESPONSEBODYPAGERESULTIMPACTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPIIMPACTSRESPONSEBODYPAGERESULTIMPACTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiImpactsResponseBodyPageResultImpactList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiImpactsResponseBodyPageResultImpactList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CallCount, callCount_);
      DARABONBA_PTR_TO_JSON(ClientFailCount, clientFailCount_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ErrorApiCount, errorApiCount_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(ErrorRate, errorRate_);
      DARABONBA_PTR_TO_JSON(LastCallTime, lastCallTime_);
      DARABONBA_PTR_TO_JSON(Minute, minute_);
      DARABONBA_PTR_TO_JSON(OfflineCount, offlineCount_);
      DARABONBA_PTR_TO_JSON(SuccessTimeCost, successTimeCost_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalTimeCost, totalTimeCost_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiImpactsResponseBodyPageResultImpactList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
      DARABONBA_PTR_FROM_JSON(ClientFailCount, clientFailCount_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ErrorApiCount, errorApiCount_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(ErrorRate, errorRate_);
      DARABONBA_PTR_FROM_JSON(LastCallTime, lastCallTime_);
      DARABONBA_PTR_FROM_JSON(Minute, minute_);
      DARABONBA_PTR_FROM_JSON(OfflineCount, offlineCount_);
      DARABONBA_PTR_FROM_JSON(SuccessTimeCost, successTimeCost_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalTimeCost, totalTimeCost_);
    };
    ListDataServiceApiImpactsResponseBodyPageResultImpactList() = default ;
    ListDataServiceApiImpactsResponseBodyPageResultImpactList(const ListDataServiceApiImpactsResponseBodyPageResultImpactList &) = default ;
    ListDataServiceApiImpactsResponseBodyPageResultImpactList(ListDataServiceApiImpactsResponseBodyPageResultImpactList &&) = default ;
    ListDataServiceApiImpactsResponseBodyPageResultImpactList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiImpactsResponseBodyPageResultImpactList() = default ;
    ListDataServiceApiImpactsResponseBodyPageResultImpactList& operator=(const ListDataServiceApiImpactsResponseBodyPageResultImpactList &) = default ;
    ListDataServiceApiImpactsResponseBodyPageResultImpactList& operator=(ListDataServiceApiImpactsResponseBodyPageResultImpactList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->appKey_ == nullptr && return this->appName_ == nullptr && return this->callCount_ == nullptr && return this->clientFailCount_ == nullptr && return this->clientIp_ == nullptr
        && return this->errorApiCount_ == nullptr && return this->errorCount_ == nullptr && return this->errorRate_ == nullptr && return this->lastCallTime_ == nullptr && return this->minute_ == nullptr
        && return this->offlineCount_ == nullptr && return this->successTimeCost_ == nullptr && return this->totalCount_ == nullptr && return this->totalTimeCost_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // callCount Field Functions 
    bool hasCallCount() const { return this->callCount_ != nullptr;};
    void deleteCallCount() { this->callCount_ = nullptr;};
    inline int64_t callCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0L) };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setCallCount(int64_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


    // clientFailCount Field Functions 
    bool hasClientFailCount() const { return this->clientFailCount_ != nullptr;};
    void deleteClientFailCount() { this->clientFailCount_ = nullptr;};
    inline int64_t clientFailCount() const { DARABONBA_PTR_GET_DEFAULT(clientFailCount_, 0L) };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setClientFailCount(int64_t clientFailCount) { DARABONBA_PTR_SET_VALUE(clientFailCount_, clientFailCount) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // errorApiCount Field Functions 
    bool hasErrorApiCount() const { return this->errorApiCount_ != nullptr;};
    void deleteErrorApiCount() { this->errorApiCount_ = nullptr;};
    inline int64_t errorApiCount() const { DARABONBA_PTR_GET_DEFAULT(errorApiCount_, 0L) };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setErrorApiCount(int64_t errorApiCount) { DARABONBA_PTR_SET_VALUE(errorApiCount_, errorApiCount) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int64_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // errorRate Field Functions 
    bool hasErrorRate() const { return this->errorRate_ != nullptr;};
    void deleteErrorRate() { this->errorRate_ = nullptr;};
    inline string errorRate() const { DARABONBA_PTR_GET_DEFAULT(errorRate_, "") };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setErrorRate(string errorRate) { DARABONBA_PTR_SET_VALUE(errorRate_, errorRate) };


    // lastCallTime Field Functions 
    bool hasLastCallTime() const { return this->lastCallTime_ != nullptr;};
    void deleteLastCallTime() { this->lastCallTime_ = nullptr;};
    inline string lastCallTime() const { DARABONBA_PTR_GET_DEFAULT(lastCallTime_, "") };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setLastCallTime(string lastCallTime) { DARABONBA_PTR_SET_VALUE(lastCallTime_, lastCallTime) };


    // minute Field Functions 
    bool hasMinute() const { return this->minute_ != nullptr;};
    void deleteMinute() { this->minute_ = nullptr;};
    inline string minute() const { DARABONBA_PTR_GET_DEFAULT(minute_, "") };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setMinute(string minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


    // offlineCount Field Functions 
    bool hasOfflineCount() const { return this->offlineCount_ != nullptr;};
    void deleteOfflineCount() { this->offlineCount_ = nullptr;};
    inline int64_t offlineCount() const { DARABONBA_PTR_GET_DEFAULT(offlineCount_, 0L) };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setOfflineCount(int64_t offlineCount) { DARABONBA_PTR_SET_VALUE(offlineCount_, offlineCount) };


    // successTimeCost Field Functions 
    bool hasSuccessTimeCost() const { return this->successTimeCost_ != nullptr;};
    void deleteSuccessTimeCost() { this->successTimeCost_ = nullptr;};
    inline string successTimeCost() const { DARABONBA_PTR_GET_DEFAULT(successTimeCost_, "") };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setSuccessTimeCost(string successTimeCost) { DARABONBA_PTR_SET_VALUE(successTimeCost_, successTimeCost) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalTimeCost Field Functions 
    bool hasTotalTimeCost() const { return this->totalTimeCost_ != nullptr;};
    void deleteTotalTimeCost() { this->totalTimeCost_ = nullptr;};
    inline string totalTimeCost() const { DARABONBA_PTR_GET_DEFAULT(totalTimeCost_, "") };
    inline ListDataServiceApiImpactsResponseBodyPageResultImpactList& setTotalTimeCost(string totalTimeCost) { DARABONBA_PTR_SET_VALUE(totalTimeCost_, totalTimeCost) };


  protected:
    // apiNo
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // appKey
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int64_t> callCount_ = nullptr;
    std::shared_ptr<int64_t> clientFailCount_ = nullptr;
    std::shared_ptr<string> clientIp_ = nullptr;
    std::shared_ptr<int64_t> errorApiCount_ = nullptr;
    std::shared_ptr<int64_t> errorCount_ = nullptr;
    std::shared_ptr<string> errorRate_ = nullptr;
    std::shared_ptr<string> lastCallTime_ = nullptr;
    std::shared_ptr<string> minute_ = nullptr;
    std::shared_ptr<int64_t> offlineCount_ = nullptr;
    std::shared_ptr<string> successTimeCost_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<string> totalTimeCost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

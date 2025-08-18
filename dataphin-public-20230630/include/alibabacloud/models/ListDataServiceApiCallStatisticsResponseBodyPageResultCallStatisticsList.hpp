// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSTATISTICSRESPONSEBODYPAGERESULTCALLSTATISTICSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSTATISTICSRESPONSEBODYPAGERESULTCALLSTATISTICSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppNameList, appNameList_);
      DARABONBA_PTR_TO_JSON(AuthorizedAppCount, authorizedAppCount_);
      DARABONBA_PTR_TO_JSON(AvgResponseTime, avgResponseTime_);
      DARABONBA_PTR_TO_JSON(CallCount, callCount_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(ErrorRate, errorRate_);
      DARABONBA_PTR_TO_JSON(LastCallTime, lastCallTime_);
      DARABONBA_PTR_TO_JSON(OfflineRate, offlineRate_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppNameList, appNameList_);
      DARABONBA_PTR_FROM_JSON(AuthorizedAppCount, authorizedAppCount_);
      DARABONBA_PTR_FROM_JSON(AvgResponseTime, avgResponseTime_);
      DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(ErrorRate, errorRate_);
      DARABONBA_PTR_FROM_JSON(LastCallTime, lastCallTime_);
      DARABONBA_PTR_FROM_JSON(OfflineRate, offlineRate_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
    };
    ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList() = default ;
    ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList(const ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList &) = default ;
    ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList(ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList &&) = default ;
    ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList() = default ;
    ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& operator=(const ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList &) = default ;
    ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& operator=(ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->apiName_ != nullptr && this->appNameList_ != nullptr && this->authorizedAppCount_ != nullptr && this->avgResponseTime_ != nullptr && this->callCount_ != nullptr
        && this->creator_ != nullptr && this->errorCount_ != nullptr && this->errorRate_ != nullptr && this->lastCallTime_ != nullptr && this->offlineRate_ != nullptr
        && this->projectId_ != nullptr && this->projectName_ != nullptr && this->sqlId_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appNameList Field Functions 
    bool hasAppNameList() const { return this->appNameList_ != nullptr;};
    void deleteAppNameList() { this->appNameList_ = nullptr;};
    inline const vector<string> & appNameList() const { DARABONBA_PTR_GET_CONST(appNameList_, vector<string>) };
    inline vector<string> appNameList() { DARABONBA_PTR_GET(appNameList_, vector<string>) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setAppNameList(const vector<string> & appNameList) { DARABONBA_PTR_SET_VALUE(appNameList_, appNameList) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setAppNameList(vector<string> && appNameList) { DARABONBA_PTR_SET_RVALUE(appNameList_, appNameList) };


    // authorizedAppCount Field Functions 
    bool hasAuthorizedAppCount() const { return this->authorizedAppCount_ != nullptr;};
    void deleteAuthorizedAppCount() { this->authorizedAppCount_ = nullptr;};
    inline int32_t authorizedAppCount() const { DARABONBA_PTR_GET_DEFAULT(authorizedAppCount_, 0) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setAuthorizedAppCount(int32_t authorizedAppCount) { DARABONBA_PTR_SET_VALUE(authorizedAppCount_, authorizedAppCount) };


    // avgResponseTime Field Functions 
    bool hasAvgResponseTime() const { return this->avgResponseTime_ != nullptr;};
    void deleteAvgResponseTime() { this->avgResponseTime_ = nullptr;};
    inline double avgResponseTime() const { DARABONBA_PTR_GET_DEFAULT(avgResponseTime_, 0.0) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setAvgResponseTime(double avgResponseTime) { DARABONBA_PTR_SET_VALUE(avgResponseTime_, avgResponseTime) };


    // callCount Field Functions 
    bool hasCallCount() const { return this->callCount_ != nullptr;};
    void deleteCallCount() { this->callCount_ = nullptr;};
    inline int64_t callCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0L) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setCallCount(int64_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline string errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, "") };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setErrorCount(string errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // errorRate Field Functions 
    bool hasErrorRate() const { return this->errorRate_ != nullptr;};
    void deleteErrorRate() { this->errorRate_ = nullptr;};
    inline string errorRate() const { DARABONBA_PTR_GET_DEFAULT(errorRate_, "") };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setErrorRate(string errorRate) { DARABONBA_PTR_SET_VALUE(errorRate_, errorRate) };


    // lastCallTime Field Functions 
    bool hasLastCallTime() const { return this->lastCallTime_ != nullptr;};
    void deleteLastCallTime() { this->lastCallTime_ = nullptr;};
    inline string lastCallTime() const { DARABONBA_PTR_GET_DEFAULT(lastCallTime_, "") };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setLastCallTime(string lastCallTime) { DARABONBA_PTR_SET_VALUE(lastCallTime_, lastCallTime) };


    // offlineRate Field Functions 
    bool hasOfflineRate() const { return this->offlineRate_ != nullptr;};
    void deleteOfflineRate() { this->offlineRate_ = nullptr;};
    inline string offlineRate() const { DARABONBA_PTR_GET_DEFAULT(offlineRate_, "") };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setOfflineRate(string offlineRate) { DARABONBA_PTR_SET_VALUE(offlineRate_, offlineRate) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline int32_t sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, 0) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList& setSqlId(int32_t sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


  protected:
    std::shared_ptr<int64_t> apiId_ = nullptr;
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<vector<string>> appNameList_ = nullptr;
    std::shared_ptr<int32_t> authorizedAppCount_ = nullptr;
    std::shared_ptr<double> avgResponseTime_ = nullptr;
    std::shared_ptr<int64_t> callCount_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> errorCount_ = nullptr;
    std::shared_ptr<string> errorRate_ = nullptr;
    std::shared_ptr<string> lastCallTime_ = nullptr;
    std::shared_ptr<string> offlineRate_ = nullptr;
    std::shared_ptr<int32_t> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<int32_t> sqlId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class SumStorageMetricsByDateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumStorageMetricsByDateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(projectNames, projectNames_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(statsType, statsType_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SumStorageMetricsByDateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(projectNames, projectNames_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(statsType, statsType_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    SumStorageMetricsByDateRequest() = default ;
    SumStorageMetricsByDateRequest(const SumStorageMetricsByDateRequest &) = default ;
    SumStorageMetricsByDateRequest(SumStorageMetricsByDateRequest &&) = default ;
    SumStorageMetricsByDateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumStorageMetricsByDateRequest() = default ;
    SumStorageMetricsByDateRequest& operator=(const SumStorageMetricsByDateRequest &) = default ;
    SumStorageMetricsByDateRequest& operator=(SumStorageMetricsByDateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endDate_ != nullptr
        && this->projectNames_ != nullptr && this->region_ != nullptr && this->startDate_ != nullptr && this->statsType_ != nullptr && this->userId_ != nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline SumStorageMetricsByDateRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // projectNames Field Functions 
    bool hasProjectNames() const { return this->projectNames_ != nullptr;};
    void deleteProjectNames() { this->projectNames_ = nullptr;};
    inline const vector<string> & projectNames() const { DARABONBA_PTR_GET_CONST(projectNames_, vector<string>) };
    inline vector<string> projectNames() { DARABONBA_PTR_GET(projectNames_, vector<string>) };
    inline SumStorageMetricsByDateRequest& setProjectNames(const vector<string> & projectNames) { DARABONBA_PTR_SET_VALUE(projectNames_, projectNames) };
    inline SumStorageMetricsByDateRequest& setProjectNames(vector<string> && projectNames) { DARABONBA_PTR_SET_RVALUE(projectNames_, projectNames) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline SumStorageMetricsByDateRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline SumStorageMetricsByDateRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // statsType Field Functions 
    bool hasStatsType() const { return this->statsType_ != nullptr;};
    void deleteStatsType() { this->statsType_ = nullptr;};
    inline string statsType() const { DARABONBA_PTR_GET_DEFAULT(statsType_, "") };
    inline SumStorageMetricsByDateRequest& setStatsType(string statsType) { DARABONBA_PTR_SET_VALUE(statsType_, statsType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SumStorageMetricsByDateRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> endDate_ = nullptr;
    std::shared_ptr<vector<string>> projectNames_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<int64_t> startDate_ = nullptr;
    std::shared_ptr<string> statsType_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABATCHINGESTIONRESPONSEBODYDATABATCHINGESTION_HPP_
#define ALIBABACLOUD_MODELS_GETDATABATCHINGESTIONRESPONSEBODYDATABATCHINGESTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataBatchIngestionResponseBodyDataBatchIngestion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataBatchIngestionResponseBodyDataBatchIngestion& obj) { 
      DARABONBA_PTR_TO_JSON(ApsaraDataIngestionIds, apsaraDataIngestionIds_);
      DARABONBA_PTR_TO_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_TO_JSON(DataBatchIngestionEffectTime, dataBatchIngestionEffectTime_);
      DARABONBA_PTR_TO_JSON(DataBatchIngestionMode, dataBatchIngestionMode_);
      DARABONBA_PTR_TO_JSON(DataBatchIngestionSetTime, dataBatchIngestionSetTime_);
      DARABONBA_PTR_TO_JSON(DataBatchIngestionStatus, dataBatchIngestionStatus_);
      DARABONBA_PTR_TO_JSON(DataIngestions, dataIngestions_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(LogUserIds, logUserIds_);
      DARABONBA_PTR_TO_JSON(RecommendDataIngestionIds, recommendDataIngestionIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataBatchIngestionResponseBodyDataBatchIngestion& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsaraDataIngestionIds, apsaraDataIngestionIds_);
      DARABONBA_PTR_FROM_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_FROM_JSON(DataBatchIngestionEffectTime, dataBatchIngestionEffectTime_);
      DARABONBA_PTR_FROM_JSON(DataBatchIngestionMode, dataBatchIngestionMode_);
      DARABONBA_PTR_FROM_JSON(DataBatchIngestionSetTime, dataBatchIngestionSetTime_);
      DARABONBA_PTR_FROM_JSON(DataBatchIngestionStatus, dataBatchIngestionStatus_);
      DARABONBA_PTR_FROM_JSON(DataIngestions, dataIngestions_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(LogUserIds, logUserIds_);
      DARABONBA_PTR_FROM_JSON(RecommendDataIngestionIds, recommendDataIngestionIds_);
    };
    GetDataBatchIngestionResponseBodyDataBatchIngestion() = default ;
    GetDataBatchIngestionResponseBodyDataBatchIngestion(const GetDataBatchIngestionResponseBodyDataBatchIngestion &) = default ;
    GetDataBatchIngestionResponseBodyDataBatchIngestion(GetDataBatchIngestionResponseBodyDataBatchIngestion &&) = default ;
    GetDataBatchIngestionResponseBodyDataBatchIngestion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataBatchIngestionResponseBodyDataBatchIngestion() = default ;
    GetDataBatchIngestionResponseBodyDataBatchIngestion& operator=(const GetDataBatchIngestionResponseBodyDataBatchIngestion &) = default ;
    GetDataBatchIngestionResponseBodyDataBatchIngestion& operator=(GetDataBatchIngestionResponseBodyDataBatchIngestion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apsaraDataIngestionIds_ == nullptr
        && return this->autoScanNew_ == nullptr && return this->dataBatchIngestionEffectTime_ == nullptr && return this->dataBatchIngestionMode_ == nullptr && return this->dataBatchIngestionSetTime_ == nullptr && return this->dataBatchIngestionStatus_ == nullptr
        && return this->dataIngestions_ == nullptr && return this->dataSourceRecognizeEnabled_ == nullptr && return this->logUserIds_ == nullptr && return this->recommendDataIngestionIds_ == nullptr; };
    // apsaraDataIngestionIds Field Functions 
    bool hasApsaraDataIngestionIds() const { return this->apsaraDataIngestionIds_ != nullptr;};
    void deleteApsaraDataIngestionIds() { this->apsaraDataIngestionIds_ = nullptr;};
    inline const vector<string> & apsaraDataIngestionIds() const { DARABONBA_PTR_GET_CONST(apsaraDataIngestionIds_, vector<string>) };
    inline vector<string> apsaraDataIngestionIds() { DARABONBA_PTR_GET(apsaraDataIngestionIds_, vector<string>) };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setApsaraDataIngestionIds(const vector<string> & apsaraDataIngestionIds) { DARABONBA_PTR_SET_VALUE(apsaraDataIngestionIds_, apsaraDataIngestionIds) };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setApsaraDataIngestionIds(vector<string> && apsaraDataIngestionIds) { DARABONBA_PTR_SET_RVALUE(apsaraDataIngestionIds_, apsaraDataIngestionIds) };


    // autoScanNew Field Functions 
    bool hasAutoScanNew() const { return this->autoScanNew_ != nullptr;};
    void deleteAutoScanNew() { this->autoScanNew_ = nullptr;};
    inline string autoScanNew() const { DARABONBA_PTR_GET_DEFAULT(autoScanNew_, "") };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setAutoScanNew(string autoScanNew) { DARABONBA_PTR_SET_VALUE(autoScanNew_, autoScanNew) };


    // dataBatchIngestionEffectTime Field Functions 
    bool hasDataBatchIngestionEffectTime() const { return this->dataBatchIngestionEffectTime_ != nullptr;};
    void deleteDataBatchIngestionEffectTime() { this->dataBatchIngestionEffectTime_ = nullptr;};
    inline string dataBatchIngestionEffectTime() const { DARABONBA_PTR_GET_DEFAULT(dataBatchIngestionEffectTime_, "") };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setDataBatchIngestionEffectTime(string dataBatchIngestionEffectTime) { DARABONBA_PTR_SET_VALUE(dataBatchIngestionEffectTime_, dataBatchIngestionEffectTime) };


    // dataBatchIngestionMode Field Functions 
    bool hasDataBatchIngestionMode() const { return this->dataBatchIngestionMode_ != nullptr;};
    void deleteDataBatchIngestionMode() { this->dataBatchIngestionMode_ = nullptr;};
    inline string dataBatchIngestionMode() const { DARABONBA_PTR_GET_DEFAULT(dataBatchIngestionMode_, "") };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setDataBatchIngestionMode(string dataBatchIngestionMode) { DARABONBA_PTR_SET_VALUE(dataBatchIngestionMode_, dataBatchIngestionMode) };


    // dataBatchIngestionSetTime Field Functions 
    bool hasDataBatchIngestionSetTime() const { return this->dataBatchIngestionSetTime_ != nullptr;};
    void deleteDataBatchIngestionSetTime() { this->dataBatchIngestionSetTime_ = nullptr;};
    inline string dataBatchIngestionSetTime() const { DARABONBA_PTR_GET_DEFAULT(dataBatchIngestionSetTime_, "") };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setDataBatchIngestionSetTime(string dataBatchIngestionSetTime) { DARABONBA_PTR_SET_VALUE(dataBatchIngestionSetTime_, dataBatchIngestionSetTime) };


    // dataBatchIngestionStatus Field Functions 
    bool hasDataBatchIngestionStatus() const { return this->dataBatchIngestionStatus_ != nullptr;};
    void deleteDataBatchIngestionStatus() { this->dataBatchIngestionStatus_ = nullptr;};
    inline string dataBatchIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataBatchIngestionStatus_, "") };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setDataBatchIngestionStatus(string dataBatchIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataBatchIngestionStatus_, dataBatchIngestionStatus) };


    // dataIngestions Field Functions 
    bool hasDataIngestions() const { return this->dataIngestions_ != nullptr;};
    void deleteDataIngestions() { this->dataIngestions_ = nullptr;};
    inline const vector<Models::GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions> & dataIngestions() const { DARABONBA_PTR_GET_CONST(dataIngestions_, vector<Models::GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions>) };
    inline vector<Models::GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions> dataIngestions() { DARABONBA_PTR_GET(dataIngestions_, vector<Models::GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions>) };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setDataIngestions(const vector<Models::GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions> & dataIngestions) { DARABONBA_PTR_SET_VALUE(dataIngestions_, dataIngestions) };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setDataIngestions(vector<Models::GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions> && dataIngestions) { DARABONBA_PTR_SET_RVALUE(dataIngestions_, dataIngestions) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool dataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // logUserIds Field Functions 
    bool hasLogUserIds() const { return this->logUserIds_ != nullptr;};
    void deleteLogUserIds() { this->logUserIds_ = nullptr;};
    inline const vector<string> & logUserIds() const { DARABONBA_PTR_GET_CONST(logUserIds_, vector<string>) };
    inline vector<string> logUserIds() { DARABONBA_PTR_GET(logUserIds_, vector<string>) };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setLogUserIds(const vector<string> & logUserIds) { DARABONBA_PTR_SET_VALUE(logUserIds_, logUserIds) };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setLogUserIds(vector<string> && logUserIds) { DARABONBA_PTR_SET_RVALUE(logUserIds_, logUserIds) };


    // recommendDataIngestionIds Field Functions 
    bool hasRecommendDataIngestionIds() const { return this->recommendDataIngestionIds_ != nullptr;};
    void deleteRecommendDataIngestionIds() { this->recommendDataIngestionIds_ = nullptr;};
    inline const vector<string> & recommendDataIngestionIds() const { DARABONBA_PTR_GET_CONST(recommendDataIngestionIds_, vector<string>) };
    inline vector<string> recommendDataIngestionIds() { DARABONBA_PTR_GET(recommendDataIngestionIds_, vector<string>) };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setRecommendDataIngestionIds(const vector<string> & recommendDataIngestionIds) { DARABONBA_PTR_SET_VALUE(recommendDataIngestionIds_, recommendDataIngestionIds) };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion& setRecommendDataIngestionIds(vector<string> && recommendDataIngestionIds) { DARABONBA_PTR_SET_RVALUE(recommendDataIngestionIds_, recommendDataIngestionIds) };


  protected:
    std::shared_ptr<vector<string>> apsaraDataIngestionIds_ = nullptr;
    std::shared_ptr<string> autoScanNew_ = nullptr;
    std::shared_ptr<string> dataBatchIngestionEffectTime_ = nullptr;
    std::shared_ptr<string> dataBatchIngestionMode_ = nullptr;
    std::shared_ptr<string> dataBatchIngestionSetTime_ = nullptr;
    std::shared_ptr<string> dataBatchIngestionStatus_ = nullptr;
    std::shared_ptr<vector<Models::GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions>> dataIngestions_ = nullptr;
    std::shared_ptr<bool> dataSourceRecognizeEnabled_ = nullptr;
    std::shared_ptr<vector<string>> logUserIds_ = nullptr;
    std::shared_ptr<vector<string>> recommendDataIngestionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif

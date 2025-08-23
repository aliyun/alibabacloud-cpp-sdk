// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview.hpp>
#include <alibabacloud/models/GetEnterpriseVocAnalysisTaskResponseBodyDataUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetEnterpriseVocAnalysisTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnterpriseVocAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(statisticsOverview, statisticsOverview_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnterpriseVocAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(statisticsOverview, statisticsOverview_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    GetEnterpriseVocAnalysisTaskResponseBodyData() = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyData(const GetEnterpriseVocAnalysisTaskResponseBodyData &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyData(GetEnterpriseVocAnalysisTaskResponseBodyData &&) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnterpriseVocAnalysisTaskResponseBodyData() = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyData& operator=(const GetEnterpriseVocAnalysisTaskResponseBodyData &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyData& operator=(GetEnterpriseVocAnalysisTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->modelId_ != nullptr && this->modelName_ != nullptr && this->statisticsOverview_ != nullptr && this->status_ != nullptr && this->usage_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetEnterpriseVocAnalysisTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline GetEnterpriseVocAnalysisTaskResponseBodyData& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline GetEnterpriseVocAnalysisTaskResponseBodyData& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // statisticsOverview Field Functions 
    bool hasStatisticsOverview() const { return this->statisticsOverview_ != nullptr;};
    void deleteStatisticsOverview() { this->statisticsOverview_ = nullptr;};
    inline const Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview & statisticsOverview() const { DARABONBA_PTR_GET_CONST(statisticsOverview_, Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview) };
    inline Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview statisticsOverview() { DARABONBA_PTR_GET(statisticsOverview_, Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyData& setStatisticsOverview(const Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview & statisticsOverview) { DARABONBA_PTR_SET_VALUE(statisticsOverview_, statisticsOverview) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyData& setStatisticsOverview(Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview && statisticsOverview) { DARABONBA_PTR_SET_RVALUE(statisticsOverview_, statisticsOverview) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEnterpriseVocAnalysisTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GetEnterpriseVocAnalysisTaskResponseBodyDataUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GetEnterpriseVocAnalysisTaskResponseBodyDataUsage) };
    inline Models::GetEnterpriseVocAnalysisTaskResponseBodyDataUsage usage() { DARABONBA_PTR_GET(usage_, Models::GetEnterpriseVocAnalysisTaskResponseBodyDataUsage) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyData& setUsage(const Models::GetEnterpriseVocAnalysisTaskResponseBodyDataUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyData& setUsage(Models::GetEnterpriseVocAnalysisTaskResponseBodyDataUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview> statisticsOverview_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::GetEnterpriseVocAnalysisTaskResponseBodyDataUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif

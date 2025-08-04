// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMSOURCETOPICANALYSISTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMSOURCETOPICANALYSISTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetCustomSourceTopicAnalysisTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomSourceTopicAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_TO_JSON(ClusterResults, clusterResults_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(MaxClusteredTopicNewsSize, maxClusteredTopicNewsSize_);
      DARABONBA_PTR_TO_JSON(ParsedNewsSize, parsedNewsSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(rt, rt_);
      DARABONBA_PTR_TO_JSON(usages, usages_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomSourceTopicAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_FROM_JSON(ClusterResults, clusterResults_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(MaxClusteredTopicNewsSize, maxClusteredTopicNewsSize_);
      DARABONBA_PTR_FROM_JSON(ParsedNewsSize, parsedNewsSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(rt, rt_);
      DARABONBA_PTR_FROM_JSON(usages, usages_);
    };
    GetCustomSourceTopicAnalysisTaskResponseBodyData() = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyData(const GetCustomSourceTopicAnalysisTaskResponseBodyData &) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyData(GetCustomSourceTopicAnalysisTaskResponseBodyData &&) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomSourceTopicAnalysisTaskResponseBodyData() = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyData& operator=(const GetCustomSourceTopicAnalysisTaskResponseBodyData &) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyData& operator=(GetCustomSourceTopicAnalysisTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterCount_ != nullptr
        && this->clusterResults_ != nullptr && this->errorMessage_ != nullptr && this->maxClusteredTopicNewsSize_ != nullptr && this->parsedNewsSize_ != nullptr && this->status_ != nullptr
        && this->rt_ != nullptr && this->usages_ != nullptr; };
    // clusterCount Field Functions 
    bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
    void deleteClusterCount() { this->clusterCount_ = nullptr;};
    inline int32_t clusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyData& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


    // clusterResults Field Functions 
    bool hasClusterResults() const { return this->clusterResults_ != nullptr;};
    void deleteClusterResults() { this->clusterResults_ = nullptr;};
    inline const vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults> & clusterResults() const { DARABONBA_PTR_GET_CONST(clusterResults_, vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults>) };
    inline vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults> clusterResults() { DARABONBA_PTR_GET(clusterResults_, vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults>) };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyData& setClusterResults(const vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults> & clusterResults) { DARABONBA_PTR_SET_VALUE(clusterResults_, clusterResults) };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyData& setClusterResults(vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults> && clusterResults) { DARABONBA_PTR_SET_RVALUE(clusterResults_, clusterResults) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // maxClusteredTopicNewsSize Field Functions 
    bool hasMaxClusteredTopicNewsSize() const { return this->maxClusteredTopicNewsSize_ != nullptr;};
    void deleteMaxClusteredTopicNewsSize() { this->maxClusteredTopicNewsSize_ = nullptr;};
    inline int32_t maxClusteredTopicNewsSize() const { DARABONBA_PTR_GET_DEFAULT(maxClusteredTopicNewsSize_, 0) };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyData& setMaxClusteredTopicNewsSize(int32_t maxClusteredTopicNewsSize) { DARABONBA_PTR_SET_VALUE(maxClusteredTopicNewsSize_, maxClusteredTopicNewsSize) };


    // parsedNewsSize Field Functions 
    bool hasParsedNewsSize() const { return this->parsedNewsSize_ != nullptr;};
    void deleteParsedNewsSize() { this->parsedNewsSize_ = nullptr;};
    inline int32_t parsedNewsSize() const { DARABONBA_PTR_GET_DEFAULT(parsedNewsSize_, 0) };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyData& setParsedNewsSize(int32_t parsedNewsSize) { DARABONBA_PTR_SET_VALUE(parsedNewsSize_, parsedNewsSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // rt Field Functions 
    bool hasRt() const { return this->rt_ != nullptr;};
    void deleteRt() { this->rt_ = nullptr;};
    inline int64_t rt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0L) };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyData& setRt(int64_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


    // usages Field Functions 
    bool hasUsages() const { return this->usages_ != nullptr;};
    void deleteUsages() { this->usages_ = nullptr;};
    inline const map<string, int64_t> & usages() const { DARABONBA_PTR_GET_CONST(usages_, map<string, int64_t>) };
    inline map<string, int64_t> usages() { DARABONBA_PTR_GET(usages_, map<string, int64_t>) };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyData& setUsages(const map<string, int64_t> & usages) { DARABONBA_PTR_SET_VALUE(usages_, usages) };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyData& setUsages(map<string, int64_t> && usages) { DARABONBA_PTR_SET_RVALUE(usages_, usages) };


  protected:
    std::shared_ptr<int32_t> clusterCount_ = nullptr;
    std::shared_ptr<vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults>> clusterResults_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<int32_t> maxClusteredTopicNewsSize_ = nullptr;
    std::shared_ptr<int32_t> parsedNewsSize_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> rt_ = nullptr;
    std::shared_ptr<map<string, int64_t>> usages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

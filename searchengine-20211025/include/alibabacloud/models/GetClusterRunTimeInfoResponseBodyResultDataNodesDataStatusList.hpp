// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULTDATANODESDATASTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULTDATANODESDATASTATUSLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(advanceConfigInfo, advanceConfigInfo_);
      DARABONBA_PTR_TO_JSON(deployFailedWorker, deployFailedWorker_);
      DARABONBA_PTR_TO_JSON(docSize, docSize_);
      DARABONBA_PTR_TO_JSON(donePercent, donePercent_);
      DARABONBA_PTR_TO_JSON(doneSize, doneSize_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(fullUpdateTime, fullUpdateTime_);
      DARABONBA_PTR_TO_JSON(fullVersion, fullVersion_);
      DARABONBA_PTR_TO_JSON(incUpdateTime, incUpdateTime_);
      DARABONBA_PTR_TO_JSON(incVersion, incVersion_);
      DARABONBA_PTR_TO_JSON(indexConfigInfo, indexConfigInfo_);
      DARABONBA_PTR_TO_JSON(indexSize, indexSize_);
      DARABONBA_PTR_TO_JSON(lackDiskWorker, lackDiskWorker_);
      DARABONBA_PTR_TO_JSON(lackMemWorker, lackMemWorker_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(advanceConfigInfo, advanceConfigInfo_);
      DARABONBA_PTR_FROM_JSON(deployFailedWorker, deployFailedWorker_);
      DARABONBA_PTR_FROM_JSON(docSize, docSize_);
      DARABONBA_PTR_FROM_JSON(donePercent, donePercent_);
      DARABONBA_PTR_FROM_JSON(doneSize, doneSize_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(fullUpdateTime, fullUpdateTime_);
      DARABONBA_PTR_FROM_JSON(fullVersion, fullVersion_);
      DARABONBA_PTR_FROM_JSON(incUpdateTime, incUpdateTime_);
      DARABONBA_PTR_FROM_JSON(incVersion, incVersion_);
      DARABONBA_PTR_FROM_JSON(indexConfigInfo, indexConfigInfo_);
      DARABONBA_PTR_FROM_JSON(indexSize, indexSize_);
      DARABONBA_PTR_FROM_JSON(lackDiskWorker, lackDiskWorker_);
      DARABONBA_PTR_FROM_JSON(lackMemWorker, lackMemWorker_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
    };
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList() = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList(const GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList &) = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList(GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList &&) = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList() = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& operator=(const GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList &) = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& operator=(GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advanceConfigInfo_ != nullptr
        && this->deployFailedWorker_ != nullptr && this->docSize_ != nullptr && this->donePercent_ != nullptr && this->doneSize_ != nullptr && this->errorMsg_ != nullptr
        && this->fullUpdateTime_ != nullptr && this->fullVersion_ != nullptr && this->incUpdateTime_ != nullptr && this->incVersion_ != nullptr && this->indexConfigInfo_ != nullptr
        && this->indexSize_ != nullptr && this->lackDiskWorker_ != nullptr && this->lackMemWorker_ != nullptr && this->name_ != nullptr && this->totalSize_ != nullptr; };
    // advanceConfigInfo Field Functions 
    bool hasAdvanceConfigInfo() const { return this->advanceConfigInfo_ != nullptr;};
    void deleteAdvanceConfigInfo() { this->advanceConfigInfo_ = nullptr;};
    inline const Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo & advanceConfigInfo() const { DARABONBA_PTR_GET_CONST(advanceConfigInfo_, Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo) };
    inline Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo advanceConfigInfo() { DARABONBA_PTR_GET(advanceConfigInfo_, Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setAdvanceConfigInfo(const Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo & advanceConfigInfo) { DARABONBA_PTR_SET_VALUE(advanceConfigInfo_, advanceConfigInfo) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setAdvanceConfigInfo(Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo && advanceConfigInfo) { DARABONBA_PTR_SET_RVALUE(advanceConfigInfo_, advanceConfigInfo) };


    // deployFailedWorker Field Functions 
    bool hasDeployFailedWorker() const { return this->deployFailedWorker_ != nullptr;};
    void deleteDeployFailedWorker() { this->deployFailedWorker_ = nullptr;};
    inline const vector<string> & deployFailedWorker() const { DARABONBA_PTR_GET_CONST(deployFailedWorker_, vector<string>) };
    inline vector<string> deployFailedWorker() { DARABONBA_PTR_GET(deployFailedWorker_, vector<string>) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setDeployFailedWorker(const vector<string> & deployFailedWorker) { DARABONBA_PTR_SET_VALUE(deployFailedWorker_, deployFailedWorker) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setDeployFailedWorker(vector<string> && deployFailedWorker) { DARABONBA_PTR_SET_RVALUE(deployFailedWorker_, deployFailedWorker) };


    // docSize Field Functions 
    bool hasDocSize() const { return this->docSize_ != nullptr;};
    void deleteDocSize() { this->docSize_ = nullptr;};
    inline int32_t docSize() const { DARABONBA_PTR_GET_DEFAULT(docSize_, 0) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setDocSize(int32_t docSize) { DARABONBA_PTR_SET_VALUE(docSize_, docSize) };


    // donePercent Field Functions 
    bool hasDonePercent() const { return this->donePercent_ != nullptr;};
    void deleteDonePercent() { this->donePercent_ = nullptr;};
    inline int32_t donePercent() const { DARABONBA_PTR_GET_DEFAULT(donePercent_, 0) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setDonePercent(int32_t donePercent) { DARABONBA_PTR_SET_VALUE(donePercent_, donePercent) };


    // doneSize Field Functions 
    bool hasDoneSize() const { return this->doneSize_ != nullptr;};
    void deleteDoneSize() { this->doneSize_ = nullptr;};
    inline int32_t doneSize() const { DARABONBA_PTR_GET_DEFAULT(doneSize_, 0) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setDoneSize(int32_t doneSize) { DARABONBA_PTR_SET_VALUE(doneSize_, doneSize) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // fullUpdateTime Field Functions 
    bool hasFullUpdateTime() const { return this->fullUpdateTime_ != nullptr;};
    void deleteFullUpdateTime() { this->fullUpdateTime_ = nullptr;};
    inline string fullUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(fullUpdateTime_, "") };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setFullUpdateTime(string fullUpdateTime) { DARABONBA_PTR_SET_VALUE(fullUpdateTime_, fullUpdateTime) };


    // fullVersion Field Functions 
    bool hasFullVersion() const { return this->fullVersion_ != nullptr;};
    void deleteFullVersion() { this->fullVersion_ = nullptr;};
    inline int64_t fullVersion() const { DARABONBA_PTR_GET_DEFAULT(fullVersion_, 0L) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setFullVersion(int64_t fullVersion) { DARABONBA_PTR_SET_VALUE(fullVersion_, fullVersion) };


    // incUpdateTime Field Functions 
    bool hasIncUpdateTime() const { return this->incUpdateTime_ != nullptr;};
    void deleteIncUpdateTime() { this->incUpdateTime_ = nullptr;};
    inline string incUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(incUpdateTime_, "") };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setIncUpdateTime(string incUpdateTime) { DARABONBA_PTR_SET_VALUE(incUpdateTime_, incUpdateTime) };


    // incVersion Field Functions 
    bool hasIncVersion() const { return this->incVersion_ != nullptr;};
    void deleteIncVersion() { this->incVersion_ = nullptr;};
    inline int64_t incVersion() const { DARABONBA_PTR_GET_DEFAULT(incVersion_, 0L) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setIncVersion(int64_t incVersion) { DARABONBA_PTR_SET_VALUE(incVersion_, incVersion) };


    // indexConfigInfo Field Functions 
    bool hasIndexConfigInfo() const { return this->indexConfigInfo_ != nullptr;};
    void deleteIndexConfigInfo() { this->indexConfigInfo_ = nullptr;};
    inline const Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo & indexConfigInfo() const { DARABONBA_PTR_GET_CONST(indexConfigInfo_, Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo) };
    inline Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo indexConfigInfo() { DARABONBA_PTR_GET(indexConfigInfo_, Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setIndexConfigInfo(const Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo & indexConfigInfo) { DARABONBA_PTR_SET_VALUE(indexConfigInfo_, indexConfigInfo) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setIndexConfigInfo(Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo && indexConfigInfo) { DARABONBA_PTR_SET_RVALUE(indexConfigInfo_, indexConfigInfo) };


    // indexSize Field Functions 
    bool hasIndexSize() const { return this->indexSize_ != nullptr;};
    void deleteIndexSize() { this->indexSize_ = nullptr;};
    inline int64_t indexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


    // lackDiskWorker Field Functions 
    bool hasLackDiskWorker() const { return this->lackDiskWorker_ != nullptr;};
    void deleteLackDiskWorker() { this->lackDiskWorker_ = nullptr;};
    inline const vector<string> & lackDiskWorker() const { DARABONBA_PTR_GET_CONST(lackDiskWorker_, vector<string>) };
    inline vector<string> lackDiskWorker() { DARABONBA_PTR_GET(lackDiskWorker_, vector<string>) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setLackDiskWorker(const vector<string> & lackDiskWorker) { DARABONBA_PTR_SET_VALUE(lackDiskWorker_, lackDiskWorker) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setLackDiskWorker(vector<string> && lackDiskWorker) { DARABONBA_PTR_SET_RVALUE(lackDiskWorker_, lackDiskWorker) };


    // lackMemWorker Field Functions 
    bool hasLackMemWorker() const { return this->lackMemWorker_ != nullptr;};
    void deleteLackMemWorker() { this->lackMemWorker_ = nullptr;};
    inline const vector<string> & lackMemWorker() const { DARABONBA_PTR_GET_CONST(lackMemWorker_, vector<string>) };
    inline vector<string> lackMemWorker() { DARABONBA_PTR_GET(lackMemWorker_, vector<string>) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setLackMemWorker(const vector<string> & lackMemWorker) { DARABONBA_PTR_SET_VALUE(lackMemWorker_, lackMemWorker) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setLackMemWorker(vector<string> && lackMemWorker) { DARABONBA_PTR_SET_RVALUE(lackMemWorker_, lackMemWorker) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The information about the advanced configuration.
    std::shared_ptr<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo> advanceConfigInfo_ = nullptr;
    // The name of the worker that failed due to a deployment failure.
    std::shared_ptr<vector<string>> deployFailedWorker_ = nullptr;
    // The storage capacity. Unit: GB.
    std::shared_ptr<int32_t> docSize_ = nullptr;
    // The configuration progress. Unit: percentage.
    std::shared_ptr<int32_t> donePercent_ = nullptr;
    // The number of processed QRS workers in the cluster.
    std::shared_ptr<int32_t> doneSize_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The time when full data in the index was last updated.
    std::shared_ptr<string> fullUpdateTime_ = nullptr;
    // The time when the full index version was generated.
    std::shared_ptr<int64_t> fullVersion_ = nullptr;
    // The time when incremental data in the index was last updated.
    std::shared_ptr<string> incUpdateTime_ = nullptr;
    // The time when the incremental index version was generated.
    std::shared_ptr<int64_t> incVersion_ = nullptr;
    // The information about the index configuration.
    std::shared_ptr<Models::GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo> indexConfigInfo_ = nullptr;
    // The index size.
    std::shared_ptr<int64_t> indexSize_ = nullptr;
    // The name of the worker that failed due to insufficient disks.
    std::shared_ptr<vector<string>> lackDiskWorker_ = nullptr;
    // The name of the worker that failed due to insufficient memory.
    std::shared_ptr<vector<string>> lackMemWorker_ = nullptr;
    // The name of the QRS worker.
    std::shared_ptr<string> name_ = nullptr;
    // The total number of QRS workers in the cluster.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTCOMPUTETASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SELECTCOMPUTETASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SelectComputeTaskResponseBodyDataExportOssFileList.hpp>
#include <alibabacloud/models/SelectComputeTaskResponseBodyDataTaskResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SelectComputeTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectComputeTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(bcId, bcId_);
      DARABONBA_PTR_TO_JSON(computeOssFileTitle, computeOssFileTitle_);
      DARABONBA_PTR_TO_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(exportOssFileList, exportOssFileList_);
      DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(fileNum, fileNum_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(remarks, remarks_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskResultList, taskResultList_);
    };
    friend void from_json(const Darabonba::Json& j, SelectComputeTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(bcId, bcId_);
      DARABONBA_PTR_FROM_JSON(computeOssFileTitle, computeOssFileTitle_);
      DARABONBA_PTR_FROM_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(exportOssFileList, exportOssFileList_);
      DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(fileNum, fileNum_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskResultList, taskResultList_);
    };
    SelectComputeTaskResponseBodyData() = default ;
    SelectComputeTaskResponseBodyData(const SelectComputeTaskResponseBodyData &) = default ;
    SelectComputeTaskResponseBodyData(SelectComputeTaskResponseBodyData &&) = default ;
    SelectComputeTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectComputeTaskResponseBodyData() = default ;
    SelectComputeTaskResponseBodyData& operator=(const SelectComputeTaskResponseBodyData &) = default ;
    SelectComputeTaskResponseBodyData& operator=(SelectComputeTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->bcId_ != nullptr && this->computeOssFileTitle_ != nullptr && this->datasetIds_ != nullptr && this->exportOssFileList_ != nullptr && this->extInfo_ != nullptr
        && this->fileNum_ != nullptr && this->name_ != nullptr && this->remarks_ != nullptr && this->status_ != nullptr && this->taskResultList_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline SelectComputeTaskResponseBodyData& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bcId Field Functions 
    bool hasBcId() const { return this->bcId_ != nullptr;};
    void deleteBcId() { this->bcId_ = nullptr;};
    inline int64_t bcId() const { DARABONBA_PTR_GET_DEFAULT(bcId_, 0L) };
    inline SelectComputeTaskResponseBodyData& setBcId(int64_t bcId) { DARABONBA_PTR_SET_VALUE(bcId_, bcId) };


    // computeOssFileTitle Field Functions 
    bool hasComputeOssFileTitle() const { return this->computeOssFileTitle_ != nullptr;};
    void deleteComputeOssFileTitle() { this->computeOssFileTitle_ = nullptr;};
    inline string computeOssFileTitle() const { DARABONBA_PTR_GET_DEFAULT(computeOssFileTitle_, "") };
    inline SelectComputeTaskResponseBodyData& setComputeOssFileTitle(string computeOssFileTitle) { DARABONBA_PTR_SET_VALUE(computeOssFileTitle_, computeOssFileTitle) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline string datasetIds() const { DARABONBA_PTR_GET_DEFAULT(datasetIds_, "") };
    inline SelectComputeTaskResponseBodyData& setDatasetIds(string datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };


    // exportOssFileList Field Functions 
    bool hasExportOssFileList() const { return this->exportOssFileList_ != nullptr;};
    void deleteExportOssFileList() { this->exportOssFileList_ = nullptr;};
    inline const vector<Models::SelectComputeTaskResponseBodyDataExportOssFileList> & exportOssFileList() const { DARABONBA_PTR_GET_CONST(exportOssFileList_, vector<Models::SelectComputeTaskResponseBodyDataExportOssFileList>) };
    inline vector<Models::SelectComputeTaskResponseBodyDataExportOssFileList> exportOssFileList() { DARABONBA_PTR_GET(exportOssFileList_, vector<Models::SelectComputeTaskResponseBodyDataExportOssFileList>) };
    inline SelectComputeTaskResponseBodyData& setExportOssFileList(const vector<Models::SelectComputeTaskResponseBodyDataExportOssFileList> & exportOssFileList) { DARABONBA_PTR_SET_VALUE(exportOssFileList_, exportOssFileList) };
    inline SelectComputeTaskResponseBodyData& setExportOssFileList(vector<Models::SelectComputeTaskResponseBodyDataExportOssFileList> && exportOssFileList) { DARABONBA_PTR_SET_RVALUE(exportOssFileList_, exportOssFileList) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string extInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline SelectComputeTaskResponseBodyData& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    // fileNum Field Functions 
    bool hasFileNum() const { return this->fileNum_ != nullptr;};
    void deleteFileNum() { this->fileNum_ = nullptr;};
    inline int64_t fileNum() const { DARABONBA_PTR_GET_DEFAULT(fileNum_, 0L) };
    inline SelectComputeTaskResponseBodyData& setFileNum(int64_t fileNum) { DARABONBA_PTR_SET_VALUE(fileNum_, fileNum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SelectComputeTaskResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string remarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline SelectComputeTaskResponseBodyData& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SelectComputeTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskResultList Field Functions 
    bool hasTaskResultList() const { return this->taskResultList_ != nullptr;};
    void deleteTaskResultList() { this->taskResultList_ = nullptr;};
    inline const vector<Models::SelectComputeTaskResponseBodyDataTaskResultList> & taskResultList() const { DARABONBA_PTR_GET_CONST(taskResultList_, vector<Models::SelectComputeTaskResponseBodyDataTaskResultList>) };
    inline vector<Models::SelectComputeTaskResponseBodyDataTaskResultList> taskResultList() { DARABONBA_PTR_GET(taskResultList_, vector<Models::SelectComputeTaskResponseBodyDataTaskResultList>) };
    inline SelectComputeTaskResponseBodyData& setTaskResultList(const vector<Models::SelectComputeTaskResponseBodyDataTaskResultList> & taskResultList) { DARABONBA_PTR_SET_VALUE(taskResultList_, taskResultList) };
    inline SelectComputeTaskResponseBodyData& setTaskResultList(vector<Models::SelectComputeTaskResponseBodyDataTaskResultList> && taskResultList) { DARABONBA_PTR_SET_RVALUE(taskResultList_, taskResultList) };


  protected:
    std::shared_ptr<int64_t> appId_ = nullptr;
    std::shared_ptr<int64_t> bcId_ = nullptr;
    std::shared_ptr<string> computeOssFileTitle_ = nullptr;
    std::shared_ptr<string> datasetIds_ = nullptr;
    std::shared_ptr<vector<Models::SelectComputeTaskResponseBodyDataExportOssFileList>> exportOssFileList_ = nullptr;
    std::shared_ptr<string> extInfo_ = nullptr;
    std::shared_ptr<int64_t> fileNum_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> remarks_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::SelectComputeTaskResponseBodyDataTaskResultList>> taskResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTCOMPUTETASK2RESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SELECTCOMPUTETASK2RESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SelectComputeTask2ResponseBodyDataExportOssFileList.hpp>
#include <alibabacloud/models/SelectComputeTask2ResponseBodyDataTaskResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SelectComputeTask2ResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectComputeTask2ResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(bcId, bcId_);
      DARABONBA_PTR_TO_JSON(computeOssFileTitle, computeOssFileTitle_);
      DARABONBA_PTR_TO_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(exportOssFileList, exportOssFileList_);
      DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(fileNum, fileNum_);
      DARABONBA_PTR_TO_JSON(hint, hint_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(remarks, remarks_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskResultList, taskResultList_);
    };
    friend void from_json(const Darabonba::Json& j, SelectComputeTask2ResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(bcId, bcId_);
      DARABONBA_PTR_FROM_JSON(computeOssFileTitle, computeOssFileTitle_);
      DARABONBA_PTR_FROM_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(exportOssFileList, exportOssFileList_);
      DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(fileNum, fileNum_);
      DARABONBA_PTR_FROM_JSON(hint, hint_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskResultList, taskResultList_);
    };
    SelectComputeTask2ResponseBodyData() = default ;
    SelectComputeTask2ResponseBodyData(const SelectComputeTask2ResponseBodyData &) = default ;
    SelectComputeTask2ResponseBodyData(SelectComputeTask2ResponseBodyData &&) = default ;
    SelectComputeTask2ResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectComputeTask2ResponseBodyData() = default ;
    SelectComputeTask2ResponseBodyData& operator=(const SelectComputeTask2ResponseBodyData &) = default ;
    SelectComputeTask2ResponseBodyData& operator=(SelectComputeTask2ResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->bcId_ != nullptr && this->computeOssFileTitle_ != nullptr && this->datasetIds_ != nullptr && this->exportOssFileList_ != nullptr && this->extInfo_ != nullptr
        && this->fileNum_ != nullptr && this->hint_ != nullptr && this->name_ != nullptr && this->remarks_ != nullptr && this->status_ != nullptr
        && this->taskResultList_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline SelectComputeTask2ResponseBodyData& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bcId Field Functions 
    bool hasBcId() const { return this->bcId_ != nullptr;};
    void deleteBcId() { this->bcId_ = nullptr;};
    inline int64_t bcId() const { DARABONBA_PTR_GET_DEFAULT(bcId_, 0L) };
    inline SelectComputeTask2ResponseBodyData& setBcId(int64_t bcId) { DARABONBA_PTR_SET_VALUE(bcId_, bcId) };


    // computeOssFileTitle Field Functions 
    bool hasComputeOssFileTitle() const { return this->computeOssFileTitle_ != nullptr;};
    void deleteComputeOssFileTitle() { this->computeOssFileTitle_ = nullptr;};
    inline string computeOssFileTitle() const { DARABONBA_PTR_GET_DEFAULT(computeOssFileTitle_, "") };
    inline SelectComputeTask2ResponseBodyData& setComputeOssFileTitle(string computeOssFileTitle) { DARABONBA_PTR_SET_VALUE(computeOssFileTitle_, computeOssFileTitle) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline string datasetIds() const { DARABONBA_PTR_GET_DEFAULT(datasetIds_, "") };
    inline SelectComputeTask2ResponseBodyData& setDatasetIds(string datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };


    // exportOssFileList Field Functions 
    bool hasExportOssFileList() const { return this->exportOssFileList_ != nullptr;};
    void deleteExportOssFileList() { this->exportOssFileList_ = nullptr;};
    inline const vector<Models::SelectComputeTask2ResponseBodyDataExportOssFileList> & exportOssFileList() const { DARABONBA_PTR_GET_CONST(exportOssFileList_, vector<Models::SelectComputeTask2ResponseBodyDataExportOssFileList>) };
    inline vector<Models::SelectComputeTask2ResponseBodyDataExportOssFileList> exportOssFileList() { DARABONBA_PTR_GET(exportOssFileList_, vector<Models::SelectComputeTask2ResponseBodyDataExportOssFileList>) };
    inline SelectComputeTask2ResponseBodyData& setExportOssFileList(const vector<Models::SelectComputeTask2ResponseBodyDataExportOssFileList> & exportOssFileList) { DARABONBA_PTR_SET_VALUE(exportOssFileList_, exportOssFileList) };
    inline SelectComputeTask2ResponseBodyData& setExportOssFileList(vector<Models::SelectComputeTask2ResponseBodyDataExportOssFileList> && exportOssFileList) { DARABONBA_PTR_SET_RVALUE(exportOssFileList_, exportOssFileList) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string extInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline SelectComputeTask2ResponseBodyData& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    // fileNum Field Functions 
    bool hasFileNum() const { return this->fileNum_ != nullptr;};
    void deleteFileNum() { this->fileNum_ = nullptr;};
    inline int64_t fileNum() const { DARABONBA_PTR_GET_DEFAULT(fileNum_, 0L) };
    inline SelectComputeTask2ResponseBodyData& setFileNum(int64_t fileNum) { DARABONBA_PTR_SET_VALUE(fileNum_, fileNum) };


    // hint Field Functions 
    bool hasHint() const { return this->hint_ != nullptr;};
    void deleteHint() { this->hint_ = nullptr;};
    inline string hint() const { DARABONBA_PTR_GET_DEFAULT(hint_, "") };
    inline SelectComputeTask2ResponseBodyData& setHint(string hint) { DARABONBA_PTR_SET_VALUE(hint_, hint) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SelectComputeTask2ResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string remarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline SelectComputeTask2ResponseBodyData& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SelectComputeTask2ResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskResultList Field Functions 
    bool hasTaskResultList() const { return this->taskResultList_ != nullptr;};
    void deleteTaskResultList() { this->taskResultList_ = nullptr;};
    inline const vector<Models::SelectComputeTask2ResponseBodyDataTaskResultList> & taskResultList() const { DARABONBA_PTR_GET_CONST(taskResultList_, vector<Models::SelectComputeTask2ResponseBodyDataTaskResultList>) };
    inline vector<Models::SelectComputeTask2ResponseBodyDataTaskResultList> taskResultList() { DARABONBA_PTR_GET(taskResultList_, vector<Models::SelectComputeTask2ResponseBodyDataTaskResultList>) };
    inline SelectComputeTask2ResponseBodyData& setTaskResultList(const vector<Models::SelectComputeTask2ResponseBodyDataTaskResultList> & taskResultList) { DARABONBA_PTR_SET_VALUE(taskResultList_, taskResultList) };
    inline SelectComputeTask2ResponseBodyData& setTaskResultList(vector<Models::SelectComputeTask2ResponseBodyDataTaskResultList> && taskResultList) { DARABONBA_PTR_SET_RVALUE(taskResultList_, taskResultList) };


  protected:
    std::shared_ptr<int64_t> appId_ = nullptr;
    std::shared_ptr<int64_t> bcId_ = nullptr;
    std::shared_ptr<string> computeOssFileTitle_ = nullptr;
    std::shared_ptr<string> datasetIds_ = nullptr;
    std::shared_ptr<vector<Models::SelectComputeTask2ResponseBodyDataExportOssFileList>> exportOssFileList_ = nullptr;
    std::shared_ptr<string> extInfo_ = nullptr;
    std::shared_ptr<int64_t> fileNum_ = nullptr;
    std::shared_ptr<string> hint_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> remarks_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::SelectComputeTask2ResponseBodyDataTaskResultList>> taskResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif

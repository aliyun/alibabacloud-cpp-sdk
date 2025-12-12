// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMININGTASKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMININGTASKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMiningTaskResultResponseBodyDataFilePathList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetMiningTaskResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMiningTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(FilePathList, filePathList_);
      DARABONBA_PTR_TO_JSON(FilePathMd, filePathMd_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetMiningTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(FilePathList, filePathList_);
      DARABONBA_PTR_FROM_JSON(FilePathMd, filePathMd_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetMiningTaskResultResponseBodyData() = default ;
    GetMiningTaskResultResponseBodyData(const GetMiningTaskResultResponseBodyData &) = default ;
    GetMiningTaskResultResponseBodyData(GetMiningTaskResultResponseBodyData &&) = default ;
    GetMiningTaskResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMiningTaskResultResponseBodyData() = default ;
    GetMiningTaskResultResponseBodyData& operator=(const GetMiningTaskResultResponseBodyData &) = default ;
    GetMiningTaskResultResponseBodyData& operator=(GetMiningTaskResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filePath_ == nullptr
        && return this->filePathList_ == nullptr && return this->filePathMd_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline GetMiningTaskResultResponseBodyData& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // filePathList Field Functions 
    bool hasFilePathList() const { return this->filePathList_ != nullptr;};
    void deleteFilePathList() { this->filePathList_ = nullptr;};
    inline const vector<Models::GetMiningTaskResultResponseBodyDataFilePathList> & filePathList() const { DARABONBA_PTR_GET_CONST(filePathList_, vector<Models::GetMiningTaskResultResponseBodyDataFilePathList>) };
    inline vector<Models::GetMiningTaskResultResponseBodyDataFilePathList> filePathList() { DARABONBA_PTR_GET(filePathList_, vector<Models::GetMiningTaskResultResponseBodyDataFilePathList>) };
    inline GetMiningTaskResultResponseBodyData& setFilePathList(const vector<Models::GetMiningTaskResultResponseBodyDataFilePathList> & filePathList) { DARABONBA_PTR_SET_VALUE(filePathList_, filePathList) };
    inline GetMiningTaskResultResponseBodyData& setFilePathList(vector<Models::GetMiningTaskResultResponseBodyDataFilePathList> && filePathList) { DARABONBA_PTR_SET_RVALUE(filePathList_, filePathList) };


    // filePathMd Field Functions 
    bool hasFilePathMd() const { return this->filePathMd_ != nullptr;};
    void deleteFilePathMd() { this->filePathMd_ = nullptr;};
    inline string filePathMd() const { DARABONBA_PTR_GET_DEFAULT(filePathMd_, "") };
    inline GetMiningTaskResultResponseBodyData& setFilePathMd(string filePathMd) { DARABONBA_PTR_SET_VALUE(filePathMd_, filePathMd) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetMiningTaskResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetMiningTaskResultResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<vector<Models::GetMiningTaskResultResponseBodyDataFilePathList>> filePathList_ = nullptr;
    std::shared_ptr<string> filePathMd_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif

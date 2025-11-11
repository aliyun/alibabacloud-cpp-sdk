// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHEXPORTWORDTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_FETCHEXPORTWORDTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class FetchExportWordTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchExportWordTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(TaskStats, taskStats_);
    };
    friend void from_json(const Darabonba::Json& j, FetchExportWordTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(TaskStats, taskStats_);
    };
    FetchExportWordTaskResponseBodyData() = default ;
    FetchExportWordTaskResponseBodyData(const FetchExportWordTaskResponseBodyData &) = default ;
    FetchExportWordTaskResponseBodyData(FetchExportWordTaskResponseBodyData &&) = default ;
    FetchExportWordTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchExportWordTaskResponseBodyData() = default ;
    FetchExportWordTaskResponseBodyData& operator=(const FetchExportWordTaskResponseBodyData &) = default ;
    FetchExportWordTaskResponseBodyData& operator=(FetchExportWordTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileUrl_ == nullptr
        && return this->taskStats_ == nullptr; };
    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline FetchExportWordTaskResponseBodyData& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // taskStats Field Functions 
    bool hasTaskStats() const { return this->taskStats_ != nullptr;};
    void deleteTaskStats() { this->taskStats_ = nullptr;};
    inline string taskStats() const { DARABONBA_PTR_GET_DEFAULT(taskStats_, "") };
    inline FetchExportWordTaskResponseBodyData& setTaskStats(string taskStats) { DARABONBA_PTR_SET_VALUE(taskStats_, taskStats) };


  protected:
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> taskStats_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

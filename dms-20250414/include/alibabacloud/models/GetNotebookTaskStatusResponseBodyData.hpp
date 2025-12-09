// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNOTEBOOKTASKSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNOTEBOOKTASKSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetNotebookTaskStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNotebookTaskStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NotebookSchedulePreviewUrl, notebookSchedulePreviewUrl_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetNotebookTaskStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NotebookSchedulePreviewUrl, notebookSchedulePreviewUrl_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetNotebookTaskStatusResponseBodyData() = default ;
    GetNotebookTaskStatusResponseBodyData(const GetNotebookTaskStatusResponseBodyData &) = default ;
    GetNotebookTaskStatusResponseBodyData(GetNotebookTaskStatusResponseBodyData &&) = default ;
    GetNotebookTaskStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNotebookTaskStatusResponseBodyData() = default ;
    GetNotebookTaskStatusResponseBodyData& operator=(const GetNotebookTaskStatusResponseBodyData &) = default ;
    GetNotebookTaskStatusResponseBodyData& operator=(GetNotebookTaskStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notebookSchedulePreviewUrl_ == nullptr
        && return this->progress_ == nullptr && return this->result_ == nullptr && return this->status_ == nullptr; };
    // notebookSchedulePreviewUrl Field Functions 
    bool hasNotebookSchedulePreviewUrl() const { return this->notebookSchedulePreviewUrl_ != nullptr;};
    void deleteNotebookSchedulePreviewUrl() { this->notebookSchedulePreviewUrl_ = nullptr;};
    inline string notebookSchedulePreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(notebookSchedulePreviewUrl_, "") };
    inline GetNotebookTaskStatusResponseBodyData& setNotebookSchedulePreviewUrl(string notebookSchedulePreviewUrl) { DARABONBA_PTR_SET_VALUE(notebookSchedulePreviewUrl_, notebookSchedulePreviewUrl) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline GetNotebookTaskStatusResponseBodyData& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetNotebookTaskStatusResponseBodyData& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetNotebookTaskStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> notebookSchedulePreviewUrl_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif

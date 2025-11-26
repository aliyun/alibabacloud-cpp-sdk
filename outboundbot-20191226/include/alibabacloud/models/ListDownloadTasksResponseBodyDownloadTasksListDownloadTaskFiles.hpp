// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNLOADTASKSRESPONSEBODYDOWNLOADTASKSLISTDOWNLOADTASKFILES_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNLOADTASKSRESPONSEBODYDOWNLOADTASKSLISTDOWNLOADTASKFILES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles() = default ;
    ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles(const ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles &) = default ;
    ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles(ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles &&) = default ;
    ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles() = default ;
    ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles& operator=(const ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles &) = default ;
    ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles& operator=(ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->progress_ == nullptr && return this->status_ == nullptr && return this->title_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<int32_t> progress_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

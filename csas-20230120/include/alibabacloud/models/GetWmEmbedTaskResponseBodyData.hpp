// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWMEMBEDTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWMEMBEDTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetWmEmbedTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWmEmbedTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(FileUrlExp, fileUrlExp_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(OutFileHashMd5, outFileHashMd5_);
      DARABONBA_PTR_TO_JSON(OutFileSize, outFileSize_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetWmEmbedTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(FileUrlExp, fileUrlExp_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(OutFileHashMd5, outFileHashMd5_);
      DARABONBA_PTR_FROM_JSON(OutFileSize, outFileSize_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetWmEmbedTaskResponseBodyData() = default ;
    GetWmEmbedTaskResponseBodyData(const GetWmEmbedTaskResponseBodyData &) = default ;
    GetWmEmbedTaskResponseBodyData(GetWmEmbedTaskResponseBodyData &&) = default ;
    GetWmEmbedTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWmEmbedTaskResponseBodyData() = default ;
    GetWmEmbedTaskResponseBodyData& operator=(const GetWmEmbedTaskResponseBodyData &) = default ;
    GetWmEmbedTaskResponseBodyData& operator=(GetWmEmbedTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileUrl_ != nullptr
        && this->fileUrlExp_ != nullptr && this->filename_ != nullptr && this->outFileHashMd5_ != nullptr && this->outFileSize_ != nullptr && this->taskId_ != nullptr
        && this->taskStatus_ != nullptr; };
    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline GetWmEmbedTaskResponseBodyData& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // fileUrlExp Field Functions 
    bool hasFileUrlExp() const { return this->fileUrlExp_ != nullptr;};
    void deleteFileUrlExp() { this->fileUrlExp_ = nullptr;};
    inline string fileUrlExp() const { DARABONBA_PTR_GET_DEFAULT(fileUrlExp_, "") };
    inline GetWmEmbedTaskResponseBodyData& setFileUrlExp(string fileUrlExp) { DARABONBA_PTR_SET_VALUE(fileUrlExp_, fileUrlExp) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline GetWmEmbedTaskResponseBodyData& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // outFileHashMd5 Field Functions 
    bool hasOutFileHashMd5() const { return this->outFileHashMd5_ != nullptr;};
    void deleteOutFileHashMd5() { this->outFileHashMd5_ = nullptr;};
    inline string outFileHashMd5() const { DARABONBA_PTR_GET_DEFAULT(outFileHashMd5_, "") };
    inline GetWmEmbedTaskResponseBodyData& setOutFileHashMd5(string outFileHashMd5) { DARABONBA_PTR_SET_VALUE(outFileHashMd5_, outFileHashMd5) };


    // outFileSize Field Functions 
    bool hasOutFileSize() const { return this->outFileSize_ != nullptr;};
    void deleteOutFileSize() { this->outFileSize_ = nullptr;};
    inline int64_t outFileSize() const { DARABONBA_PTR_GET_DEFAULT(outFileSize_, 0L) };
    inline GetWmEmbedTaskResponseBodyData& setOutFileSize(int64_t outFileSize) { DARABONBA_PTR_SET_VALUE(outFileSize_, outFileSize) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetWmEmbedTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetWmEmbedTaskResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> fileUrlExp_ = nullptr;
    std::shared_ptr<string> filename_ = nullptr;
    std::shared_ptr<string> outFileHashMd5_ = nullptr;
    std::shared_ptr<int64_t> outFileSize_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

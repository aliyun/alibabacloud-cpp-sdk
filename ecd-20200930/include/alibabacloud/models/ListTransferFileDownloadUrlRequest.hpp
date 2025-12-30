// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSFERFILEDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSFERFILEDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListTransferFileDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransferFileDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransferFileDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListTransferFileDownloadUrlRequest() = default ;
    ListTransferFileDownloadUrlRequest(const ListTransferFileDownloadUrlRequest &) = default ;
    ListTransferFileDownloadUrlRequest(ListTransferFileDownloadUrlRequest &&) = default ;
    ListTransferFileDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransferFileDownloadUrlRequest() = default ;
    ListTransferFileDownloadUrlRequest& operator=(const ListTransferFileDownloadUrlRequest &) = default ;
    ListTransferFileDownloadUrlRequest& operator=(ListTransferFileDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileIds_ == nullptr
        && this->taskId_ == nullptr; };
    // fileIds Field Functions 
    bool hasFileIds() const { return this->fileIds_ != nullptr;};
    void deleteFileIds() { this->fileIds_ = nullptr;};
    inline const vector<string> & getFileIds() const { DARABONBA_PTR_GET_CONST(fileIds_, vector<string>) };
    inline vector<string> getFileIds() { DARABONBA_PTR_GET(fileIds_, vector<string>) };
    inline ListTransferFileDownloadUrlRequest& setFileIds(const vector<string> & fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };
    inline ListTransferFileDownloadUrlRequest& setFileIds(vector<string> && fileIds) { DARABONBA_PTR_SET_RVALUE(fileIds_, fileIds) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListTransferFileDownloadUrlRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<vector<string>> fileIds_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERTASKAPPROVALCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERTASKAPPROVALCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class TransferTaskApprovalCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferTaskApprovalCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssBucketRegionId, ossBucketRegionId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferTaskApprovalCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssBucketRegionId, ossBucketRegionId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    TransferTaskApprovalCallbackRequest() = default ;
    TransferTaskApprovalCallbackRequest(const TransferTaskApprovalCallbackRequest &) = default ;
    TransferTaskApprovalCallbackRequest(TransferTaskApprovalCallbackRequest &&) = default ;
    TransferTaskApprovalCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferTaskApprovalCallbackRequest() = default ;
    TransferTaskApprovalCallbackRequest& operator=(const TransferTaskApprovalCallbackRequest &) = default ;
    TransferTaskApprovalCallbackRequest& operator=(TransferTaskApprovalCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossBucketName_ == nullptr
        && this->ossBucketRegionId_ == nullptr && this->result_ == nullptr && this->taskId_ == nullptr; };
    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline TransferTaskApprovalCallbackRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossBucketRegionId Field Functions 
    bool hasOssBucketRegionId() const { return this->ossBucketRegionId_ != nullptr;};
    void deleteOssBucketRegionId() { this->ossBucketRegionId_ = nullptr;};
    inline string getOssBucketRegionId() const { DARABONBA_PTR_GET_DEFAULT(ossBucketRegionId_, "") };
    inline TransferTaskApprovalCallbackRequest& setOssBucketRegionId(string ossBucketRegionId) { DARABONBA_PTR_SET_VALUE(ossBucketRegionId_, ossBucketRegionId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline TransferTaskApprovalCallbackRequest& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline TransferTaskApprovalCallbackRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The name of the OSS bucket where the file resides.
    shared_ptr<string> ossBucketName_ {};
    // The region where the OSS bucket storing the file resides.
    shared_ptr<string> ossBucketRegionId_ {};
    // The approval result.
    // 
    // Valid values:
    // 
    // *   Approved
    // *   Rejected
    shared_ptr<string> result_ {};
    // The ID of the transmission task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

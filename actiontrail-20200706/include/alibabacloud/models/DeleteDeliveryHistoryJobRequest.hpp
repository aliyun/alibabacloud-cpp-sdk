// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDELIVERYHISTORYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDELIVERYHISTORYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DeleteDeliveryHistoryJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDeliveryHistoryJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDeliveryHistoryJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    DeleteDeliveryHistoryJobRequest() = default ;
    DeleteDeliveryHistoryJobRequest(const DeleteDeliveryHistoryJobRequest &) = default ;
    DeleteDeliveryHistoryJobRequest(DeleteDeliveryHistoryJobRequest &&) = default ;
    DeleteDeliveryHistoryJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDeliveryHistoryJobRequest() = default ;
    DeleteDeliveryHistoryJobRequest& operator=(const DeleteDeliveryHistoryJobRequest &) = default ;
    DeleteDeliveryHistoryJobRequest& operator=(DeleteDeliveryHistoryJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int32_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0) };
    inline DeleteDeliveryHistoryJobRequest& setJobId(int32_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The ID of the historical event delivery task to be deleted.
    // 
    // You can call the [ListDeliveryHistoryJobs](https://help.aliyun.com/document_detail/188101.html) operation to query task IDs.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif

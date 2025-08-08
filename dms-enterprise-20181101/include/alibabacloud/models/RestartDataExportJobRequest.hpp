// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTDATAEXPORTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTDATAEXPORTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class RestartDataExportJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartDataExportJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, RestartDataExportJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    RestartDataExportJobRequest() = default ;
    RestartDataExportJobRequest(const RestartDataExportJobRequest &) = default ;
    RestartDataExportJobRequest(RestartDataExportJobRequest &&) = default ;
    RestartDataExportJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartDataExportJobRequest() = default ;
    RestartDataExportJobRequest& operator=(const RestartDataExportJobRequest &) = default ;
    RestartDataExportJobRequest& operator=(RestartDataExportJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->orderId_ != nullptr && this->tid_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline RestartDataExportJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline RestartDataExportJobRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline RestartDataExportJobRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

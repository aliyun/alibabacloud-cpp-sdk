// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDELIVERYHISTORYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDELIVERYHISTORYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetDeliveryHistoryJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeliveryHistoryJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeliveryHistoryJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetDeliveryHistoryJobRequest() = default ;
    GetDeliveryHistoryJobRequest(const GetDeliveryHistoryJobRequest &) = default ;
    GetDeliveryHistoryJobRequest(GetDeliveryHistoryJobRequest &&) = default ;
    GetDeliveryHistoryJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeliveryHistoryJobRequest() = default ;
    GetDeliveryHistoryJobRequest& operator=(const GetDeliveryHistoryJobRequest &) = default ;
    GetDeliveryHistoryJobRequest& operator=(GetDeliveryHistoryJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline GetDeliveryHistoryJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The ID of the historical event delivery task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYHISTORYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYHISTORYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class CreateDeliveryHistoryJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryHistoryJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryHistoryJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDeliveryHistoryJobResponseBody() = default ;
    CreateDeliveryHistoryJobResponseBody(const CreateDeliveryHistoryJobResponseBody &) = default ;
    CreateDeliveryHistoryJobResponseBody(CreateDeliveryHistoryJobResponseBody &&) = default ;
    CreateDeliveryHistoryJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryHistoryJobResponseBody() = default ;
    CreateDeliveryHistoryJobResponseBody& operator=(const CreateDeliveryHistoryJobResponseBody &) = default ;
    CreateDeliveryHistoryJobResponseBody& operator=(CreateDeliveryHistoryJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->requestId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int32_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0) };
    inline CreateDeliveryHistoryJobResponseBody& setJobId(int32_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDeliveryHistoryJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the historical event delivery task.
    std::shared_ptr<int32_t> jobId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif

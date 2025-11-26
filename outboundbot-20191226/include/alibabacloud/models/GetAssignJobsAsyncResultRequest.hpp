// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSIGNJOBSASYNCRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASSIGNJOBSASYNCRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAssignJobsAsyncResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssignJobsAsyncResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssignJobsAsyncResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
    };
    GetAssignJobsAsyncResultRequest() = default ;
    GetAssignJobsAsyncResultRequest(const GetAssignJobsAsyncResultRequest &) = default ;
    GetAssignJobsAsyncResultRequest(GetAssignJobsAsyncResultRequest &&) = default ;
    GetAssignJobsAsyncResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssignJobsAsyncResultRequest() = default ;
    GetAssignJobsAsyncResultRequest& operator=(const GetAssignJobsAsyncResultRequest &) = default ;
    GetAssignJobsAsyncResultRequest& operator=(GetAssignJobsAsyncResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTaskId_ == nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline GetAssignJobsAsyncResultRequest& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> asyncTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

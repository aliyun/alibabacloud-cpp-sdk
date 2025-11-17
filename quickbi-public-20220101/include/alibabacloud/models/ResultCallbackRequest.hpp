// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESULTCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESULTCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ResultCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResultCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(HandleReason, handleReason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ResultCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(HandleReason, handleReason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ResultCallbackRequest() = default ;
    ResultCallbackRequest(const ResultCallbackRequest &) = default ;
    ResultCallbackRequest(ResultCallbackRequest &&) = default ;
    ResultCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResultCallbackRequest() = default ;
    ResultCallbackRequest& operator=(const ResultCallbackRequest &) = default ;
    ResultCallbackRequest& operator=(ResultCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->handleReason_ == nullptr && return this->status_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ResultCallbackRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // handleReason Field Functions 
    bool hasHandleReason() const { return this->handleReason_ != nullptr;};
    void deleteHandleReason() { this->handleReason_ = nullptr;};
    inline string handleReason() const { DARABONBA_PTR_GET_DEFAULT(handleReason_, "") };
    inline ResultCallbackRequest& setHandleReason(string handleReason) { DARABONBA_PTR_SET_VALUE(handleReason_, handleReason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ResultCallbackRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the approval process.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The reason for the approval.
    // 
    // This parameter is required.
    std::shared_ptr<string> handleReason_ = nullptr;
    // Approval result:
    // 
    // *   1: passed
    // *   2: rejected
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

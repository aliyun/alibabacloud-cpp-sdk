// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTUPDATEJOBSTATUS_HPP_
#define ALIBABACLOUD_MODELS_HOTUPDATEJOBSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotUpdateJobFailureInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class HotUpdateJobStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotUpdateJobStatus& obj) { 
      DARABONBA_PTR_TO_JSON(failure, failure_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, HotUpdateJobStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(failure, failure_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    HotUpdateJobStatus() = default ;
    HotUpdateJobStatus(const HotUpdateJobStatus &) = default ;
    HotUpdateJobStatus(HotUpdateJobStatus &&) = default ;
    HotUpdateJobStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotUpdateJobStatus() = default ;
    HotUpdateJobStatus& operator=(const HotUpdateJobStatus &) = default ;
    HotUpdateJobStatus& operator=(HotUpdateJobStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failure_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // failure Field Functions 
    bool hasFailure() const { return this->failure_ != nullptr;};
    void deleteFailure() { this->failure_ = nullptr;};
    inline const HotUpdateJobFailureInfo & failure() const { DARABONBA_PTR_GET_CONST(failure_, HotUpdateJobFailureInfo) };
    inline HotUpdateJobFailureInfo failure() { DARABONBA_PTR_GET(failure_, HotUpdateJobFailureInfo) };
    inline HotUpdateJobStatus& setFailure(const HotUpdateJobFailureInfo & failure) { DARABONBA_PTR_SET_VALUE(failure_, failure) };
    inline HotUpdateJobStatus& setFailure(HotUpdateJobFailureInfo && failure) { DARABONBA_PTR_SET_RVALUE(failure_, failure) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotUpdateJobStatus& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline HotUpdateJobStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<HotUpdateJobFailureInfo> failure_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
